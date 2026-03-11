# RTI UMAA Python SDK (rtiumaapy) Implementation Plan — Staged PRs

> Scaffolding plan for the Python SDK. Each PR is independently testable and builds on the previous.
>
> **Last updated:** 2026-03-11

---

## Repository Structure

The SDK lives at the **top level** of the repo under `/python`. The repo is organized as:

```
rticonnextdds-usecases-umaa/
├── datamodel/                    # IDL files (UMAA data model source)
│   └── umaa/
│       └── idl/                  # *.idl files
├── cpp/                          # C++ SDK (future expansion)
│   └── service-template-wrappers/ # Service template wrapper example
├── qos/                          # QoS XML profiles
│   └── umaa_qos_lib.xml
├── python/                       # ★ RTI UMAA Python SDK root
│   ├── __init__.py
│   ├── architecture/             # Design docs (this folder)
│   ├── umaa_types/               # Generated UMAA Python data types (from IDL)
│   │   └── UMAA/
│   │       ├── Common/
│   │       ├── EO/
│   │       ├── MM/
│   │       ├── MO/
│   │       ├── SA/
│   │       ├── SE/
│   │       ├── SO/
│   │       └── CO/
│   ├── rtiumaapy/                  # SDK package
│   │   ├── __init__.py           # Public API exports, version
│   │   ├── py.typed              # PEP 561 marker
│   │   ├── guid_util.py          # GUIDUtil
│   │   ├── timestamp.py          # UmaaTimestamp
│   │   ├── errors.py             # UmaaCommandException, AssemblyError
│   │   ├── qos.py                # QoS profile constants, topic-to-profile resolver
│   │   ├── dds_context.py        # DDSContext singleton
│   │   ├── base_service.py       # BaseService ABC
│   │   ├── report_provider.py    # ReportProvider (Tier 1)
│   │   ├── report_consumer.py    # ReportConsumer (Tier 1)
│   │   ├── command_provider.py   # CommandProvider (Tier 0)
│   │   ├── command_provider_session.py
│   │   ├── command_consumer.py   # CommandConsumer (Tier 0)
│   │   ├── command_consumer_session.py
│   │   ├── slots.py              # SetElementSlot, ListElementSlot
│   │   ├── multi_topic.py        # read_large_set(), read_large_list(), wire_list_chain()
│   │   ├── large_set_writer.py   # LargeSetWriter (CRUD)
│   │   ├── large_set_provider.py # LargeSetReportProvider (Tier 2)
│   │   ├── large_set_consumer.py # LargeSetReportConsumer (Tier 2)
│   │   ├── large_list_writer.py  # LargeListWriter (CRUD)
│   │   ├── large_list_provider.py # LargeListReportProvider (Tier 3)
│   │   ├── large_list_consumer.py # LargeListReportConsumer (Tier 3)
│   │   ├── composites/           # Tier 4 — one-off classes (26 classes)
│   │   │   ├── __init__.py
│   │   │   ├── specialization.py  # SpecializationReaderSet, SpecializationType, registries
│   │   │   ├── mission_plan.py   # MissionPlanReport Provider/Consumer (4-level nested)
│   │   │   ├── conditional.py    # ConditionalReport Provider/Consumer (2-level + spec dispatch)
│   │   │   ├── obj_exec_status.py # ObjExecExecStatus Provider/Consumer (gen/spec set)
│   │   │   ├── global_waypoint.py # GlobalWaypointCommand Provider/Consumer (cmd + large list)
│   │   │   ├── mission_plan_cmd.py # MissionPlanCommand Provider/Consumer (cmd + deep nested tree)
│   │   │   ├── mission_plan_obj_add.py  # MissionPlanObjAddCommand Provider/Consumer
│   │   │   ├── mission_plan_mission_add.py  # MissionPlanMissionAddCommand Provider/Consumer
│   │   │   ├── mission_plan_task_add.py # MissionPlanTaskAddCommand Provider/Consumer
│   │   │   ├── conditional_add.py # ConditionalAddCommand Provider/Consumer
│   │   │   └── obj_exec_cmd.py   # ObjExecCommand Provider/Consumer (cmd + gen/spec + exec status)
│   │   └── services/             # Pre-wired concrete classes (~458 Tiers 0–3)
│   │       ├── __init__.py
│   │       ├── co.py             # Common Operations
│   │       ├── eo.py             # Engineering Operations
│   │       ├── mm.py             # Mission Management
│   │       ├── mo.py             # Maritime Operations
│   │       ├── sa.py             # Situational Awareness
│   │       ├── sem.py            # Sensors
│   │       └── so.py             # System Operations
│   ├── resource/                 # QoS XML bundled with package
│   │   └── umaa_qos_lib.xml
│   ├── tests/                    # Test suite
│   │   ├── __init__.py
│   │   ├── conftest.py           # Shared fixtures (DDSContext, loopback transport)
│   │   ├── test_guid_util.py
│   │   ├── test_timestamp.py
│   │   ├── test_errors.py
│   │   ├── test_dds_context.py
│   │   ├── test_base_service.py
│   │   ├── test_report_provider.py
│   │   ├── test_report_consumer.py
│   │   ├── test_report_lifecycle.py
│   │   ├── test_command_lifecycle.py
│   │   ├── test_command_rejection.py
│   │   ├── test_command_cancel.py
│   │   ├── test_command_failure.py
│   │   ├── test_command_shutdown.py
│   │   ├── test_large_set_writer.py
│   │   ├── test_large_set_roundtrip.py
│   │   ├── test_large_list_writer.py
│   │   ├── test_large_list_roundtrip.py
│   │   ├── test_mission_plan_assembly.py
│   │   └── test_service_import.py
│   ├── examples/                 # Usage examples
│   │   ├── report_pubsub.py
│   │   ├── command_lifecycle.py
│   │   ├── large_set_crud.py
│   │   └── multi_service_app.py
│   ├── tools/                    # Code generation
│   │   └── generate_services.py
│   ├── c++_ref/                  # ⚠ Legacy — C++ reference SDKs (to be moved/removed)
│   ├── umaa_docs/                # ⚠ Legacy — UMAA spec docs (to be moved/removed)
│   ├── umaapy-1.1.1/             # ⚠ Legacy — v1 SDK (to be removed)
│   ├── dds_context.py            # ⚠ Legacy — v1 prototype (to be removed)
│   ├── event_processor.py        # ⚠ Legacy — v1 prototype (to be removed)
│   ├── qos_category.py           # ⚠ Legacy — v1 prototype (to be removed)
│   ├── pyproject.toml            # Package metadata
│   └── requirements.txt
└── ...
```

