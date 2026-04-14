# RTI UMAA Python SDK (rtiumaapy) Implementation Plan — Staged PRs

> Scaffolding plan for the Python SDK. Each PR is independently testable and builds on the previous.
>
> **Last updated:** 2026-03-25

---

## Preliminary Release Plan (v0.1.0)

The preliminary release delivers **everything needed to build a working UMAA component** using Tier 0 (command) and Tier 1 (report) service templates. The example deliverable is a Python autopilot component — the same component implemented in the C++ reference SDK — demonstrating real-world usage of every currently-supported pattern.

After this release, development continues with Tier 2–4 (large sets, large lists, composites) and the auto-generated service library.

### What's In This Release

**SDK core (PRs 1–4 — COMPLETE):**
- `DDSContext` — singleton DDS infrastructure, QoS auto-assignment via `UMAA_QOS_FILE` env var
- `BaseService` — abstract lifecycle base with auto-registration
- `ReportProvider` / `ReportConsumer` — Tier 1 single-topic pub/sub
- `CommandProvider` / `CommandConsumer` / `CommandProviderSession` — Tier 0 full ICD command state machine
- `GUIDUtil`, `UmaaTimestamp`, error types (`CommandHookError`, `CommandFailedError`, `AssemblyError`)
- Generated UMAA types at `rtiumaapy/datamodel/` (596 flat Python modules from rtiddsgen)
- 163 DDS integration tests passing

**What this release adds (PR 5-preliminary):**

| # | Task | Deliverable | Description | Status |
|---|------|-------------|-------------|--------|
| **P1** | Pre-wired service library | `rtiumaapy/services/{co,eo,mm,mo,sa,sem,so}/` + `tests/test_service_library.py` | **350 concrete classes** (64 command + 111 report × Provider+Consumer) for all Tier 0/1 services with generated IDL types, validated by ~1,400 parametrized import/subclass/binding tests | ✅ Complete |
| **P2** | Autopilot example component | `python/examples/autopilot/autopilot_component.py` | Working component that instantiates autopilot services, wires hooks, runs via `DDSContext.run_until_shutdown()` | ✅ Complete |
| **P3** | Autopilot example runner | `python/examples/autopilot/run_autopilot.py` | Entry point with env var setup and CLI args (domain_id, source GUID) | ✅ Complete |
| **P4** | Package & env setup | `pyproject.toml` updates, README | Installation instructions, `UMAA_QOS_FILE` documentation, dependency pinning | |
| **P5** | Architecture docs update | `architecture/*.md` | Update implementation-plan.md, dds-context.md (env var), create qos-setup.md | |
| **P6** | Run & validate | — | Full test suite pass + manual autopilot demo | |

---

### P1: Pre-Wired Service Library (All Tier 0/1 Services)

Create **350 concrete service classes** covering every UMAA Tier 0 (command) and Tier 1 (report) service that has generated IDL types, organized by domain subfolder.

#### Package Structure

```
rtiumaapy/services/
├── __init__.py           # Re-exports all classes from all domains
├── co/
│   └── __init__.py       # 9 command pairs + 12 report pairs = 42 classes
├── eo/
│   └── __init__.py       # 8 command pairs + 21 report pairs = 58 classes
├── mm/
│   └── __init__.py       # 21 command pairs + 14 report pairs = 70 classes
├── mo/
│   └── __init__.py       # 6 command pairs + 3 report pairs = 18 classes
├── sa/
│   └── __init__.py       # 2 command pairs + 31 report pairs = 66 classes
├── sem/
│   └── __init__.py       # 7 command pairs + 6 report pairs = 26 classes
└── so/
    └── __init__.py       # 11 command pairs + 24 report pairs = 70 classes
```

#### Import Conventions

```python
# Import from domain subpackage
from rtiumaapy.services.eo import EngineControlProvider, EngineReportConsumer

# Import from top-level (re-export)
from rtiumaapy.services import GlobalVectorControlProvider, HealthReportConsumer
```

#### Generated Type Import Pattern

All generated IDL types live in `rtiumaapy.datamodel` as a flat namespace. Each service class imports its types from there:

```python
from rtiumaapy.datamodel.EngineCommandType import (
    UMAA_EO_EngineControl_EngineCommandType,
    UMAA_EO_EngineControl_EngineCommandTypeTopic,
)
```

Key facts about the generated types:
- **Class names**: `UMAA_{Domain}_{Module}_{TypeName}` (e.g., `UMAA_EO_EngineControl_EngineCommandType`)
- **Topic strings**: `UMAA::{Domain}::{Module}::{TypeName}` (e.g., `"UMAA::EO::EngineControl::EngineCommandType"`)
- **Topic constants**: `UMAA_{Domain}_{Module}_{TypeName}Topic` — string constants importable from the same module

#### Code Patterns

**Tier 0 Command Provider (without execution status):**

```python
class EngineControlProvider(CommandProvider):
    """Engine command provider (EO::EngineControl)."""

    def __init__(self, ctx: DDSContext, *, source_id):
        super().__init__(
            ctx,
            service_name="EngineControl",
            command_type=UMAA_EO_EngineControl_EngineCommandType,
            command_topic=UMAA_EO_EngineControl_EngineCommandTypeTopic,
            ack_type=UMAA_EO_EngineControl_EngineCommandAckReportType,
            ack_topic=UMAA_EO_EngineControl_EngineCommandAckReportTypeTopic,
            status_type=UMAA_EO_EngineControl_EngineCommandStatusType,
            status_topic=UMAA_EO_EngineControl_EngineCommandStatusTypeTopic,
            source_id=source_id,
        )
```

**Tier 0 Command Provider (with execution status):**

```python
class GlobalVectorControlProvider(CommandProvider):
    """GlobalVector command provider (MO::GlobalVectorControl)."""

    def __init__(self, ctx: DDSContext, *, source_id):
        super().__init__(
            ctx,
            service_name="GlobalVectorControl",
            command_type=UMAA_MO_GlobalVectorControl_GlobalVectorCommandType,
            command_topic=UMAA_MO_GlobalVectorControl_GlobalVectorCommandTypeTopic,
            ack_type=UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType,
            ack_topic=UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeTopic,
            status_type=UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusType,
            status_topic=UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusTypeTopic,
            exec_status_type=UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType,
            exec_status_topic=UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTopic,
            source_id=source_id,
        )
```

**Tier 0 Command Consumer:**

```python
class EngineControlConsumer(CommandConsumer):
    """Engine command consumer (EO::EngineControl)."""

    def __init__(self, ctx: DDSContext, *, source_id=None, destination_id=None):
        super().__init__(
            ctx,
            service_name="EngineControl",
            command_type=UMAA_EO_EngineControl_EngineCommandType,
            command_topic=UMAA_EO_EngineControl_EngineCommandTypeTopic,
            ack_type=UMAA_EO_EngineControl_EngineCommandAckReportType,
            ack_topic=UMAA_EO_EngineControl_EngineCommandAckReportTypeTopic,
            status_type=UMAA_EO_EngineControl_EngineCommandStatusType,
            status_topic=UMAA_EO_EngineControl_EngineCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
```

