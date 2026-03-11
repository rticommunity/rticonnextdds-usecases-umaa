# Command State Machine

> `CommandProviderSession` and `CommandConsumerSession` — async coroutines implementing the UMAA ICD §4.1 command lifecycle.

---

## Overview

Every UMAA command interaction follows a defined lifecycle (ICD §4.1.5):

```
Consumer sends Command
    → Provider sends Ack (accepted/rejected)
    → Provider sends Status updates (EXECUTING → COMPLETED/CANCELED)
    → (Optional) Provider sends ExecutionStatus during execution
```

The state machine is implemented as two cooperating async coroutine classes:
- **`CommandProviderSession`** — server-side, one per active command
- **`CommandConsumerSession`** — client-side, one per sent command

Both run entirely on the `asyncio` event loop — no threads, no locks.

**C++ SDK comparison:** The PSU/ARL C++ SDK implements `CommandStateMachine` with poll-based state transitions in `cycle()`. The JHU/APL C++ SDK uses `CommandSessionManager` with state tracking. UMAAPy2 replaces both with `async def run()` coroutines that suspend at `await` points until the next event arrives.

---

## CommandProviderSession

### Lifecycle

```
                    ┌─────────────────┐
   Command arrives  │   RECEIVED      │
                    └────────┬────────┘
                             │
                    ┌────────▼────────┐
                    │   VALIDATING    │  on_command() callback
                    └────────┬────────┘
                             │
               ┌─────────────┴─────────────┐
               │                           │
      ┌────────▼────────┐        ┌─────────▼─────────┐
      │   ACCEPTED      │        │   REJECTED        │
      │   (send ack)    │        │   (send ack)      │
      └────────┬────────┘        └───────────────────┘
               │
      ┌────────▼────────┐
      │   EXECUTING     │  on_execute() callback
      │   (send status) │  (may send ExecutionStatus)
      └────────┬────────┘
               │
     ┌─────────┴──────────┐
     │                    │
┌────▼─────┐       ┌─────▼──────┐
│ COMPLETED│       │ CANCELED   │
│(send sts)│       │(send sts)  │
└──────────┘       └────────────┘
```

### Class Definition

```python
class CommandProviderSession:
    """
    Manages one command's lifecycle on the provider side.

    Created by CommandProvider when a command arrives.
    Runs as an asyncio Task via create_task(session.run()).
    """

    def __init__(
        self,
        provider: CommandProvider,
        command,
        on_command: Callable,
    ):
        self._provider = provider
        self._command = command
        self._session_id = str(command.sessionID)
        self._on_command = on_command
        self._cancel_event = asyncio.Event()
        self._state = "RECEIVED"
```

### The `run()` Coroutine

The entire lifecycle is a single `async def run()`:

```python
    async def run(self) -> None:
        """Execute the full command lifecycle."""
        try:
            # Phase 1: Validate
            self._state = "VALIDATING"
            accepted, reason = await self._on_command(self._command)

            if not accepted:
                # Rejected — send negative ack, done
                self._state = "REJECTED"
                await self._send_ack(accepted=False, reason=reason)
                return

            # Phase 2: Accepted — send ack
            self._state = "ACCEPTED"
            await self._send_ack(accepted=True)

            # Phase 3: Execute — call the execution callback
            self._state = "EXECUTING"
            await self._send_status("EXECUTING")

            try:
                result = await self._execute_with_cancel()
            except asyncio.CancelledError:
                # Cancellation requested during execution
                self._state = "CANCELED"
                await self._send_status("CANCELED")
                return

            # Phase 4: Completed
            self._state = "COMPLETED"
            await self._send_status("COMPLETED", result=result)

        except Exception as e:
            # Unhandled error — send error status
            self._state = "ERROR"
            await self._send_status("ERROR", reason=str(e))

        finally:
            # Remove from provider's active sessions
            self._provider._active_sessions.pop(self._session_id, None)
```

### Cancel Support

```python
    async def _execute_with_cancel(self):
        """Run the execution callback, cancellable via cancel_event."""
        execute_task = asyncio.create_task(
            self._on_command_execute(self._command)
        )
        cancel_task = asyncio.create_task(self._cancel_event.wait())

        done, pending = await asyncio.wait(
            [execute_task, cancel_task],
            return_when=asyncio.FIRST_COMPLETED,
        )

        for task in pending:
            task.cancel()
            try:
                await task
            except asyncio.CancelledError:
                pass

        if cancel_task in done:
            raise asyncio.CancelledError()

        return execute_task.result()

    async def cancel(self) -> None:
        """Request cancellation of this session."""
        self._cancel_event.set()
```

### Ack and Status Publishing

