# RTI UMAA Python SDK (`rtiumaapy`)

> Service template framework for the Unmanned Maritime Autonomy Architecture (UMAA), built on RTI Connext DDS with `rti.asyncio`.

---

## Overview

`rtiumaapy` is a Python SDK that provides **reusable service template classes** for building UMAA-compliant unmanned maritime systems. Instead of hand-wiring DDS readers/writers for every UMAA service, developers instantiate pre-built template classes with concrete IDL types and topic names. The SDK handles QoS assignment, lifecycle management, state machines, multi-topic assembly, and graceful shutdown automatically.

**Key facts:**
- **26 service template classes** cover every UMAA interaction pattern
- **~250 pre-wired service definitions** across 7 UMAA domains (CO, EO, MM, MO, SA, SE, SO)
- **Zero-config QoS** — profiles assigned automatically via `topic_filter` rules in XML
- **Event-driven** — all services use `rti.asyncio` with `reader.take_async()` (no polling)
- **Single-threaded cooperative model** — no locks, no thread safety concerns in application code

---

## Architecture

```
┌──────────────────────────────────────────────────────────────┐
│                      Application Code                        │
│   (create services, implement hooks, run event loop)         │
├──────────────────────────────────────────────────────────────┤
│                      rtiumaapy SDK                           │
│  ┌───────────────────────────────────────────────────────┐   │
│  │                     DDSContext                         │   │
│  │  DomainParticipant · Publisher · Subscriber · QoS     │   │
│  │  Service Registry · Shutdown Coordination             │   │
│  ├───────────────────────────────────────────────────────┤   │
│  │                   BaseService (ABC)                    │   │
│  │  close() · auto-registration · _run() coroutine       │   │
│  ├──────┬──────┬──────┬──────┬───────────────────────────┤   │
│  │Tier 0│Tier 1│Tier 2│Tier 3│ Tier 4                    │   │
│  │ Cmd  │Report│LgSet │LgList│ Composite                │   │
│  │4-slot│1-slot│root+N│root+N│ explicit entities         │   │
│  ├──────┴──────┴──────┴──────┴───────────────────────────┤   │
│  │  Utilities: GUIDUtil · UmaaTimestamp · Errors          │   │
│  │  Multi-Topic: read_large_set() · read_large_list()    │   │
│  │  State Machines: CommandProvider/ConsumerSession       │   │
│  └───────────────────────────────────────────────────────┘   │
├──────────────────────────────────────────────────────────────┤
│             RTI Connext DDS 7.5+ · rti.asyncio               │
└──────────────────────────────────────────────────────────────┘
```

### Tiered Service Templates

Services are organized into **tiers** based on their DDS entity pattern:

| Tier | Template Class | DDS Pattern | Coverage |
|------|---------------|-------------|----------|
| **0** | `CommandProvider` / `CommandConsumer` | 4 slots: command, ack, status, exec_status | ~60 command families |
| **1** | `ReportProvider` / `ReportConsumer` | 1 reader or writer | ~169 simple report types |
| **2** | `LargeSetReportProvider` / `LargeSetReportConsumer` | Root + N flat set element children | 4 types |
| **3** | `LargeListReportProvider` / `LargeListReportConsumer` | Root + N ordered list element children | 4 types |
| **4** | 26 one-off composite classes | Explicit entities per type | ~12 complex nested types |

### Design Principles

| Principle | Description |
|-----------|-------------|
| **No side effects on import** | All DDS entity creation is deferred to explicit construction |
| **Services own their entities** | Each service creates and manages its own readers/writers — no sharing |
| **External QoS assignment** | QoS profiles resolved via `topic_filter` rules in XML — no application-level QoS enums |
| **Registry-based lifecycle** | Services auto-register with `DDSContext` and are closed in reverse order on shutdown |
| **Event-driven, not poll-based** | `reader.take_async()` on the asyncio event loop — no `cycle()` polling |

---

## Quick Start

