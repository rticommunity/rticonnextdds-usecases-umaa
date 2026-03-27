# Proposal: State-Machine Dispatch for CommandProviderSession

> Replaces the nested try/except CancelledError model (D46/D48) with a handler-dispatch
> state machine. Resolves C50 (CancelledError escape during exception handlers) and
> eliminates the `_updated` flag entirely.

---

## Motivation

The current D46/D48 design uses `task.cancel()` for three intents (cancel, fail, update)
routed through a single `CancelledError` handler with flag checking. This creates:

- **C50:** `CancelledError` during exception handlers escapes the inner try — terminal
  status for the interrupting intent is lost.
- **Flag proliferation:** `_updated`, `_failed`, `_previous_command` — parallel tracking
  alongside `_current_state`.
- **Complexity:** Nested try/except/except/except inside a while-loop with continue/break.

The C++ SDK uses a poll-loop with `cycle()` → `handleIncomingCommand()` → `cycleSession()`.
Each call to `cycle()` processes one poll: check for updates first, then advance the
state machine one step. `onExecuting()` runs to completion — updates are never delivered
mid-hook.

---

## Proposed Design

### Inline state-machine loop

```python
# Transition table — guards illegal transitions.
# Maps current_state → set of allowed next states.
_VALID_TRANSITIONS = {
    None:                          {CommandStatusEnum.ISSUED,
                                    CommandStatusEnum.FAILED,
                                    CommandStatusEnum.CANCELED},
    CommandStatusEnum.ISSUED:      {CommandStatusEnum.COMMANDED,
                                    CommandStatusEnum.FAILED,
                                    CommandStatusEnum.CANCELED},
    CommandStatusEnum.COMMANDED:   {CommandStatusEnum.EXECUTING,
                                    CommandStatusEnum.FAILED,
                                    CommandStatusEnum.CANCELED},
    CommandStatusEnum.EXECUTING:   {CommandStatusEnum.COMPLETED,
                                    CommandStatusEnum.FAILED,
                                    CommandStatusEnum.CANCELED,
                                    CommandStatusEnum.ISSUED},
    # ISSUED from EXECUTING = update re-entry (D48)
    # FAILED/CANCELED allowed from every non-terminal state (cancel/fail/error)
}

_TERMINAL_STATES = {
    CommandStatusEnum.COMPLETED,
    CommandStatusEnum.FAILED,
    CommandStatusEnum.CANCELED,
}

class CommandProviderSession:
    """Manages one command's lifecycle through the ICD state machine.

    Inline state-machine loop: run() walks through states with
    if/elif dispatch. _transition_to() validates every transition.

    cancel()/fail() set the terminal state and publish before
    cancelling the task. CancelledError is just a wakeup signal.
    set_new_command() stores the pending command — no task.cancel().
    The loop checks for pending updates at a natural checkpoint
    after on_executing() returns.

    Note: Command ack is NOT published by the session. The provider's
    read loop publishes an ack for every incoming command sample
    immediately upon receipt, before creating or routing to a session.
    """

    def __init__(self, provider, command):
        self._provider = provider
        self._command = command
        self._session_id = str(command.sessionID)
        self._current_state = None
        self._current_reason = None
        self._task: asyncio.Task = None

        self._new_command = None     # pending update — presence is the signal

    # --- External methods (called from outside the task) ---

    async def cancel(self):
        """Consumer disposed command → CANCELED.

        Sets terminal state, publishes, then cancels the task.
        CancelledError is just a wakeup signal — no handler logic.
        """
        if not self._task.done() and self._current_state not in _TERMINAL_STATES:
            self._transition_to(CommandStatusEnum.CANCELED)
            await self._publish_status()
            self._task.cancel()

    async def fail(self):
        """Provider shutdown → FAILED(SERVICE_FAILED).

        Sets terminal state, publishes, then cancels the task.
        CancelledError is just a wakeup signal — no handler logic.
        """
        if not self._task.done() and self._current_state not in _TERMINAL_STATES:
            self._transition_to(
                CommandStatusEnum.FAILED,
                reason=CommandFailedReasonEnum.SERVICE_FAILED)
            await self._publish_status()
            self._task.cancel()

    def set_new_command(self, new_command):
        """Store a pending command update.

        Does NOT call task.cancel(). The run loop checks
        _new_command at a natural checkpoint after on_executing().
        """
        self._new_command = new_command

    # --- State transition ---

    def _transition_to(self, state, reason=None):
        """Validate and advance the state machine.

        If the transition is illegal, forces FAILED and raises
        RuntimeError. The state machine is always left in a valid
        state — either the requested state or FAILED.
        """
        allowed = _VALID_TRANSITIONS.get(self._current_state, set())
        if state not in allowed:
            previous = self._current_state
            _logger.error(
                "Session %s: illegal transition %s → %s, forcing FAILED",
                self._session_id, previous, state)
            self._current_state = CommandStatusEnum.FAILED
            self._current_reason = CommandFailedReasonEnum.SERVICE_FAILED
            raise RuntimeError(
                f"Session {self._session_id}: illegal transition "
                f"{previous} → {state}")
        self._current_state = state
        self._current_reason = reason

    # --- DDS publish ---

    async def _publish_status(self):
        """Publish _current_state and _current_reason to DDS.

        Catches and logs DDS write failures so a broken writer
        never prevents cleanup in the finally block.
        """
        try:
            status_sample = self._provider._status_type()
            status_sample.source = self._provider._source_id
            status_sample.sessionID = self._command.sessionID
            status_sample.timeStamp = current_timestamp()
            status_sample.commandStatus = self._current_state
            if self._current_reason is not None:
                status_sample.commandStatusReason = self._current_reason
                self._current_reason = None
            self._provider._status_writer.write(status_sample)
        except Exception:
            _logger.warning(
                "Session %s: failed to publish %s status",
                self._session_id, self._current_state, exc_info=True)

    async def _apply_update(self):
        """Swap to the new command and re-enter from ISSUED."""
        previous = self._command
        self._command = self._new_command
        self._new_command = None
        self._transition_to(
            CommandStatusEnum.ISSUED,
            reason=CommandStatusReasonEnum.UPDATED)
        await self._publish_status()
        await self._provider.on_updated(self, previous, self._command)

    # --- Main loop ---

    async def run(self):
        try:
            while self._current_state not in _TERMINAL_STATES:

                if self._current_state is None:
                    self._transition_to(CommandStatusEnum.ISSUED)
                    await self._publish_status()

                elif self._current_state == CommandStatusEnum.ISSUED:
                    accepted, reason = await self._provider.validate_command(
                        self._command)
                    if not accepted:
                        raise CommandHookError(
                            CommandStatusReasonEnum.VALIDATION_FAILED, reason)
                    self._transition_to(CommandStatusEnum.COMMANDED)
                    await self._publish_status()
                    await self._provider.on_commanded(self)

                elif self._current_state == CommandStatusEnum.COMMANDED:
                    self._transition_to(CommandStatusEnum.EXECUTING)
                    await self._publish_status()

                elif self._current_state == CommandStatusEnum.EXECUTING:
                    await self._provider.on_executing(self)

                    if self._new_command is not None:
                        await self._apply_update()
                    else:
                        self._transition_to(CommandStatusEnum.COMPLETED)
                        await self._publish_status()
                        await self._provider.on_complete(self)

        except asyncio.CancelledError:
            # Terminal state already set and published by cancel()/fail().
            _logger.debug(
                "Session %s: task cancelled in state %s",
                self._session_id, self._current_state)

        except Exception as e:
            if self._current_state not in _TERMINAL_STATES:
                reason = (e.reason if isinstance(e, CommandHookError)
                          else CommandFailedReasonEnum.SERVICE_FAILED)
                self._transition_to(CommandStatusEnum.FAILED, reason=reason)
                await self._publish_status()
                await self._provider.on_failed(self, e)

        finally:
            await self._provider.on_terminal(self)
            self._dispose_provider_instances()
            self._provider._active_sessions.pop(self._session_id, None)
```