```python
    async def _send_ack(self, accepted: bool, reason: str = "") -> None:
        """Publish CommandAckReportType."""
        ack = self._provider._ack_type()
        ack.source = self._provider._source_id
        ack.sessionID = self._command.sessionID
        ack.timeStamp = current_timestamp()
        ack.command = self._command             # full command echoed back
        self._provider._ack_writer.write(ack)

    async def _send_status(
        self,
        command_status: str,
        reason: str = "",
        log_message: str = "",
    ) -> None:
        """Publish CommandStatusType."""
        sts = self._provider._status_type()
        sts.source = self._provider._source_id
        sts.sessionID = self._command.sessionID
        sts.timeStamp = current_timestamp()
        sts.commandStatus = command_status       # CommandStatusEnumType value
        sts.commandStatusReason = reason          # CommandStatusReasonEnumType value
        sts.logMessage = log_message
        self._provider._status_writer.write(sts)

    async def send_execution_status(self, exec_status) -> None:
        """
        Publish an ExecutionStatusType during execution.

        Called by the on_command_execute callback to report progress.
        """
        if self._provider._exec_status_writer is not None:
            self._provider._exec_status_writer.write(exec_status)
```

---

## CommandConsumerSession

### Lifecycle

```
                    ┌─────────────────┐
   execute() called │   SENDING       │  write command
                    └────────┬────────┘
                             │
                    ┌────────▼────────┐
                    │   WAITING_ACK   │  await ack
                    └────────┬────────┘
                             │
               ┌─────────────┴─────────────┐
               │                           │
      ┌────────▼────────┐        ┌─────────▼─────────┐
      │   ACCEPTED      │        │   REJECTED        │
      └────────┬────────┘        │  raise exception  │
               │                 └───────────────────┘
      ┌────────▼────────┐
      │ WAITING_COMPLETE│  await final status
      │ (recv statuses) │
      └────────┬────────┘
               │
      ┌────────▼────────┐
      │   DONE          │  return CommandResult
      └─────────────────┘
```

### Class Definition

```python
class CommandConsumerSession:
    """
    Manages one command's lifecycle on the consumer side.

    Created by CommandConsumer.execute().
    """

    def __init__(
        self,
        consumer: CommandConsumer,
        command,
        on_status: Optional[Callable] = None,
        on_exec_status: Optional[Callable] = None,
    ):
        self._consumer = consumer
        self._command = command
        self._session_id = str(command.sessionID)
        self._on_status = on_status
        self._on_exec_status = on_exec_status
        self._ack_received = asyncio.Event()
        self._complete = asyncio.Event()
        self._ack_result = None
        self._final_status = None
```

### The `run()` Coroutine

```python
    async def run(self) -> CommandResult:
        """Send the command and wait for the complete lifecycle."""

        # Phase 1: Send command
        self._consumer._command_writer.write(self._command)

        # Phase 2: Start listening for responses
        listener_tasks = [
            asyncio.create_task(self._listen_ack()),
            asyncio.create_task(self._listen_status()),
        ]
        if self._consumer._exec_status_reader is not None:
            listener_tasks.append(
                asyncio.create_task(self._listen_exec_status())
            )

        try:
            # Phase 3: Wait for ack
            await self._ack_received.wait()

            if not self._ack_result.accepted:
                raise UmaaCommandException(
                    session_id=self._session_id,
                    reason=self._ack_result.reason,
                    stage="ACK",
                )

            # Phase 4: Wait for final status (COMPLETED or CANCELED or ERROR)
            await self._complete.wait()

            return CommandResult(
                session_id=self._session_id,
                status=self._final_status,
            )

        finally:
            # Cancel listener tasks
            for task in listener_tasks:
                task.cancel()
                try:
                    await task
                except asyncio.CancelledError:
                    pass
```

### Response Routing

Consumer listeners route responses by `sessionID`:

```python
    async def _listen_ack(self):
        """Listen for ack matching our sessionID."""
        async for samples in self._consumer._ack_reader.take_async():
            for sample in samples:
                if not sample.info.valid:
                    continue
                if str(sample.data.sessionID) == self._session_id:
                    self._ack_result = sample.data
                    self._ack_received.set()
                    return

    async def _listen_status(self):
        """Listen for status matching our sessionID."""
        async for samples in self._consumer._status_reader.take_async():
            for sample in samples:
                if not sample.info.valid:
                    continue
                if str(sample.data.sessionID) != self._session_id:
                    continue

                # Notify callback for intermediate updates
                if self._on_status:
                    self._on_status(sample.data)

                # Check for terminal states
                if sample.data.commandStatus in (
                    "COMPLETED", "CANCELED", "ERROR",
                ):
                    self._final_status = sample.data
                    self._complete.set()
                    return

    async def _listen_exec_status(self):
        """Listen for execution status matching our sessionID."""
        async for samples in self._consumer._exec_status_reader.take_async():
            for sample in samples:
                if not sample.info.valid:
                    continue
                if str(sample.data.sessionID) == self._session_id:
                    if self._on_exec_status:
                        self._on_exec_status(sample.data)
```