```python
import rti.asyncio
from rtiumaapy import DDSContext

async def main():
    ctx = DDSContext(domain_id=0, qos_file="umaa_qos_lib.xml")

    # Report consumer — receive GPS data
    gps = ReportConsumer(ctx,
        report_type=GPSReportType,
        report_topic="GPSReportTypeTopic")

    # Command provider — accept engine commands
    engine = EngineControlProvider(ctx, source_id=my_source_id)

    await ctx.run_until_shutdown()  # Runs until SIGINT/SIGTERM

rti.asyncio.run(main())
```

---

## Requirements

- **Python** ≥ 3.13
- **RTI Connext DDS** ≥ 7.5.0 (`rti.connext` Python package)
- **UMAA generated types** — IDL-generated Python types from `datamodel/umaa/idl/`

### Development

```bash
pip install -e ".[dev]"     # Install with dev dependencies (pytest, pytest-asyncio)
pytest tests/ -v            # Run test suite
```

---

## Project Structure

```
python/
├── rtiumaapy/                # SDK package
│   ├── __init__.py           # Public API exports
│   ├── guid_util.py          # GUID generation / hex conversion for CFT filters
│   ├── timestamp.py          # UMAA DateTimeType ↔ Python datetime
│   ├── errors.py             # UmaaCommandException, AssemblyError, CommandResult
│   ├── dds_context.py        # DDSContext — DDS lifecycle + service registry
│   ├── base_service.py       # BaseService ABC
│   ├── qos.py                # QoS profile constants + topic-to-profile resolver
│   ├── report_provider.py    # Tier 1: publish reports
│   ├── report_consumer.py    # Tier 1: subscribe to reports
│   ├── command_provider.py   # Tier 0: accept and process commands (6 async hooks)
│   ├── command_consumer.py   # Tier 0: send commands and await results
│   ├── large_set_*.py        # Tier 2: set-valued report CRUD + assembly
│   ├── large_list_*.py       # Tier 3: ordered list report CRUD + assembly
│   ├── composites/           # Tier 4: MissionPlan, Conditional, ObjExec, etc.
│   └── services/             # Pre-wired concrete classes (~458 Tiers 0–3)
│       ├── co.py             #   Common Operations
│       ├── eo.py             #   Engineering Operations
│       ├── mm.py             #   Mission Management
│       ├── mo.py             #   Maritime Operations
│       ├── sa.py             #   Situational Awareness
│       ├── sem.py            #   Sensors
│       └── so.py             #   System Operations
├── tests/                    # DDS integration tests (real participant, loopback)
├── resource/                 # Bundled QoS XML
├── architecture/             # Design documentation
├── pyproject.toml            # Package metadata + build config
└── README.md                 # This file
```

---

## Phased Implementation

The SDK is being built incrementally across 9 pull requests, each independently testable:

| PR | Name | Scope | Status |
|----|------|-------|--------|
| **1** | Project Skeleton + Utilities | `pyproject.toml`, `GUIDUtil`, `UmaaTimestamp`, error types | ✅ Complete |
| **2** | DDSContext + BaseService | DDS lifecycle, entity factories, service registry, shutdown | Planned |
| **3** | ReportProvider / Consumer | Tier 1 — simplest pub/sub round-trip | Planned |
| **4** | CommandProvider / Consumer | Tier 0 — full command state machine, CFT, disposal | Planned |
| **5** | Multi-Topic + Large Set | Tier 2 — `LargeSetWriter` CRUD, QueryCondition assembly | Planned |
| **6** | Large List | Tier 3 — `LargeListWriter` CRUD, linked-list assembly | Planned |
| **7** | Composite Services | Tier 4 — 26 handwritten classes (MissionPlan, Conditional, etc.) | Planned |
| **8** | Pre-Wired Service Library | ~458 auto-generated concrete classes across 7 domains | Planned |
| **9** | Examples + Documentation | Working examples, Sphinx API docs | Planned |

```
PR1 (Utilities)
  └──► PR2 (DDSContext + BaseService)
         ├──► PR3 (Reports)        ──► PR5 (LargeSet) ──► PR6 (LargeList) ──► PR7 (Composites) ──► PR8 (Service Library)
         └──► PR4 (Commands)  ─────────────────────────────────────────────────┘
                                                          PR9 (Docs) ← after PR6+
```

