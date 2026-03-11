# Utilities

> Timestamp, GUID, and listener utility classes.

---

## Timestamp

A wrapper for UMAA's timestamp type (`DateTimeType`) with conversion utilities:

```python
from datetime import datetime, timezone

class UmaaTimestamp:
    """Wrapper for UMAA DateTimeType with Python datetime conversion."""

    @staticmethod
    def now() -> DateTimeType:
        """Create a DateTimeType with the current UTC time."""
        dt = DateTimeType()
        now = datetime.now(timezone.utc)
        dt.seconds = int(now.timestamp())
        dt.nanoseconds = now.microsecond * 1000
        return dt

    @staticmethod
    def from_datetime(dt: datetime) -> DateTimeType:
        """Convert a Python datetime to DateTimeType."""
        result = DateTimeType()
        result.seconds = int(dt.timestamp())
        result.nanoseconds = dt.microsecond * 1000
        return result

    @staticmethod
    def to_datetime(ts: DateTimeType) -> datetime:
        """Convert a DateTimeType to Python datetime (UTC)."""
        return datetime.fromtimestamp(
            ts.seconds + ts.nanoseconds / 1e9,
            tz=timezone.utc,
        )
```

### Usage

```python
report = GPSReportType()
report.timestamp = UmaaTimestamp.now()
provider.write(report)

# Reading
received_time = UmaaTimestamp.to_datetime(sample.data.timestamp)
print(f"Received at: {received_time.isoformat()}")
```

---

## GUID Utilities

UMAA identifier fields (`sessionID`, `source.id`, `destination.id`, `setID`, etc.) are all `NumericGUID` — `typedef octet NumericGUID[16]` — raw 16-byte arrays. `GUIDUtil` provides generation, conversion, and hex formatting for CFT filter expressions:

```python
import uuid

class GUIDUtil:
    """GUID generation and conversion for NumericGUID (octet[16]) fields."""

    @staticmethod
    def generate() -> bytes:
        """Generate a random 128-bit GUID as 16 raw bytes."""
        return uuid.uuid4().bytes

    @staticmethod
    def to_hex(guid: bytes) -> str:
        """Convert 16-byte GUID to space-separated hex for &hex() CFT expressions.

        Example: b'\x55\x0e...' → '55 0e 84 00 ...'
        """
        return ' '.join(f'{b:02x}' for b in guid)

    @staticmethod
    def to_string(guid: bytes) -> str:
        """Convert 16-byte GUID to human-readable UUID string.

        Example: b'\x55\x0e...' → '550e8400-e29b-41d4-a716-446655440000'
        """
        return str(uuid.UUID(bytes=guid))

    @staticmethod
    def from_string(s: str) -> bytes:
        """Convert a UUID string to 16 raw bytes.

        Example: '550e8400-e29b-41d4-a716-446655440000' → b'\x55\x0e...'
        """
        return uuid.UUID(s).bytes
```

### Usage

```python
# Generate a session ID for a command
cmd = EngineCommandType()
cmd.sessionID = GUIDUtil.generate()            # → bytes(16), directly assignable to NumericGUID

# Generate a source ID for a provider
source_id = GUIDUtil.generate()
provider = EngineControlProvider(ctx, source_id=source_id)

# Build a CFT filter expression
filter_expr = f"destination.id = &hex({GUIDUtil.to_hex(source_id)})"

# Human-readable logging
logger.info("Session %s started", GUIDUtil.to_string(cmd.sessionID))
```

---

## DataReader Instance State Detection

The RTI Python API exposes instance state via `sample.info.state.instance_state` on every sample returned by `take()` / `take_async()`. This is the **primary mechanism** for detecting command cancellation, cleanup completion, and writer loss — inline with the data processing loop, with no separate listener thread.

### Instance State Values

| State | Constant | Meaning | Action |
|---|---|---|---|
| **Alive** | `dds.InstanceState.ALIVE` | Writer is active, sample has data | Normal processing |
| **Not alive — disposed** | `dds.InstanceState.NOT_ALIVE_DISPOSED` | Remote side explicitly called `dispose_instance()` | Cancel / cleanup (session-level) |
| **Not alive — no writers** | `dds.InstanceState.NOT_ALIVE_NO_WRITERS` | Writer is gone (crash, shutdown, or unmatched) | Treat as cancel / fail session |

When instance state is `NOT_ALIVE_DISPOSED` or `NOT_ALIVE_NO_WRITERS`, `sample.info.valid` is `False` — there is no data payload. Use `reader.key_value(instance_handle)` to recover the key fields (e.g., `sessionID`, `source`) for session routing.

### Pattern (RTI keyed_data_advanced / both C++ SDKs)

Branch on `sample.info.valid` first. Dispose and no-writers are metadata messages
with `valid == False` — check instance state in the `else` branch:

```python
async for samples in reader.take_async():
    for sample in samples:
        if sample.info.valid:
            # Normal processing — instance is ALIVE and data is valid
            process(sample.data)
        else:
            # Metadata message (no data payload).
            # Use key_value() to recover key fields for routing.
            instance_state = sample.info.state.instance_state

            if instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                # Remote side explicitly disposed this instance
                key_data = reader.key_value(sample.info.instance_handle)
                handle_disposed(key_data)  # e.g., cancel session, cleanup

            elif instance_state == dds.InstanceState.NOT_ALIVE_NO_WRITERS:
                # Writer gone (crash / shutdown without explicit dispose)
                key_data = reader.key_value(sample.info.instance_handle)
                handle_no_writers(key_data)  # e.g., fail session
```

### API Reference (Verified)

| API | Usage |
|---|---|
| `sample.info.state.instance_state` | Returns `dds.InstanceState` — compare with `==` |
| `reader.key_value(instance_handle)` | Returns key-only sample object (data fields unset) |
| `sample.info.valid` | `False` when instance is not alive |
| `sample.info.instance_handle` | Handle to pass to `key_value()` |

### Where Used

| Service | Reader | `NOT_ALIVE_DISPOSED` | `NOT_ALIVE_NO_WRITERS` |
|---|---|---|---|
| `CommandProvider._run()` | command reader | Consumer canceled (ICD §5.1.4.5) → cancel session + dispose response instances | Consumer crashed → treat as cancel |
| `CommandConsumer._run()` | status reader | Provider cleanup confirmed → no action needed | Provider crashed → fail active session |

This replaces the previous `LivelinessMonitor` (NoOpDataReaderListener subclass) approach. Instance state detection is:
- **Inline** — no separate thread, no `call_soon_threadsafe()` bridge
- **Per-instance** — detects individual session disposal, not just global writer loss
- **Consistent** — matches both C++ SDK implementations (ARL/PSU polling model and JHU/APL listener model)

---

## DataReader Listeners (Optional)

The RTI Python API provides `dds.NoOpDataReaderListener` — a base class with empty implementations of all 7 listener callbacks. These remain available for status monitoring use cases beyond instance state (e.g., QoS event logging, subscription matching diagnostics), but are **not required** for command lifecycle detection.

### Available Callbacks

| Method | Signature |
|---|---|
| `on_data_available` | `(self, reader: DataReader)` |
| `on_liveliness_changed` | `(self, reader, status: LivelinessChangedStatus)` |
| `on_subscription_matched` | `(self, reader, status: SubscriptionMatchedStatus)` |
| `on_requested_deadline_missed` | `(self, reader, status: RequestedDeadlineMissedStatus)` |
| `on_requested_incompatible_qos` | `(self, reader, status: RequestedIncompatibleQosStatus)` |
| `on_sample_lost` | `(self, reader, status: SampleLostStatus)` |
| `on_sample_rejected` | `(self, reader, status: SampleRejectedStatus)` |

> **Threading note:** DDS listeners run on the middleware thread, not the asyncio event loop. If used, any interaction with asyncio state must go through `loop.call_soon_threadsafe()`. Instance state detection avoids this entirely by operating inline with `take_async()`.

### Attaching Listeners

Listeners can be passed at reader construction time (via `DDSContext.create_reader()`) or attached later:

```python
# At construction via DDSContext
reader = ctx.create_reader(
    data_type=SomeType,
    topic_name=some_topic,
    listener=MyStatusLogger(),
    listener_mask=dds.StatusMask.SAMPLE_LOST | dds.StatusMask.SAMPLE_REJECTED,
)

# After construction
reader.set_listener(MyStatusLogger(), dds.StatusMask.SAMPLE_LOST)
```

---

## Key Extraction

Utility for extracting the DDS key value from a sample, used by multi-topic assembly:

```python
def extract_key(sample) -> str:
    """
    Extract the key field value from a sample for foreign-key matching.

    Supports common UMAA key patterns:
    - sample.sessionID.value (commands)
    - sample.sourceID.value (reports)
    - sample.id.value (generic keyed types)
    """
    if hasattr(sample, 'sessionID'):
        return str(sample.sessionID.value)
    if hasattr(sample, 'sourceID'):
        return str(sample.sourceID.value)
    if hasattr(sample, 'id'):
        return str(sample.id.value)
    raise ValueError(f"Cannot extract key from {type(sample).__name__}")
```

---

## Summary

| Utility | Module | Purpose |
|---|---|---|
| `UmaaTimestamp` | `util/timestamp.py` | DateTimeType ↔ Python datetime conversion |
| `GUIDUtil` | `util/guid.py` | GUID generation, hex conversion, string formatting |
| `extract_key()` | `util/multi_topic_utils.py` | Foreign key extraction for assembly |
| Instance state detection | Inline in `_run()` loops | Cancel / crash detection via `sample.info.state.instance_state` |
| Listeners | Subclass `dds.NoOpDataReaderListener` | Optional status monitoring (QoS events, diagnostics) |
