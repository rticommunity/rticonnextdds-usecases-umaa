# Building a Component

This tutorial walks through creating a UMAA component from scratch — a simplified sensor manager that:

1. **Provides** a command service (accepts calibration commands)
2. **Provides** a report service (publishes sensor readings periodically)
3. **Consumes** a report service (subscribes to GPS data)

## Architecture Overview

```
┌──────────────────────────────────────┐
│         SensorComponent              │
│                                      │
│  ┌─────────────────────────────┐     │
│  │ CalibrationControlProvider  │◄─── │ ◄── Incoming commands
│  └─────────────────────────────┘     │
│  ┌─────────────────────────────┐     │
│  │ SensorReportProvider        │───► │ ──► Published telemetry
│  └─────────────────────────────┘     │
│  ┌─────────────────────────────┐     │
│  │ GPSReportConsumer           │◄─── │ ◄── Subscribed telemetry
│  └─────────────────────────────┘     │
├──────────────────────────────────────┤
│            DDSContext                │
│  DomainParticipant · QoS · Registry  │
└──────────────────────────────────────┘
```

## Step 1: Define Your Component

Every UMAA component inherits from `BaseComponent`:

```python
from rtiumaapy import DDSContext, BaseComponent

class SensorComponent(BaseComponent):
    def __init__(self, ctx: DDSContext, source_id) -> None:
        super().__init__(ctx, "SensorComponent")
        self._source_id = source_id
        # Create services here (Step 2-4)

    async def on_start(self) -> None:
        """One-shot startup — publish initial announcements."""
        print("Sensor component started")

    async def _run(self) -> None:
        """Periodic work — publish sensor readings."""
        # Step 5

    async def close(self) -> None:
        """Shutdown — publish final messages."""
        print("Sensor component shutting down")
```

## Step 2: Add a Command Provider

Use a pre-wired service class from the service library, then subclass to implement behavior:

```python
from rtiumaapy.services.sem import SensorCalibrationControlProvider
from rtiumaapy.command_provider_session import CommandProviderSession

class MyCalibrationProvider(SensorCalibrationControlProvider):
    """Accept calibration commands and perform sensor calibration."""

    def __init__(self, ctx, *, source_id, component):
        super().__init__(ctx, source_id=source_id)
        self._component = component

    async def on_executing(self, session: CommandProviderSession):
        """This is where the real work happens."""
        cmd = session.command
        print(f"Calibrating sensor — sessionID={cmd.sessionID}")
        # Do calibration work here...
        # The framework automatically transitions:
        # ISSUED → COMMANDED → EXECUTING → COMPLETED
```

Wire it into your component's `__init__`:

```python
class SensorComponent(BaseComponent):
    def __init__(self, ctx, source_id):
        super().__init__(ctx, "SensorComponent")
        self._source_id = source_id

        # Command provider — accepts calibration commands
        self.calibration = MyCalibrationProvider(
            ctx, source_id=source_id, component=self,
        )
```

### Command Provider Hooks

The `CommandProvider` state machine calls hooks at each transition. Override only the ones you need:

| Hook | When Called | Required? |
|---|---|---|
| `validate_command(command)` | After ISSUED, before COMMANDED | No (default: field validation) |
| `on_commanded(session)` | After COMMANDED published | No |
| `on_executing(session)` | After EXECUTING published — **do work here** | **Yes** |
| `on_complete(session)` | After COMPLETED published | No |
| `on_failed(session, exception)` | After FAILED published | No |
| `on_terminal(session)` | Always called (finally block) | No |
| `on_updated(session, prev, new)` | Command update during EXECUTING | No |

### Failing a Command

To signal a domain-specific failure, raise `CommandHookError` from any hook:

```python
from rtiumaapy import CommandHookError
from rtiumaapy.command_provider_session import CommandReasonEnum

async def on_executing(self, session):
    if not self._sensor_ready:
        raise CommandHookError(
            reason_enum=CommandReasonEnum.RESOURCE_FAILED,
            message="Sensor hardware not responding",
        )
```

