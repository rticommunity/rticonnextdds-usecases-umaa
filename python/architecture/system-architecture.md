# UMAAPy2 System Architecture

> Python SDK for the Unmanned Maritime Autonomy Architecture (UMAA).
> Built on RTI Connext DDS with `rti.asyncio` for cooperative event-driven concurrency.

---

## Design Principles

| Principle | Description |
|---|---|
| **No side effects on import** | All imports are inert. No DDS entities created until `DDSContext()` is constructed. |
| **Explicit construction** | `DDSContext` takes all configuration in its constructor. No env-var-only config. |
| **Services own their entities** | Each provider/consumer creates and owns its own DataReaders/DataWriters. No entity sharing between services. |
| **Topic names from generated constants** | IDL-generated `umaa_types.py` provides `*Topic` string constants. Passed directly — no runtime derivation. |
| **External QoS assignment** | QoS profiles are assigned via `topic_filter` rules in XML. No application-level QoS enum. |
| **Registry-based lifecycle** | Services auto-register with `DDSContext` on construction and are closed in order during `shutdown()`. |
| **Event-driven, not poll-based** | Services use `reader.take_async()` on the `asyncio` event loop. No `cycle()` polling. |

---

## Terminology

| Term | Definition |
|---|---|
| **DDSContext** | Singleton owning the DomainParticipant, Publisher, Subscriber, QoS provider, and service registry. |
| **Service** | A provider or consumer — a self-contained unit that owns its DDS entities and implements a UMAA interaction pattern. |
| **Provider (service)** | Server-side: receives commands/config, sends ack/status/execution-status/reports. |
| **Consumer (service)** | Client-side: sends commands/config, receives ack/status/execution-status/reports. |
| **asyncio event loop** | Python's `asyncio` loop via `rti.asyncio`. Services use `reader.take_async()` for event-driven data delivery. |
| **BaseService** | Abstract base class inherited by all service templates. Enforces `close()` and auto-registration. |

---

## Threading Model

All service logic runs cooperatively on a single Python `asyncio` event loop via RTI's [`rti.asyncio`](https://community.rti.com/static/documentation/connext-dds/7.6.0/doc/api/connext_dds/api_python/rti.asyncio.html) module.

| Thread | Owner | Purpose |
|---|---|---|
| **Application thread** (asyncio event loop) | Application | Runs all service coroutines, callbacks, and assembly logic cooperatively |
| **DDS receive thread(s)** | RTI Connext (internal) | Receives network data, delivers to reader caches |
| **DDS database thread** | RTI Connext (internal) | Manages DDS entity housekeeping |
| **DDS event thread** | RTI Connext (internal) | Deadline/liveliness timers |

**Key design properties:**

- Each service's `_run()` coroutine uses `reader.take_async()` — an async iterator that yields samples when data arrives.
- Assembly and application callbacks run inline on the event loop thread.
- No locking is required for service-internal state — single-threaded cooperative model.
- CPU-bound work should use `asyncio.to_thread()` or `loop.run_in_executor()`.
- Performance budget: UMAA callbacks ~100 μs each, capacity ~10K/sec, typical load ~200/sec (2% utilization).

**C++ SDK comparison:** The PSU/ARL C++ SDK uses a poll-based model (`ServiceBase::cycle()` called periodically). The JHU/APL C++ SDK uses Eclipse Cyclone DDS with `AsyncWaitSet`. UMAAPy2 uses RTI Connext `rti.asyncio` — the Python equivalent of `AsyncWaitSet`.

```python
import rti.asyncio

async def main():
    ctx = DDSContext(domain_id=0)
    services = create_autopilot_services(ctx, source_id=my_id)
    await ctx.run_until_shutdown()

rti.asyncio.run(main())
```

---

## Package Layout

