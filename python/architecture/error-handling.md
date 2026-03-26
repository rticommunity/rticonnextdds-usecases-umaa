# Error Handling

> 4-layer exception strategy — exceptions at service boundaries, return values at the DDS I/O layer, `CommandHookError`/`CommandFailedError` for command interactions (D40).

---

## Design Principles

| Principle | Rationale |
|---|---|
| **Exceptions at service boundaries** | Application callbacks raise exceptions to signal errors. Services catch and handle them (e.g., send error status). |
| **Return values at I/O layer** | DDS `write()` and `read()` return status codes. These are checked internally by services. |
| **`CommandHookError` (provider) / `CommandFailedError` (consumer)** | Typed exceptions with reason codes for command failure handling (D40). Provider hooks raise `CommandHookError`; consumer receives `CommandFailedError`. |
| **No silent failures** | Assembly errors, command rejections, and DDS errors are all surfaced — either as exceptions, callbacks, or logged warnings. |

---

## 4-Layer Error Model

```
┌───────────────────────────────────────────────────────────────┐
│ Layer 4: Application Code                                     │
│   Provider hooks raise CommandHookError to trigger FAILED      │
│   Consumer receives CommandFailedError via on_terminal()       │
├───────────────────────────────────────────────────────────────┤
│ Layer 3: Service Templates (CommandProvider, ReportConsumer)   │
│   Catches callback exceptions → sends error status             │
│   Calls on_assembly_error for multi-topic failures            │
├───────────────────────────────────────────────────────────────┤
│ Layer 2: Utility Functions (read_large_set, read_large_list)  │
│   Returns empty lists on soft failure                         │
│   Raises AssemblyError on hard failure (configurable)         │
├───────────────────────────────────────────────────────────────┤
│ Layer 1: DDS I/O (RTI Connext Python API)                     │
│   write() → DDS return code                                   │
│   read()/take() → sample + SampleInfo.valid                   │
│   Status conditions, liveliness callbacks                     │
└───────────────────────────────────────────────────────────────┘
```

---

## Command Exceptions (D40)

D40 split the former `UmaaCommandException` into two distinct types — one per side of the command interaction.

### CommandHookError (Provider-side)

Raised by provider subclass hooks (`validate_command`, `on_commanded`, `on_executing`) to trigger FAILED status with a specific reason code. Caught by `run()`'s `except Exception` handler.

```python
class CommandHookError(Exception):
    """Raised by provider hooks to trigger FAILED status."""

    def __init__(self, reason: CommandFailedReasonEnum, message: str = ""):
        self.reason = reason
        self.message = message
        super().__init__(f"Command hook failed ({reason}): {message}")
```

### CommandFailedError (Consumer-side)

Represents a FAILED status received from the provider. Passed to consumer hooks or raised by consumer utilities.

```python
class CommandFailedError(Exception):
    """Represents a command failure reported by the provider."""

    def __init__(
        self,
        reason: CommandFailedReasonEnum,
        message: str = "",
        session_id: bytes = None,
    ):
        self.reason = reason
        self.message = message
        self.session_id = session_id
        super().__init__(f"Command failed ({reason}): {message}")
```

### Usage

```python
# Provider: hook raises CommandHookError to trigger FAILED
class MyProvider(CommandProvider):
    async def validate_command(self, command):
        if command.throttle > 100:
            return (False, "Throttle out of range")
        return (True, "")

    async def on_executing(self, session):
        if not self._engine.is_online():
            raise CommandHookError(
                CommandFailedReasonEnum.RESOURCE_FAILED,
                "Engine offline")
        await self._engine.set_throttle(session.command.throttle)

# Consumer: on_terminal receives failure info from status sample
class MyConsumer(CommandConsumer):
    async def on_terminal(self, session_id, status):
        if status and status.commandStatus == CommandStatusEnum.FAILED:
            print(f"Failed: {status.commandStatusReason} — {status.logMessage}")
```

---

## AssemblyError

Raised by `read_large_set()` / `read_large_list()` when multi-topic assembly fails:

```python
class AssemblyError(Exception):
    """Raised when multi-topic element assembly fails."""

    def __init__(self, root_type: str, slot_name: str, message: str):
        self.root_type = root_type
        self.slot_name = slot_name
        super().__init__(
            f"Assembly failed for {root_type}.{slot_name}: {message}"
        )
```

Services can handle this via the `on_assembly_error` callback:

```python
consumer = LargeSetReportConsumer(ctx,
    report_type=ContactReportType,
    report_topic=ContactReportTypeTopic,
    elements=[SetElementSlot("contacts", ...)],
    on_elements=handle_contacts,
    on_assembly_error=handle_assembly_error,
)

def handle_assembly_error(error: AssemblyError):
    logging.warning(f"Assembly failed: {error}")
```

---

## Error Handling by Service Type

### CommandProvider

| Error Case | Handling |
|---|---|
| Callback raises exception | Session enters ERROR state, publishes error status to consumer |
| Active command exists when new arrives | Sends negative ack (ICD §4.1.4.4) |
| DDS write failure | Logged as warning; session attempts cleanup |
| Shutdown during active session | Session canceled, CANCELED status published |

