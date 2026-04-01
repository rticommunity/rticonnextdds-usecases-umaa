# QoS Configuration

The SDK uses **automatic QoS assignment** — you never pass QoS profiles directly. Topic names drive QoS selection through `topic_filter` rules defined in the UMAA QoS XML file.

## How It Works

```
                              umaa_qos_lib.xml
create_writer("FooCommandStatusType")  ──►  AssignerQoS
                                              │
                                    topic_filter matching
                                              │
                              "*CommandStatusType" → CommandQoS ✓
```

When you create a reader or writer through `DDSContext`, the SDK:

1. Loads the QoS XML file specified by `UMAA_QOS_FILE`
2. Sets `UMAAQoSLib::AssignerQoS` as the default QoS profile
3. Calls `QosProvider.get_topic_datawriter_qos(topic_name)` which matches the topic name against `topic_filter` patterns

The `AssignerQoS` profile uses **first-match-wins** semantics — the first `topic_filter` whose pattern matches the topic name wins.

## QoS Profiles

| Profile | Reliability | History | Durability | Use Case |
|---|---|---|---|---|
| **TelemetryQoS** | Best Effort | KEEP_LAST 1 | Volatile | Periodic status/reports (GPS, health, wind) |
| **CommandQoS** | Reliable | KEEP_ALL (500) | Volatile | Commands, command status, ack, execution status |
| **ConfigQoS** | Reliable | KEEP_ALL (500) | Transient Local | Specs, configs (late-joiner support) |
| **ElementQoS** | Reliable | KEEP_ALL (500) | Volatile | SetElement / ListElement items |

## Topic Filter Rules

Filters are matched top-to-bottom. More specific patterns appear first:

| Pattern | Profile | Example Topics |
|---|---|---|
| `*SpecsReportType` | ConfigQoS | `UVPlatformSpecsReportType` |
| `*ConfigReportType` | ConfigQoS | `CommsChannelConfigReportType` |
| `*CommandAckReportType` | CommandQoS | `GlobalVectorCommandAckReportType` |
| `*ExecutionStatusReportType` | CommandQoS | `GlobalVectorExecutionStatusReportType` |
| `*ReportType` | TelemetryQoS | `HealthReportType`, `GPSReportType` |
| `*CommandStatusType` | CommandQoS | `GlobalVectorCommandStatusType` |
| `*CommandType` | CommandQoS | `GlobalVectorCommandType` |
| `*SetElement` | ElementQoS | `MissionPlanSetElement` |
| `*ListElement` | ElementQoS | `WaypointListElement` |

```{important}
The order matters. `*ExecutionStatusReportType` must appear **before** `*ReportType`
because execution status topics end in `ReportType` but need `CommandQoS` (reliable),
not `TelemetryQoS` (best effort).
```

## Environment Variable

Set `UMAA_QOS_FILE` to the absolute path of the QoS XML:

```bash
export UMAA_QOS_FILE=/path/to/qos/umaa_qos_lib.xml
```

If not set, `DDSContext.__init__()` raises `EnvironmentError`. You can also pass the path directly:

```python
ctx = DDSContext(domain_id=0, qos_file="/path/to/umaa_qos_lib.xml")
```

## Customizing QoS

### Modify the XML directly

Edit `qos/umaa_qos_lib.xml` to change profile settings. Common adjustments:

- **History depth**: Change `max_samples` / `max_samples_per_instance` in CommandQoS
- **Reliability timeout**: Adjust `max_blocking_time` for write-blocking behavior
- **Transport**: Enable/disable SHMEM in `DefaultUMAAParticipant`
- **Liveliness**: Adjust `lease_duration` for provider/consumer disconnect detection

### USTM Tool Compatibility

To use the RTI USTM validation tool, uncomment the USTM QoS lines in `AssignerQoS`:

```xml
<!-- Uncomment for USTM validation -->
<datawriter_qos topic_filter="*" base_name="USTMQoS" />
<datareader_qos topic_filter="*" base_name="USTMQoS" />
```

```{warning}
USTM QoS uses `topic_filter="*"` which matches **all** topics. Because of first-match-wins,
placing it at the top overrides all other filters. This is intentional — USTM needs
uniform QoS for its validation protocol.
```

### Cyclone DDS Interoperability

See [Vendor Interoperability](vendor-interoperability.md) for full details on Cyclone DDS data representation, key serialization, and type extensibility settings.

## Verifying QoS Assignment

You can check which QoS profile was assigned to a topic using RTI Admin Console, or programmatically:

```python
from rtiumaapy import DDSContext
ctx = DDSContext(domain_id=0)
writer = ctx.create_writer(SomeType, "GlobalVectorCommandType")
print(writer.qos.publication_name.name)  # → "CommandQoSWriter"
```

The `publication_name` and `subscription_name` fields in each QoS profile identify which profile was applied.
