# Changelog

## v0.1.0 (2026-03-27) — Preliminary Release

First public release of the RTI UMAA Python SDK. Delivers everything needed to build a working UMAA component using Tier 0 (command) and Tier 1 (report) service templates.

### SDK Core

- **`DDSContext`** — Singleton DDS infrastructure manager with auto QoS assignment via `UMAA_QOS_FILE`, topic cache, service registry, and coordinated shutdown
- **`BaseService`** — Abstract base class with auto-registration, `close()` lifecycle, and optional `_run()` coroutine
- **`BaseComponent`** — Abstract base class for multi-service components with `on_start()`, `_run()`, and `close()` lifecycle hooks
- **`CommandProvider`** — Tier 0 server-side command template with full ICD state machine (ISSUED → COMMANDED → EXECUTING → COMPLETED/FAILED/CANCELED), 7 async hooks, content-filtered reader, automatic ack/status publishing
- **`CommandConsumer`** — Tier 0 client-side command template with `send()`, `cancel()`, discovery waiting, and lifecycle hooks (`on_status`, `on_ack`, `on_exec_status`, `on_terminal`)
- **`CommandProviderSession`** — Per-command state machine with validated transitions (D51 fail-reason checking), cancel/fail/update support
- **`ReportProvider`** — Tier 1 single-topic publisher with field validation and instance disposal on close
- **`ReportConsumer`** — Tier 1 single-topic subscriber with async `on_report()` hook

### Utilities

- **`GUIDUtil`** — GUID generation, hex conversion for CFT filter expressions, UUID string conversion
- **`UmaaTimestamp`** / **`set_timestamp()`** — UMAA DateTimeType ↔ Python datetime bidirectional conversion
- **`CommandHookError`** / **`CommandFailedError`** / **`AssemblyError`** — Typed exception hierarchy
- **`CommandResult`** — Command execution result wrapper
- **Field validation** — Automatic numeric range and enum validation against UMAA IDL constraints

### Pre-Wired Service Library

- **350 concrete service classes** across 7 UMAA domains:
  - **CO** (Common Operations) — 42 classes
  - **EO** (Engineering Operations) — 58 classes
  - **MM** (Mission Management) — 70 classes
  - **MO** (Maritime Operations) — 18 classes
  - **SA** (Situational Awareness) — 66 classes
  - **SEM** (Sensors) — 26 classes
  - **SO** (System Operations) — 70 classes
- Auto-generated from UMAA IDL via `tools/generate_services.py`
- Each class pre-wires command/ack/status/exec_status types and topic names

### Generated Data Model

- **596 Python type modules** in `rtiumaapy.datamodel` generated from UMAA IDL using `rtiddsgen`

### Examples

- **Autopilot component** — Full 18-service UMAA component (4 command providers, 4 command consumers, 4 report providers, 6 report consumers)
- **GlobalVector consumer** — Minimal command consumer example

### QoS

- 4 QoS profiles via XML `topic_filter` rules (TelemetryQoS, CommandQoS, ConfigQoS, ElementQoS)
- AssignerQoS automatic profile matching by topic name suffix
- USTM tool compatibility mode (commented, ready to enable)
- Cyclone DDS interoperability support

### Testing

- **1,628 tests** passing (unit + DDS integration)
- ~1,400 parametrized service library import/subclass/binding tests
- Full command lifecycle tests (ack, status, exec_status, rejection, cancellation, update, failure, crash recovery)
- Full report lifecycle tests (pub/sub, validation, dispose)
- QoS topic_filter regression tests

### Not Yet Implemented

- Tier 2: Large Set services (LargeSetReportProvider/Consumer)
- Tier 3: Large List services (LargeListReportProvider/Consumer)
- Tier 4: Composite services (explicit multi-topic assembly)
