"""CommandConsumer — client-side command interaction (Tier 0).

A ``CommandConsumer`` sends commands, receives ack/status/exec_status via
content-filtered readers, and delivers updates via subclass-override hooks.
One active session at a time.
"""

from __future__ import annotations

import asyncio
import logging
from typing import Optional, Type

import rti.connextdds as dds
import rti.asyncio  # noqa: F401 — enables take_async

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.timestamp import UmaaTimestamp
from rtiumaapy.validation import validate_message
from rtiumaapy.command_provider_session import CommandStatusEnum

_logger = logging.getLogger(__name__)

_TERMINAL_STATUSES = {
    CommandStatusEnum.COMPLETED,
    CommandStatusEnum.FAILED,
    CommandStatusEnum.CANCELED,
}


class CommandConsumer(BaseService):
    """Subclass and override hooks to react to command lifecycle events.

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
        source_id: This consumer's ``IdentifierType`` identity.
        destination_id: Target provider's ``IdentifierType`` identity.
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
        source_id=None,
        destination_id=None,
    ) -> None:
        super().__init__(ctx, service_name)

        self._command_type = command_type
        self._source_id = source_id
        self._destination_id = destination_id

        self._command_writer = ctx.create_writer(command_type, command_topic)

        # Readers start with blocking filter ("1 = 0")
        self._ack_reader, self._ack_cft = ctx.create_filtered_reader(
            ack_type, ack_topic, "1 = 0")
        self._status_reader, self._status_cft = ctx.create_filtered_reader(
            status_type, status_topic, "1 = 0")

        self._exec_status_reader = None
        self._exec_status_cft = None
        if exec_status_type is not None and exec_status_topic is not None:
            self._exec_status_reader, self._exec_status_cft = \
                ctx.create_filtered_reader(
                    exec_status_type, exec_status_topic, "1 = 0")

        # Active session state
        self._session_id: Optional[bytes] = None
        self._session_command = None
        self._task: Optional[asyncio.Task] = None

    # ── Hooks (override in subclass) ──────────────────────────────────────

    async def on_status(self, session_id: bytes, status) -> None:
        """Called for every status update from the provider.

        Do not call ``cancel()`` from this hook — terminal statuses are
        detected automatically and trigger ``_end_session()`` after this
        hook returns.
        """

    async def on_ack(self, session_id: bytes, ack) -> None:
        """Called when the provider echoes the command acknowledgment."""

    async def on_exec_status(self, session_id: bytes, exec_status) -> None:
        """Called when the provider publishes execution progress."""

    async def on_terminal(self, session_id: bytes, status) -> None:
        """Called after the session closes.

        Args:
            session_id: The session that ended.
            status: Terminal status sample, or None for cancel/crash/shutdown.
        """

    # ── Send / Cancel ─────────────────────────────────────────────────────

    async def send(self, command, session_id: bytes = None) -> bytes:
        """Send a command or update. Returns the session_id handle.

        If ``session_id`` is None, starts a new session. If provided,
        sends an update to the existing session (D39).

        All header fields are auto-stamped (D47).

        Raises:
            RuntimeError: If starting a new session while one is active.
            RuntimeError: If session_id doesn't match the active session.
        """
        if session_id is None:
            # New session
            if self._session_id is not None:
                raise RuntimeError("Consumer already has an active session")

            from rtiumaapy.datamodel.Measurements import \
                UMAA_Common_Measurement_NumericGUID as NumericGUID
            session_id_bytes = GUIDUtil.generate()
            session_id_guid = NumericGUID(
                value=dds.Uint8Seq(session_id_bytes))

            command.source = self._source_id
            command.destination = self._destination_id
            command.sessionID = session_id_guid
            UmaaTimestamp.set_timestamp(command)

            self._session_id = session_id_bytes
            self._session_command = command

            self._set_session_filter(session_id_bytes)
            await asyncio.sleep(0.01)  # let CFT filter propagate (C78)
            self._command_writer.write(command)
            return session_id_bytes
        else:
            # Update existing session
            if self._session_id is None or session_id != self._session_id:
                raise RuntimeError("No active session with that session_id")

            command.source = self._source_id
            command.destination = self._destination_id
            command.sessionID = self._session_command.sessionID
            UmaaTimestamp.set_timestamp(command)
            self._session_command = command

            self._command_writer.write(command)
            return session_id

    async def cancel(self) -> None:
        """Cancel the active session — dispose command and clean up (D50)."""
        if self._session_id is None:
            return
        await self._end_session(None)

    # ── Event loop ────────────────────────────────────────────────────────

    def start(self) -> None:
        """Start the reader dispatch loops."""
        if self._task is None or self._task.done():
            self._task = asyncio.ensure_future(self._run())

    async def _run(self) -> None:
        """Multiplex all consumer readers via gather."""
        tasks = [
            self._read_status_loop(),
            self._read_ack_loop(),
        ]
        if self._exec_status_reader is not None:
            tasks.append(self._read_exec_status_loop())
        try:
            await asyncio.gather(*tasks)
        except asyncio.CancelledError:
            pass
        except Exception:
            _logger.exception("Consumer %s reader loop failed", self.service_name)
            raise

    async def _read_status_loop(self) -> None:
        """Status reader dispatch — on_status + terminal detection."""
        async for sample in self._status_reader.take_async():
            if sample.info.valid:
                if self._session_id is not None:
                    valid, errors = validate_message(sample.data)
                    if not valid:
                        _logger.warning(
                            "Consumer %s received invalid status: %s",
                            self.service_name,
                            "; ".join(errors),
                        )
                    session_id = self._session_id
                    await self.on_status(session_id, sample.data)
                    if sample.data.commandStatus in _TERMINAL_STATUSES:
                        await self._end_session(sample.data)
            else:
                instance_state = sample.info.state.instance_state
                if instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                    if self._session_id is not None:
                        await self._end_session(None)

    async def _read_ack_loop(self) -> None:
        """Ack reader dispatch — on_ack hook."""
        async for sample in self._ack_reader.take_async():
            if sample.info.valid:
                if self._session_id is not None:
                    valid, errors = validate_message(sample.data)
                    if not valid:
                        _logger.warning(
                            "Consumer %s received invalid ack: %s",
                            self.service_name,
                            "; ".join(errors),
                        )
                    await self.on_ack(self._session_id, sample.data)

    async def _read_exec_status_loop(self) -> None:
        """Exec status reader dispatch — on_exec_status hook."""
        async for sample in self._exec_status_reader.take_async():
            if sample.info.valid:
                if self._session_id is not None:
                    valid, errors = validate_message(sample.data)
                    if not valid:
                        _logger.warning(
                            "Consumer %s received invalid exec_status: %s",
                            self.service_name,
                            "; ".join(errors),
                        )
                    await self.on_exec_status(
                        self._session_id, sample.data)

    # ── Session lifecycle ─────────────────────────────────────────────────

    async def _end_session(self, status) -> None:
        """Sole session cleanup owner (C35).

        1. Dispose command instance
        2. Clear session state
        3. Reset CFT filters to ``"1=0"``
        4. Call ``on_terminal()``
        """
        if self._session_id is None:
            return  # already cleaned up (C66)
        self._dispose_command_instance()
        session_id = self._session_id
        self._session_id = None
        self._session_command = None
        self._reset_filters()
        await self.on_terminal(session_id, status)

    def _dispose_command_instance(self) -> None:
        """Dispose consumer's command instance (ICD §5.1.5)."""
        if self._session_command is not None:
            try:
                ih = self._command_writer.lookup_instance(
                    self._session_command)
                if ih != dds.InstanceHandle.nil():
                    self._command_writer.dispose_instance(ih)
            except Exception:
                _logger.debug("Consumer %s: command dispose failed",
                              self.service_name)

    def _set_session_filter(self, session_id: bytes) -> None:
        """Set CFTs to receive responses for this session."""
        expr = f"sessionID = &hex({GUIDUtil.to_hex(session_id)})"
        filt = dds.Filter(expr)
        self._ack_cft.set_filter(filt)
        self._status_cft.set_filter(filt)
        if self._exec_status_cft is not None:
            self._exec_status_cft.set_filter(filt)

    def _reset_filters(self) -> None:
        """Block all data — no active session."""
        filt = dds.Filter("1 = 0")
        self._ack_cft.set_filter(filt)
        self._status_cft.set_filter(filt)
        if self._exec_status_cft is not None:
            self._exec_status_cft.set_filter(filt)

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """End active session, cancel _run. Entity cleanup is deferred to DDSContext."""
        if self._session_id is not None:
            await self._end_session(None)

        if self._task is not None and not self._task.done():
            self._task.cancel()
            try:
                await self._task
            except asyncio.CancelledError:
                pass
