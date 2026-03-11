# Service Library — Pre-Wired Concrete Classes

> ~229 thin wrapper classes that pair each UMAA service with its correct IDL types and topics. Each class accepts only `ctx` and `source_id` (commands) or `ctx` (reports), eliminating all type/topic boilerplate.

---

## Motivation

The base template classes (`CommandProvider`, `ReportConsumer`, etc.) require 4–8 type/topic arguments at construction. For 229 plain services (Tiers 0–3), this is repetitive and error-prone — every instantiation must match the exact IDL naming convention. The service library eliminates this by providing a **named concrete class per UMAA service** with all wiring baked in.

### Why Not Factories?

An earlier design used `CommandServiceDef` dataclasses and `create_command_provider()` factory functions. This was rejected in favor of concrete classes because:

1. **Discoverability** — IDE autocomplete shows `EngineControlProvider`, not an opaque `ENGINE_CONTROL_DEF` constant
2. **Subclassing** — Users override hooks directly: `class MyEngine(EngineControlProvider)` — no extra indirection
3. **Type safety** — Each class is a real type that can be type-checked, not a generic `CommandProvider` instance
4. **Transparency** — Constructor source is 5 lines of obvious `super().__init__()` — nothing hidden

---

## Constructor Pattern

Every pre-wired class delegates to its base template with hardcoded types and topics:

### Tier 0 — Command (without execution status)

```python
class EngineControlProvider(CommandProvider):
    """Engine control command provider (EO::EngineControl)."""

    def __init__(self, ctx: DDSContext, source_id):
        super().__init__(ctx,
            command_type=EngineCommandType,
            command_topic="EngineCommandTypeTopic",
            ack_type=EngineCommandAckReportType,
            ack_topic="EngineCommandAckReportTypeTopic",
            status_type=EngineCommandStatusType,
            status_topic="EngineCommandStatusTypeTopic",
            source_id=source_id,
        )

class EngineControlConsumer(CommandConsumer):
    """Engine control command consumer (EO::EngineControl)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            command_type=EngineCommandType,
            command_topic="EngineCommandTypeTopic",
            ack_type=EngineCommandAckReportType,
            ack_topic="EngineCommandAckReportTypeTopic",
            status_type=EngineCommandStatusType,
            status_topic="EngineCommandStatusTypeTopic",
        )
```

### Tier 0 — Command (with execution status)

```python
class BITControlProvider(CommandProvider):
    """Built-In Test command provider (SO::BITControl)."""

    def __init__(self, ctx: DDSContext, source_id):
        super().__init__(ctx,
            command_type=BITCommandType,
            command_topic="BITCommandTypeTopic",
            ack_type=BITCommandAckReportType,
            ack_topic="BITCommandAckReportTypeTopic",
            status_type=BITCommandStatusType,
            status_topic="BITCommandStatusTypeTopic",
            exec_status_type=BITExecutionStatusReportType,
            exec_status_topic="BITExecutionStatusReportTypeTopic",
            source_id=source_id,
        )
```

### Tier 1 — Plain Report

```python
class GPSReportProvider(ReportProvider):
    """GPS report provider (SA::GPS)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            report_type=GPSReportType,
            report_topic="GPSReportTypeTopic",
        )

class GPSReportConsumer(ReportConsumer):
    """GPS report consumer (SA::GPS)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            report_type=GPSReportType,
            report_topic="GPSReportTypeTopic",
        )
```

### Tier 2 — Large Set Report

```python
class ContactReportProvider(LargeSetReportProvider):
    """Contact report provider with contacts set (SA::Contact)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            report_type=ContactReportType,
            report_topic="ContactReportTypeTopic",
            elements=[
                SetElementSlot("contacts",
                    ContactReportTypeContactsSetElement,
                    "ContactReportTypeContactsSetElementTopic"),
            ],
        )

class ContactReportConsumer(LargeSetReportConsumer):
    """Contact report consumer with contacts set (SA::Contact)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            report_type=ContactReportType,
            report_topic="ContactReportTypeTopic",
            elements=[
                SetElementSlot("contacts",
                    ContactReportTypeContactsSetElement,
                    "ContactReportTypeContactsSetElementTopic"),
            ],
        )
```

### Tier 3 — Large List Report

```python
class PathReporterReportConsumer(LargeListReportConsumer):
    """Path reporter with 4 list element slots (SA::PathReporter)."""

    def __init__(self, ctx: DDSContext):
        super().__init__(ctx,
            report_type=PathReporterReportType,
            report_topic="PathReporterReportTypeTopic",
            elements=[
                ListElementSlot("historicalGlobalPaths",
                    PathReporterReportTypeHistoricalGlobalPathsListElement,
                    "PathReporterReportTypeHistoricalGlobalPathsListElementTopic"),
                ListElementSlot("historicalLocalPaths",
                    PathReporterReportTypeHistoricalLocalPathsListElement,
                    "PathReporterReportTypeHistoricalLocalPathsListElementTopic"),
                ListElementSlot("plannedGlobalPaths",
                    PathReporterReportTypePlannedGlobalPathsListElement,
                    "PathReporterReportTypePlannedGlobalPathsListElementTopic"),
                ListElementSlot("plannedLocalPaths",
                    PathReporterReportTypePlannedLocalPathsListElement,
                    "PathReporterReportTypePlannedLocalPathsListElementTopic"),
            ],
        )
```

---

## Subclassing for Custom Hooks

