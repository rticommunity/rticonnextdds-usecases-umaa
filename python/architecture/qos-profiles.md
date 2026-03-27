# QoS Profiles

> QoS is assigned **externally** via `topic_filter` rules in the XML QoS file. Application code passes only the topic name to `DDSContext.create_reader()` / `create_writer()` — QoS resolution is automatic. No `QosCategory` enum or `PROFILE_MAP` in application code.

---

## External QoS Assignment via `topic_filter`

The QoS library uses `topic_filter` rules to **automatically assign** QoS based on topic name suffixes. This is the same approach used by the C++ XML App Framework and RTI Recording/Replay services. The Python SDK uses an identical mechanism — `DDSContext` calls `qos_provider.get_topic_datawriter_qos(topic_name)` / `get_topic_datareader_qos(topic_name)`, which matches the topic name against `topic_filter` patterns and returns the correct QoS.

### How It Works

1. `DDSContext.__init__()` loads the QoS XML and sets `qos_provider.default_profile = "UMAAQoSLib::AssignerQoS"`
2. `create_reader(data_type, topic_name)` calls `qos_provider.get_topic_datareader_qos(topic_name)`
3. The QoS provider matches the topic name against `topic_filter` patterns in the XML
4. The matching profile's QoS is returned and applied to the DataReader/DataWriter

### Topic Filter Rules

| Topic Filter | Profile Name | Key QoS |
|-------------|-------------|---------|
| `*ReportType` | `TelemetryQoS` | BEST_EFFORT, KEEP_LAST 1 |
| `*CommandType` | `CommandQoS` | RELIABLE, KEEP_ALL, liveliness 5s writer / 10s reader |
| `*SpecsReportType` | `ConfigQoS` | RELIABLE, TRANSIENT_LOCAL, KEEP_ALL |
| `*CommandStatusType` | `CommandQoS` | Same as Command |
| `*CommandAckReportType` | `CommandQoS` | Same as Command (overrides `*ReportType`) |
| `*ExecutionStatusType` | `CommandQoS` | Same as Command |
| `*SetElement` | `ElementQoS` | RELIABLE, KEEP_ALL (no liveliness) |
| `*ListElement` | `ElementQoS` | Same as Element |

> **Precedence:** `*SpecsReportType` overrides the earlier `*ReportType` match because `topic_filter` rules are evaluated in declaration order and the last match wins.

### Key Benefits

| Benefit | Detail |
|---|---|
| **Centralized configuration** | `AssignerQoS` is the single profile that maps every topic to its QoS — one place to view, audit, and change all assignments |
| **Single source of truth** | One XML file governs all QoS behavior — no code-side QoS logic |
| **No enum coupling** | No `QosCategory`, no `PROFILE_MAP`, no per-call `qos_category=` parameter |
| **Vendor interop** | Swap the XML file to match a different UMAA vendor's QoS without code changes |
| **Extensible** | Add new topic filters to `AssignerQoS` with one XML line |
| **Same model everywhere** | Python SDK, C++ XML App Framework, Recording/Replay all use the same `topic_filter` rules |

---

## Profile Details

### CommandQoS Profile

For command/response exchanges where every message must arrive and session liveness is monitored.

| Policy | Value | Rationale |
|---|---|---|
| Reliability | `RELIABLE` | Commands must not be lost |
| History | `KEEP_ALL` | All commands must be delivered; removed only on reader acknowledgment |
| Durability | `VOLATILE` | Commands are transient — stale commands on rejoin would be harmful |
| Liveliness | Writer 5s / Reader 10s | Detects provider/consumer failure per ICD §4.1.4 |
| Publish mode | `ASYNCHRONOUS` | UMAA messages can be large |
| Resource limits | max_samples 500 / max_samples_per_instance 500 | Bounded queue to prevent unbounded memory growth |
| Max blocking time | 1s | Writer blocks up to 1s when resource limits hit |

**Applies to:** `*CommandType`, `*CommandAckReportType`, `*CommandStatusType`, `*ExecutionStatusType`.

### ElementQoS Profile

For Large Collection element topics (set/list members). Reliable delivery without late-joiner durability and without liveliness — elements are stateless ordered deliveries, not interactive sessions.

| Policy | Value | Rationale |
|---|---|---|
| Reliability | `RELIABLE` | Missing element corrupts parent collection |
| History | `KEEP_ALL` | All elements must be delivered in order |
| Publish mode | `ASYNCHRONOUS` | Non-blocking writes |
| Resource limits | max_samples 500 / max_samples_per_instance 500 | Bounded queue |
| Max blocking time | 1s | Writer blocks up to 1s when resource limits hit |

**Applies to:** `*SetElement`, `*ListElement`.

**Key differences from CommandQoS:**

| Concern | CommandQoS | ElementQoS | Rationale |
|---|---|---|---|
| Liveliness | 5s writer / 10s reader | None | Commands are stateful sessions; elements are stateless transfers |

### ConfigQoS Profile

For data that must survive restarts and be available to late joiners.

| Policy | Value | Rationale |
|---|---|---|
| Reliability | `RELIABLE` | Configuration must not be lost |
| Durability | `TRANSIENT_LOCAL` | Late joiners receive current config immediately |
| History | `KEEP_ALL` | No samples overwritten — removed only on reader acknowledgment |
| Publish mode | `ASYNCHRONOUS` | Non-blocking writes |
| Resource limits | max_samples 500 / max_samples_per_instance 500 | Bounded queue |
| Max blocking time | 1s | Writer blocks up to 1s when resource limits hit |