**Tier 1 Report Provider:**

```python
class EngineReportProvider(ReportProvider):
    """Engine status report provider (EO::EngineStatus)."""

    def __init__(self, ctx: DDSContext, service_name: str, key_holder):
        super().__init__(
            ctx,
            service_name=service_name,
            report_type=UMAA_EO_EngineStatus_EngineReportType,
            report_topic=UMAA_EO_EngineStatus_EngineReportTypeTopic,
            key_holder=key_holder,
        )
```

**Tier 1 Report Consumer:**

```python
class EngineReportConsumer(ReportConsumer):
    """Engine status report consumer (EO::EngineStatus)."""

    def __init__(self, ctx: DDSContext, service_name: str = "EngineReport"):
        super().__init__(
            ctx,
            service_name=service_name,
            report_type=UMAA_EO_EngineStatus_EngineReportType,
            report_topic=UMAA_EO_EngineStatus_EngineReportTypeTopic,
        )
```

#### Naming Rules

| Service type | Class name pattern | Example |
|---|---|---|
| Command provider | `{Stem}ControlProvider` | `EngineControlProvider` |
| Command consumer | `{Stem}ControlConsumer` | `EngineControlConsumer` |
| Report provider | `{Stem}ReportProvider` | `EngineReportProvider` |
| Report consumer | `{Stem}ReportConsumer` | `EngineReportConsumer` |
| Config command provider | `{Stem}ConfigProvider` | `BITConfigProvider` |
| Config command consumer | `{Stem}ConfigConsumer` | `BITConfigConsumer` |

Config commands follow a slightly different ack naming pattern:
- Regular commands: `{Stem}CommandAckReportType`
- Config commands: `{Stem}AckReportType` (no "Command" in the ack name)

#### Complete Service Inventory by Domain

**CO — Communications (9 commands, 12 reports = 42 classes)**

Commands:
| Stem | Has Exec Status | Notes |
|------|----------------|-------|
| `CommsChannelAddMessageConfig` | No | Config pattern |
| `CommsChannelDeleteMessageConfig` | No | Config pattern |
| `CommsChannelClearAll` | No | |
| `CommsChannelClearMessage` | No | |
| `CommsChannelReset` | No | |
| `CommsChannelShutdown` | No | |
| `CommsChannelStartup` | No | |
| `CommsChannelPowerConfig` | No | Config pattern |
| `MessageFilterConfig` | No | Config pattern |

Reports: `CommsChannelConfig`, `CommsChannelDataEncoding`, `CommsChannelEnvironment`, `CommsChannelPowerConfig`, `CommsChannelPower`, `CommsChannelReceiver`, `CommsChannelReceiverStatistics`, `CommsChannel`, `CommsChannelSender`, `CommsChannelSenderStatistics`, `CommsChannelSpecs`, `CommsChannelSystemTime`

**EO — Engineering/Operations (8 commands, 21 reports = 58 classes)**

Commands:
| Stem | Has Exec Status |
|------|----------------|
| `Anchor` | No |
| `BallastPump` | No |
| `BallastTank` | No |
| `Engine` | No |
| `Fins` | No |
| `Mast` | No |
| `Power` | No |
| `Propulsors` | No |

Reports: `Anchor`, `AnchorSpecs`, `BallastPump`, `BallastPumpSpecs`, `BallastTank`, `BallastTankSpecs`, `Battery`, `BatterySpecs`, `BilgePump`, `Engine`, `EngineSpecs`, `FinsSpecs`, `FuelTank`, `FuelTankSpecs`, `Generator`, `GeneratorSpecs`, `Mast`, `Power`, `PropulsorsSpecs`, `UVPlatformCapabilities`, `UVPlatformSpecs`

Skipped nested data types: `FinCommandType` (inner type within Fins), `PropulsorCommandType` (inner type within Propulsors)

**MM — Mission Management (21 commands, 14 reports = 70 classes)**

Commands:
| Stem | Has Exec Status |
|------|----------------|
| `ActiveConstraints` | No |
| `ConditionalAdd` | No |
| `ConditionalDelete` | No |
| `MissionPlanAssignment` | No |
| `MissionPlanConstraintAdd` | No |
| `MissionPlanConstraintDelete` | No |
| `MissionPlanExecution` | No |
| `MissionPlanMissionAdd` | No |
| `MissionPlanMissionClear` | No |
| `MissionPlanMissionDelete` | No |
| `MissionPlanObjectiveAdd` | No |
| `MissionPlanObjectiveDelete` | No |
| `MissionPlanTaskAdd` | No |
| `MissionPlanTaskDelete` | No |
| `ObjectiveAssignment` | No |
| `ObjectiveExecution` | No |
| `ObjectiveExecutor` | **Yes** |
| `ObjectiveExecutorState` | No |
| `OperationalMode` | No |
| `TaskPlanAssignment` | No |
| `TaskPlanExecution` | No |

Reports: `ClientControl`, `ClientControlTransfer`, `Conditional`, `ConditionalState`, `ControlSystemControl`, `ControlSystemTransfer`, `MissionPlanAssignment`, `MissionPlanExecution`, `MissionPlan`, `ObjectiveAssignment`, `ObjectiveExecution`, `OperationalMode`, `TaskPlanAssignment`, `TaskPlanExecution`

**MO — Maneuver/Operations (6 commands, 3 reports = 18 classes)**

Commands (all have execution status):
| Stem | Has Exec Status |
|------|----------------|
| `FreeFloat` | **Yes** |
| `GlobalDrift` | **Yes** |
| `GlobalHover` | **Yes** |
| `GlobalVector` | **Yes** |
| `GlobalWaypoint` | **Yes** |
| `PrimitiveDriver` | **Yes** |

Reports: `ContactManeuverInfluence`, `CoordinationSituationalSignal`, `HazardAvoidanceConfig`

**SA — Situational Awareness (2 commands, 31 reports = 66 classes)**

Commands:
| Stem | Has Exec Status | Notes |
|------|----------------|-------|
| `ContactFilterConfig` | No | Config pattern |
| `GlobalPoseConfig` | No | Config pattern |

Reports: `Acceleration`, `CompartmentConfig`, `Compartment`, `ContactCOLREGSClassification`, `ContactCategory`, `ContactIdentity`, `Contact`, `ContactVisualClassification`, `DateTime`, `ECEFPose`, `GlobalPoseConfig`, `GlobalPose`, `Landmark`, `MagneticVariation`, `MagneticVariationSpecs`, `Orientation`, `PassiveContact`, `PathReporter`, `PathReporterSpecs`, `RelativeContact`, `SeaState`, `SoundVelocityProfile`, `Speed`, `StillImage`, `Terrain`, `TranslationalShipMotion`, `Velocity`, `WaterCharacteristics`, `WaterCurrent`, `Weather`, `Wind`

**SEM — Sensors (7 commands, 6 reports = 26 classes)**

