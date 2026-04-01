# Command Services

> Tier 0: `CommandProvider` and `CommandConsumer` — the 4-slot command interaction pattern.

---

## Overview

Every UMAA command interaction follows the same 4-slot pattern defined in the ICD §4.1:

1. **Command** — Consumer sends a command to the provider
2. **Ack** — Provider acknowledges receipt (`CommandAckReportType`)
3. **Status** — Provider publishes execution status updates (`CommandStatusType`)
4. **Execution Status** — Provider optionally publishes detailed progress (`ExecutionStatusType`)

`CommandProvider` and `CommandConsumer` are template classes that accept concrete types and topics for each slot. One pair covers all ~60 UMAA command families.

**C++ SDK comparison:** The PSU/ARL C++ SDK splits this into `CommandProviderBase` (832 lines) and `CommandConsumerBase`. `CommandProviderBase` uses a subclass-override model with 6+ virtual hooks (`isCommandValid`, `onIssued`, `onCommanded`, `onExecuting`, `isCommandCompleted`, `isCommandFailed`). The base class owns ALL status publishing — subclasses never call `sendStatus()` directly. `rtiumaapy` adopts the same subclass-override model for **both** `CommandProvider` and `CommandConsumer`, adapted for Python `async` (D44).

---

## IDL Key Structure

All UMAA command families share the same key layout per slot (verified from IDL):

### CommandType — 3 keys

```idl
@key UMAA::Common::IdentifierType       source;       // originator (id + parentID)
@key UMAA::Common::Measurement::NumericGUID sessionID;  // correlates the 4-slot exchange
@key UMAA::Common::IdentifierType       destination;  // target service provider
     UMAA::Common::Measurement::DateTime       timeStamp;
     // ... domain-specific payload fields
```

### CommandStatusType — 2 keys (no `destination`)

```idl
@key UMAA::Common::IdentifierType       source;
@key UMAA::Common::Measurement::NumericGUID sessionID;
     UMAA::Common::Measurement::DateTime       timeStamp;
     CommandStatusEnumType                      commandStatus;
     CommandStatusReasonEnumType                commandStatusReason;
     string<4095>                               logMessage;
```

### CommandAckReportType — 2 keys

```idl
@key UMAA::Common::IdentifierType       source;
@key UMAA::Common::Measurement::NumericGUID sessionID;
     UMAA::Common::Measurement::DateTime       timeStamp;
     <DomainCommandType>                        command;   // full command echoed back
```

`IdentifierType` is `@nested` with two fields: `id` (`NumericGUID`) and `parentID` (`NumericGUID`).  
`NumericGUID` is `typedef octet NumericGUID[16]` — a 128-bit UUID.

> **Note:** CommandType has 3 keys (`source`, `sessionID`, `destination`) while Status and Ack have only 2 keys (`source`, `sessionID`). `destination` is NOT a key in response types.

---

## CommandProvider

A `CommandProvider` is the **server-side** of a command interaction. It:
- Receives commands addressed to this provider (filtered by `destination`)
- Sends ack/status/execution-status
- Manages one `CommandProviderSession` per active command

### Entity Layout

| Slot | Entity | QoS Profile | Filter |
|---|---|---|---|
| **command** | DataReader | Command | CFT: `destination.parentID` + `destination.id` (see §CFT Syntax) |
| **ack** | DataWriter | Command | — |
| **status** | DataWriter | Command | — |
| **exec_status** | DataWriter (optional) | Command | — |

### Constructor

```python
class CommandProvider(BaseService):
    """Subclass and override hooks to implement command behavior.
    Base class owns ALL status publishing — subclasses never publish
    status directly.
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        # Types
        command_type,
        ack_type,
        status_type,
        exec_status_type=None,
        # Topics
        command_topic: str,
        ack_topic: str,
        status_topic: str,
        exec_status_topic: str = None,
        # Identity — IdentifierType has .parentID and .id (both NumericGUID)
        source_id: IdentifierType,
    ):
        super().__init__(ctx, service_name)

        # Filtered reader for commands addressed to this provider.
        # Uses &hex() syntax for NumericGUID (octet[16]) comparison.
        filter_expr = (
            f"destination.parentID = &hex({guid_to_hex(source_id.parentID)})"
            f" AND destination.id = &hex({guid_to_hex(source_id.id)})"
        )
        self._command_reader, self._command_cft = ctx.create_filtered_reader(
            command_type, command_topic, filter_expr,
        )
        self._ack_writer = ctx.create_writer(ack_type, ack_topic)
        self._status_writer = ctx.create_writer(status_type, status_topic)

        # Optional execution status
        self._exec_status_writer = None
        if exec_status_type is not None and exec_status_topic is not None:
            self._exec_status_writer = ctx.create_writer(
                exec_status_type, exec_status_topic)

        self._source_id = source_id
        self._ack_type = ack_type
        self._status_type = status_type
        self._exec_status_type = exec_status_type
        self._active_sessions: dict[str, CommandProviderSession] = {}
```

