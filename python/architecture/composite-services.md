# Composite Services

> Tier 4: One-off classes for deeply nested or multi-pattern types that cannot be expressed with template slots.

---

## Overview

Most UMAA types (~240 of ~250) fit neatly into Tiers 0–3 (CommandProvider/Consumer, ReportProvider/Consumer, LargeSetReport, LargeListReport). A small number of types have **complex nested structures** or **unusual entity combinations** that require handwritten service classes.

Tier 4 classes are **one-off concrete classes** — each explicitly lists its readers, writers, and assembly logic. This trades minimal code repetition for maximum transparency: every DDS entity is visible in the constructor.

**Design tradeoff:** A deeply generic multi-level assembly framework could theoretically cover these types, but the added abstraction would obscure the DDS entity layout and make debugging harder. With only ~12 composite types, explicit classes are clearer and more maintainable.

---

## Verified FK Tree: MissionPlanReportType

The most complex type in UMAA. The verified IDL hierarchy (from [implementation-gaps.md §6.1](implementation-gaps.md)):

```
MissionPlanReportType (DDS topic, @key source)
├── missionPlanSetMetadata.setID ──► MissionPlanReportTypeMissionPlanSetElement.setID
│     └── element: MissionPlanType (@nested)
│           ├── missionID (primary ID)
│           ├── stateTrigger[].conditionalID ──► ConditionalType.conditionalID
│           └── taskPlansSetMetadata.setID ──► MissionPlanTypeTaskPlansSetElement.setID
│                 └── element: TaskPlanType (@nested)
│                       ├── taskID
│                       ├── stateTrigger[].conditionalID ──► ConditionalType.conditionalID
│                       └── objectivesSetMetadata.setID ──► TaskPlanTypeObjectivesSetElement.setID
│                             └── element: ObjectiveType (@nested)
│                                   ├── objectiveID
│                                   ├── duringConditionID ──► ConditionalType.conditionalID
│                                   ├── preconditionID ──► ConditionalType.conditionalID
│                                   ├── specializationID ──► <Spec>.specializationReferenceID
│                                   └── specializationTopic (string → DDS topic name)
└── constraintsSetMetadata.setID ──► MissionPlanReportTypeConstraintsSetElement.setID
      └── element: ConstraintType (@nested)
```

**Key observations:**
- The root's immediate children are **sets** (not lists): `missionPlanSetMetadata` and `constraintsSetMetadata`
- MissionPlanType contains a **set** of TaskPlanTypes (not a list)
- TaskPlanType contains a **set** of ObjectiveTypes (not a list)
- ObjectiveType uses the **specialization pattern**: `specializationID` + `specializationTopic` dispatch to separate DDS topics (see [Specialization Reader Set](specialization-reader-set.md))
- ConditionalType references are FKs resolved from a separate topic, also using the specialization pattern

---

## Composite Report Types

### MissionPlanReportConsumer

4 levels of nesting: root → mission plans → task plans → objectives (+ constraints at level 1).

```python
class MissionPlanReportConsumer(BaseService):
    def __init__(self, ctx: DDSContext, service_name: str):
        super().__init__(ctx, service_name)

        # Root reader
        self._root_reader = ctx.create_reader(
            MissionPlanReportType,
            MissionPlanReportTypeTopic,
        )

        # Level 1: mission plans (set)
        self._mission_plans_reader = ctx.create_reader(
            MissionPlanReportTypeMissionPlanSetElement,
            MissionPlanReportTypeMissionPlanSetElementTopic,
        )

        # Level 1: constraints (set)
        self._constraints_reader = ctx.create_reader(
            MissionPlanReportTypeConstraintsSetElement,
            MissionPlanReportTypeConstraintsSetElementTopic,
        )

        # Level 2: task plans within each mission plan (set)
        self._task_plans_reader = ctx.create_reader(
            MissionPlanTypeTaskPlansSetElement,
            MissionPlanTypeTaskPlansSetElementTopic,
        )

        # Level 3: objectives within each task plan (set)
        self._objectives_reader = ctx.create_reader(
            TaskPlanTypeObjectivesSetElement,
            TaskPlanTypeObjectivesSetElementTopic,
        )

        # Specialization reader set for objective dispatch
        self._spec_readers = SpecializationReaderSet(ctx, OBJECTIVE_SPECIALIZATIONS)
```

### Assembly Logic

Multi-level consumers chain `read_large_set()` calls across levels, unwrapping `sample.element` at each level:

```python
    async def _on_root(self, root_data):
        """Assemble the full mission plan tree from DDS topics."""

        # Level 1: read all mission plans in this report's set
        mission_plans = await read_large_set(
            self._mission_plans_reader,
            metadata=root_data,
            metadata_field="missionPlanSetMetadata",
        )

        # Level 1: read constraints
        constraints = await read_large_set(
            self._constraints_reader,
            metadata=root_data,
            metadata_field="constraintsSetMetadata",
        )

        for plan in mission_plans:
            # Level 2: read task plans within this mission plan
            plan.task_plans = await read_large_set(
                self._task_plans_reader,
                metadata=plan,
                metadata_field="taskPlansSetMetadata",
            )

            for task in plan.task_plans:
                # Level 3: read objectives within this task plan
                task.objectives = await read_large_set(
                    self._objectives_reader,
                    metadata=task,
                    metadata_field="objectivesSetMetadata",
                )

                # Level 4: resolve specialization for each objective
                for obj in task.objectives:
                    spec_topic = obj.specializationTopic
                    if spec_topic:
                        obj.specialization = await self._spec_readers.read_one(
                            spec_topic,
                            obj.specializationID,
                        )

        return {"mission_plans": mission_plans, "constraints": constraints}
```