Commands:
| Stem | Has Exec Status | Notes |
|------|----------------|-------|
| `FLS` | No | |
| `FLSPreCalc` | No | |
| `Illuminator` | No | |
| `InertialSensor` | No | |
| `MapSegment` | No | |
| `SAS` | No | |
| `SASConfig` | No | Config pattern |

Reports: `GPS`, `Illuminator`, `IlluminatorSpecs`, `InertialSensor`, `SASConfig`, `SASStatus`

**SO — System Operations (11 commands, 24 reports = 70 classes)**

Commands:
| Stem | Has Exec Status | Notes |
|------|----------------|-------|
| `BIT` | **Yes** | |
| `BITConfig` | No | Config pattern |
| `ClearData` | No | |
| `ControlSystemID` | No | |
| `Emitter` | No | |
| `EmitterPreset` | No | |
| `EmitterPresetConfig` | No | Config pattern |
| `ResourceAllocation` | No | |
| `ResourceAllocationPriority` | No | |
| `SyncData` | No | |
| `TamperDetection` | No | |

Reports: `BITConfig`, `BIT`, `BITSpecs`, `ClientID`, `ControlSystemID`, `EmitterPresetConfig`, `EmitterPreset`, `Emitter`, `EmitterSpecs`, `FileSystem`, `Health`, `HeartbeatPulse`, `Log`, `Memory`, `ProcessingUnit`, `RecordingSpecs`, `RecordingStatus`, `ResourceAllocationConfig`, `ResourceAllocationPriority`, `ResourceAllocation`, `ResourceAuthorization`, `SubsystemID`, `TamperDetection`, `VehicleID`

#### Scope Exclusions

The following are **NOT** included in P1 and remain for later PRs:

| Category | Reason | Count | Future PR |
|----------|--------|-------|-----------|
| Tier 2 (Large Set) reports | Requires `LargeSetReportProvider/Consumer` | 4 types | PR 5 |
| Tier 3 (Large List) reports | Requires `LargeListReportProvider/Consumer` | 4 types | PR 6 |
| Tier 4 composites (reports) | One-off classes with specialization dispatch | 6 types | PR 7 |
| Tier 4 composites (commands) | Commands with embedded large lists/gen-spec | 12 types | PR 7 |
| `FinCommandType` | Nested data type (no ack/status triplet) | — | — |
| `PropulsorCommandType` | Nested data type (no ack/status triplet) | — | — |

#### Summary

| | Commands | Reports | Classes (×2) |
|---|---|---|---|
| CO | 9 | 12 | 42 |
| EO | 8 | 21 | 58 |
| MM | 21 | 14 | 70 |
| MO | 6 | 3 | 18 |
| SA | 2 | 31 | 66 |
| SEM | 7 | 6 | 26 |
| SO | 11 | 24 | 70 |
| **Total** | **64** | **111** | **350** |

#### P1 Validation: `test_service_library.py`

A single parametrized test file that validates every generated service class **without needing DDS**. Runs in <1 second with zero infrastructure.

**Test structure:** Two test classes, each parametrized over the complete class inventory.

**Tier 1 — Import & Subclass Validation (no DDS):**

```python
@pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY)
class TestServiceImport:
    def test_class_importable(self, cls_name, domain, expected_base):
        """Every service class is importable from its domain package."""
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert cls is not None

    def test_correct_base_class(self, cls_name, domain, expected_base):
        """Every service class inherits from the correct base."""
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert issubclass(cls, expected_base)
```

Catches: typos in class names, missing imports, wrong inheritance.

**Tier 2 — Type-Binding Validation (no DDS):**

```python
@pytest.mark.parametrize("cls_name,domain,expected_base", SERVICE_REGISTRY)
class TestServiceBindings:
    def test_datamodel_types_importable(self, cls_name, domain, expected_base):
        """All IDL types referenced by the service class actually exist."""
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        # Instantiate-free: inspect the class module's imports
        # The module will fail to load if any datamodel import is broken
        assert cls.__module__.startswith("rtiumaapy.services.")

    def test_topic_constants_are_strings(self, cls_name, domain, expected_base):
        """Topic constants resolve to non-empty strings (not None or missing)."""
        # Verified implicitly: if the module imported successfully,
        # the super().__init__() call references valid topic constants.
        # This test guards against silent None values.
        mod = importlib.import_module(f"rtiumaapy.services.{domain}")
        cls = getattr(mod, cls_name)
        assert cls is not None  # Module-level imports are the real test
```

**`SERVICE_REGISTRY`**: A list of `(class_name, domain, base_class)` tuples covering all 350 classes. Built programmatically by scanning `rtiumaapy/services/*/` `__all__` exports and mapping class name suffixes to base classes:

| Suffix | Base Class |
|--------|-----------|
| `ControlProvider`, `ConfigProvider` | `CommandProvider` |
| `ControlConsumer`, `ConfigConsumer` | `CommandConsumer` |
| `ReportProvider` | `ReportProvider` |
| `ReportConsumer` | `ReportConsumer` |

**Expected test count:** ~350 × 4 checks = ~1,400 parametrized test cases (instant execution).

This catches the vast majority of errors: broken imports, wrong module names, missing generated types, incorrect inheritance, and naming mismatches. Since each domain `__init__.py` imports all datamodel types at module load time, any type/topic reference typo causes an `ImportError` that fails the corresponding test immediately.

---

### P2: Autopilot Example Component

A single `AutopilotComponent` class that:

1. Creates a `DDSContext`
2. Instantiates all autopilot services (providers + consumers) from P1
3. Wires hooks:
   - Command providers: `validate_command()`, `on_commanded()`, `on_executing()`, `on_complete()`
   - Report consumers: `on_report()` to cache latest telemetry
   - Report providers: periodic health/log publishing
4. Implements a simple control loop (100ms period, matching C++ reference):
   - Reads latest pose/speed/velocity from cached reports
   - Logs received commands
   - Publishes health status periodically
5. Runs via `DDSContext.run_until_shutdown()` with SIGINT/SIGTERM handling

**Source:** Modeled after `python/c++_ref/umaa-usv-autopilot-v1.0.0-DistroA/autopilot_component/`

**Structure:**
```
python/examples/autopilot/
├── __init__.py
├── autopilot_component.py    # Main AutopilotComponent class
└── run_autopilot.py          # Entry point (CLI)
```

The component demonstrates:
- Multiple services coexisting in one `DDSContext`
- Command provider hooks (validation, execution, completion)
- Report consumer hooks (caching latest telemetry)
- Report provider periodic publishing
- Graceful shutdown (all services closed, instances disposed)
- `UMAA_QOS_FILE` env var for QoS configuration

---

### P3: Entry Point & CLI

`run_autopilot.py`:
- Validates `UMAA_QOS_FILE` is set
- Parses CLI: `--domain-id`, `--source-guid` (or generates one)
- Creates `AutopilotComponent`, calls `run_until_shutdown()`
- Logs startup banner with component identity

Usage:
```bash
export UMAA_QOS_FILE=/path/to/qos/umaa_qos_lib.xml
python -m examples.autopilot.run_autopilot --domain-id 1
```

