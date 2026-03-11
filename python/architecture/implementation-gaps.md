# Implementation Gap Analysis

> Generated from IDL datamodel, existing Python code (v1 + v2 DDSContext),
> C++ reference SDKs (PSU/ARL, JHU/APL), and RTI Connext Python examples.
> This document captures verified facts, corrections to architecture docs,
> and remaining action items for rtiumaapy implementation.

---

## 1  IDL Field Names — Verified

### 1.1  CommandType (3 keys + timeStamp)

All CommandType IDL structs share:

```idl
@key UMAA::Common::IdentifierType       source;       // originator (id + parentID)
@key UMAA::Common::Measurement::NumericGUID sessionID;  // correlates the 4-slot exchange
@key UMAA::Common::IdentifierType       destination;  // target service provider
     UMAA::Common::Measurement::DateTime       timeStamp;
     // ... domain-specific payload fields
```

`IdentifierType` is `@nested` with two fields: `id` (NumericGUID) and `parentID` (NumericGUID).  
`NumericGUID` is `typedef octet NumericGUID[16]` — a 128-bit UUID.

**Example**: `EngineCommandType` adds `plugState`, `propulsion`, `state`.

### 1.2  CommandStatusType (2 keys)

```idl
@key UMAA::Common::IdentifierType       source;
@key UMAA::Common::Measurement::NumericGUID sessionID;
     UMAA::Common::Measurement::DateTime       timeStamp;
     CommandStatusEnumType                      commandStatus;
     CommandStatusReasonEnumType                commandStatusReason;
     string<4095>                               logMessage;
```

