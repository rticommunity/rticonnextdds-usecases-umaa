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

**C++ SDK comparison:** The PSU/ARL C++ SDK splits this into `CommandProviderBase` (832 lines) and `CommandConsumerBase`. `CommandProviderBase` uses a subclass-override model with 6+ virtual hooks (`isCommandValid`, `onIssued`, `onCommanded`, `onExecuting`, `isCommandCompleted`, `isCommandFailed`). The base class owns ALL status publishing — subclasses never call `sendStatus()` directly. UMAAPy2 adopts the same subclass-override / base-class-owns-publishing pattern, adapted for Python `async`.

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
- Receives commands (filtered by `sourceID`)
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
        # Identity
        source_id: str,
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
        self._active_sessions: dict[str, CommandProviderSession] = {}
```

### Hooks (Override in Subclass)

The provider uses a **subclass-override model** inspired by the C++ SDK's `CommandProviderBase`. The base class owns the full state machine and all status publishing. Subclasses override hooks to inject domain-specific behavior at each state transition. Hooks are `async` coroutines.

```python
    # --- Validation ---

    async def validate_command(self, command) -> tuple[bool, str]:
        """Validate a command before entering the state machine.

        Called BEFORE ISSUED status is published. Return (True, "") to
        accept, or (False, reason_string) to reject.

        On rejection the base class publishes the full state machine
        traversal: ISSUED → Ack → COMMANDED → FAILED(REJECTED),
        same as D3 active-command rejection.

        Default: accepts all commands.
        """
        return (True, "")

    # --- State-transition hooks ---

    async def on_commanded(self, session: CommandProviderSession) -> None:
        """Called after COMMANDED status published, before EXECUTING.

        Override for pre-execution setup (e.g., acquire hardware,
        verify preconditions). Raise UmaaCommandException to abort
        with a FAILED transition.
        """
        pass

    async def on_executing(self, session: CommandProviderSession) -> None:
        """Called after EXECUTING status published. Perform the actual
        work here.

        This is the primary hook subclasses MUST implement. The base
        class publishes COMPLETED when this returns normally, or FAILED
        if it raises.

        Raise UmaaCommandException(reason, msg) for domain failures.
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
| Model | Subclass, 6+ virtual hooks | Callback factories, hooks on `UmaaCommand` | Subclass, 6 async hooks |
| Status publishing | Base class only | `UmaaCommand` (mixed) | Base class only |
| Validation | `isCommandValid()` before state machine | None (Bug #28) | `validate_command()` before ISSUED |
| Failure mode | `CommandStateResult::ERROR` enum | `UmaaCommandException` | `UmaaCommandException` (exception-based) |
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
        """
        async for samples in self._command_reader.take_async():
            for sample in samples:
                if sample.info.valid:
                    # --- Normal command processing (instance is ALIVE) ---
                    session_id = str(sample.data.sessionID)

                    if session_id in self._active_sessions:
                        # D3: Active command exists — reject via full state
                        # machine traversal per ICD Figure 15.
                        # ISSUED → COMMANDED → FAILED (RESOURCE_REJECTED)
                        # All three transitions happen in rapid succession;
                        # no user hooks fire.
                        await self._reject_active(sample.data)
                        continue

                    # Create new session — base class owns state machine
                    session = CommandProviderSession(
                        provider=self,
                        command=sample.data,
                    )
                    self._active_sessions[session_id] = session
                    asyncio.create_task(session.run())
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

    async def _handle_command_disposed(self, key_data):
        """Handle a disposed command instance — cancel the session if active.

        Per ICD §5.1.4.5: Consumer disposes command to signal cancel.
        Per ICD §5.1.5: After cancel, provider disposes its response instances.
        """
        session_id = str(key_data.sessionID)
        if session_id in self._active_sessions:
            session = self._active_sessions[session_id]
            await session.cancel("Command disposed by consumer")
            session._dispose_provider_instances()
            self._active_sessions.pop(session_id, None)