**Key points:**
- Generated UMAA Python types (from `datamodel/umaa/idl/`) live under `python/umaa_types/`
- The SDK package is `python/rtiumaapy/` — importable as `from rtiumaapy import ...`
- QoS XML (`qos/umaa_qos_lib.xml`) is the single source of truth; a copy is bundled under `python/resource/`
- Tests are DDS integration tests (real participant, loopback transport) — no mocks
- `c++_ref/`, `umaa_docs/`, `umaapy-1.1.1/`, and loose v1 prototype files (`dds_context.py`, `event_processor.py`, `qos_category.py`) are **legacy artifacts kept temporarily for context** — they will be moved or deleted in a future cleanup PR

---

## Prerequisites

Before starting PR 1, the following one-time tasks must be completed:

### ~~Rename `umaapy2` → `rtiumaapy` in Architecture Docs~~ ✅ DONE

All architecture docs have been updated to use `rtiumaapy` as the package name. The following files were modified:

- `system-architecture.md`, `service-library.md`, `composite-services.md`, `services-catalog.md`
- `command-services.md`, `command-state-machine.md`, `report-services.md`
- `large-set-services.md`, `large-list-services.md`, `specialization-reader-set.md`
- `base-service.md`, `dds-context.md`

**Note:** `command-state-machine.md` also has a stale callback-based constructor model for `CommandProvider` (using `on_command: Callable`). The authoritative model is the subclass-override pattern in `command-services.md`. This should be reconciled during the rename pass.

---

## PR Stages

### PR 1 — Project Skeleton + Utilities

**Goal:** Package structure, zero-dependency utility classes, error types.