The framework catches the exception, validates the reason against the ICD, and publishes `FAILED` status.

## Step 3: Add a Report Provider

Use a pre-wired provider — type and topic are already configured:

```python
from rtiumaapy import set_timestamp
from rtiumaapy.services.so import HealthReportProvider
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
)

class SensorComponent(BaseComponent):
    def __init__(self, ctx, source_id):
        super().__init__(ctx, "SensorComponent")
        # ...
        self.health_provider = HealthReportProvider(ctx)
```

Report providers are simple — call `write()` whenever you have data:

```python
sample = HealthReportType(source=ctx.source_id)
set_timestamp(sample)
self.health_provider.write(sample)
```

## Step 4: Add a Report Consumer

Subclass a pre-wired consumer and override `on_report`:

```python
from rtiumaapy.services.sa import GlobalPoseReportConsumer

class MyPoseConsumer(GlobalPoseReportConsumer):
    def __init__(self, ctx, component):
        super().__init__(ctx)
        self._component = component

    async def on_report(self, sample):
        self._component.latest_pose = sample
        print(f"Pose: lat={sample.pose.geodeticLatitude}")
```

Wire into the component:

```python
self.pose_consumer = MyPoseConsumer(ctx, self)
```

## Step 5: Implement the Run Loop

The `_run()` coroutine is your component's main loop — use it for periodic publishing:

```python
async def _run(self) -> None:
    import asyncio
    try:
        while True:
            sample = SomeReportType()
            sample.source = self._source_id
            set_timestamp(sample)
            sample.value = read_sensor()
            self.report_provider.write(sample)
            await asyncio.sleep(1.0)
    except asyncio.CancelledError:
        pass
```

```{important}
Always catch `asyncio.CancelledError` — the framework cancels `_run()` during shutdown.
```

## Step 6: Create the Entry Point

```python
#!/usr/bin/env python3
import asyncio
import rti.connextdds as dds
from rtiumaapy import DDSContext, GUIDUtil
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)

async def main():
    guid_bytes = GUIDUtil.generate()
    source_id = IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
        parentID=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
    )

    ctx = DDSContext(domain_id=0)
    component = SensorComponent(ctx, source_id)
    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Component Lifecycle

When you call `ctx.run_until_shutdown()`, the SDK:

1. **Calls `on_start()`** on every registered component/service that defines it
2. **Creates `asyncio.Task`** for every `_run()` method
3. **Blocks** until `SIGINT` or `SIGTERM`
4. **Calls `shutdown()`** which:
   - Stops the `rti.asyncio` dispatcher
   - Cancels all `_run()` tasks
   - Calls `close()` on every service, in reverse registration order
   - Closes all DDS entities

```
on_start()  ──►  _run() loop  ──►  [SIGINT]  ──►  close()
                      ▲                                │
                      │                                ▼
                (asyncio.Task)                  (DDS entities closed)
```

## Using Pre-Wired Services

The SDK includes **350 pre-wired service classes** across 7 UMAA domains. They set all the DDS topic names and IDL types automatically:

```python
from rtiumaapy.services.eo import EngineControlProvider
from rtiumaapy.services.sa import GlobalPoseReportConsumer
from rtiumaapy.services.mo import GlobalVectorControlConsumer
from rtiumaapy.services.so import HealthReportProvider
```

Each pre-wired class needs only `ctx` and (for command providers) `source_id`:

```python
# Command provider — just pass ctx and source_id
engine = EngineControlProvider(ctx, source_id=my_identity)

# Report consumer — just pass ctx
pose = GlobalPoseReportConsumer(ctx)

# Report provider — just pass ctx
health = HealthReportProvider(ctx)
```

See {doc}`api/services-library` for the complete catalog.