**Applies to:** `*SpecsReportType`.

### TelemetryQoS Profile

For periodic status/telemetry data sent at regular intervals. If a sample is dropped, the next one arrives shortly.

| Policy | Value | Rationale |
|---|---|---|
| Reliability | `BEST_EFFORT` | UDP "send and forget" — appropriate for high-rate periodic data |
| History | `KEEP_LAST(1)` | Only the latest sample matters |
| Publish mode | `ASYNCHRONOUS` | Non-blocking writes (UMAA messages are large) |

**Applies to:** All other `*ReportType` topics.

---

## `topic_filter` Rules (from `UMAAQoSLib::AssignerQoS`)

```xml
<qos_profile name="AssignerQoS">

  <!-- Reports: Best Effort -->
  <datawriter_qos topic_filter="*ReportType" base_name="TelemetryQoS" />
  <datareader_qos topic_filter="*ReportType" base_name="TelemetryQoS" />

  <!-- Commands: Reliable + Liveliness -->
  <datawriter_qos topic_filter="*CommandType" base_name="CommandQoS" />
  <datareader_qos topic_filter="*CommandType" base_name="CommandQoS" />

  <!-- Specs: Durable + Reliable (overrides *ReportType) -->
  <datawriter_qos topic_filter="*SpecsReportType" base_name="ConfigQoS" />
  <datareader_qos topic_filter="*SpecsReportType" base_name="ConfigQoS" />

  <!-- Command Status: Reliable -->
  <datawriter_qos topic_filter="*CommandStatusType" base_name="CommandQoS" />
  <datareader_qos topic_filter="*CommandStatusType" base_name="CommandQoS" />

  <!-- Command Ack Reports: Reliable (overrides *ReportType) -->
  <datawriter_qos topic_filter="*CommandAckReportType" base_name="CommandQoS" />
  <datareader_qos topic_filter="*CommandAckReportType" base_name="CommandQoS" />

  <!-- Execution Status: Reliable -->
  <datawriter_qos topic_filter="*ExecutionStatusType" base_name="CommandQoS" />
  <datareader_qos topic_filter="*ExecutionStatusType" base_name="CommandQoS" />

  <!-- Set/List Elements: Reliable (no liveliness) -->
  <datawriter_qos topic_filter="*SetElement" base_name="ElementQoS" />
  <datareader_qos topic_filter="*SetElement" base_name="ElementQoS" />
  <datawriter_qos topic_filter="*ListElement" base_name="ElementQoS" />
  <datareader_qos topic_filter="*ListElement" base_name="ElementQoS" />

</qos_profile>
```

---

## PRESENTATION QoS

PRESENTATION QoS is set at the **participant level** and inherited by all publishers/subscribers:

```xml
<participant_qos>
  <discovery_config>
    <publication_writer_publish_mode>
      <kind>ASYNCHRONOUS_PUBLISH_MODE_QOS</kind>
    </publication_writer_publish_mode>
    <subscription_writer_publish_mode>
      <kind>ASYNCHRONOUS_PUBLISH_MODE_QOS</kind>
    </subscription_writer_publish_mode>
  </discovery_config>
  <resource_limits>
    <type_object_max_serialized_length>30000</type_object_max_serialized_length>
    <contentfilter_property_max_length>512</contentfilter_property_max_length>
  </resource_limits>
</participant_qos>
```

The large `type_object_max_serialized_length` (30K) is needed because UMAA type objects are very large (e.g., `GlobalVectorCommandType` is ~20K serialized). The `contentfilter_property_max_length` (512) accommodates GUID-based CFT filter expressions.

---

## How Services Use QoS

Services simply pass the topic name to factory methods — QoS is resolved automatically:

```
Service constructor
    │
    ├── ctx.create_writer(CommandType, "SpeedCommandType")
    │       └── qos_provider.get_topic_datawriter_qos("SpeedCommandType")
    │               └── matches *CommandType → CommandQoS
    │
    └── ctx.create_reader(ReportType, "SpeedReportType")
            └── qos_provider.get_topic_datareader_qos("SpeedReportType")
                    └── matches *ReportType → TelemetryQoS
```

No `QosCategory` parameter, no `PROFILE_MAP` lookup. The topic name itself drives QoS assignment.

---

## Profile Summary Table

| Profile | Reliability | History | Durability | Extra | Used For |
|---|---|---|---|---|---|
| **TelemetryQoS** | BEST_EFFORT | KEEP_LAST(1) | VOLATILE | Async publish | General reports |
| **CommandQoS** | RELIABLE | KEEP_ALL | VOLATILE | Liveliness 5s/10s, async publish, max_samples 500 | Commands, Status, Ack, Execution Status |
| **ConfigQoS** | RELIABLE | KEEP_ALL | TRANSIENT_LOCAL | Async publish, max_samples 500 | Specs |
| **ElementQoS** | RELIABLE | KEEP_ALL | VOLATILE | Async publish, max_samples 500, no liveliness | Set/List Elements |

---

## JIRA Reference

**UMAA-3014:** Removed the requirement for providers to subscribe to their own `FunctionCommandStatusType` for persisted-command recovery. This simplification means Command QoS does not need `TRANSIENT_LOCAL` durability — `VOLATILE` is sufficient for all command topics.