---

### P4: Package & Environment

- Update `pyproject.toml`: version 0.1.0, entry points, dependency requirements
- Document `UMAA_QOS_FILE` env var in README (setup instructions)
- Add `python/examples/autopilot/README.md` with:
  - What the example does
  - Which services it implements (table matching the component definition)
  - How to run it
  - What ConditionalReport is deferred and why
  - How to extend with custom hooks

---

### P5: Documentation Updates

| Document | Changes |
|----------|---------|
| `implementation-plan.md` | Mark PRs 1–4 complete, add preliminary release section (this) |
| `dds-context.md` | Document `UMAA_QOS_FILE` env var (replaces repo-relative path) |
| `qos-profiles.md` | Add section on env var setup, shared QoS between C++/Python |
| `README.md` | Quickstart with autopilot example, installation, env var setup |

---

### P6: Validation

- Full test suite: 1,573+ tests pass (163 DDS integration + 1,408 service library + 2 set_timestamp)
- Manual demo: run autopilot, verify:
  - Command round-trip (send → ack → status → complete)
  - Report publishing (health report received by peer)
  - Telemetry consumption (autopilot logs pose/speed data)
  - Graceful shutdown (Ctrl-C → all instances disposed)
- Verify no DDS warnings in console output

---

### Autopilot Service Summary

The autopilot example (P2) uses a subset of the 350 pre-wired classes from P1:

| Role | Commands | Reports |
|------|----------|---------|
| Provider | 4 (GlobalVector, GlobalHover, PrimitiveDriver, ActiveConstraints) | 4 (Health, Log, UVPlatformSpecs, UVPlatformCapabilities) |
| Consumer | 4 (ConditionalAdd, ConditionalDelete, MissionPlanConstraintAdd, MissionPlanConstraintDelete) | 6 (GlobalPose, Speed, Velocity, WaterCurrent, Wind, ConditionalReport) |
| **Total** | **8** | **10** |

### What Comes After

After the preliminary release, development continues with:

| PR | Content | Enables |
|----|---------|---------|
| PR 5 | Large Set services (Tier 2) | 4 large set report types (Contact, PassiveContact, ResourceAllocationConfig, CommsChannelConfig) |
| PR 6 | Large List services (Tier 3) | 4 large list report types (PathReporter, CommsChannelSender, Battery, SpeedProfile) |
| PR 7 | Composite services (Tier 4) | 18 one-off classes (ConditionalReport, MissionPlan, GlobalWaypoint command, etc.) |
| PR 8 | Additional examples & Sphinx docs | Complete documentation and more example components |

---

---

## Repository Structure

The SDK lives at the **top level** of the repo under `/python`. The repo is organized as:

```
rticonnextdds-usecases-umaa/
├── datamodel/                    # IDL files (UMAA data model source)
│   └── umaa/
│       └── idl/
│           └── UMAA/
│               ├── DdsDefinitions.idl  # ★ System-wide DDS constants (shared Python / C++)
│               └── ...           # Domain-specific IDL
├── cpp/                          # C++ SDK (future expansion)
│   └── service-template-wrappers/ # Service template wrapper example
├── qos/                          # QoS XML profiles
│   └── umaa_qos_lib.xml
├── python/                       # ★ RTI UMAA Python SDK root
│   ├── __init__.py
│   ├── architecture/             # Design docs (this folder)
│   ├── rtiumaapy/                  # SDK package
│   │   ├── __init__.py           # Public API exports, version
│   │   ├── py.typed              # PEP 561 marker
│   │   ├── guid_util.py          # GUIDUtil
│   │   ├── timestamp.py          # UmaaTimestamp
│   │   ├── errors.py             # CommandHookError, CommandFailedError, AssemblyError
│   │   ├── dds_context.py        # DDSContext singleton
│   │   ├── base_service.py       # BaseService ABC
│   │   ├── report_provider.py    # ReportProvider (Tier 1)
│   │   ├── report_consumer.py    # ReportConsumer (Tier 1)
│   │   ├── command_provider.py   # CommandProvider (Tier 0)
│   │   ├── command_provider_session.py
│   │   ├── command_consumer.py   # CommandConsumer (Tier 0)
│   │   ├── datamodel/            # ★ Generated UMAA Python types (from rtiddsgen)
│   │   │   ├── __init__.py       # sys.path setup for cross-module imports
│   │   │   ├── EngineCommandType.py  # 596 flat modules — one per IDL type
│   │   │   ├── EngineReportType.py
│   │   │   └── ...
│   │   └── services/             # ★ Pre-wired concrete classes (350 Tiers 0–1)
│   │       ├── __init__.py       # Re-exports all classes from all domains
│   │       ├── co/
│   │       │   └── __init__.py   # CO — Communications (42 classes)
│   │       ├── eo/
│   │       │   └── __init__.py   # EO — Engineering/Operations (58 classes)
│   │       ├── mm/
│   │       │   └── __init__.py   # MM — Mission Management (70 classes)
│   │       ├── mo/
│   │       │   └── __init__.py   # MO — Maneuver/Operations (18 classes)
│   │       ├── sa/
│   │       │   └── __init__.py   # SA — Situational Awareness (66 classes)
│   │       ├── sem/
│   │       │   └── __init__.py   # SEM — Sensors (26 classes)
│   │       └── so/
│   │           └── __init__.py   # SO — System Operations (70 classes)
│   ├── tests/                    # Test suite
│   │   ├── __init__.py
│   │   ├── conftest.py           # Shared fixtures (DDSContext, loopback transport)
│   │   ├── test_guid_util.py
│   │   ├── test_timestamp.py
│   │   ├── test_errors.py
│   │   ├── test_dds_context.py
│   │   ├── test_base_service.py
│   │   ├── test_report_provider.py
│   │   ├── test_report_consumer.py
│   │   ├── test_report_lifecycle.py
│   │   ├── test_command_lifecycle.py
│   │   ├── test_command_rejection.py
│   │   ├── test_command_cancel.py
│   │   ├── test_command_failure.py
│   │   ├── test_command_shutdown.py
│   │   └── test_service_library.py  # P1: import, subclass, and type-binding validation
│   ├── examples/                 # Usage examples
│   │   └── autopilot/            # Autopilot component example
│   │       ├── autopilot_component.py
│   │       └── run_autopilot.py
│   ├── c++_ref/                  # ⚠ Legacy — C++ reference SDKs (to be moved/removed)
│   ├── umaa_docs/                # ⚠ Legacy — UMAA spec docs (to be moved/removed)
│   ├── umaapy-1.1.1/             # ⚠ Legacy — v1 SDK (to be removed)
│   ├── pyproject.toml            # Package metadata
│   └── requirements.txt
└── ...
```