### Hooks (Override in Subclass)

The provider uses a **subclass-override model** inspired by the C++ SDK's `CommandProviderBase`. The base class owns the full state machine and all status publishing. Subclasses override hooks to inject domain-specific behavior at each state transition. Hooks are `async` coroutines.

```python
    # --- Validation ---

    async def validate_command(self, command) -> tuple[bool, str]:
        """Validate a command after ISSUED status and ack are published.

        Called AFTER ISSUED + Ack (D42), matching the C++ SDK's
        isCommandValid() placement inside handleIssued(). Return
        (True, "") to accept, or (False, reason_string) to reject.

        On rejection the base class transitions ISSUED → FAILED with
        reason VALIDATION_FAILED. No COMMANDED state is entered.

        Default: accepts all commands.
        """
        return (True, "")

    # --- Update hook (D39) ---

    async def on_updated(
        self,
        session: CommandProviderSession,
        previous_command,
        updated_command,
    ) -> None:
        """Called when a command update arrives for an active session.

        Fires after ISSUED(UPDATED) status is published and before
        the state machine re-enters validate_command() → COMMANDED →
        on_executing(). The session's command reference is already
        updated to `updated_command` when this hook is called.

        Override to react to parameter changes (e.g., log the delta,
        pre-stage new hardware targets). Raise CommandHookError to
        abort the updated command with FAILED.

        Default: no-op.

        C++ SDK equivalent: onUpdated(session, previousCmd, updatedCmd)
        in CommandProviderBase.
        """
        pass

    # --- State-transition hooks ---

    async def on_commanded(self, session: CommandProviderSession) -> None:
        """Called after COMMANDED status published, before EXECUTING.

        Override for pre-execution setup (e.g., acquire hardware,
        verify preconditions). Raise CommandHookError to abort
        with a FAILED transition.
        """
        pass

    async def on_executing(self, session: CommandProviderSession) -> None:
        """Called after EXECUTING status published. Perform the actual
        work here.

        This is the primary hook subclasses MUST implement. The base
        class publishes COMPLETED when this returns normally, or FAILED
        if it raises.

        Raise CommandHookError(reason, msg) for domain failures.
        Any other exception triggers FAILED(SERVICE_FAILED).
        """
        raise NotImplementedError("Subclass must implement on_executing()")

    async def on_complete(self, session: CommandProviderSession) -> None:
        """Called after COMPLETED status published.

        Override for post-completion actions (e.g., log result,
        notify other services).
        """
        pass

    async def on_failed(
        self, session: CommandProviderSession, exception: Exception
    ) -> None:
        """Called after FAILED status published.

        Override for failure-specific handling (e.g., rollback,
        error telemetry). The exception that triggered the failure is
        passed in.
        """
        pass

    async def on_terminal(self, session: CommandProviderSession) -> None:
        """Always called (in a finally block), regardless of outcome.

        Override for guaranteed cleanup: release hardware, close file
        handles, etc. Fires after on_complete() or on_failed().
        Inspired by v1's on_terminal() pattern.
        """
        pass
```

**Design rationale (three-way comparison):**

