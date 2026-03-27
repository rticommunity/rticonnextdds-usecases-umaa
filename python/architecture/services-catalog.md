# Services Catalog

> Complete mapping of all ~250 UMAA services to their template classes, types, topics, and slot descriptors.

---

## Overview

Every UMAA service is a concrete instantiation of one of 26 service classes. This catalog lists every service type organized by tier and domain.

| Category | Classes | Services Covered |
|---|---|---|
| Tier 0 (Commands) | `CommandProvider` / `CommandConsumer` | ~60 command families |
| Tier 1 (Reports) | `ReportProvider` / `ReportConsumer` | ~169 simple report types |
| Tier 2 (Large Sets) | `LargeSetReportProvider` / `LargeSetReportConsumer` | 4 types |
| Tier 3 (Large Lists) | `LargeListReportProvider` / `LargeListReportConsumer` | 4 types |
| Tier 4 (Composites) | 18 one-off classes (6 report + 12 command) | ~12 complex types |
| **Total** | **26 classes** | **~250 services** |

---

## Naming Convention

Given a service stem `{Name}`, all types and topics are deterministic:

| Type | Naming Pattern | Topic Pattern |
|---|---|---|
| Report | `{Name}ReportType` | `{Name}ReportTypeTopic` |
| Command | `{Name}CommandType` | `{Name}CommandTypeTopic` |
| Ack | `{Name}CommandAckReportType` | `{Name}CommandAckReportTypeTopic` |
| Status | `{Name}CommandStatusType` | `{Name}CommandStatusTypeTopic` |
| Execution Status | `{Name}ExecutionStatusReportType` | `{Name}ExecutionStatusReportTypeTopic` |
| Set Element | `{Parent}Type{Field}SetElement` | `{Parent}Type{Field}SetElementTopic` |
| List Element | `{Parent}Type{Field}ListElement` | `{Parent}Type{Field}ListElementTopic` |

---

## Tier 0: Commands Without Execution Status (~53 types)

These commands use `CommandProvider` / `CommandConsumer` with 3 slots (command, ack, status).

### CO — Communications (9 commands)

| Stem | Module |
|---|---|
| `CommsChannelAddMessageConfig` | CO::CommsChannelConfig |
| `CommsChannelRemoveMessageConfig` | CO::CommsChannelConfig |
| `CommsChannelReset` | CO::CommsChannelConfig |
| `CommsChannelAddReceiver` | CO::CommsChannelReceiverControl |
| `CommsChannelRemoveReceiver` | CO::CommsChannelReceiverControl |
| `CommsChannelAddSender` | CO::CommsChannelSenderControl |
| `CommsChannelRemoveSender` | CO::CommsChannelSenderControl |
| `CommsChannelSenderSend` | CO::CommsChannelSenderControl |
| `CommsChannelUpdateSender` | CO::CommsChannelSenderControl |

### EO — Engineering/Operations (10 commands)

| Stem | Module |
|---|---|
| `Anchor` | EO::AnchorControl |
| `Engine` | EO::EngineControl |
| `FinControl` | EO::FinControl |
| `HeadingRateLimit` | EO::HeadingRateLimitConfig |
| `LightControl` | EO::LightControl |
| `PitchRateLimit` | EO::PitchRateLimitConfig |
| `Propulsor` | EO::PropulsorControl |
| `Rudder` | EO::RudderControl |
| `SpeedRateLimit` | EO::SpeedRateLimitConfig |
| `TurnRateLimit` | EO::TurnRateLimitConfig |

### MM — Mission Management (13 commands)

| Stem | Module |
|---|---|
| `ActiveConstraints` | MM::ActiveConstraintsControl |
| `ConditionalDelete` | MM::ConditionalControl |
| `MissionPlanExecution` | MM::MissionPlanExecutionControl |
| `MissionPlanMissionDelete` | MM::MissionPlanMissionControl |
| `MissionPlanMissionLoad` | MM::MissionPlanMissionControl |
| `MissionPlanObjectiveDelete` | MM::MissionPlanObjectiveControl |
| `MissionPlanPause` | MM::MissionPlanPauseControl |
| `MissionPlanResume` | MM::MissionPlanResumeControl |
| `MissionPlanTaskDelete` | MM::MissionPlanTaskControl |
| `MissionPlanTaskLoad` | MM::MissionPlanTaskControl |
| `ObjectiveExecutorConfig` | MM::ObjectiveExecutorControl |
| `RecoveryAction` | MM::RecoveryControl |
| `SafeSpeed` | MM::SafeSpeedControl |