```
rtiumaapy/
├── __init__.py                  # Clean re-exports, no side effects
├── dds_context.py               # DDSContext singleton
├── base_service.py              # BaseService ABC
├── errors.py                    # CommandHookError, CommandFailedError (D40)
├── command_provider.py          # CommandProvider (Tier 0)
├── command_consumer.py          # CommandConsumer (Tier 0)
├── command_provider_session.py   # CommandProviderSession state machine
├── report_provider.py           # ReportProvider (Tier 1)
├── report_consumer.py           # ReportConsumer (Tier 1)
├── timestamp.py                 # UmaaTimestamp + set_timestamp convenience
├── guid_util.py                 # GUID generation, hex conversion for CFT filters
├── datamodel/                   # 596 flat generated IDL type modules
│   ├── HealthReportType.py
│   ├── GlobalVectorCommandType.py
│   └── ...
├── services/                    # 350 pre-wired concrete service classes
│   ├── __init__.py               # Re-exports all classes from all domains
│   ├── co/                       # Common Operations (42 classes)
│   ├── eo/                       # Engineering Operations (58 classes)
│   ├── mm/                       # Mission Management (70 classes)
│   ├── mo/                       # Maritime Operations (18 classes)
│   ├── sa/                       # Situational Awareness (66 classes)
│   ├── sem/                      # Sensors (26 classes)
│   └── so/                       # System Operations (70 classes)
└── resource/
    ├── __init__.py
    └── umaa_qos_lib.xml          # Bundled QoS profiles (unused — UMAA_QOS_FILE env var)
```
```

---

## Tiered Service Architecture

Services are organized into **tiers** based on their DDS entity pattern. Each tier is a template class with named slots. Application code constructs services by calling the template constructor with explicit types and topics.

| Tier | Template Class | Pattern | Types Covered |
|---|---|---|---|
| **0** | `CommandProvider` / `CommandConsumer` | 4 named slots: command, ack, status, exec_status | All ~60 command families |
| **1** | `ReportProvider` / `ReportConsumer` | 1 reader or writer | ~169 simple report types |
| **2** | `LargeSetReportProvider` / `LargeSetReportConsumer` | root + N flat set element children | 4 types |
| **3** | `LargeListReportProvider` / `LargeListReportConsumer` | root + N flat list element children | 4 types |
| **4** | One-off composite classes | All entities explicitly listed | ~12 complex composite types |

For the ~5 complex nested types (MissionPlanReportType, ConditionalReportType, etc.), **one-off concrete classes** are written. This trades minimal repetition for maximum clarity — every reader/writer is visible in the constructor.

```
         Library code (template classes)              Application code (service construction)
┌──────────────────────────────────────────┐    ┌───────────────────────────────────────────┐
│                                          │    │                                           │
│  Tier 0: CommandProvider / Consumer      │◄───│    CommandProvider(ctx,                    │
│    command (reader/writer)               │    │      command_type=EngineCommandType,       │
│    ack     (writer/reader)               │    │      command_topic=EngineCommandTypeTopic, │
│    status  (writer/reader)               │    │      ack_type=..., ack_topic=...,          │
│    exec_status (writer/reader, optional) │    │      status_type=..., status_topic=...,    │
│                                          │    │      source_id=my_id)                      │
│  Tier 1: ReportProvider / Consumer       │◄───│                                           │
│    report (reader or writer)             │    │    ReportConsumer(ctx,                      │
│                                          │    │      report_type=GPSReportType,             │
│  Tier 2: LargeSetReport                  │◄───│      report_topic=GPSReportTypeTopic)       │
│    report + N set element slots          │    │                                           │
│                                          │    │    LargeSetReportConsumer(ctx,              │
│  Tier 3: LargeListReport                 │◄───│      report_type=ContactReportType,         │
│    report + N list element slots         │    │      report_topic=...,                      │
│                                          │    │      elements=[SetElementSlot(...)])        │
│  Tier 4: One-off composites              │◄───│                                           │
│    (each entity explicitly listed)       │    │    MissionPlanReportConsumer(ctx, ...)       │
└──────────────────────────────────────────┘    └───────────────────────────────────────────┘
```

---

## UMAA Communication Pattern Mapping

The UMAA ADD lists three communication patterns. ICD review confirms they map to two template types:

| UMAA Pattern | DDS Mechanism | UMAAPy2 Template |
|---|---|---|
| **Command/Response** | Write commands, read ack/status/exec_status | Tier 0: `CommandProvider` / `CommandConsumer` |
| **Request/Reply** | Consumer subscribes, provider publishes | Tier 1–4: `ReportProvider` / `ReportConsumer` (+ variants) |
| **Publish/Subscribe** | Same as Request/Reply | Same as above |

---

## QoS Assignment

QoS is assigned **externally** via `topic_filter` rules in `umaa_qos_lib.xml`. Application code passes only the topic name — QoS resolution is automatic.

| Topic Name Pattern | QoS Profile | Rationale |
|---|---|---|
| `*CommandType`, `*CommandAckReportType`, `*CommandStatusType`, `*ExecutionStatusType` | `CommandQoS` | RELIABLE + liveliness for interactive sessions |
| `*SpecsReportType` | `ConfigQoS` | RELIABLE + TRANSIENT_LOCAL for late joiners |
| `*SetElement`, `*ListElement` | `ElementQoS` | RELIABLE — missing elements corrupt collections |
| All other `*ReportType` | `TelemetryQoS` | BEST_EFFORT + KeepLast(1) for periodic data |

Full profile details → [QoS Profiles](qos-profiles.md)

---

## Service Construction Model

All services are **predefined and constructed in a services file** by calling the appropriate template constructor with concrete types and topic names. No runtime introspection, no dynamic discovery.

```python
from rtiumaapy import DDSContext
from rtiumaapy.core import CommandProvider, ReportConsumer, LargeSetReportConsumer, SetElementSlot
from rtiumaapy.core.composite import GlobalWaypointCommandProvider
from rtiumaapy.umaa_types import *