```

### Active Command Rejection (D3)

Per ICD §4.1.4.4 and Figure 15, a provider that already has an active command **still processes the new command through the state machine**. The ICD matrix only permits `RESOURCE_REJECTED` from `COMMANDED → FAILED`, so the intermediate states cannot be skipped:

1. Publish **ISSUED** status (acknowledging receipt per §4.1.4)
2. Send the **ack** (§4.1.4.1)
3. Transition to **COMMANDED**
4. Immediately transition to **FAILED** with reason `RESOURCE_REJECTED` (§5.3.1: *"the commanded resource rejects the command for some reason"*)

All four steps happen in rapid succession — no user callbacks fire.

```python
    async def _reject_active(self, command):
        """Reject a command via full state machine traversal (D3)."""
        # 1. ISSUED
        await self._publish_status(command, CommandStatusEnum.ISSUED)
        # 2. Ack
        await self._publish_ack(command)
        # 3. COMMANDED
        await self._publish_status(command, CommandStatusEnum.COMMANDED)
        # 4. FAILED with RESOURCE_REJECTED
        await self._publish_status(
            command, CommandStatusEnum.FAILED,
            reason=CommandFailedReasonEnum.RESOURCE_REJECTED,
        )
```

### Session State Machine

`CommandProviderSession.run()` drives the ICD state machine. The base class publishes every status transition; subclass hooks are called at well-defined points. The subclass never publishes status directly.

```python
class CommandProviderSession:
    """Manages one command's lifecycle through the ICD state machine."""

    async def run(self):
        try:
            # 1. Validate (before entering state machine)
            accepted, reason = await self._provider.validate_command(
                self._command)
            if not accepted:
                await self._reject(reason)
                return

            # 2. ISSUED
            await self._publish_status(CommandStatusEnum.ISSUED)
            await self._publish_ack()

            # 3. COMMANDED
            await self._publish_status(CommandStatusEnum.COMMANDED)
            await self._provider.on_commanded(self)

            # 4. EXECUTING
            await self._publish_status(CommandStatusEnum.EXECUTING)
            await self._provider.on_executing(self)   # subclass does work

            # 5. COMPLETED
            await self._publish_status(CommandStatusEnum.COMPLETED)
            await self._provider.on_complete(self)

        except UmaaCommandException as e:
            # Domain failure — use the reason from the exception.
            # Per-state reason validation (from C++ SDK CommandStateMachine.cpp):
            # The session validates that the exception's reason is legal for the
            # current state per ICD Figure 15 before publishing FAILED.
            await self._publish_fail(e.reason)
            await self._provider.on_failed(self, e)

        except Exception as e:
            # Unexpected failure — SERVICE_FAILED
            await self._publish_status(
                CommandStatusEnum.FAILED,
                reason=CommandFailedReasonEnum.SERVICE_FAILED)
            await self._provider.on_failed(self, e)

        finally:
            # Always: cleanup + dispose instances
            await self._provider.on_terminal(self)
            self._dispose_instances()
            self._provider._active_sessions.pop(self._session_id, None)
```

**Key properties:**
- **ISSUED before ack** — per ICD §4.1.4; corrects v1 Bug #27 (ack before status)
- **Exception-based failure** — `on_commanded()` or `on_executing()` can raise `UmaaCommandException(reason, msg)` to trigger FAILED at any point
- **on_terminal always fires** — in `finally` block, guarantees resource cleanup (v1 pattern, addresses Bug #29)
- **Instance disposal in finally** — DDS instances are disposed regardless of outcome
- **Session self-removes** — pops itself from `_active_sessions` in finally

> **Update/cancel handling** is documented in [command-state-machine.md](command-state-machine.md). When a command update arrives during EXECUTING, the session restarts from ISSUED with reason UPDATED per ICD §4.1.4.2.

### Close

```python
    async def close(self) -> None:
        """Fail active sessions, dispose instances, then close DDS entities.

        Per ICD §5.1.6.1 — Provider shutdown:
        1. Fail any incomplete requests (FAILED with SERVICE_FAILED)
        2. Dispose status/ack/exec_status instances to release bus resources
        3. Unregister as publisher (close writers)
        4. Unsubscribe from command topic (close reader)
        """
        for session in list(self._active_sessions.values()):
            await session.fail("Service shutdown")

        # Dispose all registered instances before closing writers.
        # v1 pattern: build a key-only sample, lookup_instance(), dispose if not nil.
        for session in list(self._active_sessions.values()):
            session._dispose_provider_instances()

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