**Key points:**
- Generated UMAA Python types (from `datamodel/umaa/idl/`) live under `rtiumaapy/datamodel/` — flat 596-module namespace
- Pre-wired service classes live under `rtiumaapy/services/{domain}/` — organized by UMAA function area
- The SDK package is `rtiumaapy/` — importable as `from rtiumaapy.services import ...`
- QoS XML (`qos/umaa_qos_lib.xml`) is the single source of truth; loaded via `UMAA_QOS_FILE` env var
- Tests are DDS integration tests (real participant, loopback transport) — no mocks
- `c++_ref/`, `umaa_docs/`, `umaapy-1.1.1/` are **legacy artifacts kept temporarily for context**

---

## Prerequisites

Before starting PR 1, the following one-time tasks must be completed:

### ~~Rename `umaapy2` → `rtiumaapy` in Architecture Docs~~ ✅ DONE

All architecture docs have been updated to use `rtiumaapy` as the package name. The following files were modified:

- `system-architecture.md`, `service-library.md`, `composite-services.md`, `services-catalog.md`
- `command-services.md`, `report-services.md`
- `large-set-services.md`, `large-list-services.md`, `specialization-reader-set.md`
- `base-service.md`, `dds-context.md`

---

## PR Stages

### PR 1 — Project Skeleton + Utilities

**Goal:** Package structure, zero-dependency utility classes, error types.

**Branch:** `feature/rtiumaapy-skeleton`

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/__init__.py` | — | Package root, version, public API exports |
| `rtiumaapy/py.typed` | — | PEP 561 marker |
| `rtiumaapy/guid_util.py` | [utilities.md](utilities.md) | `GUIDUtil.generate()`, `.to_hex()`, `.to_string()`, `.from_string()`, `NIL` |
| `rtiumaapy/timestamp.py` | [utilities.md](utilities.md) | `UmaaTimestamp.now()` → `DateTime` |
| `rtiumaapy/errors.py` | [error-handling.md](error-handling.md) | `CommandHookError(reason_enum, message)`, `CommandFailedError(session_id, status, reason_enum, message)`, `AssemblyError` |
| `pyproject.toml` | — | Package metadata, dependencies (`rti.connext>=7.5.0`) |
| `tests/test_guid_util.py` | — | Unit: generate, roundtrip hex/string, NIL constant |
| `tests/test_timestamp.py` | — | Unit: monotonicity, format |
| `tests/test_errors.py` | — | Unit: exception attributes, inheritance |

**No DDS dependency** — pure Python. Can be reviewed/merged immediately.

**Acceptance criteria:**
- `pytest tests/test_guid_util.py tests/test_timestamp.py tests/test_errors.py` passes
- `from rtiumaapy import GUIDUtil, UmaaTimestamp, CommandHookError` works

---

### PR 2 — DDSContext + BaseService

**Goal:** Core DDS infrastructure — participant lifecycle, entity factories, service registry, startup/shutdown.

**Branch:** `feature/rtiumaapy-dds-context`

**Depends on:** PR 1

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/dds_context.py` | [dds-context.md](dds-context.md) | Singleton, `create_topic()`, `create_writer()`, `create_reader()`, `create_filtered_reader()`, QoS resolution via topic_filter, registry. Uses generated constants from `UMAA::DdsDefinitions` (profile names, CFT expressions). |
| `rtiumaapy/base_service.py` | [base-service.md](base-service.md) | `BaseService` ABC: auto-register on `__init__`, abstract `_run()` / `close()` |
| `resource/umaa_qos_lib.xml` | already exists | Bundle with package |
| `tests/conftest.py` | — | Shared `DDSContext` fixture (loopback transport, unique domain_id per test) |
| `tests/test_dds_context.py` | — | Integration: singleton, create entities, topic reuse, shutdown cleanup |
| `tests/test_base_service.py` | — | Integration: registration, `run_until_shutdown()` lifecycle, signal handling |

**Key design points:**
- `run_until_shutdown()` starts all `_run()` coroutines, installs SIGINT/SIGTERM handlers
- `shutdown()` is async — cancels tasks, awaits `close()` in reverse order, tears down participant
- QoS resolution is fully external via `topic_filter` rules in `umaa_qos_lib.xml` — no application-side resolver. DDSContext references profile names via generated `UMAA::DdsDefinitions` constants.

**Acceptance criteria:**
- Can create a `DDSContext`, register a trivial `BaseService` subclass, call `run_until_shutdown()`, Ctrl-C, verify clean teardown
- `create_writer()` / `create_reader()` return valid DDS entities with correct QoS

---

### PR 3 — ReportProvider + ReportConsumer (Tier 1)

**Goal:** Simplest service tier — validates the entire DDSContext → BaseService → entity flow end-to-end.

**Branch:** `feature/rtiumaapy-reports`