**Branch:** `feature/rtiumaapy-skeleton`

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/__init__.py` | — | Package root, version, public API exports |
| `rtiumaapy/py.typed` | — | PEP 561 marker |
| `rtiumaapy/guid_util.py` | [utilities.md](utilities.md) | `GUIDUtil.generate()`, `.to_hex()`, `.to_string()`, `.from_string()`, `NIL` |
| `rtiumaapy/timestamp.py` | [utilities.md](utilities.md) | `UmaaTimestamp.now()` → `DateTime` |
| `rtiumaapy/errors.py` | [error-handling.md](error-handling.md) | `UmaaCommandException(reason, msg, stage)`, `AssemblyError`, `CommandResult` |
| `pyproject.toml` | — | Package metadata, dependencies (`rti.connext>=7.5.0`) |
| `tests/test_guid_util.py` | — | Unit: generate, roundtrip hex/string, NIL constant |
| `tests/test_timestamp.py` | — | Unit: monotonicity, format |
| `tests/test_errors.py` | — | Unit: exception attributes, inheritance |

**No DDS dependency** — pure Python. Can be reviewed/merged immediately.

**Acceptance criteria:**
- `pytest tests/test_guid_util.py tests/test_timestamp.py tests/test_errors.py` passes
- `from rtiumaapy import GUIDUtil, UmaaTimestamp, UmaaCommandException` works

---

### PR 2 — DDSContext + BaseService

**Goal:** Core DDS infrastructure — participant lifecycle, entity factories, service registry, startup/shutdown.

**Branch:** `feature/rtiumaapy-dds-context`

**Depends on:** PR 1

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/dds_context.py` | [dds-context.md](dds-context.md) | Singleton, `create_topic()`, `create_writer()`, `create_reader()`, `create_filtered_reader()`, QoS resolution via topic_filter, registry |
| `rtiumaapy/base_service.py` | [base-service.md](base-service.md) | `BaseService` ABC: auto-register on `__init__`, abstract `_run()` / `close()` |
| `rtiumaapy/qos.py` | [qos-profiles.md](qos-profiles.md) | QoS profile name constants, topic-to-profile resolver |
| `resource/umaa_qos_lib.xml` | already exists | Bundle with package |
| `tests/conftest.py` | — | Shared `DDSContext` fixture (loopback transport, unique domain_id per test) |
| `tests/test_dds_context.py` | — | Integration: singleton, create entities, topic reuse, shutdown cleanup |
| `tests/test_base_service.py` | — | Integration: registration, `run_until_shutdown()` lifecycle, signal handling |

**Key design points:**
- `run_until_shutdown()` starts all `_run()` coroutines, installs SIGINT/SIGTERM handlers
- `shutdown()` is async — cancels tasks, awaits `close()` in reverse order, tears down participant
- QoS resolution: `*ConfigReportType` → ConfigQoS, `*CommandType` → CommandQoS, `*Element` → ElementQoS, else → TelemetryQoS

**Acceptance criteria:**
- Can create a `DDSContext`, register a trivial `BaseService` subclass, call `run_until_shutdown()`, Ctrl-C, verify clean teardown
- `create_writer()` / `create_reader()` return valid DDS entities with correct QoS

---

### PR 3 — ReportProvider + ReportConsumer (Tier 1)

**Goal:** Simplest service tier — validates the entire DDSContext → BaseService → entity flow end-to-end.

**Branch:** `feature/rtiumaapy-reports`