def create_autopilot_services(ctx: DDSContext, source_id):
    services = {}

    services["EngineControl"] = CommandProvider(ctx,
        command_type=EngineCommandType,
        command_topic=EngineCommandTypeTopic,
        ack_type=EngineCommandAckReportType,
        ack_topic=EngineCommandAckReportTypeTopic,
        status_type=EngineCommandStatusType,
        status_topic=EngineCommandStatusTypeTopic,
        source_id=source_id)

    services["GPSReport"] = ReportConsumer(ctx,
        report_type=GPSReportType,
        report_topic=GPSReportTypeTopic,
        on_report=handle_gps)

    services["ContactReport"] = LargeSetReportConsumer(ctx,
        report_type=ContactReportType,
        report_topic=ContactReportTypeTopic,
        elements=[
            SetElementSlot("contacts",
                ContactReportTypeContactsSetElement,
                ContactReportTypeContactsSetElementTopic)],
        on_elements=handle_contacts)

    services["GlobalWaypointControl"] = GlobalWaypointCommandProvider(ctx,
        source_id=source_id,
        on_command=handle_waypoint_command)

    return services
```

---

## Entity Count Analysis

26 template/composite classes cover every UMAA service pattern:

| Category | Count |
|---|---|
| Template classes (Tiers 0–3) | 8 |
| Composite report classes (Tier 4) | 6 |
| Composite command classes (Tier 4) | 12 |
| **Total service classes** | **26** |

These 26 classes can instantiate any of the ~250 UMAA services by passing the appropriate types/topics.

---

## Phase Roadmap

| Phase | Name | Key Deliverables |
|---|---|---|
| 1 | Foundation | `DDSContext`, bundled QoS XML, `rti.asyncio` integration |
| 2 | Multi-Topic Utilities | `read_large_set()`, `read_large_list()`, write helpers |
| 3 | Services | Tier 0–4 template classes and one-off composites |
| 4 | Utilities | `CommandProviderSession`, `CommandConsumerSession`, Timestamp, GUID utilities |
| 5 | Cleanup & Testing | Examples, integration tests, Sphinx docs |

**Dependency graph:**

```
Phase 1 (Foundation)
    │
    ├── Phase 2 (Multi-Topic Utilities)   ← needs DDSContext
    │
    ├── Phase 4 (Utilities)               ← needs DDSContext
    │
    ├── Phase 3 (Services)                ← needs Phases 1 + 2 + 4
    │
    └── Phase 5 (Cleanup & Testing)       ← needs everything above
```

---

## Related Documents

| Document | Description |
|---|---|
| [DDSContext](dds-context.md) | DDSContext singleton — DDS infrastructure owner |
| [BaseService](base-service.md) | Abstract base class for all service templates |
| [QoS Profiles](qos-profiles.md) | QoS assignment rules and profile reference |
| [Services Catalog](services-catalog.md) | Complete API surface for every template class + pre-defined service definitions |
| [Command Services](command-services.md) | Tier 0: CommandProvider / CommandConsumer, command lifecycle, sessions |
| [Report Services](report-services.md) | Tier 1: ReportProvider / ReportConsumer |
| [Large Set Services](large-set-services.md) | Tier 2: LargeSetReportProvider / Consumer |
| [Large List Services](large-list-services.md) | Tier 3: LargeListReportProvider / Consumer |
| [Composite Services](composite-services.md) | Tier 4: One-off classes |
| [Multi-Topic Utilities](multi-topic-utilities.md) | Utility functions for multi-topic assembly |
| [SpecializationReaderSet](specialization-reader-set.md) | User-selectable gen/spec dispatch |
| [Error Handling](error-handling.md) | Error strategy |
| [Utilities](utilities.md) | Timestamp, GUID, Listeners |