---

## ICD Compliance

### §4.1.4.4 — Active Command Rejection

A provider rejects new commands while an active command session exists:

```python
# In CommandProvider._run()
if session_id in self._active_sessions:
    await self._send_ack(sample.data, rejected=True,
        reason="Active command session exists")
    continue
```

### §4.1.5 — Message Ordering

The ICD requires this publication order:
1. **Ack** (accepted or rejected)
2. **Status** (EXECUTING)
3. **ExecutionStatus** (0 or more, during execution)
4. **Status** (COMPLETED or CANCELED)

The `run()` coroutine enforces this sequentially — each `await` enforces the order naturally.

### §4.1.5 — Two-Phase Cleanup

On shutdown, providers:
1. Cancel all active `CommandProviderSession` instances
2. Wait for each session to publish its final CANCELED status
3. Close DDS entities

```python
async def close(self) -> None:
    # Phase 1: Cancel sessions and wait for CANCELED status
    cancel_tasks = [session.cancel() for session in self._active_sessions.values()]
    if cancel_tasks:
        await asyncio.gather(*cancel_tasks)
    # Phase 2: Close entities
    self._command_reader.close()
    self._ack_writer.close()
    self._status_writer.close()
```

---

## JIRA Reference

**UMAA-3014:** Removed the requirement for providers to subscribe to their own `FunctionCommandStatusType` for persisted-command recovery. This simplifies the provider entity layout — providers do not need a status reader. Consumer-side persisted recovery is not feasible with VOLATILE durability (and TRANSIENT_LOCAL was determined to be inapplicable because status data is keyed by `sessionID`, which changes per command).

---

## Startup Behavior

### Provider Startup

1. Provider constructs → entities created, CFT applied
2. `_run()` coroutine started via `asyncio.create_task()`
3. Provider is immediately ready to receive commands (no warm-up phase)

### Consumer Startup

1. Consumer constructs → entities created
2. Consumer calls `execute()` when ready to send a command
3. No background listener — listeners are started per-session in `run()`

---

## Error Model

| Error | Source | Handling |
|---|---|---|
| **Rejection** | Provider ack with `accepted=False` | Consumer raises `UmaaCommandException(stage="ACK")` |
| **Timeout** | `asyncio.wait_for()` in consumer | Raises `asyncio.TimeoutError` |
| **Provider crash** | Liveliness loss detected by DDS | Consumer's `_listen_ack()` never fires → timeout |
| **Unhandled exception in on_command** | Provider callback | Session enters ERROR state, publishes error status |
| **Cancellation** | `session.cancel()` or shutdown | Session enters CANCELED state, publishes canceled status |

See [Error Handling](error-handling.md) for the complete error strategy.

---

## Usage Example

### Provider

```python
async def handle_engine_command(command):
    """Validate and accept/reject the command."""
    if command.throttle < 0 or command.throttle > 100:
        return False, "Throttle out of range"
    return True, ""

async def execute_engine_command(command, session: CommandProviderSession):
    """Execute the accepted command."""
    await set_throttle(command.throttle)
    # Report progress
    exec_status = EngineExecutionStatusType()
    exec_status.progress = 50
    await session.send_execution_status(exec_status)
    await stabilize_engine()
    return EngineResult(final_throttle=command.throttle)

provider = CommandProvider(ctx,
    service_name="EngineControl",
    command_type=EngineCommandType,
    ack_type=EngineCommandAckReportType,
    status_type=EngineCommandStatusType,
    exec_status_type=EngineExecutionStatusType,
    command_topic=EngineCommandTypeTopic,
    ack_topic=EngineCommandAckReportTypeTopic,
    status_topic=EngineCommandStatusTypeTopic,
    exec_status_topic=EngineExecutionStatusTypeTopic,
    source_id=my_vehicle_id,
    on_command=handle_engine_command,
)
```

### Consumer

```python
cmd = EngineCommandType()
cmd.sessionID = generate_session_id()
cmd.throttle = 75

try:
    result = await engine_consumer.execute(cmd, timeout=30.0)
    print(f"Command completed: {result.status}")
except UmaaCommandException as e:
    print(f"Command rejected: {e.reason}")
except asyncio.TimeoutError:
    print("Command timed out")
```