### SA — Situational Awareness (2 commands)

| Stem | Module |
|---|---|
| `ContactFilterConfig` | SA::ContactFilterConfig |
| `GlobalPoseConfig` | SA::GlobalPoseConfig |

### SEM — Sensors (7 commands)

| Stem | Module |
|---|---|
| `FLS` | SEM::FLSControl |
| `InertialSensor` | SEM::InertialSensorControl |
| `SAS` | SEM::SASControl |
| `SSS` | SEM::SSSControl |
| `SVP` | SEM::SVPControl |
| `VideoStream` | SEM::VideoStreamControl |
| `Weather` | SEM::WeatherControl |

### SO — System Operations (10 commands)

| Stem | Module |
|---|---|
| `Emitter` | SO::EmitterControl |
| `ExternalInterrupt` | SO::SystemModeControl |
| `NetworkConfig` | SO::NetworkConfig |
| `ResourceAllocation` | SO::ResourceAllocation |
| `SpeedProfile` | SO::SpeedProfileControl |
| `SystemMode` | SO::SystemModeControl |
| `SystemTimeConfig` | SO::SystemTimeConfig |
| `TaskUpdate` | SO::TaskUpdateControl |
| `TimeSyncControl` | SO::SystemTimeConfig |
| `Watchdog` | SO::WatchdogConfig |

### MO — Maneuver/Operations (2 commands)

| Stem | Module |
|---|---|
| `PrimitiveDriver` | MO::PrimitiveDriverControl |
| `VehicleConfig` | MO::VehicleConfig |

---

## Tier 0: Commands With Execution Status (7 types)

These commands use `CommandProvider` / `CommandConsumer` with 4 slots (command, ack, status, execution_status).

| Stem | Module | Notes |
|---|---|---|
| `BIT` | SO::BITControl | Built-In Test |
| `FreeFloat` | MO::FreeFloatControl | — |
| `GlobalDrift` | MO::GlobalDriftControl | — |
| `GlobalHover` | MO::GlobalHoverControl | — |
| `GlobalVector` | MO::GlobalVectorControl | — |
| `GlobalWaypoint` | MO::GlobalWaypointControl | Also Tier 4 (composite with large list) |
| `ObjectiveExecutor` | MM::ObjectiveExecutorControl | Also Tier 4 (composite with gen/spec) |

---

## Tier 1: Plain Reports (~169 types)

All use `ReportProvider` / `ReportConsumer` with one slot (report).

Representative examples by domain:

| Domain | Example Stems |
|---|---|
| CO | `CommsChannelConfig`, `CommsChannelReceiver`, `CommsChannelSender` |
| EO | `Anchor`, `Battery`, `Engine`, `Fin`, `Light`, `Propulsor`, `Rudder` |
| MM | `ActiveConstraints`, `Conditional`, `MissionPlan`, `ObjectiveExecutor`, `RecoveryAction`, `SafeSpeed` |
| MO | `FreeFloat`, `GlobalDrift`, `GlobalHover`, `GlobalVector`, `GlobalWaypoint`, `SpeedProfile`, `PrimitiveDriver` |
| SA | `AIS`, `Altitude`, `Contact`, `Depth`, `GPS`, `GlobalPose`, `Heading`, `NavSolution`, `Speed`, `Attitude` |
| SEM | `FLS`, `InertialSensor`, `SAS`, `SSS`, `SVP`, `VideoStream`, `Weather` |
| SO | `BIT`, `Emitter`, `NetworkConfig`, `ResourceAllocation`, `SystemMode`, `SystemTime`, `Watchdog`, `Task` |

---

## Tier 2: Large Set Reports (4 types)

| Root Type | Set Element Slot | Element Type |
|---|---|---|
| `ContactReportType` | `contacts` | `ContactReportTypeContactsSetElement` |
| `PassiveContactReportType` | `contacts` | `PassiveContactReportTypeContactsSetElement` |
| `ResourceAllocationConfigReportType` | `resources` | `ResourceAllocationConfigReportTypeResourcesSetElement` |
| `CommsChannelConfigReportType` | `message_configs` | `CommsChannelConfigReportTypeMessageConfigsSetElement` |

---

## Tier 3: Large List Reports (4 types)

| Root Type | List Element Slot(s) | Element Type(s) |
|---|---|---|
| `PathReporterReportType` | `historical_global_paths`, `historical_local_paths`, `planned_global_paths`, `planned_local_paths` | 4 separate ListElement types |
| `CommsChannelSenderReportType` | `queued_messages` | `CommsChannelSenderReportTypeQueuedMessagesListElement` |
| `BatteryReportType` | `cells` | `BatteryReportTypeCellsListElement` |
| `SpeedProfileReportType` | `waypoints` | `SpeedProfileReportTypeWaypointsListElement` |