### Per-State Failure Reason Validation

Per ICD Figure 15 and the C++ SDK (`CommandStateMachine.cpp`), not all failure reasons are valid from all states. The `_publish_fail()` method validates the reason against the current state before publishing FAILED:

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

    async def _publish_fail(self, reason) -> None:
        """Publish FAILED status after validating reason is legal for current state.

        If the reason is not valid for the current state, logs a warning and
        falls back to SERVICE_FAILED (always valid from any non-final state).
        """
        valid = self._VALID_FAIL_REASONS.get(self._current_state, set())
        if reason not in valid:
            _logger.warning(
                "Reason %s not valid from state %s; falling back to SERVICE_FAILED",
                reason, self._current_state)
            reason = CommandFailedReasonEnum.SERVICE_FAILED
        await self._publish_status(CommandStatusEnum.FAILED, reason=reason)
```

**Key constraints by state (from C++ SDK):**

| Current State | Allowed Reasons | Notes |
|---|---|---|
| ISSUED | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED, VALIDATION_FAILED | VALIDATION_FAILED only valid here — maps to `validate_command()` rejection |
| COMMANDED | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_REJECTED | RESOURCE_REJECTED only valid here — maps to D3 active-command rejection |
| EXECUTING | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED, OBJECTIVE_FAILED | OBJECTIVE_FAILED only valid here — maps to runtime goal failure |

> **Hook mapping:** Since the v2 hook model already constrains which hooks run at which state (`validate_command` → before ISSUED, `on_commanded` → after COMMANDED, `on_executing` → after EXECUTING), the per-state constraint is largely enforced by the flow. The explicit validation in `_publish_fail()` is a safety net against misuse.
```

---

## CommandConsumer

A `CommandConsumer` is the **client-side** of a command interaction. It:
- Sends commands
- Receives ack/status/execution-status
- Manages **one active session at a time** (single `CommandConsumerSession`)

### Entity Layout

| Slot | Entity | QoS Profile | Filter |
|---|---|---|---|
| **command** | DataWriter | Command | — |
| **ack** | DataReader | Command | CFT: `sessionID` (set per session, see §CFT Syntax) |
| **status** | DataReader | Command | CFT: `sessionID` (set per session) |
| **exec_status** | DataReader (optional) | Command | CFT: `sessionID` (set per session) |

A consumer supports **one active session at a time**. Consumer readers use CFTs filtered by `sessionID` — a globally unique UUID generated by the consumer for each command. The filter starts as `"1 = 0"` (block all) and is set to the current sessionID when a command is sent. On session completion/dispose the filter resets to `"1 = 0"`. Since sessionID is globally unique, no other filter fields are needed.

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
    ):
        super().__init__(ctx, service_name)

        cmd_tp = ctx.create_topic(command_type, command_topic)
        ack_tp = ctx.create_topic(ack_type, ack_topic)
        sts_tp = ctx.create_topic(status_type, status_topic)

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

        self._active_session: Optional[CommandConsumerSession] = None
```

### Sending a Command

```python
    async def execute(
        self,
        command,
        timeout: float = 30.0,
        on_status: Callable = None,
        on_exec_status: Callable = None,
    ) -> CommandResult:
        """
        Send a command and wait for completion.

        Args:
            command: The command sample to send. Must have sessionID set.
            timeout: Maximum wait time in seconds.
            on_status: Optional callback for intermediate status updates.
            on_exec_status: Optional callback for execution status updates.

        Returns:
            CommandResult with the final status.

        Raises:
            UmaaCommandException: If rejected or timed out.
            asyncio.TimeoutError: If timeout exceeded.
        """
        if self._active_session is not None:
            raise UmaaCommandException("Consumer already has an active session")

        session = CommandConsumerSession(
            consumer=self,
            command=command,
            on_status=on_status,
            on_exec_status=on_exec_status,
        )
        self._active_session = session

        # Set CFTs to filter on this session's unique ID
        self._set_session_filter(command.sessionID)

        try:
            return await asyncio.wait_for(session.run(), timeout=timeout)
        finally:
            self._active_session = None
            self._reset_filters()
