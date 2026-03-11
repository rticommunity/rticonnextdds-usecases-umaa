# Error Handling

> 4-layer exception strategy — exceptions at service boundaries, return values at the DDS I/O layer, `UmaaCommandException` for command interactions.

---

## Design Principles

| Principle | Rationale |
|---|---|
| **Exceptions at service boundaries** | Application callbacks raise exceptions to signal errors. Services catch and handle them (e.g., send error status). |
| **Return values at I/O layer** | DDS `write()` and `read()` return status codes. These are checked internally by services. |
| **`UmaaCommandException` for commands** | A typed exception with session ID, reason code, and lifecycle stage for precise error handling. |
| **No silent failures** | Assembly errors, command rejections, and DDS errors are all surfaced — either as exceptions, callbacks, or logged warnings. |

---

## 4-Layer Error Model

```
┌───────────────────────────────────────────────────────────────┐
│ Layer 4: Application Code                                     │
│   Catches UmaaCommandException, asyncio.TimeoutError          │
│   Provides on_command callbacks that return (accepted, reason) │
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

## UmaaCommandException

Raised by `CommandConsumerSession` when a command is rejected or fails:

```python
class UmaaCommandException(Exception):
    """Raised when a UMAA command interaction fails."""

    def __init__(
        self,
        session_id: str,
        reason: str,
        stage: str,
    ):
        """
        Args:
            session_id: The command session UUID.
            reason: Human-readable rejection/error reason from the provider.
            stage: Lifecycle stage where failure occurred.
                One of: "ACK", "EXECUTING", "STATUS", "TIMEOUT"
        """
        self.session_id = session_id
        self.reason = reason
        self.stage = stage
        super().__init__(
            f"Command {session_id} failed at {stage}: {reason}"
        )
```

### Usage

```python
try:
    result = await engine_consumer.execute(cmd, timeout=30.0)
except UmaaCommandException as e:
    if e.stage == "ACK":
        print(f"Rejected: {e.reason}")
    elif e.stage == "EXECUTING":
        print(f"Execution error: {e.reason}")
except asyncio.TimeoutError:
    print("Command timed out — provider may be offline")
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
# Inside CommandProviderSession.run()
try:
    result = await self._execute_with_cancel()
    self._state = "COMPLETED"
    await self._send_status("COMPLETED", result=result)
except asyncio.CancelledError:
    self._state = "CANCELED"
    await self._send_status("CANCELED")
except Exception as e:
    self._state = "ERROR"
    await self._send_status("ERROR", reason=str(e))
```

### CommandConsumer

| Error Case | Handling |
|---|---|
| Negative ack received | Raises `UmaaCommandException(stage="ACK")` |
| Error status received | Raises `UmaaCommandException(stage="EXECUTING")` |
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
   ├── raise UmaaCommandException    │
   │   stage="ACK"                   │
   │   reason="Active command..."    │
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
   ├── raise UmaaCommandException    │
   │   stage="EXECUTING"             │
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