### Specialization Dispatch

ObjectiveType's `specializationTopic` string names the DDS topic for the concrete specialization. The `SpecializationReaderSet` lazily creates readers for each topic:

```python
# Example: ObjectiveType with specializationTopic = "RouteObjectiveType"
# Resolves to reading RouteObjectiveType where:
#   @key specializationReferenceID == objective.specializationID
```

RouteObjectiveType itself owns a large list (`waypointsListMetadata`), requiring a further chained `read_large_list()`:

```python
# RouteObjectiveType contains:
#   waypointsListMetadata.listID ──► RouteObjectiveTypeWaypointsListElement.listID
```

See [Specialization Reader Set](specialization-reader-set.md) for the reader dispatch mechanism.

---

## Composite Command Types

Some command types have additional associated topics beyond the standard 4-slot pattern. These classes **extend** the command pattern with extra readers/writers.

### GlobalWaypointCommandProvider

A global waypoint command includes a waypoint list alongside the standard command lifecycle:

```python
class GlobalWaypointCommandProvider(BaseService):
    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        source_id: bytes,  # NumericGUID
        on_command: Callable = None,
    ):
        super().__init__(ctx, service_name)

        hex_id = guid_to_hex(source_id)

        # Standard 4-slot command entities (with &hex() CFT)
        self._command_reader, self._command_cft = ctx.create_filtered_reader(
            data_type=GlobalWaypointCommandType,
            topic_name=GlobalWaypointCommandTypeTopic,
            filter_expression=(
                f"destination.parentID = &hex({hex_id}) AND "
                f"destination.id = &hex({hex_id})"
            ),
        )
        self._ack_writer = ctx.create_writer(
            GlobalWaypointCommandAckReportType,
            GlobalWaypointCommandAckReportTypeTopic,
        )
        self._status_writer = ctx.create_writer(
            GlobalWaypointCommandStatusType,
            GlobalWaypointCommandStatusTypeTopic,
        )

        # Extra: waypoint list elements associated with the command
        self._waypoints_reader = ctx.create_reader(
            GlobalWaypointCommandTypeWaypointsListElement,
            GlobalWaypointCommandTypeWaypointsListElementTopic,
        )

        self._source_id = source_id
        self._on_command = on_command
```

---

## Why Not Recursive Templates?

A recursive `CompositeReportConsumer` template was considered:

```python
# Hypothetical recursive template (REJECTED)
CompositeReportConsumer(ctx,
    report_type=MissionPlanReportType,
    children=[
        SetSlot("missionPlanSetMetadata", ..., children=[
            SetSlot("taskPlansSetMetadata", ..., children=[
                SetSlot("objectivesSetMetadata", ...),
            ]),
        ]),
        SetSlot("constraintsSetMetadata", ...),
    ])
```

**Reasons for rejection:**
1. **Opacity:** The generic tree hides DDS entity details — debugging requires mentally unwinding the recursion.
2. **Scale:** Only ~12 types need composite handling. Generic machinery is not justified.
3. **Specialization dispatch:** ObjectiveType's `specializationTopic` routing cannot be expressed as a generic tree slot — it requires type-specific logic.
4. **Maintenance:** Adding a new composite type means writing one class with explicit entities (~40 lines) vs. adding one entry to a metadata registry and hoping the generic framework handles it correctly.

---

## Class Inventory

### Composite Report Classes

| Class | Root Type | Levels | Collection Types |
|---|---|---|---|
| `MissionPlanReportProvider` | `MissionPlanReportType` | 4 | root → plans(set) → tasks(set) → objectives(set) |
| `MissionPlanReportConsumer` | `MissionPlanReportType` | 4 | Same + specialization dispatch |
| `ConditionalReportProvider` | `ConditionalReportType` | 2 | root → specialization dispatch |
| `ConditionalReportConsumer` | `ConditionalReportType` | 2 | Same |

### Composite Command Classes

| Class | Command Type | Extra Entities |
|---|---|---|
| `GlobalWaypointCommandProvider` | `GlobalWaypointCommandType` | waypoint list reader |
| `GlobalWaypointCommandConsumer` | `GlobalWaypointCommandType` | waypoint list writer |
| `MissionPlanCommandProvider` | `MissionPlanCommandType` | mission plan element readers |
| `MissionPlanCommandConsumer` | `MissionPlanCommandType` | mission plan element writers |

---

## Related Documents

- [Multi-Topic Utilities](multi-topic-utilities.md) — `read_large_set()`, `read_large_list()` functions
- [Specialization Reader Set](specialization-reader-set.md) — `specializationTopic` dispatch
- [Large Set Services](large-set-services.md) — Tier 2 (single-level set)
- [Large List Services](large-list-services.md) — Tier 3 (single-level list)
- [Implementation Gaps §6](implementation-gaps.md) — Full verified FK tree

---