```python
# Inside CommandProviderSession.run() — simplified
try:
    while self._current_state not in _TERMINAL_STATES:
        # ... state-machine dispatch (see command-services.md) ...
        pass

except asyncio.CancelledError:
    # Terminal state already set by cancel()/fail() — just a wakeup
    _logger.debug("Session %s: cancelled in state %s",
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

### CommandConsumer

| Error Case | Handling |
|---|---|
| FAILED status received | `on_status()` hook fires with FAILED status; `on_terminal()` fires after session cleanup |
| Validation rejected (ISSUED → FAILED) | `on_status()` receives FAILED(VALIDATION_FAILED); `on_terminal()` fires |
| Timeout | `asyncio.wait_for()` raises `asyncio.TimeoutError` |
| Provider crash (instance state detection) | Consumer's status reader `_run()` loop detects `NOT_ALIVE_NO_WRITERS` on the status instance → `_active_session.fail("Provider lost")` → disposes command instance (ICD §5.1.4.5). No separate listener needed — detection is inline with `take_async()`. |

### ReportConsumer

| Error Case | Handling |
|---|---|
| Invalid sample | `sample.info.valid` check — silently skipped |
| Callback raises exception | Logged, event loop continues |
| Reader liveliness loss | Detectable via DDS status conditions (application-level monitoring) |

### Large Set / Large List Consumers

| Error Case | Handling |
|---|---|
| No elements found after retries | Returns empty list (soft failure) or raises `AssemblyError` (hard failure) |
| Partial element delivery | Accumulate-and-retry pattern handles delayed delivery |
| Stale elements in cache | QueryCondition scoping filters by foreign key |

---

## DDS-Level Error Handling

### Sample Validity and Instance State

Every reader checks `sample.info.valid` before processing data. For **non-command readers** (reports, etc.), invalid samples are simply skipped. For **command readers**, the `else` branch checks instance state for cancel/crash detection — see "Instance State Detection" below.

```python
# Simple pattern for non-command readers (reports, etc.)
async for samples in reader.take_async():
    for sample in samples:
        if not sample.info.valid:
            continue  # Disposed/no-writers/metadata-only — skip
        process(sample.data)

# Command readers: branch on valid first, check instance_state in else
# (see command-services.md for full pattern)
```

### Instance State Detection (Replaces Liveliness Listener)

Command topics use `MANUAL_BY_TOPIC` liveliness. Rather than using a separate `LivelinessMonitor` listener (which fires on the DDS middleware thread), v2 detects writer loss **inline** in the `_run()` data processing loop by checking `sample.info.state.instance_state` on every sample returned by `take_async()`.

This approach is consistent with both C++ SDKs (ARL/PSU `CommandProviderBase` and JHU/APL `ControlServiceProvider`) and provides **per-instance** granularity:

| Instance State | Meaning | Consumer Action | Provider Action |
|---|---|---|---|
| `NOT_ALIVE_DISPOSED` | Remote side explicitly disposed | Provider cleanup confirmed | Consumer canceled → cancel session, dispose responses |
| `NOT_ALIVE_NO_WRITERS` | Remote writer gone (crash) | Fail active session | Treat as cancel |

```python
# Consumer status reader loop — detects provider crash inline
async for samples in self._status_reader.take_async():
    for sample in samples:
        if sample.info.valid:
            # Normal status processing
            ...
        else:
            # Metadata message — check instance state
            instance_state = sample.info.state.instance_state
            if instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                # Provider crashed — fail the active session
                if self._active_session is not None:
                    self._active_session.fail("Provider lost (no writers)")
            elif instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                pass  # Provider cleanup confirmed
```

Key fields of the disposed/lost instance are recovered via `reader.key_value(sample.info.instance_handle)` for session routing. See `utilities.md` for the full pattern.

### StatusMask (Optional)

Listeners can still be attached for **diagnostic** status monitoring (e.g., sample lost/rejected logging). These are separate from the instance state detection mechanism used for command lifecycle:

```python
# Optional diagnostic listener — not required for cancel/crash detection
reader = ctx.create_reader(
    status_type, status_topic,
    listener=DiagnosticLogger(),
    listener_mask=dds.StatusMask.SAMPLE_LOST | dds.StatusMask.SAMPLE_REJECTED,
)
```

---

## Error Flow Diagrams

### Command Rejection

```
Consumer                          Provider
   │                                 │
   ├─── write(command) ─────────────►│
   │                                 ├── check active sessions
   │                                 ├── REJECT (active exists)
   │◄── ack(accepted=false) ────────┤
   │                                 │
   │◄── status(FAILED,               │
   │    RESOURCE_REJECTED) ─────────┤
   ├── on_terminal(FAILED)           │
```

### Command Timeout

```
Consumer                          Provider (offline)
   │                                 │
   ├─── write(command) ─────────────►│ (no response)
   │                                 │
   │    asyncio.wait_for(timeout)    │
   │       ...                       │
   │    TIMEOUT                      │
   │                                 │
   ├── raise asyncio.TimeoutError    │
```

### Provider-Side Error

```
Consumer                          Provider
   │                                 │
   ├─── write(command) ─────────────►│
   │◄── ack(accepted=true) ─────────┤
   │                                 ├── on_command raises Exception
   │◄── status(ERROR, reason) ──────┤
   │                                 │
   ├── on_status(FAILED)             │
   ├── on_terminal(FAILED)           │
```

---

## Logging

All error handling uses Python's `logging` module:

```python
import logging
logger = logging.getLogger("rtiumaapy")

# In service code:
except Exception as e:
    logger.error(f"Service {self._service_name}: {e}", exc_info=True)
```

Applications configure logging level:

```python
logging.basicConfig(level=logging.INFO)
logging.getLogger("rtiumaapy").setLevel(logging.DEBUG)
```