**Depends on:** PR 2

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/report_provider.py` | [report-services.md](report-services.md) | `write()`, `close()` with instance disposal (`source_id`), auto-QoS |
| `rtiumaapy/report_consumer.py` | [report-services.md](report-services.md) | `_run()` with `take_async()`, `on_report` callback, instance state check |
| `tests/test_report_provider.py` | — | Integration: write sample, verify on raw reader |
| `tests/test_report_consumer.py` | — | Integration: raw writer → consumer callback fires |
| `tests/test_report_lifecycle.py` | — | Integration: startup → write → shutdown → verify dispose |

**This is the first "prove it works" PR** — a full pub/sub round-trip through DDSContext + QoS + async lifecycle.

**Acceptance criteria:**
- Provider writes samples; a raw DataReader receives them
- Consumer callback fires when samples arrive
- `close()` disposes the report instance (instance state changes to NOT_ALIVE_DISPOSED on subscriber side)

---

### PR 4 — CommandProvider + CommandConsumer (Tier 0)

**Goal:** Full command lifecycle with state machine, hooks, CFT, instance state detection, disposal.

**Branch:** `feature/rtiumaapy-commands`

**Depends on:** PR 2 (can be developed in parallel with PR 3)

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/command_provider.py` | [command-services.md](command-services.md) | 6 async hooks, CFT on destination, `_run()` with instance state detection for cancel/crash |
| `rtiumaapy/command_provider_session.py` | [command-services.md](command-services.md), [command-state-machine.md](command-state-machine.md) | `_run_session()` coroutine, `_publish_fail()` with per-state reason validation, `_dispose_provider_instances()` |
| `rtiumaapy/command_consumer.py` | [command-services.md](command-services.md) | Dynamic CFT (`"1=0"` ↔ `sessionID`), one active session constraint |
| `rtiumaapy/command_consumer_session.py` | [command-state-machine.md](command-state-machine.md) | `execute()`, `_listen_ack()`, `_listen_status()`, asyncio.Event wait methods, dispose on close |
| `tests/test_command_lifecycle.py` | — | Integration: send → ISSUED → COMMANDED → EXECUTING → COMPLETED |
| `tests/test_command_rejection.py` | — | Integration: D3 rejection (RESOURCE_REJECTED) with active session |
| `tests/test_command_cancel.py` | — | Integration: dispose command → CANCELED |
| `tests/test_command_failure.py` | — | Integration: `UmaaCommandException` from hooks → FAILED with correct reason |
| `tests/test_command_shutdown.py` | — | Integration: provider close → FAILED(SERVICE_FAILED), instance disposal |

**Highest risk PR** — get this right and everything else is a variation.

**Acceptance criteria:**
- Full happy path: consumer sends → provider processes through all 6 hooks → COMPLETED → instances disposed
- Active session rejection: second command during active session → ISSUED → COMMANDED → FAILED(RESOURCE_REJECTED)
- Cancel: consumer disposes command → provider detects NOT_ALIVE_DISPOSED → CANCELED
- Failure: hook raises `UmaaCommandException(VALIDATION_FAILED)` from `validate_command` → FAILED
- Shutdown: provider `close()` → active session gets FAILED(SERVICE_FAILED) → instances disposed
- Per-state reason validation: `VALIDATION_FAILED` only from ISSUED, `RESOURCE_REJECTED` only from COMMANDED, `OBJECTIVE_FAILED` only from EXECUTING

---

### PR 5 — Multi-Topic Utilities + Large Set (Tier 2)

**Goal:** Set-valued reports with full CRUD writer and QueryCondition-based reader assembly.

**Branch:** `feature/rtiumaapy-large-set`

**Depends on:** PR 3

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/slots.py` | [large-set-services.md](large-set-services.md), [large-list-services.md](large-list-services.md) | `SetElementSlot`, `ListElementSlot` dataclasses |
| `rtiumaapy/multi_topic.py` | [multi-topic-utilities.md](multi-topic-utilities.md) | `read_large_set()`, `read_large_list()`, `wire_list_chain()` |
| `rtiumaapy/large_set_writer.py` | [large-set-services.md](large-set-services.md) | `LargeSetWriter`: insert, insert_many, update, remove, clear, get, find |
| `rtiumaapy/large_set_provider.py` | [large-set-services.md](large-set-services.md) | `LargeSetReportProvider`: `get_set_writer()`, `publish()`, `write()`, close with disposal |
| `rtiumaapy/large_set_consumer.py` | [large-set-services.md](large-set-services.md) | `LargeSetReportConsumer`: reusable QueryCondition assembly |
| `tests/test_large_set_writer.py` | — | Unit: CRUD operations, metadata auto-tracking, clear disposes |
| `tests/test_large_set_roundtrip.py` | — | Integration: provider CRUD → consumer assembles correct elements |

**Acceptance criteria:**
- `LargeSetWriter` CRUD: insert/update/remove update metadata correctly, remove/clear dispose DDS instances
- Elements-first protocol: elements arrive before root
- Consumer assembles elements correctly via QueryCondition with `&hex()` filter
- `on_assembly_error` callback fires on FK resolution failures (per [error-handling.md](error-handling.md))
- Round-trip: provider writes 10 elements, removes 3, updates 2 → consumer reads 7 correct elements

---

### PR 6 — Large List (Tier 3)

**Goal:** Ordered list-valued reports with linked-list CRUD writer.

**Branch:** `feature/rtiumaapy-large-list`

**Depends on:** PR 5

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/large_list_writer.py` | [large-list-services.md](large-list-services.md) | `LargeListWriter`: prepend, append, insert_at, update, pop_front, pop_back, remove, clear, prepend_many, append_many |
| `rtiumaapy/large_list_provider.py` | [large-list-services.md](large-list-services.md) | `LargeListReportProvider`: `get_list_writer()`, `publish()` |
| `rtiumaapy/large_list_consumer.py` | [large-list-services.md](large-list-services.md) | `LargeListReportConsumer`: linked-list traversal assembly |
| `tests/test_large_list_writer.py` | — | Unit: positional ops, pointer rewiring verification |
| `tests/test_large_list_roundtrip.py` | — | Integration: prepend/append/insert/remove → reader assembles in correct order |