---

## Design Notes

### Command ack is the read loop's responsibility

The provider's read loop publishes a command ack for every incoming command
sample immediately upon receipt — before creating a new session or calling
`set_new_command()` on an existing one. This means:

- The session never calls `_publish_ack()`. It only manages status transitions.
- Both initial commands and updates get acked at the same point in the code.
- The ack is unconditional — even if the session later rejects the command
  during validation, the ack has already been sent (per ICD §5.1.5).

---

## What changed from D46/D48

| Aspect | D46/D48 (current) | Proposed |
|---|---|---|
| Loop structure | `while True` + inner try/except + break/continue | Inline if/elif dispatch — `while state not terminal` |
| Update delivery | `task.cancel()` + `_updated` flag + CancelledError routing | Data store only — `_new_command` checked at checkpoint |
| CancelledError scope | Catches everywhere (pre-exec, exec, handlers) | Only at outer level — means cancel or fail, nothing else |
| Flags | `_failed`, `_updated`, `_previous_command` | `_new_command` only (no `_updated`, no `_failed`) |
| Transition guard | None — `_publish_status()` blindly advances | Transition table validates every state change |
| Exception handlers | Inside inner try — can be interrupted by CancelledError (C50) | At outer level — CancelledError skips them (BaseException) |
| C++ SDK alignment | CancelledError interrupts on_executing() for updates | on_executing() runs to completion — updates at checkpoint |

---

## C++ SDK comparison

| C++ SDK | Python (proposed) |
|---|---|
| `cycle()` polls once per call | `run()` loops until terminal |
| `handleIncomingCommand()` before `cycleSession()` | `set_new_command()` stores data; checkpoint after `on_executing()` |
| `onExecuting()` returns before update processed | `on_executing()` returns before update processed |
| `state_.update()` resets to ISSUED | `_publish_status(ISSUED, UPDATED)` at checkpoint |
| `advanceState()` validates transitions | `_transition_to()` validates against `_VALID_TRANSITIONS` table |
| Single-threaded — no interruption possible | Single event loop — no interruption during sync phases |

---

## Resolves

- **C50:** Eliminated — CancelledError only means cancel/fail. Exception handlers at outer
  level are never interrupted by CancelledError (it's BaseException, skips except blocks).
- **D48 simplification:** `set_new_command()` stores the pending command. No `task.cancel()` for updates.
  No `_updated` flag. One fewer interruption intent.
- **D46 simplification:** Two intents remain (cancel/fail) — both set terminal state
  and publish before `task.cancel()`. CancelledError is just a wakeup. No flags needed.

---

## Supersedes

If adopted, this supersedes D48 ("Command update via task.cancel() + while-loop re-entry")
and modifies D46 ("Provider cancel/shutdown/update via task.cancel()") to remove the update
intent from the CancelledError mechanism. A new decision D49 should be created.