| Aspect | C++ SDK | Python v1 | v2 (this design) |
|---|---|---|---|
| Model | Subclass, 6+ virtual hooks | Callback factories, hooks on `UmaaCommand` | Subclass, 7 async hooks (incl. `on_updated`, D39) |
| Status publishing | Base class only | `UmaaCommand` (mixed) | Base class only |
| Validation | `isCommandValid()` after ISSUED+Ack | None (Bug #28) | `validate_command()` after ISSUED+Ack (D42) |
| Failure mode | `CommandStateResult::ERROR` enum | `UmaaCommandException` | `CommandHookError` / `CommandFailedError` (D40) |
| Cleanup | No explicit always-run hook | `on_terminal()` + finally disposal | `on_terminal()` + finally disposal |
| Concurrency | Polling/cycle-driven, multi-threaded | Thread pool workers | Single-threaded asyncio |

### Session Routing

Each incoming command creates a `CommandProviderSession`. The provider routes by **instance handle** (the DDS key — typically `sessionID`):

```python
    async def _run(self):
        """Main event loop — receives commands and dispatches to sessions.

        Branches on sample validity first (RTI keyed_data_advanced pattern):
        - valid data (ALIVE) → new command or update
        - NOT valid → metadata message → check instance_state:
          - NOT_ALIVE_DISPOSED → consumer disposed the command = cancel (ICD §5.1.4.5)
          - NOT_ALIVE_NO_WRITERS → consumer writer gone (crash) = treat as cancel

        Wrapped in try/except so a transient DDS error or routing
        exception logs and re-raises rather than silently killing
        command processing (C49).
        """
        try:
            async for samples in self._command_reader.take_async():
                for sample in samples:
                    if sample.info.valid:
                        # --- Normal command processing (instance is ALIVE) ---
                        session_id = str(sample.data.sessionID)

                        # Ack every valid command sample immediately upon receipt,
                        # before routing to a session. Both new commands and updates
                        # get acked here — the session never publishes ack.
                        await self._publish_ack(sample.data)

                        if session_id in self._active_sessions:
                            # D12: Disambiguate update vs. rejection
                            existing = self._active_sessions[session_id]
                            if sample.data.timeStamp > existing.command.timeStamp:
                                # D39: Same sessionID, newer timestamp → update
                                existing.set_new_command(sample.data)
                            else:
                                # Same sessionID, older/equal timestamp → ignore
                                pass
                            continue

                        if self._active_sessions:
                            # D3: Different sessionID while another session active
                            # → reject via full state machine traversal per ICD
                            # Figure 15. ISSUED → COMMANDED → FAILED
                            # (RESOURCE_REJECTED). No user hooks fire.
                            await self._reject_active(sample.data)
                            continue

                        # Create new session — base class owns state machine
                        session = CommandProviderSession(
                            provider=self,
                            command=sample.data,
                        )
                        self._active_sessions[session_id] = session
                        session._task = asyncio.create_task(session.run())
                    else:
                        # --- Metadata message (no data payload) ---
                        # Dispose / no-writers samples have valid=False.
                        # Use key_value() to recover key fields for routing.
                        instance_state = sample.info.state.instance_state

                        if instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                            # Consumer explicitly disposed the command → cancel
                            key_data = self._command_reader.key_value(
                                sample.info.instance_handle)
                            await self._handle_command_disposed(key_data)

                        elif instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                            # Consumer writer gone (crash/shutdown without dispose)
                            # Treat same as cancel per ICD §5.1.4.5
                            key_data = self._command_reader.key_value(
                                sample.info.instance_handle)
                            await self._handle_command_disposed(key_data)
        except Exception:
            _logger.exception("Provider %s command reader failed", self.service_name)
            raise

    async def _handle_command_disposed(self, key_data):
        """Handle a disposed command instance — cancel the session if active.

        Per ICD §5.1.4.5: Consumer disposes command to signal cancel.
        Calls session.cancel() which sets CANCELED, publishes terminal
        status, then cancels the task. run()'s finally block handles
        disposal and pop.
        """
        session_id = str(key_data.sessionID)
        if session_id in self._active_sessions:
            await self._active_sessions[session_id].cancel()
```

### Active Command Rejection (D3)

Per ICD §4.1.4.4 and Figure 15, a provider that already has an active command **still processes the new command through the state machine**. The ICD matrix only permits `RESOURCE_REJECTED` from `COMMANDED → FAILED`, so the intermediate states cannot be skipped:

1. Ack is published by the read loop immediately upon receipt (before calling `_reject_active`)
2. Publish **ISSUED** status (acknowledging receipt per §4.1.4)
3. Transition to **COMMANDED**
4. Immediately transition to **FAILED** with reason `RESOURCE_REJECTED` (§5.3.1: *"the commanded resource rejects the command for some reason"*)

All steps happen in rapid succession — no user callbacks fire.

```python
    async def _reject_active(self, command):
        """Reject a command via ephemeral session (D3, C43).

        Creates a temporary CommandProviderSession — not added to
        _active_sessions — to publish the rejection sequence through
        the same publish methods as run(). Matches C++ SDK pattern:
        tempSession = make_shared<CmdSession>(...); publish; reset().

        The session's _dispose_provider_instances() cleans up DDS
        instances in the finally block.
        """
        temp = CommandProviderSession(self, command)
        try:
            temp._transition_to(CommandStatusEnum.ISSUED)
            await temp._publish_status()
            temp._transition_to(CommandStatusEnum.COMMANDED)
            await temp._publish_status()
            temp._transition_to(
                CommandStatusEnum.FAILED,
                reason=CommandFailedReasonEnum.RESOURCE_REJECTED)
            await temp._publish_status()
        finally:
            temp._dispose_provider_instances()
```

### Session State Machine

`CommandProviderSession.run()` drives the ICD state machine via inline if/elif dispatch. `_transition_to()` validates every state change against a transition table. The subclass never publishes status directly.

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
    # ISSUED from EXECUTING = update re-entry
    # FAILED/CANCELED allowed from every non-terminal state
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

        When transitioning to FAILED, validates the reason against
        _VALID_FAIL_REASONS for the current state (D51). Invalid
        reasons are coerced to SERVICE_FAILED with a warning.
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
        if state == CommandStatusEnum.FAILED and reason is not None:
            valid = self._VALID_FAIL_REASONS.get(self._current_state, set())
            if reason not in valid:
                _logger.warning(
                    "Session %s: reason %s not valid from state %s; "
                    "falling back to SERVICE_FAILED",
                    self._session_id, reason, self._current_state)
                reason = CommandFailedReasonEnum.SERVICE_FAILED
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

**Key properties:**
- **Ack in read loop, ISSUED in session** — ICD §4.1.4 requires ISSUED status; §4.1.4.1 requires ack. Both are published but no strict ordering is mandated. The read loop acks every valid command sample immediately upon receipt; the session publishes ISSUED when it starts. The session never publishes ack.
- **Validation after ISSUED+Ack** — per D42; matches C++ SDK `handleIssued()` placement
- **Transition table validates every state change** — `_transition_to()` guards against illegal transitions; forces FAILED on violation
- **cancel()/fail() publish before cancelling** — terminal status is on the wire before CancelledError interrupts the task. No flags needed.
- **Updates at natural checkpoint** — `set_new_command()` stores the pending command; checked after `on_executing()` returns. `on_executing()` runs to completion — matching C++ SDK.
- **Exception-based failure** — `on_commanded()` or `on_executing()` can raise `CommandHookError(reason, msg)` to trigger FAILED at any point; validation failure also uses this path
- **`_publish_status()` is fire-and-forget** — catches and logs DDS write failures so cleanup always proceeds
- **on_terminal always fires** — in `finally` block, guarantees resource cleanup (v1 pattern, addresses Bug #29)
- **Instance disposal in finally** — DDS instances are disposed regardless of outcome
- **Session self-removes** — pops itself from `_active_sessions` in finally

> **Update/cancel handling:** When a command update arrives during EXECUTING, the session restarts from ISSUED with reason UPDATED per ICD §4.1.4.2. See design decision D39.

### Close

```python
    async def close(self) -> None:
        """Fail active sessions, wait for cleanup, close DDS entities.

        Per ICD §5.1.6.1 — Provider shutdown:
        1. Fail any incomplete requests — session.fail() sets
           FAILED(SERVICE_FAILED), publishes terminal status, then
           cancels the task. finally block disposes instances and
           pops from _active_sessions.
        2. gather() waits for all finally blocks to complete.
        3. Close DDS entities (safe — no session is writing through them).
        """
        # Signal all active sessions to fail
        tasks = []
        for session in list(self._active_sessions.values()):
            await session.fail()
            tasks.append(session._task)

        # Wait for all run() finally blocks to complete
        if tasks:
            await asyncio.gather(*tasks, return_exceptions=True)

        # All sessions cleaned up — close DDS entities
        self._command_reader.close()
        self._ack_writer.close()
        self._status_writer.close()
        if self._exec_status_writer is not None:
            self._exec_status_writer.close()
```

### Instance Disposal During Normal Operation

After a command reaches a terminal state (COMPLETED, FAILED, CANCELED), the provider disposes its status/ack/exec_status instances when it detects the consumer has disposed the command instance. This is handled in `CommandProviderSession`:

```python
    def _dispose_provider_instances(self):
        """Dispose provider-side instances (ICD §5.1.5).

        Build key-only samples matching the session's source + sessionID,
        look up the instance handle, and dispose if it exists.
        """
        # Ack
        ack_key = self._provider._ack_type()
        ack_key.source = self._provider._source_id
        ack_key.sessionID = self._command.sessionID
        ih = self._provider._ack_writer.lookup_instance(ack_key)
        if ih != dds.InstanceHandle.nil:
            self._provider._ack_writer.dispose_instance(ih)

        # Status
        status_key = self._provider._status_type()
        status_key.source = self._provider._source_id
        status_key.sessionID = self._command.sessionID
        ih = self._provider._status_writer.lookup_instance(status_key)
        if ih != dds.InstanceHandle.nil:
            self._provider._status_writer.dispose_instance(ih)

        # Execution status (if applicable)
        if self._provider._exec_status_writer is not None:
            exec_key = self._provider._exec_status_type()
            exec_key.source = self._provider._source_id
            exec_key.sessionID = self._command.sessionID
            ih = self._provider._exec_status_writer.lookup_instance(exec_key)
            if ih != dds.InstanceHandle.nil:
                self._provider._exec_status_writer.dispose_instance(ih)
```

### Per-State Failure Reason Validation (D51)

Per ICD Figure 15 and the C++ SDK (`CommandStateMachine.cpp`), not all failure reasons are valid from all states. Validation is enforced inside `_transition_to()` — the single chokepoint every code path hits — so it cannot be bypassed.

When `_transition_to(FAILED, reason=...)` is called, it checks `_VALID_FAIL_REASONS[current_state]`. If the reason is not in the valid set, it logs a warning and coerces to `SERVICE_FAILED` (always valid from any non-terminal state). This replaces the previous `_publish_fail()` helper.

```python
    # Valid (state → reasons) mapping from ICD Figure 15
    _VALID_FAIL_REASONS = {
        CommandStatusEnum.ISSUED: {
            CommandFailedReasonEnum.SERVICE_FAILED,
            CommandFailedReasonEnum.INTERRUPTED,
            CommandFailedReasonEnum.TIMEOUT,
            CommandFailedReasonEnum.RESOURCE_FAILED,
            CommandFailedReasonEnum.VALIDATION_FAILED,
        },
        CommandStatusEnum.COMMANDED: {
            CommandFailedReasonEnum.SERVICE_FAILED,
            CommandFailedReasonEnum.INTERRUPTED,
            CommandFailedReasonEnum.TIMEOUT,
            CommandFailedReasonEnum.RESOURCE_REJECTED,
        },
        CommandStatusEnum.EXECUTING: {
            CommandFailedReasonEnum.SERVICE_FAILED,
            CommandFailedReasonEnum.INTERRUPTED,
            CommandFailedReasonEnum.TIMEOUT,
            CommandFailedReasonEnum.RESOURCE_FAILED,
            CommandFailedReasonEnum.OBJECTIVE_FAILED,
        },
    }
```

**Key constraints by state (from C++ SDK):**

| Current State | Allowed Reasons | Notes |
|---|---|---|
| ISSUED | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED, VALIDATION_FAILED | VALIDATION_FAILED only valid here — maps to `validate_command()` rejection |
| COMMANDED | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_REJECTED | RESOURCE_REJECTED only valid here — maps to D3 active-command rejection |
| EXECUTING | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED, OBJECTIVE_FAILED | OBJECTIVE_FAILED only valid here — maps to runtime goal failure |

> **Hook mapping:** Since the v2 hook model already constrains which hooks run at which state (`validate_command` → before ISSUED, `on_commanded` → after COMMANDED, `on_executing` → after EXECUTING), the per-state constraint is largely enforced by the flow. The explicit validation in `_transition_to()` is a safety net against misuse — e.g., a `CommandHookError(OBJECTIVE_FAILED)` raised from `on_commanded()` will be coerced to `SERVICE_FAILED`.

---

## CommandConsumer

A `CommandConsumer` is the **client-side** of a command interaction. It:
- Sends commands via `send()` (non-blocking)
- Receives ack/status/execution-status via `_run()` dispatch → hooks
- Manages **one active session at a time**

### Entity Layout

| Slot | Entity | QoS Profile | Filter |
|---|---|---|---|
| **command** | DataWriter | Command | — |
| **ack** | DataReader | Command | CFT: `sessionID` (set per session, see §CFT Syntax) |
| **status** | DataReader | Command | CFT: `sessionID` (set per session) |
| **exec_status** | DataReader (optional) | Command | CFT: `sessionID` (set per session) |

A consumer supports **one active session at a time**. Consumer readers use CFTs filtered by `sessionID` — a globally unique UUID generated by the consumer for each `send()`. The filter starts as `"1 = 0"` (block all) and is set to the current sessionID when a command is sent. On terminal status or cancel, the filter resets to `"1 = 0"`. Since sessionID is globally unique, no other filter fields are needed.

### Constructor

```python
class CommandConsumer(BaseService):
    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        # Types
        command_type,
        ack_type,
        status_type,
        exec_status_type=None,
        # Topics
        command_topic: str,
        ack_topic: str,
        status_topic: str,
        exec_status_topic: str = None,
        # Identity (D47)
        source_id: IdentifierType = None,       # this consumer's identity
        destination_id: IdentifierType = None,   # target provider's identity
    ):
        super().__init__(ctx, service_name)

        self._source_id = source_id
        self._destination_id = destination_id

        self._command_writer = ctx.create_writer(
            command_type, command_topic)

        # Consumer readers start with a blocking filter ("1 = 0").
        # Filter is set to the active sessionID when a command is sent,
        # and reset to "1 = 0" on session completion/dispose.
        self._ack_reader, self._ack_cft = ctx.create_filtered_reader(
            ack_type, ack_topic, "1 = 0")
        self._status_reader, self._status_cft = ctx.create_filtered_reader(
            status_type, status_topic, "1 = 0")

        self._exec_status_reader = None
        self._exec_status_cft = None
        if exec_status_type is not None and exec_status_topic is not None:
            self._exec_status_reader, self._exec_status_cft = ctx.create_filtered_reader(
                exec_status_type, exec_status_topic, "1 = 0")

        # Active session state
        self._session_id: Optional[bytes] = None
        self._session_command = None
```

### Hooks (Override in Subclass)

The consumer uses the same **subclass-override model** as `CommandProvider` (D44). The base class owns the dispatch loop and session lifecycle. Subclasses override hooks to react to status updates, execution progress, and terminal outcomes. All hooks are always called — none are optional.

```python
    async def on_status(self, session_id: bytes, status) -> None:
        """Called for every status update from the provider.

        Fires for all states: ISSUED, COMMANDED, EXECUTING,
        COMPLETED, FAILED, CANCELED. For terminal states,
        on_terminal() fires AFTER this hook returns.

        Override for logging, UI updates, or domain reactions.
        Default: no-op.
        """
        pass

    async def on_ack(self, session_id: bytes, ack) -> None:
        """Called when the provider echoes the command acknowledgment.

        The ack contains the echoed command from the provider, confirming
        receipt. The ack type is the service-specific *CommandAckReportType
        (e.g., EngineCommandAckReportType), which includes the original
        command, source, sessionID, and timestamp.

        C++ SDK equivalent: read(CmdAck*) — caller polls for ack.
        Python equivalent: hook fires automatically from _read_ack_loop().

        Override to verify provider received the expected command,
        extract provider-side timestamps, or log receipt confirmation.
        Default: no-op.
        """
        pass

    async def on_exec_status(self, session_id: bytes, exec_status) -> None:
        """Called when the provider publishes execution progress.

        Only fires if the provider publishes to the exec_status slot
        (4th slot, optional per command family).

        Override for progress reporting (e.g., waypoint reached,
        percentage complete). Default: no-op.
        """
        pass

    async def on_terminal(self, session_id: bytes, status) -> None:
        """Called after the session closes.

        Fires for COMPLETED, FAILED, CANCELED, or when the provider
        crashes (NOT_ALIVE_NO_WRITERS) or the consumer shuts down
        via close().

        Args:
            session_id: The session that ended.
            status: The terminal status sample, or None if the session
                    ended due to provider crash or consumer shutdown.

        The base class has already disposed the command instance
        (ICD §5.1.5) and reset CFT filters before this hook fires —
        the session is closed.

        Override for completion handling, error recovery, retry logic,
        or triggering the next command in a sequence.
        Default: no-op.
        """
        pass
```

### Sending a Command

```python
    async def send(self, command, session_id: bytes = None) -> bytes:
        """Send a command or update. Returns the session_id as a handle.

        If session_id is None: starts a new session — generates a unique
        sessionID, stamps the command, activates CFT filters, writes.
        Returns the new session_id.

        If session_id is provided: sends a command update to the
        existing session — stamps a new (newer) timestamp, writes.
        Provider receives it as D39 update (same sessionID, newer
        timestamp). Returns the same session_id.

        All four header fields are auto-stamped on every write (D47):
        source, destination, sessionID, timeStamp. Caller never sets these.

        Args:
            command: The command sample. All header fields are stamped
                     by the base class — caller does not set them.
            session_id: None for new command, or the session_id returned
                        by a prior send() for an update.

        Returns:
            The session_id (bytes) — use as handle for send_update or cancel.

        Raises:
            RuntimeError: If session_id is None but a session is already active.
            RuntimeError: If session_id does not match the active session.

        C++ SDK equivalent: CommandConsumerBase::send(). Auto-stamps
        source, destination, sessionID, timeStamp from header_.
        """
        if session_id is None:
            # --- New command ---
            if self._session_id is not None:
                raise RuntimeError("Consumer already has an active session")

            session_id = generate_session_id()  # uuid4 → NumericGUID bytes

            # Stamp all header fields (D47 — matches C++ SDK)
            command.source = self._source_id
            command.destination = self._destination_id
            command.sessionID = session_id
            command.timeStamp = current_timestamp()

            self._session_id = session_id
            self._session_command = command

            # Activate CFT filters for this session
            self._set_session_filter(session_id)

            self._command_writer.write(command)
            return session_id
        else:
            # --- Update existing session ---
            if self._session_id is None or session_id != self._session_id:
                raise RuntimeError("No active session with that session_id")

            # Stamp all header fields (D47 — matches C++ SDK)
            command.source = self._source_id
            command.destination = self._destination_id
            command.sessionID = session_id
            command.timeStamp = current_timestamp()  # must be > original
            self._session_command = command

            self._command_writer.write(command)
            return session_id
```

### Cancel

```python
    async def cancel(self) -> None:
        """Cancel the active session — dispose command and clean up immediately.

        Per ICD §5.1.4.5: Consumer disposes command to signal cancel.
        Delegates to _end_session(None) for all cleanup: dispose, clear
        state, reset filters, call on_terminal().

        Matches C++ SDK closeCommandSession() — immediate cleanup, no
        waiting for provider's CANCELED status. The _session_id guard
        in _read_status_loop() makes this idempotent: if the provider's
        CANCELED arrives later, _session_id is already None → no-op.

        C++ SDK equivalent: CommandConsumerBase::closeCommandSession().
        """
        if self._session_id is None:
            return

        await self._end_session(None)
```

### Close

```python
    async def close(self) -> None:
        """End active session, then close DDS entities.

        Per ICD §5.1.6.2 — Consumer shutdown:
        1. End session via _end_session(None) — disposes command instance,
           clears state, resets filters, calls on_terminal (C39)
        2. Unregister as publisher of command (close writer)
        3. Unsubscribe from status/ack/exec_status (close readers)
        """
        if self._session_id is not None:
            await self._end_session(None)

        self._command_writer.close()
        self._ack_reader.close()
        self._status_reader.close()
        if self._exec_status_reader is not None:
            self._exec_status_reader.close()

    async def _end_session(self, status) -> None:
        """Sole session cleanup owner — disposes command, clears state, resets filters, calls on_terminal.

        Sequence:
        1. Dispose command instance (ICD §5.1.5)
        2. Clear _session_id + _session_command
        3. Reset CFT filters to "1=0" (reject all)
        4. Call on_terminal(session_id, status) — user notification

        Called by:
        - cancel() on user-initiated cancel (D50)
        - _read_status_loop() on terminal status (COMPLETED/FAILED/CANCELED)
        - _read_status_loop() on provider crash (NOT_ALIVE_NO_WRITERS)
        - close() on shutdown (C39)

        status is the terminal status sample, or None for cancel/crash/shutdown.
        """
        self._dispose_command_instance()
        session_id = self._session_id
        self._session_id = None
        self._session_command = None
        self._reset_filters()
        await self.on_terminal(session_id, status)
```

### Dispatch — `_run()`

The dispatch loop multiplexes all consumer readers. Terminal status detection, command instance disposal, and session cleanup are handled here — the subclass hooks are called at well-defined points.

```python
_TERMINAL_STATUSES = {
    CommandStatusEnum.COMPLETED,
    CommandStatusEnum.FAILED,
    CommandStatusEnum.CANCELED,
}

    async def _run(self):
        """Multiplex all consumer readers, dispatching to hooks.

        Uses asyncio.gather() to read status, ack, and exec_status
        readers concurrently (D41 — _run() is the sole reader).
        Exceptions are logged and re-raised (C67, supersedes C48).
        """
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

    async def _read_status_loop(self):
        """Status reader dispatch — calls on_status() + _end_session() on terminal."""
        async for samples in self._status_reader.take_async():
            for sample in samples:
                if sample.info.valid:
                    if self._session_id is not None:
                        session_id = self._session_id

                        # Hook: on_status — fires for every status
                        await self.on_status(session_id, sample.data)

                        # Terminal detection
                        if sample.data.commandStatus in _TERMINAL_STATUSES:
                            await self._end_session(sample.data)
                else:
                    instance_state = sample.info.state.instance_state

                    if instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                        # Provider crashed — synthesize terminal
                        if self._session_id is not None:
                            await self._end_session(None)

                    elif instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                        # Provider disposed status — normal post-terminal cleanup
                        pass

    async def _read_ack_loop(self):
        """Ack reader dispatch — calls on_ack() hook."""
        async for samples in self._ack_reader.take_async():
            for sample in samples:
                if sample.info.valid:
                    if self._session_id is not None:
                        await self.on_ack(self._session_id, sample.data)

    async def _read_exec_status_loop(self):
        """Exec status reader dispatch — calls on_exec_status() hook."""
        async for samples in self._exec_status_reader.take_async():
            for sample in samples:
                if sample.info.valid:
                    if self._session_id is not None:
                        await self.on_exec_status(self._session_id, sample.data)

    def _dispose_command_instance(self):
        """Dispose consumer's command instance (ICD §5.1.5)."""
        if self._session_command is not None:
            ih = self._command_writer.lookup_instance(self._session_command)
            if ih != dds.InstanceHandle.nil:
                self._command_writer.dispose_instance(ih)
```

---

## Content-Filtered Topics (CFTs)

UMAA's key fields are `NumericGUID` (`typedef octet NumericGUID[16]`). Standard SQL filter syntax does not support raw byte-array comparison. RTI Connext provides the `&hex()` builtin filter function for this purpose.

### `&hex()` Syntax

`guid_to_hex()` converts a 16-byte UUID to 16 space-separated hex byte pairs:

```python
def guid_to_hex(guid: bytes) -> str:
    """Convert NumericGUID (octet[16]) to hex string for &hex() filter."""
    return " ".join(f"{b:02x}" for b in guid)
# Example: "01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10"
```

### Provider CFT (Static — destination filter)

The provider's command reader uses a **static CFT** to filter commands addressed to this provider. It filters on the `destination` field (an `IdentifierType` with `id` and `parentID`):

```python
filter_expr = (
    f"destination.parentID = &hex({guid_to_hex(my_id.parentID)})"
    f" AND destination.id = &hex({guid_to_hex(my_id.id)})"
)
reader, cft = ctx.create_filtered_reader(
    CmdType, cmd_topic, filter_expr
)
```

**Design constraints:**
- One CFT per command topic, set at construction time.
- The filter is never changed at runtime.
- This avoids the overhead of receiving and discarding commands destined for other providers on the same topic.

### Consumer CFT (Single-session — sessionID filter)

A consumer supports **one active command session at a time**. Consumer readers use a CFT filtered solely on `sessionID` — a globally unique UUID generated by the consumer. Since the UUID is unique across the entire system, no other filter fields (e.g., `source`) are needed to isolate the response stream.

The filter has two states:

| State | Filter expression | When |
|---|---|---|
| **Idle** | `"1 = 0"` | Construction, and after session completion/dispose |
| **Active** | `sessionID = &hex(...)` | After `send()` sends a command |

```python
def _set_session_filter(self, session_id: bytes):
    """Set CFTs to receive responses for this session."""
    expr = f"sessionID = &hex({guid_to_hex(session_id)})"
    self._ack_cft.set_filter(dds.Filter(expr))
    self._status_cft.set_filter(dds.Filter(expr))
    if self._exec_status_cft is not None:
        self._exec_status_cft.set_filter(dds.Filter(expr))

def _reset_filters(self):
    """Block all data — no active session."""
    self._ack_cft.set_filter(dds.Filter("1 = 0"))
    self._status_cft.set_filter(dds.Filter("1 = 0"))
    if self._exec_status_cft is not None:
        self._exec_status_cft.set_filter(dds.Filter("1 = 0"))
```

**Design rationale:**
- `sessionID` is a consumer-generated UUID — globally unique, so no additional fields needed
- One session at a time eliminates OR-clause concatenation and filter rebuild complexity
- Two-state filter (idle ↔ active) is trivial to reason about and test
- Consistent with provider-side model: one active command at a time per ICD §4.1.4.4

> **API reference:** `cft.set_filter(dds.Filter(expr))` — from RTI Connext Python API. See [rticonnextdds-examples/content_filtered_topic_string_filter](https://github.com/rticommunity/rticonnextdds-examples/blob/master/examples/connext_dds/content_filtered_topic_string_filter/py/cft_subscriber.py).

---

## Usage Example

```python
# --- Provider side: subclass with hooks ---

class EngineCommandProvider(CommandProvider):
    """Engine control command provider."""

    async def validate_command(self, command) -> tuple[bool, str]:
        if command.throttle < 0 or command.throttle > 100:
            return (False, "Throttle out of range")
        return (True, "")

    async def on_commanded(self, session):
        # Pre-execution: verify engine is online
        if not self._engine.is_online():
            raise CommandHookError(
                CommandFailedReasonEnum.RESOURCE_REJECTED,
                "Engine offline")

    async def on_executing(self, session):
        # Do the actual work
        await self._engine.set_throttle(session.command.throttle)

    async def on_terminal(self, session):
        logger.info(f"Engine command {session.session_id} finished")


engine_provider = EngineCommandProvider(ctx,
    service_name="EngineControl",
    command_type=EngineCommandType,
    ack_type=EngineCommandAckReportType,
    status_type=EngineCommandStatusType,
    command_topic=EngineCommandTypeTopic,
    ack_topic=EngineCommandAckReportTypeTopic,
    status_topic=EngineCommandStatusTypeTopic,
    source_id=my_vehicle_id,
)

# --- Consumer side: subclass with hooks ---

class EngineCommandConsumer(CommandConsumer):
    """Engine control command consumer."""

    async def on_status(self, session_id, status):
        logger.info(f"Engine command {session_id}: {status.commandStatus}")

    async def on_exec_status(self, session_id, exec_status):
        logger.info(f"Engine progress: {exec_status}")

    async def on_terminal(self, session_id, status):
        if status and status.commandStatus == CommandStatusEnum.COMPLETED:
            logger.info(f"Engine command {session_id} completed")
        else:
            logger.warning(f"Engine command {session_id} failed/canceled")


engine_consumer = EngineCommandConsumer(ctx,
    service_name="EngineControlClient",
    command_type=EngineCommandType,
    ack_type=EngineCommandAckReportType,
    status_type=EngineCommandStatusType,
    command_topic=EngineCommandTypeTopic,
    ack_topic=EngineCommandAckReportTypeTopic,
    status_topic=EngineCommandStatusTypeTopic,
)

# Send a command — returns session_id handle
session_id = await engine_consumer.send(engine_cmd)

# Later: send an update (same session, newer timestamp)
engine_cmd.throttle = 75
session_id = await engine_consumer.send(engine_cmd, session_id=session_id)

# Or cancel
await engine_consumer.cancel()
```

---

## Related Documents

- [Composite Services](composite-services.md) — Tier 4 command services with extra slots
- [Error Handling](error-handling.md) — `CommandHookError` / `CommandFailedError` (D40) and rejection handling
