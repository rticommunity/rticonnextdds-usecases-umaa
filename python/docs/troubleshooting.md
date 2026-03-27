# Troubleshooting

Common issues and solutions when working with the RTI UMAA Python SDK.

## Environment & Setup

### `EnvironmentError: UMAA_QOS_FILE environment variable is not set`

Set the environment variable to the QoS XML path:

```bash
export UMAA_QOS_FILE=/path/to/qos/umaa_qos_lib.xml
```

### `RuntimeError: A DDSContext already exists`

Only one `DDSContext` can exist at a time. If you're writing tests, ensure `shutdown()` is called between tests:

```python
await ctx.shutdown()
# Now you can create a new one
ctx = DDSContext(domain_id=0)
```

### `ModuleNotFoundError: No module named 'rti'`

The `rti.connext` Python package is not installed. Install from the RTI Connext DDS installer:

```bash
pip install rti.connext
```

Requires a valid RTI license file.

## DDS Connectivity

### No data received — subscriber sees nothing

1. **Check domain ID** — publisher and subscriber must use the same `domain_id`
2. **Check QoS compatibility** — reliable writer + best-effort reader won't match. Use RTI Admin Console to inspect QoS.
3. **Check topic names** — topic names must match exactly (case-sensitive)
4. **Check firewall** — DDS uses UDP multicast; ensure ports are open
5. **Check `UMAA_QOS_FILE`** — both sides must use compatible QoS XML

### Command provider never receives commands

The `CommandProvider` uses a **content-filtered topic (CFT)** that only matches commands addressed to its `source_id`. Verify:

- The consumer's `destination_id` matches the provider's `source_id`
- Both GUID fields (`id` and `parentID`) match
- Use `GUIDUtil.to_hex()` to compare values

```python
from rtiumaapy import GUIDUtil
print(GUIDUtil.to_hex(my_source_id.id.value))
```

### Discovery takes too long

DDS discovery typically completes in 1-3 seconds. Use `wait_for_discovery()` on the consumer side:

```python
found = await consumer.wait_for_discovery(timeout=10.0)
if not found:
    print("No provider found!")
```

## Command Lifecycle

### Command stuck in EXECUTING

If `on_executing()` never returns, the command remains in EXECUTING state. Ensure your hook:

- Returns normally (transitions to COMPLETED)
- Or raises `CommandHookError` (transitions to FAILED)
- Does not block indefinitely — use `await asyncio.sleep()` instead of `time.sleep()`

### `RuntimeError: Consumer already has an active session`

A `CommandConsumer` supports one active command at a time. Wait for the current command to reach a terminal state (COMPLETED/FAILED/CANCELED) before sending another:

```python
await consumer.send(command1)
# ... wait for command1 to complete ...
await consumer.send(command2)  # OK after command1 finishes
```

### Validation failure — `CommandHookError(VALIDATION_FAILED)`

The default `validate_command()` checks all message fields against UMAA IDL constraints (numeric ranges, enum values, nested structs). Override to add domain-specific checks:

```python
async def validate_command(self, command):
    valid, reason = await super().validate_command(command)
    if not valid:
        return valid, reason
    # Custom check
    if command.speed > self.MAX_SPEED:
        return False, f"Speed {command.speed} exceeds max {self.MAX_SPEED}"
    return True, ""
```

## Shutdown & Cleanup

### `PRESPsReader` warnings on exit

These DDS internal warnings occur when readers are closed while the `rti.asyncio` dispatcher is still active. The SDK handles shutdown order correctly — dispatcher is stopped **before** entity cleanup. If you see these warnings, you may be calling `participant.close()` directly instead of using `ctx.shutdown()`.

### Services not closing properly

Always use `DDSContext.shutdown()` or `DDSContext.run_until_shutdown()` — don't close DDS entities manually:

```python
# Correct
await ctx.shutdown()

# Incorrect — will cause segfaults
reader.close()  # Don't do this
```

## Testing

### Tests fail with `ValueError: Service already registered`

Each service needs a unique name. In tests that create multiple instances of the same service type, pass unique names:

```python
provider1 = MyProvider(ctx, source_id=id1)  # default name from pre-wired class
provider2 = MyProvider(ctx, "MyProvider_2", ...)  # explicit unique name
```

### Tests hang indefinitely

If a test hangs, it's likely waiting on a DDS operation that will never complete:

- `take_async()` blocks until data arrives — use a timeout in tests
- `wait_for_discovery()` blocks until matched — set a reasonable timeout
- Missing `await ctx.shutdown()` in test teardown

### Running tests

```bash
cd python
source .venv/bin/activate
export UMAA_QOS_FILE="$(pwd)/../qos/umaa_qos_lib.xml"
python -m pytest tests/ -v --tb=short
```
