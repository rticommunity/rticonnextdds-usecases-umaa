"""CommandProviderSession — one command's lifecycle through the ICD state machine.

Each ``CommandProviderSession`` is created by ``CommandProvider`` when a new
command arrives. It drives the state machine via an inline while-loop with
if/elif dispatch. ``_transition_to()`` validates every state change.

External actors (cancel, fail, update) communicate via methods that set
terminal state or pending-update flag; the run loop checks at natural
checkpoints.
"""

from __future__ import annotations

import asyncio
import logging
from typing import TYPE_CHECKING, Optional, Set, Dict

import rti.connextdds as dds

from rtiumaapy.errors import CommandHookError

if TYPE_CHECKING:
    from rtiumaapy.command_provider import CommandProvider

_logger = logging.getLogger(__name__)

# ── Import IDL enums via the generated module system ──────────────────────
# The actual enum types are loaded by the generated datamodel files.
# We import them from the flat-name aliases for brevity.
from rtiumaapy.datamodel.MaritimeEnumerationSets import (
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule_CommandStatusEnumType
    as CommandStatusEnum,
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule_CommandStatusReasonEnumType
    as CommandReasonEnum,
)

# ── Transition table ──────────────────────────────────────────────────────

_VALID_TRANSITIONS: Dict[Optional[int], Set[int]] = {
    None: {
        CommandStatusEnum.ISSUED,
        CommandStatusEnum.FAILED,
        CommandStatusEnum.CANCELED,
    },
    CommandStatusEnum.ISSUED: {
        CommandStatusEnum.COMMANDED,
        CommandStatusEnum.FAILED,
        CommandStatusEnum.CANCELED,
    },
    CommandStatusEnum.COMMANDED: {
        CommandStatusEnum.EXECUTING,
        CommandStatusEnum.FAILED,
        CommandStatusEnum.CANCELED,
    },
    CommandStatusEnum.EXECUTING: {
        CommandStatusEnum.COMPLETED,
        CommandStatusEnum.FAILED,
        CommandStatusEnum.CANCELED,
        CommandStatusEnum.ISSUED,  # update re-entry
    },
}

_TERMINAL_STATES: Set[int] = {
    CommandStatusEnum.COMPLETED,
    CommandStatusEnum.FAILED,
    CommandStatusEnum.CANCELED,
}

# Per-state failure reason validation (D51)
_VALID_FAIL_REASONS: Dict[Optional[int], Set[int]] = {
    None: {
        CommandReasonEnum.SERVICE_FAILED,
    },
    CommandStatusEnum.ISSUED: {
        CommandReasonEnum.SERVICE_FAILED,
        CommandReasonEnum.INTERRUPTED,
        CommandReasonEnum.TIMEOUT,
        CommandReasonEnum.RESOURCE_FAILED,
        CommandReasonEnum.VALIDATION_FAILED,
    },
    CommandStatusEnum.COMMANDED: {
        CommandReasonEnum.SERVICE_FAILED,
        CommandReasonEnum.INTERRUPTED,
        CommandReasonEnum.TIMEOUT,
        CommandReasonEnum.RESOURCE_REJECTED,
    },
    CommandStatusEnum.EXECUTING: {
        CommandReasonEnum.SERVICE_FAILED,
        CommandReasonEnum.INTERRUPTED,
        CommandReasonEnum.TIMEOUT,
        CommandReasonEnum.RESOURCE_FAILED,
        CommandReasonEnum.OBJECTIVE_FAILED,
    },
}