**Acceptance criteria:**
- `LargeListWriter` maintains correct `nextElementID` chain after every operation
- `metadata.startingElementID` always points to head
- `on_assembly_error` callback fires on broken chain links (per [error-handling.md](error-handling.md))
- Round-trip: provider builds list [A, B, C], inserts X at 1, removes B → consumer reads [A, X, C] in order
- `clear()` disposes all DDS instances
- `pop_front()` / `pop_back()` correctly rewire neighbors

---

### PR 7 — Composite Services (Tier 4)

**Goal:** All 26 handwritten one-off classes for deeply nested or multi-pattern types.

**Branch:** `feature/rtiumaapy-composites`

**Depends on:** PR 4 + PR 6

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/composites/__init__.py` | — | Package init, `__all__` |
| `rtiumaapy/composites/specialization.py` | [specialization-reader-set.md](specialization-reader-set.md) | `SpecializationReaderSet`, `SpecializationType` dataclass, `OBJECTIVE_SPECIALIZATIONS` (13 types), `CONDITIONAL_SPECIALIZATIONS` (19 types) |
| **Composite Reports (6 classes)** | | |
| `rtiumaapy/composites/mission_plan.py` | [composite-services.md](composite-services.md) | `MissionPlanReportProvider/Consumer` (4-level: root → plans(set) → tasks(set) → objectives(set) + constraints(set) + spec dispatch) |
| `rtiumaapy/composites/conditional.py` | [composite-services.md](composite-services.md) | `ConditionalReportProvider/Consumer` (root + gen/spec set, 19 specialization types) |
| `rtiumaapy/composites/obj_exec_status.py` | [composite-services.md](composite-services.md) | `ObjExecExecStatusProvider/Consumer` (root + gen/spec detailed statuses set, 12 status types) |
| **Composite Commands (12 classes)** | | |
| `rtiumaapy/composites/global_waypoint.py` | [composite-services.md](composite-services.md) | `GlobalWaypointCommandProvider/Consumer` (4-slot cmd + waypoint large list) |
| `rtiumaapy/composites/mission_plan_cmd.py` | [composite-services.md](composite-services.md) | `MissionPlanCommandProvider/Consumer` (cmd + mission plan element readers) |
| `rtiumaapy/composites/mission_plan_obj_add.py` | [composite-services.md](composite-services.md) | `MissionPlanObjAddCommandProvider/Consumer` (3-slot cmd + gen/spec objective readers) |
| `rtiumaapy/composites/conditional_add.py` | [composite-services.md](composite-services.md) | `ConditionalAddCommandProvider/Consumer` (3-slot cmd + 19 gen/spec conditional readers) |
| `rtiumaapy/composites/obj_exec_cmd.py` | [composite-services.md](composite-services.md) | `ObjExecCommandProvider/Consumer` (4-slot cmd + gen/spec + exec status) |
| `rtiumaapy/composites/mission_plan_mission_add.py` | [composite-services.md](composite-services.md) | `MissionPlanMissionAddCommandProvider/Consumer` (cmd + deep nested tree — most complex command) |
| `rtiumaapy/composites/mission_plan_task_add.py` | [composite-services.md](composite-services.md) | `MissionPlanTaskAddCommandProvider/Consumer` (cmd + nested tree, one less level than MissionAdd) |
| **Tests** | | |
| `tests/test_mission_plan_assembly.py` | — | Integration: 4-level nested report assembly |
| `tests/test_conditional_assembly.py` | — | Integration: gen/spec conditional assembly |
| `tests/test_composite_command.py` | — | Integration: GlobalWaypoint command + waypoint list round-trip |
| `tests/test_specialization_reader.py` | — | Integration: lazy reader creation, FK resolution |

**26 classes total** across 11 module files. Can be split into sub-PRs (e.g., PR 7a: reports, PR 7b: commands) if MissionPlan proves complex.

**Acceptance criteria:**
- `MissionPlanReportConsumer` assembles root → mission plans (set) → task plans (set) → objectives (set) → specialization dispatch correctly
- `ConditionalReportConsumer` assembles root → conditionals (set) → specialization dispatch with all 19 conditional types
- `ObjExecExecStatusConsumer` assembles root → detailed statuses (set) → specialization dispatch with 12 status types
- `SpecializationReaderSet` lazily creates readers per topic and reads by `specializationReferenceID`
- `SpecializationType` registry constants are complete (13 objective, 19 conditional specialization types)
- `GlobalWaypointCommandProvider` extends command pattern with additional waypoint list reader
- `MissionPlanMissionAddCommandProvider` handles full deep-nested tree (most complex command)
- All composite command classes correctly combine base command slots with extra entity readers/writers

---

### PR 8 — Pre-Wired Service Library

**Goal:** Auto-generated concrete classes for all ~458 UMAA Tier 0–3 services.

**Branch:** `feature/rtiumaapy-service-library`

**Depends on:** PR 7

| Deliverable | Source Doc | Notes |
|---|---|---|
| `rtiumaapy/services/__init__.py` | — | Package init, `__all__` |
| `rtiumaapy/services/co.py` | [services-catalog.md](services-catalog.md), [service-library.md](service-library.md) | Common Operations domain |
| `rtiumaapy/services/eo.py` | — | Engineering Operations |
| `rtiumaapy/services/mm.py` | — | Mission Management |
| `rtiumaapy/services/mo.py` | — | Maritime Operations |
| `rtiumaapy/services/sa.py` | — | Situational Awareness |
| `rtiumaapy/services/sem.py` | — | Sensors |
| `rtiumaapy/services/so.py` | — | System Operations |
| `tools/generate_services.py` | — | Code generator script from catalog stem tables |
| `tests/test_service_import.py` | — | Verify all ~458 classes importable, correct base class |

**Mostly mechanical** — each class is ~5 lines inheriting a base template with hardcoded types/topics. The generator script reads the stem tables and produces the module files. Tier 4 composites (26 classes) are handwritten in PR 7, not generated.

**Acceptance criteria:**
- `from rtiumaapy.services.co import EngineControlProvider, EngineControlConsumer` works
- All classes have correct IDL type bindings
- `generate_services.py` is idempotent and produces identical output

---

### PR 9 — Examples + Documentation

**Goal:** Working examples and API docs.

**Branch:** `feature/rtiumaapy-docs`

**Depends on:** PR 6+ (any PR after core is stable)

| Deliverable | Notes |
|---|---|
| `examples/report_pubsub.py` | Simplest: ReportProvider + ReportConsumer |
| `examples/command_lifecycle.py` | Full command with hooks |
| `examples/large_set_crud.py` | LargeSetWriter CRUD + publish |
| `examples/multi_service_app.py` | Multiple services via `run_until_shutdown()` |
| `docs/` Sphinx setup | API reference auto-generated from docstrings |
| `README.md` | Quickstart guide, installation, architecture overview |

**Acceptance criteria:**
- Each example runs standalone and demonstrates the documented pattern
- Sphinx builds without warnings
- README has working quickstart

---

## Dependency Graph

```
PR1 (Utilities — pure Python)
  └──► PR2 (DDSContext + BaseService)
         ├──► PR3 (ReportProvider/Consumer)
         │      └──► PR5 (MultiTopic + LargeSet)
         │             └──► PR6 (LargeList)
         │                    └──► PR7 (Composites)
         │                           └──► PR8 (Service Library)
         └──► PR4 (CommandProvider/Consumer)  ← parallel with PR3
                └──► PR7 (Composites)