**Depends on:** PR 2

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/report_provider.py` | [report-services.md](report-services.md) | Sync `write()` is non-blocking under `ASYNCHRONOUS_PUBLISH_MODE` (D35), `close()` with instance disposal (`source_id`), auto-QoS |
| `rtiumaapy/report_consumer.py` | [report-services.md](report-services.md) | `_run()` with `take_async()`, `on_report` callback, instance state check |
| `tests/test_report_provider.py` | — | Integration: write sample, verify on raw reader |
| `tests/test_report_consumer.py` | — | Integration: raw writer → consumer callback fires |
| `tests/test_report_lifecycle.py` | — | Integration: startup → write → shutdown → verify dispose |

**This is the first "prove it works" PR** — a full pub/sub round-trip through DDSContext + QoS + async lifecycle.

**Acceptance criteria:**
- Provider writes samples; a raw DataReader receives them
- Consumer callback fires when samples arrive
- `close()` disposes the report instance (instance state changes to NOT_ALIVE_DISPOSED on subscriber side)

---

### PR 4 — CommandProvider + CommandConsumer (Tier 0)

**Goal:** Full command lifecycle with state machine, hooks, CFT, instance state detection, disposal.

**Branch:** `feature/rtiumaapy-commands`

**Depends on:** PR 2 (can be developed in parallel with PR 3)

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/command_provider.py` | [command-services.md](command-services.md) | 7 async hooks incl. `on_updated()` (D39), CFT on destination, `_run()` with instance state detection for cancel/crash |
| `rtiumaapy/command_provider_session.py` | [command-services.md](command-services.md) | `run()` coroutine with while-loop re-entry (D48), `CancelledError` 3-intent handler (D46: cancel/fail/update), `update()` method (D48/D39), `_publish_status()` with `_current_state` tracking (C38), `_transition_to()` with per-state failure reason validation (D51), `_dispose_provider_instances()` |
| `rtiumaapy/command_consumer.py` | [command-services.md](command-services.md) | `send()` auto-stamps source/destination/sessionID/timeStamp (D47) + 4 hooks (D45/C37: `on_status`, `on_ack`, `on_exec_status`, `on_terminal`), dynamic CFT (`"1=0"` ↔ `sessionID`), one active session constraint, `_end_session()` sole cleanup owner (C35) |
| `tests/test_command_lifecycle.py` | — | Integration: send → ISSUED → COMMANDED → EXECUTING → COMPLETED |
| `tests/test_command_rejection.py` | — | Integration: D3 rejection (RESOURCE_REJECTED) with active session; D42 validation rejection (VALIDATION_FAILED) after ISSUED+Ack |
| `tests/test_command_cancel.py` | — | Integration: dispose command → CANCELED |
| `tests/test_command_failure.py` | — | Integration: `CommandHookError` from provider hooks → FAILED with correct reason; consumer receives `CommandFailedError` with session_id, status, reason_enum, message (D40). Also: invalid transition rejection (`_transition_to()` rejects impossible state jumps). Also: reason coercion (D51) — `CommandHookError(OBJECTIVE_FAILED)` from ISSUED state → coerced to `SERVICE_FAILED` with warning log |
| `tests/test_command_update.py` | — | Integration: same sessionID + newer timestamp → ISSUED(UPDATED) → `on_updated(previous, updated)` hook fires with correct arguments (C32) → re-enters state machine (D39). Also: update on terminal state → FAILED. Also: older timestamp → ignored. |
| `tests/test_command_shutdown.py` | — | Integration: provider `close()` → FAILED(SERVICE_FAILED), instance disposal; consumer `close()` during active session → `_end_session(None)` fires `on_terminal(session_id, None)` (C39) |
| `tests/test_command_disambiguation.py` | — | Integration (C28): combined update vs. reject routing — session X active, session Y rejected (D3), session X updated (D39), verify X still active after Y rejection |
| `tests/test_command_provider_crash.py` | — | Integration (C29): consumer detects `NOT_ALIVE_NO_WRITERS` on provider crash → `on_terminal(session_id, None)` fires |
| `tests/test_command_exec_status.py` | — | Integration (C30): 4th-slot exec_status round-trip — provider publishes during `on_executing()`, consumer receives via `on_exec_status()` hook; also verify 3-slot mode (no exec_status) works |
| `tests/test_command_ack.py` | — | Integration (C37): ack round-trip — provider echoes command in ack → consumer `on_ack()` hook fires with correct ack data; verify ack contains echoed command fields |
| `tests/test_command_consumer_cft.py` | — | Integration (C31): consumer CFT lifecycle — idle rejects stale samples, active receives only its session, after completion filter resets |
| `rtiumaapy/dds_context.py` (refactor) | D17 | Replace `_topics` dict cache with `dds.Topic.find()`. Remove `_topics.clear()` from shutdown. |
| `tests/test_dds_context.py` (update) | D17 | Verify `get_topic()` returns same Topic via `dds.Topic.find()` for repeated calls; verify multiple readers on same topic work correctly |
| `rtiumaapy/report_provider.py` (refactor) | D35 | No write API change needed — sync `write()` is already non-blocking under `ASYNCHRONOUS_PUBLISH_MODE` QoS. Add `close()` with instance disposal. |
| All command writers | D35 | CommandProvider ack/status writers + CommandConsumer command writer use sync `write()` (non-blocking via QoS). |
| `tests/test_report_provider.py` (update) | D35 | Verify `prov.write(sample)` works. No async write migration needed. |
| `rtiumaapy/report_consumer.py` (refactor) | D36 | Remove `on_report` callback param. Add `async def on_report(self, sample)` hook (subclass-override). Update `_run()` to call `self.on_report()`. Retain `start()`. |
| `tests/test_report_consumer.py` (update) | D36 | Refactor all tests to use subclass-override pattern instead of callback. Verify subclass `on_report()` receives samples. Verify base class `on_report()` is no-op (no crash if not overridden). |
| `rtiumaapy/errors.py` (refactor) | D40 | Replace `UmaaCommandException` with `CommandHookError(reason_enum, message)` for provider hooks and `CommandFailedError(session_id, status, reason_enum, message)` for consumer-side failures. Update all references. |
| `tests/test_errors.py` | D40 | Unit: `CommandHookError` carries reason_enum + message, `CommandFailedError` carries session_id + status + reason_enum + message. Verify per-state reason validation rejects illegal reason/state combos. |

**Highest risk PR** — get this right and everything else is a variation.

**Acceptance criteria:**
- Full happy path: consumer sends → provider processes through all 7 hooks → COMPLETED → instances disposed
- Active session rejection: second command (different sessionID) during active session → ISSUED → COMMANDED → FAILED(RESOURCE_REJECTED)
- Command update: same source + sessionID + newer timestamp → ISSUED(UPDATED) → re-enters hooks → COMPLETED
- Command update on terminal state: → FAILED
- Command update with older timestamp: silently ignored
- Cancel: consumer disposes command → provider detects NOT_ALIVE_DISPOSED → CANCELED
- Failure: hook raises `CommandHookError(VALIDATION_FAILED)` from `validate_command` → ISSUED → Ack → FAILED(VALIDATION_FAILED) (D42); consumer receives `CommandFailedError`
- Validation rejection: `validate_command` returns `(False, reason)` → ISSUED + Ack published before FAILED; no COMMANDED state entered
- Shutdown: provider `close()` → active session gets FAILED(SERVICE_FAILED) → instances disposed
- Provider crash: consumer detects `NOT_ALIVE_NO_WRITERS` → `on_terminal(session_id, None)` fires (C29)
- Execution status: provider publishes exec_status during `on_executing()` → consumer `on_exec_status()` hook receives it; 3-slot mode (no exec_status) still works (C30)
- Consumer CFT lifecycle: idle → active → idle filter transitions verified; stale samples rejected; only session’s samples received (C31)
- `on_updated()` arguments: both previous and updated command data passed correctly, verified to differ (C32)
- Cancel/shutdown cleanup: `cancel()` and `fail()` use `task.cancel()` → `finally` sole cleanup owner (D46); no double-dispose
- Per-state reason validation: `VALIDATION_FAILED` only from ISSUED, `RESOURCE_REJECTED` only from COMMANDED, `OBJECTIVE_FAILED` only from EXECUTING
- Reason coercion (D51): hook raises invalid reason for current state → `_transition_to()` logs warning, coerces to `SERVICE_FAILED`
- Invalid transition guard: `_transition_to()` rejects impossible state jumps (e.g., ISSUED → COMPLETED) with error
- Consumer `send()` guards: new command while session active → `RuntimeError`; update with wrong session_id → `RuntimeError`
- Consumer `close()` during active session: `_end_session(None)` fires `on_terminal(session_id, None)` and resets filters (C39)
- Ack round-trip: provider echoes command in ack → consumer `on_ack()` hook fires with correct ack data; ack contains echoed command fields (C37)
- Consumer cancel immediate cleanup (D50): `cancel()` calls `_end_session(None)` — disposes command, resets filters, clears state, fires `on_terminal(session_id, None)` immediately; if provider's CANCELED arrives later, `_session_id` is already `None` → idempotent no-op
- State tracking: `_publish_status()` updates `_current_state` before DDS write — `_transition_to()` validates failure reason against correct state (D51/C38)
- Consumer auto-stamping: `send()` stamps source, destination, sessionID, timeStamp from constructor params — caller never sets header fields (D47)
- Update re-entry: `update()` interrupts mid-execution via `task.cancel()` → ISSUED(UPDATED) → on_updated() → re-enters state machine (D48)