PRs 3 and 4 can be developed **in parallel**. See [architecture/implementation-plan.md](architecture/implementation-plan.md) for full details.

---

## QoS Profiles

QoS is assigned automatically based on topic name patterns — no application code needed:

| Topic Pattern | Profile | Policy |
|---------------|---------|--------|
| `*CommandType`, `*CommandAckReportType`, `*CommandStatusType`, `*ExecutionStatusType` | **CommandQoS** | RELIABLE + liveliness |
| `*SpecsReportType` | **ConfigQoS** | RELIABLE + TRANSIENT_LOCAL |
| `*SetElement`, `*ListElement` | **ElementQoS** | RELIABLE |
| All other `*ReportType` | **TelemetryQoS** | BEST_EFFORT + KeepLast(1) |

---

## Testing

The test suite has two layers:

| Layer | Location | DDS Required | Scope |
|-------|----------|-------------|-------|
| **Unit tests** | `tests/` | No | Pure-Python utilities (`GUIDUtil`, `UmaaTimestamp`, error types) |
| **Integration tests** | `tests/` | Yes | Real DDS pub/sub through `DDSContext` with loopback transport |

Integration tests use a real `DDSContext`, real DataReaders/DataWriters, and localhost-only loopback transport — no mocking of DDS APIs. Each test gets a unique domain ID to prevent interference.

```bash
pytest tests/ -v                # Run all tests
pytest tests/ -v -m "not dds"   # Unit tests only (no DDS dependency)
pytest tests/ -v -m dds         # Integration tests only
```

Integration tests cover full round-trip scenarios: provider writes → consumer callback fires, command lifecycle through all state transitions, multi-topic assembly with QueryConditions, and graceful shutdown with instance disposal. They run fast (~10ms each) via loopback transport.

---

## UMAA Domain Coverage

The SDK covers all seven UMAA ICD domains:

| Domain | Abbreviation | Example Services |
|--------|-------------|------------------|
| Common Operations | CO | CommsChannel, NetworkSwitch |
| Engineering Operations | EO | Anchor, Engine, Helm, Thruster |
| Mission Management | MM | MissionPlan, Conditional, ObjectiveExecutor |
| Maritime Operations | MO | GlobalWaypoint, StationKeeping, Transit |
| Situational Awareness | SA | Contact, GPS, Weather, INS |
| Sensors | SE | Camera, Radar, Sonar, AIS |
| System Operations | SO | Power, ResourceAllocation, Health |

---

## Architecture Documentation

Detailed design docs are in [architecture/](architecture/):

| Document | Description |
|----------|-------------|
| [System Architecture](architecture/system-architecture.md) | Design principles, threading model, tiered overview |
| [Implementation Plan](architecture/implementation-plan.md) | 9-PR staged plan with acceptance criteria |
| [DDSContext](architecture/dds-context.md) | DDS lifecycle, entity factories, QoS resolution |
| [Command Services](architecture/command-services.md) | Tier 0 command pattern — 6 hooks, CFT, disposal |
| [Report Services](architecture/report-services.md) | Tier 1 report pattern |
| [Large Set Services](architecture/large-set-services.md) | Tier 2 set-valued reports with CRUD |
| [Large List Services](architecture/large-list-services.md) | Tier 3 ordered list reports |
| [Composite Services](architecture/composite-services.md) | Tier 4 one-off classes |
| [Services Catalog](architecture/services-catalog.md) | Complete ~250 service inventory |
| [Error Handling](architecture/error-handling.md) | 4-layer exception strategy |

---

## C++ SDK References

Two C++ reference implementations inform this SDK's design:

| SDK | Organization | DDS Middleware |
|-----|-------------|---------------|
| **PSU/ARL** | Penn State Applied Research Lab | RTI Connext DDS |
| **JHU/APL** | Johns Hopkins Applied Physics Lab | Eclipse Cyclone DDS |

`rtiumaapy` uses the same DDS middleware as PSU/ARL but replaces the poll-based `cycle()` model with Python's cooperative `asyncio` event loop via `rti.asyncio`.

---

## License

See [LICENSE](../LICENSE) for details.