---

## Tier 4: Composite Report Services (6 classes)

### ConditionalReportConsumer / Provider

Receives `ConditionalReportType` with a set of gen/spec conditional elements.

| Entity | Topic |
|---|---|
| Root reader | `ConditionalReportTypeTopic` |
| Set element reader | `ConditionalReportTypeConditionalsSetElementTopic` |
| Per specialization | N readers from `supported_conditionals` |

**19 conditional specialization types:**

`ConstraintViolatedConditionalType`, `DepthConditionalType`, `DepthRateConditionalType`, `EmitterPresetConditionalType`, `ExpConditionalType`, `HeadingSectorConditionalType`, `LogicalANDConditionalType`, `LogicalNOTConditionalType`, `LogicalORConditionalType`, `MissionStateConditionalType`, `ObjectiveStateConditionalType`, `PitchRateConditionalType`, `RelativeSpeedConditionalType`, `RollRateConditionalType`, `SpeedConditionalType`, `TaskStateConditionalType`, `TimeConditionalType`, `WaterZoneConditionalType`, `YawRateConditionalType`

### MissionPlanReportConsumer / Provider

The most deeply nested type in UMAA:

```
MissionPlanReportType (root)
  └─ taskPlansSetMetadata → LargeSet of TaskPlanType
       └─ TaskPlanType
            ├─ constraintsSetMetadata → LargeSet of ConditionalType (gen/spec)
            └─ objectivesSetMetadata → LargeSet of ObjectiveType (gen/spec)
                 └─ RouteObjectiveType
                      └─ waypointsListMetadata → LargeList of WaypointType
```

| Entity | Topic |
|---|---|
| Root reader | `MissionPlanReportTypeTopic` |
| Task plans element | `MissionPlanTypeTaskPlansSetElementTopic` |
| Objectives element | `TaskPlanTypeObjectivesSetElementTopic` |
| Constraints element | `TaskPlanTypeConstraintsSetElementTopic` |
| Route waypoints element | `RouteObjectiveTypeWaypointsListElementTopic` |
| Per objective spec | N readers (13 types) |
| Per conditional spec | N readers (19 types) |

**13 objective specialization types:**

`AreaRandomWalkObjectiveType`, `CircleObjectiveType`, `DriftObjectiveType`, `ExpObjectiveType`, `Figure8ObjectiveType`, `FreeFloatObjectiveType`, `HoverObjectiveType`, `RacetrackObjectiveType`, `RegularPolygonObjectiveType`, `RouteObjectiveType`, `ScreenRandomWalkObjectiveType`, `StationkeepObjectiveType`, `VectorObjectiveType`

### ObjectiveExecutorExecutionStatusConsumer / Provider

Receives `ObjectiveExecutorExecutionStatusReportType` with gen/spec detailed status elements.

| Entity | Topic |
|---|---|
| Root reader | `ObjectiveExecutorExecutionStatusReportTypeTopic` |
| Detailed statuses element | `ObjExecExecStatusReportTypeDetailedStatusesSetElementTopic` |
| Per status specialization | N readers (12 types) |
| Route waypoint statuses | `RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementTopic` |

---

## Tier 4: Composite Command Services (12 classes)

### GlobalWaypointCommandProvider / Consumer

Standard 4-slot command plus large list waypoint elements.

| Entity | Direction (Provider) | Direction (Consumer) |
|---|---|---|
| Command | read (filtered) | write |
| Ack | write | read |
| Status | write | read |
| Execution status | write | read |
| Waypoints list element | read | write |

### MissionPlanObjectiveAddCommandProvider / Consumer

Standard 3-slot command plus gen/spec objective readers.

| Entity | Direction (Provider) |
|---|---|
| Command | read (filtered) |
| Ack | write |
| Status | write |
| Per objective specialization | read (N readers) |
| Route waypoints element | read (if Route selected) |

### ConditionalAddCommandProvider / Consumer

Standard 3-slot command plus gen/spec conditional readers (19 specialization types).

### ObjectiveExecutorCommandProvider / Consumer

Standard 4-slot command (has execution status) plus gen/spec objective readers.

### MissionPlanMissionAddCommandProvider / Consumer

The most complex command — same deep nesting as MissionPlanReportType:

| Entity | Direction (Provider) |
|---|---|
| Command | read (filtered) |
| Ack | write |
| Status | write |
| Task plans element | read |
| Objectives element | read |
| Constraints element | read |
| Route waypoints element | read |
| Per objective spec | read (N readers) |
| Per conditional spec | read (N readers) |

### MissionPlanTaskAddCommandProvider / Consumer

Same as MissionPlanMissionAdd but starts at TaskPlanType (one less nesting level).

---

## Complete Class Inventory

| # | Class | Tier | Pattern |
|---|---|---|---|
| 1 | `CommandProvider` | 0 | 4-slot command template |
| 2 | `CommandConsumer` | 0 | 4-slot command template |
| 3 | `ReportProvider` | 1 | Single-topic publish |
| 4 | `ReportConsumer` | 1 | Single-topic subscribe |
| 5 | `LargeSetReportProvider` | 2 | Root + N set element writers |
| 6 | `LargeSetReportConsumer` | 2 | Root + N set element readers |
| 7 | `LargeListReportProvider` | 3 | Root + N list element writers |
| 8 | `LargeListReportConsumer` | 3 | Root + N list element readers |
| 9 | `ConditionalReportProvider` | 4 | Root + gen/spec set |
| 10 | `ConditionalReportConsumer` | 4 | Root + gen/spec set |
| 11 | `MissionPlanReportProvider` | 4 | Deep nested tree |
| 12 | `MissionPlanReportConsumer` | 4 | Deep nested tree |
| 13 | `ObjExecExecStatusProvider` | 4 | Root + gen/spec set |
| 14 | `ObjExecExecStatusConsumer` | 4 | Root + gen/spec set |
| 15 | `GlobalWaypointCommandProvider` | 4 | Command + large list |
| 16 | `GlobalWaypointCommandConsumer` | 4 | Command + large list |
| 17 | `MissionPlanObjAddCommandProvider` | 4 | Command + gen/spec |
| 18 | `MissionPlanObjAddCommandConsumer` | 4 | Command + gen/spec |
| 19 | `ConditionalAddCommandProvider` | 4 | Command + gen/spec |
| 20 | `ConditionalAddCommandConsumer` | 4 | Command + gen/spec |
| 21 | `ObjExecCommandProvider` | 4 | Command + gen/spec + exec status |
| 22 | `ObjExecCommandConsumer` | 4 | Command + gen/spec + exec status |
| 23 | `MissionPlanMissionAddCommandProvider` | 4 | Command + deep nested tree |
| 24 | `MissionPlanMissionAddCommandConsumer` | 4 | Command + deep nested tree |
| 25 | `MissionPlanTaskAddCommandProvider` | 4 | Command + nested tree |
| 26 | `MissionPlanTaskAddCommandConsumer` | 4 | Command + nested tree |

---

## Pre-Wired Service Library

For Tiers 0–3 (the ~237 plain services), each service has a **named concrete class** that inherits its base template and hardcodes all IDL types and topics. No factory functions, no descriptor dataclasses — just direct construction:

```python
from rtiumaapy.services import EngineControlProvider, GPSReportConsumer

engine = EngineControlProvider(ctx, source_id=my_id)   # all type/topic wiring baked in
gps    = GPSReportConsumer(ctx)                         # 1 param for reports
```

Users subclass for custom behavior:

```python
class MyEngine(EngineControlProvider):
    async def on_executing(self, session):
        await self.hardware.set_rpm(session.command.data.rpm)
```

**Full design:** See `service-library.md` for constructor patterns, package layout, subclassing examples, and generation strategy.

---

## API Summary

| Class | Properties | Callbacks | Methods |
|---|---|---|---|
| `CommandProvider` | `command` | `on_command` | `send_ack`, `send_status`, `send_execution_status` |
| `CommandConsumer` | `ack`, `status`, `execution_status` | `on_ack`, `on_status`, `on_execution_status` | `send_command`, `execute` |
| `ReportConsumer` | `report` | `on_report` | — |
| `ReportProvider` | — | — | `write` |
| `LargeSetReportConsumer` | `report`, `<slot_name>` per slot | `on_elements`, `on_assembly_error` | — |
| `LargeSetReportProvider` | — | — | `write(root, elements)` |
| `LargeListReportConsumer` | `report`, `<slot_name>` per slot | `on_elements`, `on_assembly_error` | — |
| `LargeListReportProvider` | — | — | `write(root, elements)` |
| Tier 4 composites | Type-specific | Type-specific | Type-specific |

All classes inherit `BaseService` → guaranteed `close()` + auto-registration with `DDSContext`.