**Note**: `destination` is NOT a key in CommandStatusType (only 2 keys vs CommandType's 3).

### 1.3  CommandAckReportType (2 keys)

```idl
@key UMAA::Common::IdentifierType       source;
@key UMAA::Common::Measurement::NumericGUID sessionID;
     UMAA::Common::Measurement::DateTime       timeStamp;
     <DomainCommandType>                        command;   // full command echoed back
```

### 1.4  ReportType (1+ keys)

Standard pattern:

```idl
@key UMAA::Common::IdentifierType       source;
     UMAA::Common::Measurement::DateTime       timeStamp;
     // ... domain-specific payload
```

Some reports have additional keys (e.g., `HealthReportType` has `@key code` + `@key resourceID`).

### 1.5  Common Measurement Types

| Type | Definition |
|------|-----------|
| `NumericGUID` | `typedef octet NumericGUID[16]` |
| `DateTime` | `struct { long long seconds; long nanoseconds; }` |
| `Priority` | `typedef long` (0–255) |
| `Count` | `typedef long` |

---

## 2  SetElement / ListElement Wrappers — Verified

### 2.1  Large Set Element (unordered)

**Metadata** (embedded in parent report):
```idl
struct LargeSetMetadata {
    NumericGUID setID;              // FK to SetElement.setID
    NumericGUID updateElementID;    // signals atomic update complete
    @optional DateTime updateElementTimestamp;
    long size;                      // element count after update
};
```

**SetElement wrapper** (separate DDS topic):
```idl
struct <Prefix>SetElement {
    <PayloadType>  element;          // the wrapped payload
    @key NumericGUID setID;          // FK back to metadata.setID
    @key NumericGUID elementID;      // unique within set
    DateTime elementTimestamp;
};
```

### 2.2  Large List Element (ordered / linked)

**Metadata**:
```idl
struct LargeListMetadata {
    NumericGUID listID;              // FK to ListElement.listID
    NumericGUID updateElementID;
    @optional DateTime updateElementTimestamp;
    NumericGUID startingElementID;   // head of linked list
    long size;
};
```

**ListElement wrapper**:
```idl
struct <Prefix>ListElement {
    <PayloadType>  element;
    @key NumericGUID listID;         // FK back to metadata.listID
    @key NumericGUID elementID;
    DateTime elementTimestamp;
    @optional NumericGUID nextElementID;  // linked-list pointer (empty = tail)
};
```

### 2.3  Payload Access

The wrapped payload is always named `element` — extract via `sample.element`.  
The FK join field for sets is `setID`; for lists is `listID`.

---

## 3  CFT Filter Expressions — Verified

### 3.1  Syntax for NumericGUID (octet[16])

The v1 Python SDK uses the RTI `&hex()` builtin filter function:

```python
filter_expr = (
    f"destination.parentID = &hex({guid_to_hex(source.parentID)})"
    f" AND destination.id = &hex({guid_to_hex(source.id)})"
)
```

Where `guid_to_hex()` returns 16 space-separated hex byte pairs, e.g.  
`"01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10"`.

### 3.2  RTI CFT API (Python)

From the RTI example `cft_subscriber.py`:

```python
str_filter = dds.Filter("name MATCH %0", ["SOME_STRING"])
str_filter.name = dds.Filter.STRINGMATCH_FILTER_NAME  # only for STRINGMATCH
cft = dds.ContentFilteredTopic(topic, "cft_name", str_filter)
reader = dds.DataReader(subscriber, cft, reader_qos)

# Dynamic filter update:
cft.append_to_expression_parameter(0, "NEW_VALUE")
cft.remove_from_expression_parameter(0, "OLD_VALUE")
# or full replacement:
cft.set_filter(dds.Filter(new_expression, new_params))
```

### 3.3  Command Provider CFT (destination filter)

Filters incoming commands addressed to *this* provider:

```python
filter_expr = (
    f"destination.parentID = &hex({guid_to_hex(my_id.parentID)})"
    f" AND destination.id = &hex({guid_to_hex(my_id.id)})"
)
reader, cft = ctx.create_filtered_reader(
    CmdType, cmd_topic, filter_expr
)
```

### 3.4  Command Consumer CFT (session filter)

Initially blocks all data, then dynamically adds per-session filters:

```python
# Initial: block everything
reader, cft = ctx.create_filtered_reader(
    StatusType, status_topic, "1 = 0"
)

# When session starts: update filter
filter_expr = (
    f"source.parentID = &hex({guid_to_hex(pid.parentID)})"
    f" AND source.id = &hex({guid_to_hex(pid.id)})"
    f" AND sessionID = &hex({guid_to_hex(sid)})"
)
cft.set_filter(dds.Filter(filter_expr))
```

Multiple concurrent sessions joined with `OR`:

```python
clauses = []
for session in active_sessions:
    clauses.append(
        f"source.parentID = &hex({guid_to_hex(pid.parentID)})"
        f" AND source.id = &hex({guid_to_hex(pid.id)})"
        f" AND sessionID = &hex({guid_to_hex(session.id)})"
    )
combined = " OR ".join(clauses) if clauses else "1 = 0"
cft.set_filter(dds.Filter(combined))
```

### 3.5  Report Consumer CFT (source filter)

```python
filter_expr = " OR ".join(
    f"source.parentID = &hex({guid_to_hex(s.parentID)})"
    f" AND source.id = &hex({guid_to_hex(s.id)})"
    for s in sources
)
```

---

## 4  QueryCondition API — Verified

### 4.1  RTI Python API

From the RTI example `waitset_query_cond_subscriber.py`:

```python
query = dds.Query(reader, "name MATCH %0", ["'EVEN'"])
query_condition = dds.QueryCondition(query, dds.DataState.any_data)

# Read with condition:
for data in reader.select().condition(query_condition).take_data():
    print(data)

# Update parameters:
query_condition.parameters = ["'ODD'"]
```

### 4.2  UMAA Usage — Element Scoping

QueryCondition scopes element reads to a specific root's collection:

```python
query = dds.Query(
    element_reader,
    f"setID = &hex({guid_to_hex(root_set_metadata.setID)})"
)
condition = dds.QueryCondition(query, dds.DataState.any_data)
try:
    for data in element_reader.select().condition(condition).take_data():
        process(data.element)
finally:
    condition.close()
```

### 4.3  Alternative: Post-Filter in Code

The PSU/ARL and JHU/APL C++ SDKs both use application-level filtering
(no DDS CFT or QueryCondition). This is simpler but less efficient:

```python
# Application-level alternative
for data in element_reader.take_data():
    if data.setID == target_set_id:
        process(data.element)
```

---

## 5  rti.asyncio API Patterns — Verified

### 5.1  Async Reader Loop

```python
async for data, info in reader.take_async():
    if info.valid:
        process(data)
```

Data-only variant (no SampleInfo):

```python
async for data in reader.take_data_async():
    process(data)
```

### 5.2  Entry Point

```python
import rti.asyncio

rti.asyncio.run(main_coroutine())
```

### 5.3  QoS Provider Methods

Confirmed from existing code:

```python
qos_provider = dds.QosProvider(qos_file)
participant_qos = qos_provider.participant_qos_from_profile("Lib::Profile")
writer_qos     = qos_provider.datawriter_qos_from_profile("Lib::Profile")
reader_qos     = qos_provider.datareader_qos_from_profile("Lib::Profile")

# topic_filter-based QoS resolution (used by DDSContext):
qos_provider.default_profile = "UMAAQoSLib::AssignerQoS"
writer_qos = qos_provider.get_topic_datawriter_qos(topic_name)
reader_qos = qos_provider.get_topic_datareader_qos(topic_name)
```

---

## 6  Composite FK Relationships — Verified

### 6.1  MissionPlan Hierarchy

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
│                                   ├── specializationID ──► <Specialization>.specializationReferenceID
│                                   └── specializationTopic (string, names the specialization DDS topic)
└── constraintsSetMetadata.setID ──► MissionPlanReportTypeConstraintsSetElement.setID
```

### 6.2  Specialization Pattern

Both `ObjectiveType` and `ConditionalType` use the same pattern:

| Generalization field | Specialization field |
|---------------------|---------------------|
| `specializationID` | `@key specializationReferenceID` |
| `specializationTimestamp` | `specializationReferenceTimestamp` |
| `specializationTopic` | (names the DDS topic for this specialization) |

Specializations live on separate DDS topics. The `SpecializationReaderSet` resolves them.

### 6.3  Examples of Specialization Topics Found

**Objective specializations** (14): RouteObjectiveType, CircleObjectiveType, RacetrackObjectiveType, StationKeepObjectiveType, TransitObjectiveType, AreaSearchObjectiveType, TrackObjectiveType, etc.

**Conditional specializations** (19): SpeedConditionalType, LogicalANDConditionalType, LogicalORConditionalType, TimeConditionalType, DepthConditionalType, GeographicConditionalType, etc.

### 6.4  RouteObjectiveType (specialization with its own collection)

```idl
struct RouteObjectiveType {
    StringShortDescription routeDescription;
    DateTime specializationReferenceTimestamp;
    @key NumericGUID specializationReferenceID;  // FK ← ObjectiveType.specializationID
    LargeListMetadata waypointsListMetadata;     // Owns a large list of WaypointType
};
```

`waypointsListMetadata.listID` ──► `RouteObjectiveTypeWaypointsListElement.listID`

---

## 7  QoS Profile Structure — Verified

### 7.1  Production QoS (`qos/umaa_qos_lib.xml`)

Uses `topic_filter` for automatic assignment:

| Topic Filter | Profile | Key QoS |
|-------------|---------|---------|
| `*ReportType` | `TelemetryQoS` | BEST_EFFORT, KEEP_LAST 1 |
| `*CommandType` | `CommandQoS` | RELIABLE, liveliness 5s/10s, KEEP_ALL |
| `*SpecsReportType` | `ConfigQoS` | RELIABLE, TRANSIENT_LOCAL, KEEP_ALL |
| `*CommandStatusType` | `CommandQoS` | Same as Command |
| `*CommandAckReportType` | `CommandQoS` | Same as Command (overrides `*ReportType`) |
| `*ExecutionStatusType` | `CommandQoS` | Same as Command |
| `*SetElement` | `ElementQoS` | RELIABLE, KEEP_ALL (no liveliness) |
| `*ListElement` | `ElementQoS` | Same as Element |

### 7.2  Python SDK QoS

The Python SDK now uses the **same `topic_filter` approach** as the production QoS. `DDSContext` sets `qos_provider.default_profile = "UMAAQoSLib::AssignerQoS"` and factory methods call `get_topic_datawriter_qos(topic_name)` / `get_topic_datareader_qos(topic_name)`. No `QosCategory` enum or `PROFILE_MAP` required.

### 7.3  QoS Resolution API

```python
qp = dds.QosProvider(qos_file)
qp.default_profile = "UMAAQoSLib::AssignerQoS"
writer_qos = qp.get_topic_datawriter_qos(topic_name)  # matches topic_filter rules
reader_qos = qp.get_topic_datareader_qos(topic_name)   # matches topic_filter rules
```

---

## 8  Existing v1 Code Patterns

### 8.1  Key Classes

| Class | Module | Pattern |
|-------|--------|---------|
| `CommandProvider` | `umaapy.core.command_provider` | `DataReaderListener`; CFT on `destination`; single active command |
| `CommandConsumer` | `umaapy.core.command_consumer` | `DataWriterListener`; 3 CFT readers (ack/status/exec); dynamic filter per session |
| `ReportProvider` | `umaapy.core.report_provider` | `DataWriterListener`; stamps `source` + `timeStamp` |
| `ReportConsumer` | `umaapy.core.report_consumer` | `DataReaderListener`; CFT on `source(s)` |
| `UmaaCommand` | `umaapy.util.umaa_command` | Lifecycle: ack→issued→commanded→executing→completed/failed/canceled |
| `CommandSession` | `umaapy.util.command_session` | Consumer-side; `execute(timeout)`, `execute_async()`, `cancel()` |
| `DDSConfigurator` | `umaapy.util.dds_configurator` | Singleton; topic cache; reader/writer factory |
| `EventProcessor` | `umaapy.util.event_processor` | Priority thread-pool; one-off + recurring tasks |

### 8.2  Key Differences v1 → v2

| Aspect | v1 (umaapy) | v2 (rtiumaapy) |
|--------|-------------|-------------|
| Concurrency | `EventProcessor` thread pool | `rti.asyncio` single event loop |
| Reader delivery | `DataReaderListener.on_data_available()` | `reader.take_async()` async generator |
| DDS API | `rti.connextdds` (synchronous) | `rti.connextdds` + `rti.asyncio` |
| Service base | No formal base class | `BaseService` ABC |
| Entry point | Manual thread management | `rti.asyncio.run()` |
| QoS mapping | `DDSConfigurator` + `UmaaQosProfileCategory` | `DDSContext` + `topic_filter` via `get_topic_*_qos()` |

### 8.3  v2 Code Already Written

| File | Status | Notes |
|------|--------|-------|
| `dds_context.py` | ✅ Complete | Singleton, factory methods, service registry, shutdown lifecycle |
| `event_processor.py` | ✅ Complete | Priority thread pool (still used? or replaced by asyncio?) |
| `qos_category.py` | ❌ Removed | Superseded by `topic_filter` QoS assignment |
| `__init__.py` | ✅ Complete | Re-exports DDSContext, EventProcessor |

---

## 9  Corrections Needed in Architecture Docs

### 9.1  command-services.md

| Issue | Current | Correct |
|-------|---------|---------|
| CommandType keys | May assume 2 keys | **3 keys**: `source`, `sessionID`, `destination` |
| CommandStatusType keys | May assume 3 keys | **2 keys**: `source`, `sessionID` (no `destination`) |
| CommandAckReportType | Not consistently described | **2 keys**: `source`, `sessionID` + embedded `command` field |
| CFT filter syntax | Not shown with `&hex()` | Must use `&hex()` for NumericGUID octet[16] comparisons |
| Dynamic filter update | Not documented | Consumer uses `cft.set_filter(dds.Filter(...))` to add/remove sessions |

### 9.2  multi-topic-utilities.md

| Issue | Current | Correct |
|-------|---------|---------|
| Element payload field | May use `unwrap_field` generic | Always named `element` (verified from IDL) |
| Set FK field | Generic | Always `setID` |
| List FK field | Generic | Always `listID` |
| QueryCondition for GUID | May use string comparison | Must use `&hex()` for NumericGUID filtering |

### 9.3  qos-profiles.md

| Issue | Current | Correct |
|-------|---------|---------|
| 4 QoS categories | Telemetry, Command, Config, Element | v2 uses same `topic_filter` auto-assignment as production — no explicit categories |
| Python SDK categories | May list 4 | Currently only 3: `COMMAND`, `CONFIG`, `REPORT` |
| Report QoS | "BEST_EFFORT" | Python SDK actually uses **RELIABLE** KEEP_LAST 1 |

### 9.4  dds-context.md

| Issue | Current | Correct |
|-------|---------|---------|
| QoS assignment | `topic_filter` auto-assign | v2 DDSContext uses same `topic_filter` auto-assignment via `get_topic_*_qos(topic_name)` |
| CFT creation API | May be incomplete | Use `dds.ContentFilteredTopic(topic, name, dds.Filter(expr, params))` |
| EventProcessor | May be described as removed | Still exists in v2 codebase (TBD: remove or keep alongside asyncio?) |

---

## 10  Remaining Action Items

### 10.1  Architecture Doc Updates

- [ ] **command-services.md** — Update key counts (3 for CommandType, 2 for Status/Ack), add `&hex()` CFT examples, document dynamic filter update for consumer sessions
- [ ] **command-state-machine.md** — Verify state enum names match `CommandStatusEnumType` from IDL
- [ ] **multi-topic-utilities.md** — Replace generic field references with verified: `element`, `setID`, `listID`, `elementID`, `nextElementID`; add `&hex()` in QueryCondition examples
- [x] **qos-profiles.md** — ~~Reconcile 3-profile (Python SDK) vs 6-filter (production) models~~ **DONE:** Python SDK now uses same `topic_filter` approach as production
- [x] **dds-context.md** — ~~Document actual `PROFILE_MAP`~~ **DONE:** `PROFILE_MAP` removed; factory methods use `get_topic_*_qos(topic_name)`. `create_filtered_reader()` documented. Resolve EventProcessor status still open.
- [ ] **composite-services.md** — Add verified FK tree from §6.1; add `specializationTopic` routing
- [ ] **specialization-reader-set.md** — Add `specializationReferenceID` as @key; document `specializationTopic` field for topic discovery
- [ ] **large-set-services.md / large-list-services.md** — Add verified element wrapper fields from §2

### 10.2  Design Decisions Needed

- [ ] **EventProcessor fate**: v2 DDSContext still creates an EventProcessor, but architecture docs specify `rti.asyncio` exclusively. Remove EventProcessor from DDSContext, or keep for CPU-bound work?
- [ ] **QoS category for elements**: ~~Production QoS assigns elements to `CommandQoS`. Python SDK has no `ELEMENT` category. Add `QosCategory.ELEMENT` or reuse `COMMAND`?~~ **RESOLVED:** Using `topic_filter` auto-assignment — `*SetElement` and `*ListElement` automatically get `ElementQoS`.
- [ ] **Report BEST_EFFORT vs RELIABLE**: Python SDK uses RELIABLE for reports. Align with production (BEST_EFFORT) or keep for reliability during development?
- [ ] **QueryCondition vs application-level filter**: Both C++ SDKs use app-level filtering. QueryCondition is more efficient but adds complexity. Which approach for v2?
- [ ] **Concurrent commands**: PSU/ARL supports `ACCEPT_CONCURRENT`/`QUEUE_INCOMING`. v1 Python is single-session. What does v2 support?

### 10.3  Implementation Prerequisites

- [ ] **UmaaTimestamp utility**: Wrap `DateTime` struct ↔ Python datetime conversion
- [ ] **GUIDUtil utility**: `NumericGUID` (octet[16]) generation, `&hex()` formatting, string conversion
- [ ] **BaseService ABC**: Abstract `close()`, auto-register/unregister in DDSContext
- [ ] **CommandProvider skeleton**: 1 CFT reader (destination-filtered) + 2 writers (status + ack)
- [ ] **CommandConsumer skeleton**: 1 writer + 3 CFT readers (status/ack/exec) with dynamic filters
- [ ] **ReportProvider / ReportConsumer**: Simplest tier — implement first
- [ ] **LargeSetConsumer / LargeListConsumer**: Multi-topic assembly with `read_large_set()` / `read_large_list()`

### 10.4  IDL References to Verify

- [ ] Enumerate `CommandStatusEnumType` values (ACCEPTED, REJECTED, ISSUED, COMMANDED, EXECUTING, etc.)
- [ ] Enumerate `CommandStatusReasonEnumType` values
- [ ] Enumerate `TriggerStateEnumType` values
- [ ] Enumerate all 14 ObjectiveType specializations (full type names)
- [ ] Enumerate all 19 ConditionalType specializations (full type names)
- [ ] Find `CommandExecutionStatusReportType` pattern (the 4th slot — execution status)
