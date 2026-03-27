"""CommandProvider — server-side command interaction (Tier 0).

A ``CommandProvider`` receives commands addressed to it via a content-filtered
reader, manages ``CommandProviderSession`` instances for each active command,
and owns all ack/status/exec_status writers. Subclasses override async hooks
to implement domain-specific behavior.
"""

from __future__ import annotations

import asyncio
import logging
from typing import Dict, Optional, Tuple, Type

import rti.connextdds as dds
import rti.asyncio  # noqa: F401 — enables take_async

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.timestamp import UmaaTimestamp
from rtiumaapy.validation import validate_message
from rtiumaapy.command_provider_session import (
    CommandProviderSession,
    CommandStatusEnum,
    CommandReasonEnum,
    _TERMINAL_STATES,
)

_logger = logging.getLogger(__name__)


class CommandProvider(BaseService):
    """Subclass and override hooks to implement command behavior.

    Base class owns ALL status publishing — subclasses never publish
    status directly.

    Args:
        ctx: The :class:`DDSContext` owning shared DDS infrastructure.
        service_name: Unique name for this service instance.
        command_type: IDL-generated command struct type.
        ack_type: IDL-generated ack report struct type.
        status_type: IDL-generated command status struct type.
        exec_status_type: Optional execution status struct type.
        command_topic: DDS topic name for commands.
        ack_topic: DDS topic name for ack.
        status_topic: DDS topic name for status.
        exec_status_topic: Optional DDS topic name for exec status.
        source_id: This provider's ``IdentifierType`` identity.
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        *,
        command_type: Type,
        ack_type: Type,
        status_type: Type,
        command_topic: str,
        ack_topic: str,
        status_topic: str,
        exec_status_type: Type = None,
        exec_status_topic: str = None,
        source_id,
    ) -> None:
        super().__init__(ctx, service_name)

        self._command_type = command_type
        self._ack_type = ack_type
        self._status_type = status_type
        self._exec_status_type = exec_status_type
        self._source_id = source_id

        # Filtered reader for commands addressed to this provider.
        filter_expr = (
            f"destination.parentID = &hex({GUIDUtil.to_hex(source_id.parentID.value)})"
            f" AND destination.id = &hex({GUIDUtil.to_hex(source_id.id.value)})"
        )
        self._command_reader, self._command_cft = ctx.create_filtered_reader(
            command_type, command_topic, filter_expr,
        )
        self._ack_writer = ctx.create_writer(ack_type, ack_topic)
        self._status_writer = ctx.create_writer(status_type, status_topic)

        self._exec_status_writer = None
        if exec_status_type is not None and exec_status_topic is not None:
            self._exec_status_writer = ctx.create_writer(
                exec_status_type, exec_status_topic)

        self._active_sessions: Dict[str, CommandProviderSession] = {}
        self._task: Optional[asyncio.Task] = None

    # ── Hooks (override in subclass) ──────────────────────────────────────

    async def validate_command(self, command) -> Tuple[bool, str]:
        """Validate a command after ISSUED status and ack are published.

        Default implementation checks all fields against UMAA IDL
        constraints (range, enum, nested struct).  Override for
        additional domain-specific logic.

        Return ``(True, "")`` to accept, ``(False, reason_string)`` to reject.
        """
        valid, errors = validate_message(command)
        if not valid:
            return False, "; ".join(errors)
        return True, ""

    async def on_updated(
        self,
        session: CommandProviderSession,
        previous_command,
        updated_command,
    ) -> None:
        """Called when a command update arrives for an active session."""

    async def on_commanded(self, session: CommandProviderSession) -> None:
        """Called after COMMANDED status published, before EXECUTING."""

    async def on_executing(self, session: CommandProviderSession) -> None:
        """Called after EXECUTING status published. Do the actual work here.

        Raise ``CommandHookError`` for domain-specific failures.
        """
        raise NotImplementedError("Subclass must implement on_executing()")

    async def on_complete(self, session: CommandProviderSession) -> None:
        """Called after COMPLETED status published."""

    async def on_failed(
        self, session: CommandProviderSession, exception: Exception
    ) -> None:
        """Called after FAILED status published."""

    async def on_terminal(self, session: CommandProviderSession) -> None:
        """Always called (finally block), regardless of outcome."""

    # ── Event loop ────────────────────────────────────────────────────────

    def start(self) -> None:
        """Start the command processing loop."""
        if self._task is None or self._task.done():
            self._task = asyncio.ensure_future(self._run())

    async def _run(self) -> None:
        """Main event loop — receives commands and dispatches to sessions."""
        try:
            async for sample in self._command_reader.take_async():
                if sample.info.valid:
                    await self._handle_valid_sample(sample.data)
                else:
                    await self._handle_metadata_sample(sample.info)
        except asyncio.CancelledError:
            pass
        except Exception:
            _logger.exception("Provider %s command reader failed",
                              self.service_name)
            raise

    async def _handle_valid_sample(self, command) -> None:
        """Route a valid command sample to session or rejection."""
        session_id = str(command.sessionID)

        # Ack every valid command immediately
        self._publish_ack(command)

        if session_id in self._active_sessions:
            existing = self._active_sessions[session_id]
            if command.timeStamp.seconds > existing.command.timeStamp.seconds or \
               (command.timeStamp.seconds == existing.command.timeStamp.seconds and
                command.timeStamp.nanoseconds > existing.command.timeStamp.nanoseconds):
                existing.set_new_command(command)
            # else: same or older timestamp → ignore
            return

        if self._active_sessions:
            # D3: Different sessionID while active → reject
            await self._reject_active(command)
            return

        # New session — publish ISSUED status synchronously with the ack
        # so that external observers (e.g. USTM) see the command and its first
        # status in the correct order, matching C++ provider behavior.
        session = CommandProviderSession(provider=self, command=command)
        self._active_sessions[session_id] = session
        session._transition_to(CommandStatusEnum.ISSUED,
                               reason=CommandReasonEnum.SUCCEEDED)
        session._publish_status()
        session._task = asyncio.create_task(session.run())

    async def _handle_metadata_sample(self, info: dds.SampleInfo) -> None:
        """Handle dispose / no-writers metadata."""
        instance_state = info.state.instance_state

        if instance_state in (dds.InstanceState.NOT_ALIVE_DISPOSED,
                              dds.InstanceState.NOT_ALIVE_NO_WRITERS):
            try:
                key_data = self._command_reader.key_value(
                    info.instance_handle)
                session_id = str(key_data.sessionID)
                if session_id in self._active_sessions:
                    await self._active_sessions[session_id].cancel()
            except Exception:
                _logger.debug(
                    "Provider %s: key_value recovery failed for disposed",
                    self.service_name, exc_info=True)

    def _publish_ack(self, command) -> None:
        """Publish ack echoing the command back."""
        try:
            ack = self._ack_type()
            ack.command = command
            ack.source = self._source_id
            ack.sessionID = command.sessionID
            UmaaTimestamp.set_timestamp(ack)
            self._ack_writer.write(ack)
        except Exception:
            _logger.warning("Provider %s: ack publish failed",
                            self.service_name, exc_info=True)

    async def _reject_active(self, command) -> None:
        """Reject a command via ephemeral session (D3).

        ISSUED → COMMANDED → FAILED(RESOURCE_REJECTED).
        """
        temp = CommandProviderSession(self, command)
        try:
            temp._transition_to(CommandStatusEnum.ISSUED,
                               reason=CommandReasonEnum.SUCCEEDED)
            temp._publish_status()
            temp._transition_to(CommandStatusEnum.COMMANDED,
                               reason=CommandReasonEnum.SUCCEEDED)
            temp._publish_status()
            temp._transition_to(
                CommandStatusEnum.FAILED,
                reason=CommandReasonEnum.RESOURCE_REJECTED)
            temp._publish_status()
        except Exception:
            _logger.warning("Provider %s: rejection sequence failed",
                            self.service_name, exc_info=True)
        finally:
            temp._dispose_provider_instances()

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """Fail active sessions, cancel _run. Entity cleanup is deferred to DDSContext."""
        # Cancel the _run loop first
        if self._task is not None and not self._task.done():
            self._task.cancel()
            try:
                await self._task
            except asyncio.CancelledError:
                pass

        # Fail all active sessions
        tasks = []
        for session in list(self._active_sessions.values()):
            await session.fail()
            if session._task is not None:
                tasks.append(session._task)

        if tasks:
            await asyncio.gather(*tasks, return_exceptions=True)