Users subclass to add behavior — the pre-wired class handles all DDS wiring:

```python
class MyEngineProvider(EngineControlProvider):
    """Application-specific engine command handler."""

    async def validate_command(self, command) -> tuple[bool, str]:
        if command.data.rpm > 3000:
            return False, "RPM exceeds safe limit"
        return True, ""

    async def on_executing(self, session):
        await self.hardware.set_rpm(session.command.data.rpm)
        await asyncio.sleep(2.0)  # wait for engine to settle

    async def on_terminal(self, session):
        self.hardware.release()
```

For reports, override the callback:

```python
class MyGPSConsumer(GPSReportConsumer):
    """Application-specific GPS report handler."""

    async def on_report(self, sample):
        lat = sample.data.latitude
        lon = sample.data.longitude
        self.navigation.update_position(lat, lon)
```

---

## Package Organization

Pre-wired classes are organized by UMAA domain module:

```
rtiumaapy/
  services/
    __init__.py           # Re-exports all classes
    co.py                 # CO — Communications (~9 command pairs, ~3 report pairs)
    eo.py                 # EO — Engineering/Operations (~10 command pairs, ~7 report pairs)
    mm.py                 # MM — Mission Management (~13 command pairs, ~6 report pairs)
    mo.py                 # MO — Maneuver/Operations (~2 command pairs, ~6 report pairs)
    sa.py                 # SA — Situational Awareness (~2 command pairs, ~10 report pairs)
    sem.py                # SEM — Sensors (~7 command pairs, ~7 report pairs)
    so.py                 # SO — System Operations (~10 command pairs, ~8 report pairs)
```

Each module file contains the Provider/Consumer pair for every service in that domain:

```python
# rtiumaapy/services/eo.py

from rtiumaapy.core import CommandProvider, CommandConsumer, ReportProvider, ReportConsumer
from rtiumaapy.umaa_types import *

class EngineControlProvider(CommandProvider): ...
class EngineControlConsumer(CommandConsumer): ...
class EngineReportProvider(ReportProvider): ...
class EngineReportConsumer(ReportConsumer): ...
class PropulsorControlProvider(CommandProvider): ...
class PropulsorControlConsumer(CommandConsumer): ...
# ... etc
```

The top-level `__init__.py` re-exports everything for convenience:

```python
# rtiumaapy/services/__init__.py
from rtiumaapy.services.co import *
from rtiumaapy.services.eo import *
from rtiumaapy.services.mm import *
from rtiumaapy.services.mo import *
from rtiumaapy.services.sa import *
from rtiumaapy.services.sem import *
from rtiumaapy.services.so import *
```

---

## Tier 4 Note

Tier 4 composites (~12 types, 18 classes) are already one-off concrete classes by nature — `MissionPlanReportConsumer`, `ConditionalAddCommandProvider`, etc. They live in `rtiumaapy/core/composite/` and are NOT part of the service library since they have unique internal structure that can't be reduced to a simple `super().__init__()` call.

---

## Usage Example

A complete application instantiating services from the library:

```python
import rti.asyncio
from rtiumaapy.core import DDSContext
from rtiumaapy.services import (
    EngineControlProvider,
    RudderControlProvider,
    GPSReportConsumer,
    ContactReportConsumer,
)

class MyEngine(EngineControlProvider):
    async def on_executing(self, session):
        print(f"Engine command: {session.command}")

class MyGPS(GPSReportConsumer):
    async def on_report(self, sample):
        print(f"GPS: {sample.data.latitude}, {sample.data.longitude}")

async def main():
    ctx = DDSContext(domain_id=0)

    engine = MyEngine(ctx, source_id=my_source_id)
    rudder = RudderControlProvider(ctx, source_id=my_source_id)  # default hooks
    gps    = MyGPS(ctx)
    contacts = ContactReportConsumer(ctx)

    await ctx.run_until_shutdown()

rti.asyncio.run(main())
```

---

## Implementation Priority

The service library is an **early Phase 3 deliverable** — it depends only on the base template classes (Phase 3) and can be largely auto-generated from the services catalog naming conventions. The naming pattern (`{Stem}CommandType`, `{Stem}CommandTypeTopic`, etc.) is fully deterministic, so a code generator can produce all ~229 pairs from the stem list.

### Generation Strategy

Given the deterministic naming convention, all Tier 0–1 classes can be generated from the stem tables in `services-catalog.md`:

```python
# generator pseudocode
for stem, module in COMMAND_STEMS:
    emit_class(f"{stem}ControlProvider", "CommandProvider", stem, module)
    emit_class(f"{stem}ControlConsumer", "CommandConsumer", stem, module)

for stem, module in REPORT_STEMS:
    emit_class(f"{stem}ReportProvider", "ReportProvider", stem, module)
    emit_class(f"{stem}ReportConsumer", "ReportConsumer", stem, module)
```

Tier 2–3 classes require manual element slot definitions (4+4 types), but the count is small.

---

## Class Count Summary

| Category | Provider | Consumer | Total |
|---|---|---|---|
| Tier 0 commands (no exec status) | 53 | 53 | 106 |
| Tier 0 commands (with exec status) | 7 | 7 | 14 |
| Tier 1 reports | ~169 | ~169 | ~338 |
| Tier 2 large set reports | 4 | 4 | 8 |
| Tier 3 large list reports | 4 | 4 | 8 |
| **Service Library Total** | **~237** | **~237** | **~474** |
| Tier 4 composites (separate) | 9 | 9 | 18 |
