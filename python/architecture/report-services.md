# Report Services

> Tier 1: `ReportProvider` and `ReportConsumer` — single-topic reporting for ~169 UMAA report types.

---

## Overview

Most UMAA services follow the simple publish/subscribe pattern: a provider periodically publishes data, and consumers subscribe. `ReportProvider` and `ReportConsumer` are single-topic template classes that cover this pattern.

**C++ SDK comparison:** The PSU/ARL C++ SDK provides `ReportProvider` and `ReportConsumer` base classes with the same structure — one DataWriter for the provider, one DataReader for the consumer. UMAAPy2 follows this pattern directly.

---

## ReportProvider

A `ReportProvider` owns a single DataWriter and publishes reports.

### Entity Layout

| Slot | Entity | QoS Profile |
|---|---|---|
| **report** | DataWriter | Auto-resolved from topic name |

### Class Definition

```python
class ReportProvider(BaseService):
    """Publishes a single report type."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        source_id: bytes,  # NumericGUID — required for keyed instance disposal
    ):
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._source_id = source_id
        topic = ctx.create_topic(report_type, report_topic)
        self._writer = ctx.create_writer(topic)

    def write(self, sample) -> None:
        """Publish a report sample."""
        self._writer.write(sample)

    async def close(self) -> None:
        # Dispose report instance per UMAA §5.2.1.3:
        # "When a provider stops publishing a report, it shall dispose
        # its instance to notify consumers."
        # C++ SDK: ReportProvider destructor creates key-only sample and disposes.
        try:
            key_holder = self._report_type()
            key_holder.source = self._source_id
            handle = self._writer.lookup_instance(key_holder)
            if handle != dds.InstanceHandle.nil():
                self._writer.dispose_instance(handle)
        except Exception:
            _logger.debug("Report instance dispose failed (may not have been registered)")
        self._writer.close()
```

### Usage

```python
gps_provider = ReportProvider(ctx,
    service_name="GPSReport",
    report_type=GPSReportType,
    report_topic=GPSReportTypeTopic,
    source_id=my_source_id,  # NumericGUID bytes
)

# Publish periodically
report = GPSReportType()
report.latitude = 38.9072
report.longitude = -77.0369
gps_provider.write(report)
```

---

## ReportConsumer

A `ReportConsumer` owns a single DataReader and delivers samples via callback or async iteration.

### Entity Layout

| Slot | Entity | QoS Profile |
|---|---|---|
| **report** | DataReader | Auto-resolved from topic name |

### Class Definition

```python
class ReportConsumer(BaseService):
    """Subscribes to a single report type."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        on_report: Optional[Callable] = None,
    ):
        super().__init__(ctx, service_name)
        topic = ctx.create_topic(report_type, report_topic)
        self._reader = ctx.create_reader(topic)
        self._on_report = on_report

    async def _run(self) -> None:
        """Main event loop — delivers samples to callback."""
        async for samples in self._reader.take_async():
            for sample in samples:
                if sample.info.valid and self._on_report:
                    self._on_report(sample.data)

    @property
    def reader(self) -> dds.DataReader:
        """Direct access to the DataReader for advanced use."""
        return self._reader

    async def close(self) -> None:
        self._reader.close()
```

### Usage

```python
def handle_gps(report):
    print(f"GPS: {report.latitude}, {report.longitude}")

gps_consumer = ReportConsumer(ctx,
    service_name="GPSReport",
    report_type=GPSReportType,
    report_topic=GPSReportTypeTopic,
    on_report=handle_gps,
)
```

---

## QoS Resolution

QoS is resolved automatically from the topic name:

| Topic Name Pattern | QoS Profile | Example Topics |
|---|---|---|
| `*SpecsReportType` | Config (TRANSIENT_LOCAL) | `VehicleSpecsReportType`, `EngineSpecsReportType` |
| `*ConfigReportType` | Config (TRANSIENT_LOCAL) | `NavigationConfigReportType` |
| All other `*ReportType` | Telemetry (BEST_EFFORT) | `GPSReportType`, `AttitudeReportType` |

No code change is needed to switch QoS — the topic naming convention handles it.

---

## Dedicated Readers

Each `ReportConsumer` instance gets its own `DataReader`, even if multiple consumers subscribe to the same topic. This enables:
- Independent QoS overrides per consumer
- Independent lifecycle management
- No reader contention between services

---

## Coverage

Tier 1 covers ~169 simple report types across all UMAA domains:

| Domain | Example Types |
|---|---|
| Navigation | `GPSReportType`, `AttitudeReportType`, `HeadingReportType` |
| Propulsion | `EngineReportType`, `PropellerReportType` |
| Sensors | `SonarReportType`, `CameraReportType`, `RadarReportType` |
| Vehicle | `VehicleSpecsReportType`, `BatteryReportType`, `FuelReportType` |
| Mission | `MissionStatusReportType`, `WaypointReportType` |

Full catalog → [Services Catalog](services-catalog.md)