PR9 (Examples/Docs) ← after PR6+
```

**Parallelization opportunities:**
- PR 3 and PR 4 can be developed **in parallel** once PR 2 is merged
- PR 5 and PR 6 can be parallelized since they share `slots.py` (include it in PR 5)
- PR 9 can start as soon as PR 3 is merged (report examples first)

---

## Estimated Effort

| PR | Complexity | Files | Risk | Parallel? |
|---|---|---|---|---|
| **PR 1** | Low | ~8 | Low — pure Python | — |
| **PR 2** | Medium | ~6 | Medium — DDS lifecycle | — |
| **PR 3** | Low | ~5 | Low — validates infra | Yes (with PR 4) |
| **PR 4** | **High** | ~9 | **High** — state machine + CFT + disposal | Yes (with PR 3) |
| **PR 5** | Medium | ~7 | Medium — QueryCondition + CRUD | — |
| **PR 6** | Medium | ~5 | Medium — linked-list mgmt | — |
| **PR 7** | **High** | ~15 | **High** — 26 classes, nested assembly, spec dispatch | — |
| **PR 8** | Low | ~9 | Low — generated code | — |
| **PR 9** | Low | ~7 | Low — documentation | Yes (anytime after PR 6) |

---

## Testing Strategy

All tests are **DDS integration tests** — real `DDSContext`, real readers/writers, localhost-only loopback transport.

**`conftest.py` fixtures:**
- `dds_context` — creates a `DDSContext` with unique domain_id (avoids test interference), loopback-only transport
- `event_loop` — `asyncio` event loop for async tests
- Cleanup: `shutdown()` called in fixture teardown

**No mocks** — the v1 test suite demonstrated that mocking DDS at the API boundary creates fragile tests. DDS integration tests with loopback transport are fast (~10ms per test) and test real behavior.

**External compliance:** USTM (UMAA Standard Test Module) for ICD protocol conformance — not part of this test suite.

---

## Architecture Doc References

Each PR maps to specific architecture docs. When implementing, treat these as the source of truth:

| Doc | Primary PR |
|---|---|
| [utilities.md](utilities.md) | PR 1 |
| [error-handling.md](error-handling.md) | PR 1 |
| [dds-context.md](dds-context.md) | PR 2 |
| [base-service.md](base-service.md) | PR 2 |
| [qos-profiles.md](qos-profiles.md) | PR 2 |
| [report-services.md](report-services.md) | PR 3 |
| [command-services.md](command-services.md) | PR 4 |
| [command-state-machine.md](command-state-machine.md) | PR 4 |
| [multi-topic-utilities.md](multi-topic-utilities.md) | PR 5 |
| [large-set-services.md](large-set-services.md) | PR 5 |
| [large-list-services.md](large-list-services.md) | PR 6 |
| [composite-services.md](composite-services.md) | PR 7 |
| [specialization-reader-set.md](specialization-reader-set.md) | PR 7 |
| [services-catalog.md](services-catalog.md) | PR 8 |
| [service-library.md](service-library.md) | PR 8 |

Cross-cutting docs (referenced by multiple PRs):
- [arch_review.md](arch_review.md) — bug tracker, action items, C++ SDK comparison notes
- [v1/design-decisions.md](v1/design-decisions.md) — D1–D16 rationale (in v1 subfolder)
- [v1/known-bugs.md](v1/known-bugs.md) — v1 bugs resolved in v2 (in v1 subfolder)
- [system-architecture.md](system-architecture.md) — top-level design principles, threading model, tiered architecture overview
- [implementation-gaps.md](implementation-gaps.md) — verified API patterns (CFT syntax, QueryCondition, rti.asyncio, FK relationships, QoS validation)

---