class CommandProviderSession:
    """Manages one command's lifecycle through the ICD state machine.

    Created by :class:`CommandProvider` for each incoming command.
    ``run()`` walks through states with if/elif dispatch.
    ``_transition_to()`` validates every transition.

    ``cancel()``/``fail()`` set the terminal state and publish before
    cancelling the task. ``set_new_command()`` stores the pending update.
    """

    def __init__(self, provider: CommandProvider, command) -> None:
        self._provider = provider
        self._command = command
        self._session_id: str = str(command.sessionID)
        self._current_state: Optional[int] = None
        self._current_reason: Optional[int] = None
        self._task: Optional[asyncio.Task] = None
        self._new_command = None  # pending update

    # ── Properties ────────────────────────────────────────────────────────

    @property
    def command(self):
        """The current command sample."""
        return self._command

    @property
    def session_id(self) -> str:
        """The session ID string."""
        return self._session_id

    @property
    def current_state(self) -> Optional[int]:
        """The current state machine state."""
        return self._current_state

    # ── External methods (called from provider/outside the task) ──────────

    async def cancel(self) -> None:
        """Consumer disposed command → CANCELED.

        Sets terminal state, publishes, then cancels the task.
        """
        if self._task is not None and not self._task.done() \
                and self._current_state not in _TERMINAL_STATES:
            self._transition_to(CommandStatusEnum.CANCELED,
                                reason=CommandReasonEnum.CANCELED)
            self._publish_status()
            self._task.cancel()

    async def fail(self) -> None:
        """Provider shutdown → FAILED(SERVICE_FAILED).

        Sets terminal state, publishes, then cancels the task.
        """
        if self._task is not None and not self._task.done() \
                and self._current_state not in _TERMINAL_STATES:
            self._transition_to(CommandStatusEnum.FAILED,
                                reason=CommandReasonEnum.SERVICE_FAILED)
            self._publish_status()
            self._task.cancel()

    def set_new_command(self, new_command) -> None:
        """Store a pending command update.

        Does NOT cancel the task. The run loop checks ``_new_command``
        at the natural checkpoint after ``on_executing()`` returns.
        """
        self._new_command = new_command

    # ── State transition ──────────────────────────────────────────────────

    def _transition_to(self, state: int,
                       reason: Optional[int] = None) -> None:
        """Validate and advance the state machine.

        If the transition is illegal, forces FAILED and raises
        ``RuntimeError``. When transitioning to FAILED, validates
        the reason against ``_VALID_FAIL_REASONS`` (D51). Invalid
        reasons are coerced to ``SERVICE_FAILED`` with a warning.
        """
        allowed = _VALID_TRANSITIONS.get(self._current_state, set())
        if state not in allowed:
            previous = self._current_state
            _logger.error(
                "Session %s: illegal transition %s → %s, forcing FAILED",
                self._session_id, previous, state)
            self._current_state = CommandStatusEnum.FAILED
            self._current_reason = CommandReasonEnum.SERVICE_FAILED
            raise RuntimeError(
                f"Session {self._session_id}: illegal transition "
                f"{previous} → {state}")

        if state == CommandStatusEnum.FAILED and reason is not None:
            valid = _VALID_FAIL_REASONS.get(self._current_state, set())
            if reason not in valid:
                _logger.warning(
                    "Session %s: reason %s not valid from state %s; "
                    "falling back to SERVICE_FAILED",
                    self._session_id, reason, self._current_state)
                reason = CommandReasonEnum.SERVICE_FAILED

        self._current_state = state
        self._current_reason = reason

    # ── DDS publish ───────────────────────────────────────────────────────

    def _publish_status(self) -> None:
        """Publish ``_current_state`` and ``_current_reason`` to DDS."""
        try:
            from rtiumaapy.timestamp import UmaaTimestamp
            status = self._provider._status_type()
            status.source = self._provider._source_id
            status.sessionID = self._command.sessionID
            UmaaTimestamp.set_timestamp(status)
            status.commandStatus = self._current_state
            if self._current_reason is not None:
                status.commandStatusReason = self._current_reason
            self._provider._status_writer.write(status)
        except Exception:
            _logger.warning(
                "Session %s: failed to publish %s status",
                self._session_id, self._current_state, exc_info=True)

    async def _apply_update(self) -> None:
        """Swap to the new command and re-enter from ISSUED(UPDATED)."""
        previous = self._command
        self._command = self._new_command
        self._new_command = None
        self._transition_to(CommandStatusEnum.ISSUED,
                            reason=CommandReasonEnum.UPDATED)
        self._publish_status()
        await self._provider.on_updated(self, previous, self._command)

    # ── Instance disposal ─────────────────────────────────────────────────

    def _dispose_provider_instances(self) -> None:
        """Dispose provider-side DDS instances (ack + status + exec_status)."""
        session_guid = self._command.sessionID

        # Ack
        try:
            ack_key = self._provider._ack_type()
            ack_key.source = self._provider._source_id
            ack_key.sessionID = session_guid
            ih = self._provider._ack_writer.lookup_instance(ack_key)
            if ih != dds.InstanceHandle.nil():
                self._provider._ack_writer.dispose_instance(ih)
        except Exception:
            _logger.debug("Session %s: ack dispose failed", self._session_id)

        # Status
        try:
            status_key = self._provider._status_type()
            status_key.source = self._provider._source_id
            status_key.sessionID = session_guid
            ih = self._provider._status_writer.lookup_instance(status_key)
            if ih != dds.InstanceHandle.nil():
                self._provider._status_writer.dispose_instance(ih)
        except Exception:
            _logger.debug("Session %s: status dispose failed",
                          self._session_id)

        # Exec status (optional)
        if self._provider._exec_status_writer is not None:
            try:
                exec_key = self._provider._exec_status_type()
                exec_key.source = self._provider._source_id
                exec_key.sessionID = session_guid
                ih = self._provider._exec_status_writer.lookup_instance(
                    exec_key)
                if ih != dds.InstanceHandle.nil():
                    self._provider._exec_status_writer.dispose_instance(ih)
            except Exception:
                _logger.debug("Session %s: exec_status dispose failed",
                              self._session_id)

    # ── Main loop ─────────────────────────────────────────────────────────

    async def run(self) -> None:
        """Drive the ICD state machine via inline while-loop dispatch."""
        try:
            while self._current_state not in _TERMINAL_STATES:

                if self._current_state == CommandStatusEnum.ISSUED:
                    # Validation (D42 — after ISSUED + Ack)
                    accepted, reason_msg = \
                        await self._provider.validate_command(self._command)
                    if not accepted:
                        raise CommandHookError(
                            CommandReasonEnum.VALIDATION_FAILED, reason_msg)
                    self._transition_to(CommandStatusEnum.COMMANDED,
                                        reason=CommandReasonEnum.SUCCEEDED)
                    self._publish_status()
                    await self._provider.on_commanded(self)

                elif self._current_state == CommandStatusEnum.COMMANDED:
                    self._transition_to(CommandStatusEnum.EXECUTING,
                                        reason=CommandReasonEnum.SUCCEEDED)
                    self._publish_status()

                elif self._current_state == CommandStatusEnum.EXECUTING:
                    await self._provider.on_executing(self)

                    # Check for pending update at natural checkpoint
                    if self._new_command is not None:
                        await self._apply_update()
                    else:
                        self._transition_to(CommandStatusEnum.COMPLETED,
                                            reason=CommandReasonEnum.SUCCEEDED)
                        self._publish_status()
                        await self._provider.on_complete(self)

        except asyncio.CancelledError:
            # Terminal state already set and published by cancel()/fail().
            _logger.debug(
                "Session %s: task cancelled in state %s",
                self._session_id, self._current_state)

        except CommandHookError as e:
            if self._current_state not in _TERMINAL_STATES:
                self._transition_to(CommandStatusEnum.FAILED,
                                    reason=e.reason_enum)
                self._publish_status()
                await self._provider.on_failed(self, e)

        except Exception as e:
            if self._current_state not in _TERMINAL_STATES:
                self._transition_to(CommandStatusEnum.FAILED,
                                    reason=CommandReasonEnum.SERVICE_FAILED)
                self._publish_status()
                await self._provider.on_failed(self, e)

        finally:
            await self._provider.on_terminal(self)
            self._dispose_provider_instances()
            self._provider._active_sessions.pop(self._session_id, None)