```

### Close

```python
    async def close(self) -> None:
        """Cancel active session, dispose command instance, then close DDS entities.

        Per ICD §5.1.6.2 — Consumer shutdown:
        1. Cancel any incomplete request (dispose command to signal cancel)
        2. Unregister as publisher of command (close writer)
        3. Unsubscribe from status/ack/exec_status (close readers)
        """
        if self._active_session is not None:
            # Dispose command instance — signals cancel to provider (ICD §5.1.4.5)
            ih = self._command_writer.lookup_instance(self._active_session.command)
            if ih != dds.InstanceHandle.nil:
                self._command_writer.dispose_instance(ih)
            self._active_session = None
            self._reset_filters()

        self._command_writer.close()
        self._ack_reader.close()
        self._status_reader.close()
        if self._exec_status_reader is not None:
            self._exec_status_reader.close()
```

### Instance Disposal During Normal Operation

After the provider publishes a terminal status (COMPLETED/FAILED), the consumer disposes its command instance to signal cleanup. This triggers the provider to dispose its response instances (ICD §5.1.5):

```python
    def _on_terminal_status(self):
        """Called when terminal status received — dispose command instance (ICD §5.1.5)."""
        ih = self._command_writer.lookup_instance(self._active_session.command)
        if ih != dds.InstanceHandle.nil:
            self._command_writer.dispose_instance(ih)
```

### Instance State Detection in Consumer `_run()`

The consumer's status reader loop checks `instance_state` for each sample. When the provider disposes its status instance (`NOT_ALIVE_DISPOSED`) or crashes (`NOT_ALIVE_NO_WRITERS`), the consumer detects this inline — no separate liveliness listener required:

```python
    async def _run(self):
        """Listen for status updates, detecting provider dispose/crash via instance state.

        Branches on sample validity first (RTI keyed_data_advanced pattern):
        - valid data (ALIVE) → normal status update, routed to active session
        - NOT valid → metadata message → check instance_state:
          - NOT_ALIVE_DISPOSED → provider disposed status = cleanup complete
          - NOT_ALIVE_NO_WRITERS → provider writer gone (crash/shutdown)
            → fail active session with SERVICE_FAILED
        """
        async for samples in self._status_reader.take_async():
            for sample in samples:
                if sample.info.valid:
                    # Normal status processing (instance is ALIVE)
                    if self._active_session is not None:
                        self._active_session.on_status(sample.data)
                else:
                    # Metadata message — check instance state
                    instance_state = sample.info.state.instance_state

                    if instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                        # Provider crashed or shut down without dispose
                        if self._active_session is not None:
                            self._active_session.fail("Provider lost (no writers)")

                    elif instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                        # Provider explicitly disposed status — cleanup confirmed
                        # (Normal flow: provider disposes after consumer disposes command)
                        pass
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
| **Active** | `sessionID = &hex(...)` | After `execute()` sends a command |

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
            raise UmaaCommandException(
                CommandFailedReasonEnum.DENIED,
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

# --- Consumer side: unchanged ---

engine_consumer = CommandConsumer(ctx,
    service_name="EngineControlClient",
    command_type=EngineCommandType,
    ack_type=EngineCommandAckReportType,
    status_type=EngineCommandStatusType,
    command_topic=EngineCommandTypeTopic,
    ack_topic=EngineCommandAckReportTypeTopic,
    status_topic=EngineCommandStatusTypeTopic,
)

# Send a command
result = await engine_consumer.execute(engine_cmd, timeout=30.0)
```

---

## Related Documents

- [Command State Machine](command-state-machine.md) — `CommandProviderSession` / `CommandConsumerSession` lifecycle
- [Composite Services](composite-services.md) — Tier 4 command services with extra slots
- [Error Handling](error-handling.md) — `UmaaCommandException` and rejection handling
