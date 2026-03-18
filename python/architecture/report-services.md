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
        key_holder: object,  # pre-built key instance for dispose on close()
    ):
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._report_topic = report_topic
        self._key_holder = key_holder
        self._writer = ctx.create_writer(report_type, report_topic)

    def write(self, sample) -> None:
        """Publish a report sample."""
        self._writer.write(sample)

    async def close(self) -> None:
        """Dispose the keyed instance and close the writer.

        Disposing notifies subscribers that this provider has stopped
        publishing (instance state → NOT_ALIVE_DISPOSED) per UMAA §5.2.1.3.

        A short sleep between dispose_instance() and writer.close() ensures
        the BEST_EFFORT dispose message is transmitted on the wire before
        the transport is torn down.

        This method is idempotent — calling it more than once is safe.
        """
        try:
            handle = self._writer.lookup_instance(self._key_holder)
            if handle != dds.InstanceHandle.nil():
                self._writer.dispose_instance(handle)
                await asyncio.sleep(0.1)  # let BEST_EFFORT dispose transmit
        except dds.AlreadyClosedError:
            return
        except Exception:
            _logger.debug("Report instance dispose failed (may not have been registered)")
        try:
            self._writer.close()
        except dds.AlreadyClosedError:
            pass
```

### Usage

```python
key = GPSReportType(source=my_source_id)

gps_provider = ReportProvider(ctx,
    service_name="GPSReport",
    report_type=GPSReportType,
    report_topic="GPSReportType",
    key_holder=key,
)

# Publish periodically
report = GPSReportType(source=my_source_id)
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
        self._report_type = report_type
        self._report_topic = report_topic
        self._on_report = on_report
        self._reader = ctx.create_reader(report_type, report_topic)
        self._task: Optional[asyncio.Task] = None

    def start(self) -> None:
        """Start the asynchronous event loop that delivers samples.

        Creates an ``asyncio.Task`` running ``_run()``.  The task is
        automatically cancelled when ``close()`` is called.
        """
        if self._task is None or self._task.done():
            self._task = asyncio.ensure_future(self._run())

    async def _run(self) -> None:
        """Async event loop — delivers valid samples to *on_report*.

        ``take_async()`` yields individual ``Sample`` objects (with ``.data``
        and ``.info`` attributes), one at a time.
        """
        async for sample in self._reader.take_async():
            if sample.info.valid and self._on_report is not None:
                try:
                    self._on_report(sample.data)
                except Exception:
                    _logger.exception(
                        "on_report callback failed for %s",
                        self._report_topic,
                    )

    @property
    def reader(self) -> dds.DataReader:
        """Direct access to the DataReader for advanced use."""
        return self._reader

    async def close(self) -> None:
        """Cancel the event loop task and close the DataReader.

        This method is idempotent — calling it more than once is safe.
        """
        if self._task is not None and not self._task.done():
            self._task.cancel()
            try:
                await self._task
            except asyncio.CancelledError:
                pass
            self._task = None
        try:
            self._reader.close()
        except dds.AlreadyClosedError:
            pass
```

### Usage

```python
def handle_gps(report):
    print(f"GPS: {report.latitude}, {report.longitude}")

gps_consumer = ReportConsumer(ctx,
    service_name="GPSConsumer",
    report_type=GPSReportType,
    report_topic="GPSReportType",
    on_report=handle_gps,
)
gps_consumer.start()
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