---

### PR 5 — Multi-Topic Utilities + Large Set (Tier 2)

**Goal:** Set-valued reports with full CRUD writer and QueryCondition-based reader assembly.

**Branch:** `feature/rtiumaapy-large-set`

**Depends on:** PR 3

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/slots.py` | [large-set-services.md](large-set-services.md), [large-list-services.md](large-list-services.md) | `SetElementSlot`, `ListElementSlot` dataclasses |
| `rtiumaapy/multi_topic.py` | [multi-topic-utilities.md](multi-topic-utilities.md) | `read_large_set()`, `read_large_list()`, `wire_list_chain()` |
| `rtiumaapy/large_set_writer.py` | [large-set-services.md](large-set-services.md) | `LargeSetWriter`: insert, insert_many, update, remove, clear, get, find |
| `rtiumaapy/large_set_provider.py` | [large-set-services.md](large-set-services.md) | `LargeSetReportProvider`: `get_set_writer()`, `publish()`, `write()`, close with disposal |
| `rtiumaapy/large_set_consumer.py` | [large-set-services.md](large-set-services.md) | `LargeSetReportConsumer`: reusable QueryCondition assembly |
| `tests/test_large_set_writer.py` | — | Unit: CRUD operations, metadata auto-tracking, clear disposes |
| `tests/test_large_set_roundtrip.py` | — | Integration: provider CRUD → consumer assembles correct elements |

**Acceptance criteria:**
- `LargeSetWriter` CRUD: insert/update/remove update metadata correctly, remove/clear dispose DDS instances
- Elements-first protocol: elements arrive before root
- Consumer assembles elements correctly via QueryCondition with `&hex()` filter
- `on_assembly_error` callback fires on FK resolution failures (per [error-handling.md](error-handling.md))
- Round-trip: provider writes 10 elements, removes 3, updates 2 → consumer reads 7 correct elements

---

### PR 6 — Large List (Tier 3)

**Goal:** Ordered list-valued reports with linked-list CRUD writer.

**Branch:** `feature/rtiumaapy-large-list`

**Depends on:** PR 5

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/large_list_writer.py` | [large-list-services.md](large-list-services.md) | `LargeListWriter`: prepend, append, insert_at, update, pop_front, pop_back, remove, clear, prepend_many, append_many |
| `rtiumaapy/large_list_provider.py` | [large-list-services.md](large-list-services.md) | `LargeListReportProvider`: `get_list_writer()`, `publish()` |
| `rtiumaapy/large_list_consumer.py` | [large-list-services.md](large-list-services.md) | `LargeListReportConsumer`: linked-list traversal assembly |
| `tests/test_large_list_writer.py` | — | Unit: positional ops, pointer rewiring verification |
| `tests/test_large_list_roundtrip.py` | — | Integration: prepend/append/insert/remove → reader assembles in correct order |

**Acceptance criteria:**
- `LargeListWriter` maintains correct `nextElementID` chain after every operation
- `metadata.startingElementID` always points to head
- `on_assembly_error` callback fires on broken chain links (per [error-handling.md](error-handling.md))
- Round-trip: provider builds list [A, B, C], inserts X at 1, removes B → consumer reads [A, X, C] in order
- `clear()` disposes all DDS instances
- `pop_front()` / `pop_back()` correctly rewire neighbors

---

### PR 7 — Composite Services (Tier 4)

**Goal:** All 26 handwritten one-off classes for deeply nested or multi-pattern types.

**Branch:** `feature/rtiumaapy-composites`

**Depends on:** PR 4 + PR 6

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/composites/__init__.py` | — | Package init, `__all__` |
| `rtiumaapy/composites/specialization.py` | [specialization-reader-set.md](specialization-reader-set.md) | `SpecializationReaderSet`, `SpecializationType` dataclass, `OBJECTIVE_SPECIALIZATIONS` (13 types), `CONDITIONAL_SPECIALIZATIONS` (19 types) |
| **Composite Reports (6 classes)** | | |
| `rtiumaapy/composites/mission_plan.py` | [composite-services.md](composite-services.md) | `MissionPlanReportProvider/Consumer` (4-level: root → plans(set) → tasks(set) → objectives(set) + constraints(set) + spec dispatch) |
| `rtiumaapy/composites/conditional.py` | [composite-services.md](composite-services.md) | `ConditionalReportProvider/Consumer` (root + gen/spec set, 19 specialization types) |
| `rtiumaapy/composites/obj_exec_status.py` | [composite-services.md](composite-services.md) | `ObjExecExecStatusProvider/Consumer` (root + gen/spec detailed statuses set, 12 status types) |
| **Composite Commands (12 classes)** | | |
| `rtiumaapy/composites/global_waypoint.py` | [composite-services.md](composite-services.md) | `GlobalWaypointCommandProvider/Consumer` (4-slot cmd + waypoint large list) |
| `rtiumaapy/composites/mission_plan_cmd.py` | [composite-services.md](composite-services.md) | `MissionPlanCommandProvider/Consumer` (cmd + mission plan element readers) |
| `rtiumaapy/composites/mission_plan_obj_add.py` | [composite-services.md](composite-services.md) | `MissionPlanObjAddCommandProvider/Consumer` (3-slot cmd + gen/spec objective readers) |
| `rtiumaapy/composites/conditional_add.py` | [composite-services.md](composite-services.md) | `ConditionalAddCommandProvider/Consumer` (3-slot cmd + 19 gen/spec conditional readers) |
| `rtiumaapy/composites/obj_exec_cmd.py` | [composite-services.md](composite-services.md) | `ObjExecCommandProvider/Consumer` (4-slot cmd + gen/spec + exec status) |
| `rtiumaapy/composites/mission_plan_mission_add.py` | [composite-services.md](composite-services.md) | `MissionPlanMissionAddCommandProvider/Consumer` (cmd + deep nested tree — most complex command) |
| `rtiumaapy/composites/mission_plan_task_add.py` | [composite-services.md](composite-services.md) | `MissionPlanTaskAddCommandProvider/Consumer` (cmd + nested tree, one less level than MissionAdd) |
| **Tests** | | |
| `tests/test_mission_plan_assembly.py` | — | Integration: 4-level nested report assembly |
| `tests/test_conditional_assembly.py` | — | Integration: gen/spec conditional assembly |
| `tests/test_composite_command.py` | — | Integration: GlobalWaypoint command + waypoint list round-trip |
| `tests/test_specialization_reader.py` | — | Integration: lazy reader creation, FK resolution |

**26 classes total** across 11 module files. Can be split into sub-PRs (e.g., PR 7a: reports, PR 7b: commands) if MissionPlan proves complex.

**Acceptance criteria:**
- `MissionPlanReportConsumer` assembles root → mission plans (set) → task plans (set) → objectives (set) → specialization dispatch correctly
- `ConditionalReportConsumer` assembles root → conditionals (set) → specialization dispatch with all 19 conditional types
- `ObjExecExecStatusConsumer` assembles root → detailed statuses (set) → specialization dispatch with 12 status types
- `SpecializationReaderSet` lazily creates readers per topic and reads by `specializationReferenceID`
- `SpecializationType` registry constants are complete (13 objective, 19 conditional specialization types)
- `GlobalWaypointCommandProvider` extends command pattern with additional waypoint list reader
- `MissionPlanMissionAddCommandProvider` handles full deep-nested tree (most complex command)
- All composite command classes correctly combine base command slots with extra entity readers/writers

---

### PR 8 — Pre-Wired Service Library

**Goal:** Auto-generated concrete classes for all ~458 UMAA Tier 0–3 services.

**Branch:** `feature/rtiumaapy-service-library`

**Depends on:** PR 7

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/services/__init__.py` | — | Package init, `__all__` |
| `rtiumaapy/services/co.py` | [services-catalog.md](services-catalog.md), [service-library.md](service-library.md) | Common Operations domain |
| `rtiumaapy/services/eo.py` | — | Engineering Operations |
| `rtiumaapy/services/mm.py` | — | Mission Management |
| `rtiumaapy/services/mo.py` | — | Maritime Operations |
| `rtiumaapy/services/sa.py` | — | Situational Awareness |
| `rtiumaapy/services/sem.py` | — | Sensors |
| `rtiumaapy/services/so.py` | — | System Operations |
| `tools/generate_services.py` | — | Code generator script from catalog stem tables |
| `tests/test_service_library.py` | — | Verify all ~458 classes importable, correct base class, valid bindings |
| `rtiumaapy/dds_context.py` | D38 | Add optional `run_blocking(func, *args)` convenience method wrapping `asyncio.to_thread()`. Document thread safety in hook docstrings. |

**Mostly mechanical** — each class is ~5 lines inheriting a base template with hardcoded types/topics. The generator script reads the stem tables and produces the module files. Tier 4 composites (26 classes) are handwritten in PR 7, not generated.

**Acceptance criteria:**
- `from rtiumaapy.services.co import EngineControlProvider, EngineControlConsumer` works
- All classes have correct IDL type bindings
- `generate_services.py` is idempotent and produces identical output

---

### PR 9 — Examples + Documentation

**Goal:** Working examples and API docs.

**Branch:** `feature/rtiumaapy-docs`

**Depends on:** PR 6+ (any PR after core is stable)

| Deliverable | Notes |
|---|---|
| `examples/report_pubsub.py` | Simplest: ReportProvider + ReportConsumer |
| `examples/command_lifecycle.py` | Full command with hooks |
| `examples/large_set_crud.py` | LargeSetWriter CRUD + publish |
| `examples/multi_service_app.py` | Multiple services via `run_until_shutdown()` |
| `docs/` Sphinx setup | API reference auto-generated from docstrings |
| `README.md` | Quickstart guide, installation, architecture overview |

**Acceptance criteria:**
- Each example runs standalone and demonstrates the documented pattern
- Sphinx builds without warnings
- README has working quickstart

---

## Dependency Graph

```
PR1 (Utilities — pure Python)
  └──► PR2 (DDSContext + BaseService)
         ├──► PR3 (ReportProvider/Consumer)
         │      └──► PR5 (MultiTopic + LargeSet)
         │             └──► PR6 (LargeList)
         │                    └──► PR7 (Composites)
         │                           └──► PR8 (Service Library)
         └──► PR4 (CommandProvider/Consumer)  ← parallel with PR3
                └──► PR7 (Composites)

PR9 (Examples/Docs) ← after PR6+
```

**Parallelization opportunities:**
- PR 3 and PR 4 can be developed **in parallel** once PR 2 is merged
- PR 5 and PR 6 can be parallelized since they share `slots.py` (include it in PR 5)
- PR 9 can start as soon as PR 3 is merged (report examples first)

---

## Estimated Effort

| PR | Complexity | Files | Risk | Parallel? |
|---|---|---|---|---|
| **PR 1** | Low | ~8 | Low — pure Python | — |
| **PR 2** | Medium | ~6 | Medium — DDS lifecycle | — |
| **PR 3** | Low | ~5 | Low — validates infra | Yes (with PR 4) |
| **PR 4** | **High** | ~9 | **High** — state machine + CFT + disposal | Yes (with PR 3) |
| **PR 5** | Medium | ~7 | Medium — QueryCondition + CRUD | — |
| **PR 6** | Medium | ~5 | Medium — linked-list mgmt | — |
| **PR 7** | **High** | ~15 | **High** — 26 classes, nested assembly, spec dispatch | — |
| **PR 8** | Low | ~9 | Low — generated code | — |
| **PR 9** | Low | ~7 | Low — documentation | Yes (anytime after PR 6) |

---

## Testing Strategy

All tests are **DDS integration tests** — real `DDSContext`, real readers/writers, localhost-only loopback transport.

**`conftest.py` fixtures:**
- `dds_context` — creates a `DDSContext` with unique domain_id (avoids test interference), loopback-only transport
- `event_loop` — `asyncio` event loop for async tests
- Cleanup: `shutdown()` called in fixture teardown

**No mocks** — the v1 test suite demonstrated that mocking DDS at the API boundary creates fragile tests. DDS integration tests with loopback transport are fast (~10ms per test) and test real behavior.

**External compliance:** USTM (UMAA Standard Test Module) for ICD protocol conformance — not part of this test suite.

---

## Architecture Doc References

Each PR maps to specific architecture docs. When implementing, treat these as the source of truth:

| Doc | Primary PR |
|---|---|
| [utilities.md](utilities.md) | PR 1 |
| [error-handling.md](error-handling.md) | PR 1 |
| [dds-context.md](dds-context.md) | PR 2 |
| [base-service.md](base-service.md) | PR 2 |
| [qos-profiles.md](qos-profiles.md) | PR 2 (reference only — no `qos.py`; constants come from `DdsDefinitions.idl`) |
| [report-services.md](report-services.md) | PR 3 |
| [command-services.md](command-services.md) | PR 4 |
| [multi-topic-utilities.md](multi-topic-utilities.md) | PR 5 |
| [large-set-services.md](large-set-services.md) | PR 5 |
| [large-list-services.md](large-list-services.md) | PR 6 |
| [composite-services.md](composite-services.md) | PR 7 |
| [specialization-reader-set.md](specialization-reader-set.md) | PR 7 |
| [services-catalog.md](services-catalog.md) | PR 8 |
| [service-library.md](service-library.md) | PR 8 |

Cross-cutting docs (referenced by multiple PRs):
- [arch_review.md](arch_review.md) — bug tracker, action items, C++ SDK comparison notes
- [v1/design-decisions.md](v1/design-decisions.md) — D1–D16 rationale (in v1 subfolder)
- [v1/known-bugs.md](v1/known-bugs.md) — v1 bugs resolved in v2 (in v1 subfolder)
- [system-architecture.md](system-architecture.md) — top-level design principles, threading model, tiered architecture overview
- [implementation-gaps.md](implementation-gaps.md) — verified API patterns (CFT syntax, QueryCondition, rti.asyncio, FK relationships, QoS validation)

---
