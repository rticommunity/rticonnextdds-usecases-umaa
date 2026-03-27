# Architecture Review — Pre-Implementation Findings

> Comprehensive review of all 17 v2 architecture docs, cross-referenced with v1 design decisions, known bugs, and the current `umaa_qos_lib.xml`. Prepared for implementation phase.

---

## Table of Contents

1. [Critical: Internal Doc Contradictions](#1--critical-internal-doc-contradictions)
2. [Critical: Missing Architectural Mechanisms](#2--critical-missing-architectural-mechanisms)
3. [High: Correctness Issues](#3--high-correctness-issues)
4. [Medium: Simplifications](#4--medium-simplifications)
5. [Medium: Optimizations](#5--medium-optimizations)
6. [Low: Missing Info for Implementation](#6--low-missing-info-for-implementation)
7. [Implementation Priority Recommendations](#7--implementation-priority-recommendations)
8. [v1 Bug Status vs v2 Coverage](#8--v1-bug-status-vs-v2-coverage)
9. [Action Items Summary](#9--action-items-summary)
10. [C++ SDK Re-Review Findings](#10--c-sdk-re-review-findings)

---

## 1 — Critical: Internal Doc Contradictions

### 2.1 — Consumer CFT Strategy: Single-Session, SessionID-Only

The v2 design uses a simplified consumer CFT model:
- Consumers support **one active command session at a time** (mirrors the provider-side ICD §4.1.4.4 constraint)
- CFT filters on `sessionID` only — a globally unique consumer-generated UUID, so no additional fields (e.g., `source`) are needed
- Two-state filter: `"1 = 0"` (idle) ↔ `sessionID = &hex(...)` (active)
- No OR-clause concatenation, no multi-session filter rebuilds
- D11's provider-side static CFT on destination is retained

**Status:** Resolved — command-services.md updated to reflect this design.

### 2.2 — Command Rejection Model: D3 Retained

**D3** (v1/design-decisions.md) specifies:
> Provider processes the new command through the full state machine: ISSUED → COMMANDED → FAILED with `RESOURCE_REJECTED`. All three transitions happen in rapid succession. The ICD Figure 15 matrix only permits `RESOURCE_REJECTED` from `COMMANDED → FAILED`, so intermediate states cannot be skipped.

**Status:** Resolved — command-services.md updated to use D3's full state machine traversal for active command rejection, aligning with the UMAA spec (ICD §4.1.4.4, Figure 15, §5.3.1).

### 2.3 — `on_command` Callback Split

**command-services.md** originally showed a single `on_command` callback passed to the `CommandProvider` constructor.

**command-state-machine.md** showed **two** entry points:
- `on_command(command) → (accepted, reason)` — validation phase
- `self._on_command_execute(command)` — execution phase (called in `_execute_with_cancel()`)

**Analysis:** The single callback was insufficient. The C++ SDK uses 6+ separate virtual hooks with base-class-owned status publishing. Python v1 uses 6 hooks on `UmaaCommand` (`on_commanded`, `on_executing`, `on_complete`, `on_failed`, `on_error`, `on_terminal`). Both approaches separate validation from execution and give the base class control of the state machine.

**Status:** Resolved — command-services.md updated to a **subclass-override model with 6 async hooks**:

| Hook | When called | Purpose |
|---|---|---|
| `validate_command(command)` | Before ISSUED | Accept/reject; rejection triggers full state traversal |
| `on_commanded(session)` | After COMMANDED published | Pre-execution setup; raise to abort |
| `on_executing(session)` | After EXECUTING published | **Primary work hook** (must override) |
| `on_complete(session)` | After COMPLETED published | Post-completion actions |
| `on_failed(session, exc)` | After FAILED published | Failure handling |
| `on_terminal(session)` | Always (finally block) | Guaranteed cleanup |

Base class owns ALL status publishing. Subclasses never call `_publish_status()` directly. Exception-based failure: `UmaaCommandException(reason, msg)` triggers FAILED transition from any hook. Combines best of C++ SDK (subclass model, base-owns-publishing, validation hook), v1 (exception-based failure, `on_terminal()` always-runs, instance disposal in finally), and v2 (async coroutines, single-threaded event loop).

---

## 2 — Critical: Missing Architectural Mechanisms

### 2.1 — `_run()` Startup Mechanism

Every service doc shows an `async def _run()` coroutine that processes data via `reader.take_async()`. Previously no document explained who calls it.

**Status:** Resolved — **`run_until_shutdown()` starts all services**. `DDSContext.run_until_shutdown()` iterates the registry, calls `asyncio.create_task(service._run())` for every registered service, then waits for SIGINT/SIGTERM. Construction only registers — services are inert until `run_until_shutdown()` is called.

```python
# DDSContext
async def run_until_shutdown(self):
    """Start all registered services and block until SIGINT/SIGTERM."""
    for service in self._registry.values():
        if hasattr(service, '_run'):
            service._task = asyncio.create_task(service._run())
    stop = asyncio.Event()
    loop = asyncio.get_running_loop()
    for sig in (signal.SIGINT, signal.SIGTERM):
        loop.add_signal_handler(sig, stop.set)
    await stop.wait()
    await self.shutdown()
```

The user's application code:
```python
async def main():
    ctx = DDSContext(domain_id=0)
    provider = EngineCommandProvider(ctx, service_name="EngineControl", ...)
    consumer = GPSReportConsumer(ctx, service_name="GPS", ...)
    # Services are registered but inert — _run() not started yet
    await ctx.run_until_shutdown()  # starts all services, blocks until signal

rti.asyncio.run(main())
```

**Advantages over self-start:** All services are constructed and their DDS entities are created before any `_run()` begins processing data. No startup races between sibling services.

### 2.2 — `async close()` vs `shutdown()`

`BaseService` defines `async def close()`. Previously `DDSContext.shutdown()` was synchronous, meaning `close()` was never awaited.

**Status:** Resolved — `shutdown()` is now `async`. Signal handlers don't call `shutdown()` directly — they set a `stop` event, `run_until_shutdown()` returns, and then `shutdown()` is awaited in the normal async flow:
```python
# DDSContext
async def shutdown(self) -> None:
    """Cancel all service tasks, await close(), tear down DDS."""
    # 1. Cancel _run() tasks
    for service in self._registry.values():
        if hasattr(service, '_task'):
            service._task.cancel()
    # 2. Await close() on each service (reverse order)
    for key, service in reversed(list(self._registry.items())):
        try:
            await service.close()
        except Exception:
            _logger.exception("Error closing service %s", key)
    self._registry.clear()
    # 3. Close DDS entities
    self._participant.close_contained_entities()
    self._participant.close()
    self._topics.clear()
    # 4. Clear singleton
    with DDSContext._instance_lock:
        if DDSContext._instance is self:
            DDSContext._instance = None
```

### 2.3 — Signal Handling

Previously no document addressed SIGINT/SIGTERM handling.

**Status:** Resolved — `DDSContext.run_until_shutdown()` installs signal handlers and blocks until signal. It starts all services' `_run()` tasks, then waits:

```python
# DDSContext
async def run_until_shutdown(self):
    """Block until SIGINT/SIGTERM, then shutdown."""
    stop = asyncio.Event()
    loop = asyncio.get_running_loop()
    for sig in (signal.SIGINT, signal.SIGTERM):
        loop.add_signal_handler(sig, stop.set)
    await stop.wait()
    await self.shutdown()
```

Signal handlers only set the event — all actual cleanup happens in async `shutdown()`.

---

## 3 — High: Correctness Issues

### 3.1 — Missing `*ConfigReportType` Topic Filter

**D9** (v1/design-decisions.md) identifies **9 `*ConfigReportType` topics** that need CONFIG QoS (RELIABLE + TRANSIENT_LOCAL).

**Status:** Resolved — Verified 9 `*ConfigReportType` IDL files exist. Added `topic_filter="*ConfigReportType"` rules to `umaa_qos_lib.xml` with `base_name="ConfigQoS"`. The 9 topics are:

1. `CommsChannelConfigReportType`
2. `CommsChannelPowerConfigReportType`
3. `HazardAvoidanceConfigReportType`
4. `CompartmentConfigReportType`
5. `GlobalPoseConfigReportType`
6. `ResourceAllocationConfigReportType`
7. `BITConfigReportType`
8. `EmitterPresetConfigReportType`
9. `SASConfigReportType`

### 3.2 — SpecializationReaderSet Async Pattern ✅ RESOLVED

v2 does not use WaitSets anywhere. All readers use `reader.take_async()` which cooperatively yields on the asyncio event loop (D16). SpecializationReaderSet will follow the same `take_async()` pattern used by all other services — no special fix needed.

### 3.3 — PRESENTATION QoS Not in XML ✅ RESOLVED

Verified that `BuiltinQosLib::Generic.Common` defaults to `access_scope = INSTANCE`, `ordered_access = false` — no cross-topic ordering. Added explicit PRESENTATION QoS to `DefaultUMAAParticipant` in `umaa_qos_lib.xml` for both Publisher and Subscriber:

- `access_scope = TOPIC_PRESENTATION_QOS`
- `ordered_access = true`

This guarantees elements-first protocol correctness: specialization/element samples arrive before root samples in the subscriber cache.

### 3.4 — `read_large_set()` / `read_large_list()` Signature Mismatch ✅ RESOLVED

Standardized on **Option C**: single-reader utility that takes pre-extracted metadata directly. The caller does `getattr()` and passes the metadata object; the utility doesn't need to know field names.

```python
# Utility signature (both read_large_set and read_large_list)
async def read_large_set(element_reader: dds.DataReader, set_metadata, ...) -> list
async def read_large_list(element_reader: dds.DataReader, list_metadata, ...) -> list

# Caller extracts metadata before calling
set_metadata = getattr(sample.data, slot.metadata_field)
assembled[slot_name] = await read_large_set(reader, set_metadata)
```

Updated: multi-topic-utilities.md, large-set-services.md, large-list-services.md.

### 3.5 — `create_topic()` vs `get_topic()` and `create_writer()` Inconsistency

Service docs inconsistently call:
- `ctx.create_topic(data_type, topic_name)` — method doesn't exist in DDSContext
- `ctx.create_writer(topic)` — passing a Topic object; actual API is `create_writer(data_type, topic_name)`
- `ctx.create_writer(data_type, topic_name)` — correct API

**Action:** Audit all service code examples. DDSContext has `get_topic()` (internal) and `create_writer(data_type, topic_name)` / `create_reader(data_type, topic_name)`. Service constructors should only call `create_writer(type, topic_name)` and `create_reader(type, topic_name)`. Topic creation is handled internally by the factory methods.

---

## 4 — Medium: Simplifications

### 4.1 — Simplify DDSContext Constructor ✅ RESOLVED

EventProcessor and QosCategory removed (D16, D12). Constructor simplified to 2 parameters:

```python
def __init__(self, domain_id: int = 0, qos_file: Optional[str] = None):
```

Also removed: `threading.Lock` (asyncio is single-threaded), `event_processor` property. Updated dds-context.md.

### 4.2 — Consider Removing `extract_key()` Utility

`utilities.md` defines `extract_key(sample)` that tries 3 field names (`sessionID`, `sourceID`, `id`). This generic approach is fragile. Every actual usage in the docs accesses fields explicitly (e.g., `sample.data.sessionID`). Consider removing this utility unless a clear use case emerges during implementation.

### 4.3 — Flatten the `util/` and `core/` Package Split

The `core/` package has 11 files. The `util/` package has 6 files. Consider whether this split adds value or just increases import path depth. A flat `rtiumaapy/` with all modules may be simpler for a 26-class library.

---

## 5 — Medium: Optimizations

### 5.1 — Batch Element Writes ✅ RESOLVED

RTI Python API only has `writer.write()` — no batch/sequence API exists. The per-element loop is the correct approach. Async publish mode handles batching at the transport level internally.

### 5.2 — Reusable QueryConditions in Assembly Functions ✅ RESOLVED

Verified `QueryCondition.parameters` has a setter in RTI Python API. Updated:
- Consumers create `QueryCondition` at construction with parameterized `"setID = &hex(%0)"` / `"listID = &hex(%0)"`
- `_run()` updates `condition.parameters = [guid_to_hex(...)]` per root arrival
- `read_large_set()` / `read_large_list()` accept the condition as a parameter—no per-call create/destroy
- `close()` cleans up conditions

### 5.3 — Lazy Service Start

Currently `_run()` coroutines would be started for all registered services. For components with many services (e.g., 50+ report consumers), consider lazy startup — only start `_run()` when data is expected.

**Recommendation:** Start with eager startup (simpler). Profile later if needed.

### 5.4 — Pre-Wired Concrete Service Classes ✅ RESOLVED

**Original finding:** `services-catalog.md` defined `CommandServiceDef` / `ReportServiceDef` dataclasses and `create_command_provider()` / `create_report_consumer()` factory functions to reduce boilerplate.

**Decision:** Replace factories with **named concrete classes** — one per UMAA service. Each class inherits its base template and hardcodes the correct IDL types/topics in `super().__init__()`. Users subclass directly for custom behavior:

```python
# Pre-wired class — all type/topic wiring baked in
class EngineControlProvider(CommandProvider):
    def __init__(self, ctx, source_id):
        super().__init__(ctx, command_type=EngineCommandType, ...)

# User subclasses for hooks — no factory indirection
class MyEngine(EngineControlProvider):
    async def on_executing(self, session): ...
```

**Why not factories:** IDE discoverability, direct subclassing, type safety, transparency. See `service-library.md` for full design.

**Scope:** ~474 classes (237 provider + 237 consumer) across Tiers 0–3. Tier 4 composites are already one-off concrete classes. Classes are organized by domain module (`co.py`, `eo.py`, `mm.py`, etc.) and can be auto-generated from the service catalog stem tables.

**Priority:** Early Phase 3 — depends only on base template classes. One of the first infra deliverables.

---

## 6 — Low: Missing Info for Implementation

### 6.1 — NumericGUID vs UUIDType Representation ✅ RESOLVED

`UUIDType` was a fictional wrapper that doesn't exist in the IDL. All UMAA identifier fields use `NumericGUID` (`typedef octet NumericGUID[16]`) — raw 16-byte arrays.

Resolution: Replaced `UmaaUUID` class (which operated on non-existent `UUIDType`) with `GUIDUtil` — a stateless utility that works directly with `bytes(16)`:
- `GUIDUtil.generate()` → `bytes` (via `uuid.uuid4().bytes`)
- `GUIDUtil.to_hex(guid)` → hex string for `&hex()` CFT expressions (consolidates the standalone `guid_to_hex()`)
- `GUIDUtil.to_string(guid)` → human-readable UUID string for logging
- `GUIDUtil.from_string(s)` → `bytes` from UUID string

Updated `utilities.md`. No custom types, no wrapper structs — just raw bytes everywhere.

### 6.2 — Testing Strategy ✅ RESOLVED

Two-layer testing approach:

1. **Python integration tests** — Exercise service paths at the DDS messaging level. Tests publish/subscribe real DDS samples through a loopback participant (localhost-only transport), verifying state machine transitions, CFT filtering, multi-topic assembly, and shutdown behavior end-to-end. No mocks — real `DDSContext`, real readers/writers.

2. **USTM (UMAA Standard Test Module)** — External compliance tool that verifies services conform to the UMAA ICD protocol (correct topic names, QoS, state transitions, timing). Used as the authoritative UMAA compliance check.

No unit-test mocking layer planned — the integration tests at the messaging level are sufficient for validating service behavior, and USTM covers ICD compliance.

### 6.3 — Logging / Diagnostics

Only a brief mention of `logging.getLogger("rtiumaapy")`. Missing:
- Log format conventions
- Correlation IDs (sessionID in log messages for command tracing)
- Performance metrics (sample rates, latency)
- QoS event logging (liveliness changes, sample lost/rejected)

### 6.4 — Configuration File for Deployments

No document describes how a production deployment would be configured:
- Which services to create
- Domain ID
- Source ID
- QoS file path
- Deployment-specific specialization subsets

**Recommendation:** Define a YAML or TOML config format, or document that code-level configuration (Python script defining services) is the intended model.

### 6.5 — Multi-Domain Support ✅ RESOLVED

Out of scope. ~80% of use cases are single-domain. DDSContext remains a single-domain singleton.

### 6.6 — Liveliness Lost Handler for Commands ✅ RESOLVED

**Original approach:** `LivelinessMonitor` — a `NoOpDataReaderListener` subclass attached to the consumer's status reader with `LIVELINESS_CHANGED` mask. Detected writer loss at the per-writer level; required `loop.call_soon_threadsafe()` to bridge from DDS middleware thread to asyncio.

**Revised approach (after C++ SDK review):** Instance state detection inline in the `_run()` data processing loop. Both C++ SDKs (ARL/PSU `CommandProviderBase` and JHU/APL `ControlServiceProvider`) check `sample.info.state.instance_state` on every sample from `take()`, not a separate liveliness listener.

The RTI Python API exposes:
- `sample.info.state.instance_state` → `dds.InstanceState` (`ALIVE`, `NOT_ALIVE_DISPOSED`, `NOT_ALIVE_NO_WRITERS`)
- `reader.key_value(instance_handle)` → key-only sample for session routing

**Provider `_run()`** checks command reader:
- `NOT_ALIVE_DISPOSED` → consumer disposed command = cancel request (ICD §5.1.4.5)
- `NOT_ALIVE_NO_WRITERS` → consumer crashed = treat as cancel

**Consumer `_run()`** checks status reader:
- `NOT_ALIVE_NO_WRITERS` → provider crashed = fail active session
- `NOT_ALIVE_DISPOSED` → provider cleanup confirmed = no action needed

**Advantages over LivelinessMonitor:**
- **Inline** — runs on the asyncio event loop, no thread bridge (`call_soon_threadsafe`) needed
- **Per-instance** — detects individual session disposal, not just global writer loss
- **Consistent** — matches both C++ SDK implementations
- **Simpler** — no `LivelinessMonitor` class, no listener attachment, no `StatusMask`

Updated `command-services.md`, `utilities.md`, `error-handling.md`.

### 6.7 — Dispose / Unregister Instance Protocol ✅ RESOLVED

ICD §5.1.5 (Command Cleanup) and §5.1.6 (Command Shutdown) require explicit instance disposal. Without it, DDS maintains instance resources indefinitely.

**Normal cleanup (§5.1.5):** After terminal state (COMPLETED/FAILED):
1. Consumer disposes `FunctionCommandType` instance (signals command is done)
2. Provider detects command disposal → disposes its `StatusType`, `AckReportType`, `ExecutionStatusReportType` instances

**Cancel (§5.1.4.5):** Consumer disposes command to signal cancel → Provider publishes CANCELED status → Provider disposes status/ack/exec_status.

**Liveliness loss (§5.1.4.5):**
- Provider dies → Consumer disposes all in-process commands with that provider
- Consumer dies → Provider treats as canceled, publishes CANCELED, disposes status/ack/exec_status

**Shutdown (§5.1.6):**
- Provider: fail incomplete requests, dispose status/ack/exec_status, unregister writers, close readers
- Consumer: cancel incomplete requests (dispose command), unregister command writer, close readers

Updated `command-services.md` `close()` methods for both provider and consumer with `writer.dispose_instance()` calls before closing entities.

---

## 7 — Implementation Priority Recommendations

Based on dependency analysis and risk assessment:

### Phase 1 — Foundation (Blocking)

| Priority | Item | Why |
|---|---|---|
| **P0** | Resolve `async close()` vs sync `shutdown()` | Affects all 26 service classes |
| **P0** | Add `run_until_shutdown()` or equivalent startup mechanism | Required for any service to actually run |
| **P1** | Add `*ConfigReportType` filter to XML (verify IDL first) | QoS correctness |
| **P1** | Verify PRESENTATION QoS (ordered_access) | Elements-first protocol correctness |

### Phase 2 — Multi-Topic Utilities

| Priority | Item | Why |
|---|---|---|
| **P0** | Standardize `read_large_set()` / `read_large_list()` signatures | Tier 2–4 depend on these |
| **P1** | Fix SpecializationReaderSet to use async pattern | Blocks asyncio model |
| **P1** | Implement `guid_to_hex()` | All CFT and QueryCondition code depends on this |

### Phase 3 — Services

| Priority | Item | Why |
|---|---|---|
| **P0** | `BaseService` ABC | Every service class inherits this |
| **P0** | `ReportProvider` / `ReportConsumer` (Tier 1) | Simplest; validates DDSContext API |
| **P0** | `CommandProvider` / `CommandConsumer` (Tier 0) | Most complex template; highest risk |
| **P1** | `CommandProviderSession` / `CommandConsumerSession` | Command lifecycle |
| **P1** | `LargeSetReport*` / `LargeListReport*` (Tiers 2–3) | Depends on multi-topic utilities |
| **P2** | Composite classes (Tier 4) | Only ~12 types; can be deferred |

### Phase 4 — Polish

| Priority | Item | Why |
|---|---|---|
| **P1** | Pre-wired service library (`service-library.md`) | Eliminates boilerplate for 229 plain services |
| **P2** | Testing infrastructure | Need before release |
| **P2** | Examples | Demonstrate usage |
| **P3** | Sphinx docs | API documentation |

---

## 8 — v1 Bug Status vs v2 Coverage

Cross-referencing v1 known-bugs.md with v2 architecture:

| Bug | v1 Issue | v2 Status |
|---|---|---|
| #10 | Eager side effects on import | **Fixed by design** — no side effects |
| #11a/b | EventProcessor leaks | **Eliminated** — EventProcessor removed (D16) |
| #12 | Consumer crash on None session | **Addressed** — v2 uses CFT filtering + sessionID routing |
| #13 | Filter cleanup race | **Mitigated** — v2 uses dynamic consumer CFTs with clean lifecycle (`"1 = 0"` ↔ active filter transitions managed in asyncio single-thread) |
| #14 | Shared state without lock | **Eliminated** — single-threaded asyncio model, no locks |
| #15 | `update()` never writes command | **Needs implementation** — verify `CommandConsumerSession` `execute()` actually writes |
| #16 | `_latest_report` thread safety | **Eliminated** — asyncio single-threaded model |
| #17 | `print()` instead of `_logger` | **Needs attention** — v2 utility functions should use logging |
| #18 | Dead code in timestamp | **Needs attention** — v2 `UmaaTimestamp` is clean-sheet |
| #24 | All reports hardcoded to TELEMETRY QoS | **Fixed by design** — topic_filter auto-assignment |
| #25 | Missing liveliness handling | **Fixed** — §6.6: Instance state detection inline in `_run()` loops (replaces `LivelinessMonitor` listener). Provider command reader checks `NOT_ALIVE_DISPOSED` / `NOT_ALIVE_NO_WRITERS` for cancel detection. Consumer status reader checks `NOT_ALIVE_NO_WRITERS` for provider crash detection. Matches both C++ SDK patterns. Documented in command-services.md, utilities.md, error-handling.md |
| #26 | PRESENTATION QoS for elements | **Fixed** — §3.3: Added explicit `TOPIC_PRESENTATION_QOS` + `ordered_access=true` to `DefaultUMAAParticipant` publisher/subscriber QoS in `umaa_qos_lib.xml` |
| #27 | Ack sent before ISSUED status | **Addressed** — v2 state machine sends ack → then status |
| #28 | on_commanded called after COMMANDED | **Addressed** — v2 validates before acceptance |
| #29 | No two-phase disposal | **Fixed** — §6.7: Full ICD §5.1.5/§5.1.6 dispose protocol documented. Provider disposes ack/status/exec_status; Consumer disposes command. Both `close()` methods and normal-operation disposal implemented in command-services.md. Uses `lookup_instance()` → nil check → `dispose_instance()` pattern (verified against v1 code) |
| #30 | Provider sends CANCELED on shutdown | **Fixed** — Provider `close()` calls `session.fail("Service shutdown")` which publishes `FAILED(SERVICE_FAILED)` per ICD §4.1.6.1. Verified in command-services.md §Close |
| #31 | No persisted command recovery | **Eliminated** — UMAA-3014 removed the requirement |

**All high-risk items resolved:** #25 (liveliness — §6.6), #26 (PRESENTATION QoS — §3.3 + XML), #29 (disposal — §6.7), #30 (shutdown status — provider `close()` sends FAILED).

---

## 9 — Action Items Summary

### Immediate (Pre-implementation)

- [x] **AI-1:** ~~Resolve `async close()` vs `shutdown()`~~ — Resolved: both are async. Signal handlers set an event; `run_until_shutdown()` awaits it, then calls async `shutdown()` which awaits each service's `close()`
- [x] **AI-2:** ~~Add `*ConfigReportType` filter to XML~~ — Resolved: 9 ConfigReportType IDL files verified, filter added to `umaa_qos_lib.xml`
- [x] **AI-3:** ~~Verify PRESENTATION QoS (`ordered_access=true`) is applied~~ — Resolved: Verified `Generic.Common` defaults to INSTANCE/false. Added explicit `TOPIC_PRESENTATION_QOS` + `ordered_access=true` to `DefaultUMAAParticipant` publisher/subscriber QoS
- [x] **AI-4:** ~~Standardize `read_large_set()` / `read_large_list()` signatures across docs~~ — Resolved: Option C — single-reader, pre-extracted metadata. Updated multi-topic-utilities.md, large-set-services.md, large-list-services.md
- [x] **AI-5:** ~~Fix SpecializationReaderSet to use async pattern instead of blocking WaitSet~~ — Resolved: v2 never uses WaitSets; all readers use `take_async()` consistently

### Architecture Doc Updates

- [x] **AI-6:** ~~Mark D11 as superseded~~ — Confirmed: v2 command-services.md dynamic consumer CFTs are the correct design. D11 consumer-side is superseded; provider-side (static CFT on destination) retained
- [x] **AI-7:** ~~Reconcile D3 rejection model~~ — Resolved: command-services.md updated to use D3's full state machine traversal (ISSUED → COMMANDED → FAILED with RESOURCE_REJECTED)
- [x] **AI-8:** ~~Clarify `on_command` vs `on_execute` dual-callback~~ — Resolved: command-services.md updated to subclass-override model with 6 async hooks (`validate_command`, `on_commanded`, `on_executing`, `on_complete`, `on_failed`, `on_terminal`). Base class owns all status publishing.
- [x] **AI-9:** ~~Document `_run()` startup mechanism~~ — Resolved: `DDSContext.run_until_shutdown()` iterates registry and calls `asyncio.create_task(service._run())` for all services, then waits for signal.
- [x] **AI-10:** ~~Remove `*ConfigReportType` from report-services.md QoS table OR add filter to XML~~ — Resolved: filter added to XML, report-services.md table is now correct
- [x] **AI-11:** ~~Remove EventProcessor from dds-context.md class definition~~ — Resolved: removed EventProcessor from header, C++ comparison, constructor (6→2 params), body, properties. Removed threading.Lock (asyncio is single-threaded).
- [ ] **AI-12:** Fix `create_topic()` vs `get_topic()` references in service docs
- [x] **AI-13:** ~~Add signal handling / graceful shutdown documentation~~ — Resolved: `run_until_shutdown()` installs SIGINT/SIGTERM handlers that set an asyncio.Event; `shutdown()` is async.

### Implementation Phase

- [x] **AI-14:** ~~Implement `guid_to_hex()` utility~~ — Resolved: Consolidated into `GUIDUtil.to_hex()` (§6.1). Architecture documented in utilities.md; implementation-phase only.
- [x] **AI-15:** ~~Implement liveliness lost handler for command consumers (Bug #25)~~ — Resolved: Instance state detection in `_run()` loops replaces `LivelinessMonitor`. Provider checks `NOT_ALIVE_DISPOSED`/`NOT_ALIVE_NO_WRITERS` on command reader; consumer checks `NOT_ALIVE_NO_WRITERS` on status reader. Updated command-services.md, utilities.md, error-handling.md; implementation-phase only.
- [x] **AI-16:** ~~Implement instance disposal protocol (Bug #29)~~ — Resolved: ICD §5.1.5/§5.1.6 dispose protocol architecture documented (§6.7). Updated command-services.md with `lookup_instance()` → `dispose_instance()` pattern; implementation-phase only.
- [x] **AI-17:** ~~Verify shutdown sends FAILED (not CANCELED) per ICD §4.1.6.1 (Bug #30)~~ — Resolved: Provider `close()` calls `session.fail("Service shutdown")` → `FAILED(SERVICE_FAILED)`. Confirmed in command-services.md.
- [ ] **AI-18:** Add testing infrastructure (mocks, fixtures, integration tests)
- [x] **AI-19:** ~~Fix `ReportProvider.close()` to dispose report instance before closing writer (§10.1)~~ — Resolved: Updated report-services.md. `close()` now creates key-only sample with `source_id`, calls `lookup_instance()` → `dispose_instance()` before closing writer. Constructor takes `source_id: bytes` parameter. Per UMAA §5.2.1.3 and C++ SDK `ReportProvider.h` destructor pattern.
- [x] **AI-20:** ~~Add per-state failure reason validation to `CommandProviderSession` (§10.2)~~ — Resolved: Updated command-services.md. Added `_VALID_FAIL_REASONS` mapping and `_publish_fail()` method to `CommandProviderSession`. Validates reason against current state per ICD Figure 15 and C++ SDK `CommandStateMachine.cpp`. Falls back to `SERVICE_FAILED` if invalid reason for current state. Session `_run_session()` now calls `_publish_fail(e.reason)` instead of raw `_publish_status()`.
- [x] **AI-21:** ~~Add full CRUD operations to `LargeSetWriter` and `LargeListWriter` (§10.10)~~ — Resolved: Added `LargeSetWriter` class to large-set-services.md (insert, insert_many, update, remove, clear, get, find) and `LargeListWriter` class to large-list-services.md (prepend, append, insert_at, update, pop_front, pop_back, remove, clear, prepend_many, append_many). Both auto-manage metadata and DDS writes/disposes. Providers updated with `get_set_writer()` / `get_list_writer()` accessors, `source_id` params, and root instance disposal.

---

## 10 — C++ SDK Re-Review Findings

> Second-pass review of both C++ reference SDKs (ARL/PSU `umaa-sdk-common` and JHU/APL `umaa-usv-autopilot`). All source files in `python/c++_ref/` re-read; patterns compared systematically against v2 architecture docs.

### 10.1 — BUG: ReportProvider Missing Instance Disposal on `close()`

**C++ SDK:** `ReportProvider.h` destructor creates a key-only sample (stamped with `sourceId_`) and calls `reportSender_->dispose()`. This is per UMAA §5.2.1.3: *"When a provider stops publishing a report, it shall dispose its instance to notify consumers."*

**v2 docs:** `ReportProvider.close()` in [report-services.md](report-services.md) only calls `self._writer.close()` — no `dispose_instance()`.

**Fix:** `close()` must dispose the report instance before closing the writer:
```python
async def close(self) -> None:
    # Dispose report instance per UMAA §5.2.1.3
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

**Action:** → AI-19

### 10.2 — BUG: Per-State Failure Reason Validation Not Enforced

**C++ SDK:** `CommandStateMachine.cpp` `fail(reason)` validates which `CommandStatusReasonEnumType` values are legal from each state:

| Reason | Valid from states |
|---|---|
| `SERVICE_FAILED` | Any non-final (ISSUED, COMMANDED, EXECUTING) |
| `INTERRUPTED` | Any non-final |
| `TIMEOUT` | Any non-final |
| `RESOURCE_FAILED` | ISSUED, EXECUTING |
| `VALIDATION_FAILED` | ISSUED only |
| `RESOURCE_REJECTED` | COMMANDED only |
| `OBJECTIVE_FAILED` | EXECUTING only |

**v2 docs:** `UmaaCommandException(reason, msg)` can be raised from any hook with any reason — no per-state validation. For example, `VALIDATION_FAILED` could theoretically be raised from `on_executing()`, which is invalid per ICD Figure 15.

**Impact:** Since the v2 hook model already constrains *when* hooks are called (e.g., `validate_command` runs before ISSUED, `on_executing` runs after EXECUTING is published), the per-state mapping is implicitly handled by the hook execution order. However, an explicit guard in `CommandProviderSession._publish_fail()` would prevent misuse:

```python
_VALID_FAIL_REASONS = {
    CommandStatusEnum.ISSUED: {
        CommandFailedReasonEnum.SERVICE_FAILED,
        CommandFailedReasonEnum.INTERRUPTED,
        CommandFailedReasonEnum.TIMEOUT,
        CommandFailedReasonEnum.RESOURCE_FAILED,
        CommandFailedReasonEnum.VALIDATION_FAILED,
    },
    CommandStatusEnum.COMMANDED: {
        CommandFailedReasonEnum.SERVICE_FAILED,
        CommandFailedReasonEnum.INTERRUPTED,
        CommandFailedReasonEnum.TIMEOUT,
        CommandFailedReasonEnum.RESOURCE_REJECTED,
    },
    CommandStatusEnum.EXECUTING: {
        CommandFailedReasonEnum.SERVICE_FAILED,
        CommandFailedReasonEnum.INTERRUPTED,
        CommandFailedReasonEnum.TIMEOUT,
        CommandFailedReasonEnum.RESOURCE_FAILED,
        CommandFailedReasonEnum.OBJECTIVE_FAILED,
    },
}
```

**Action:** → AI-20

### 10.3 — NOTE: IncomingCommandBehavior — v2 Only Implements REJECT

**C++ SDK (ARL/PSU):** `CommandProviderBase.h` defines `IncomingCommandBehavior` enum with 5 modes: `QUEUE_INCOMING`, `ACCEPT_CONCURRENT`, `CANCEL_EXISTING`, `COMPLETE_EXISTING`, `REJECT_INCOMING`. The base class supports concurrent active commands (`activeCommands_` is a map, not a single pointer) and a command queue for QUEUE_INCOMING mode.

**v2 docs:** Only the REJECT behavior is implemented (single active session; new commands while active get the full D3 state machine traversal: ISSUED → COMMANDED → FAILED with RESOURCE_REJECTED).

**Assessment:** Deliberate MVP simplification. The ICD does not require queuing or concurrent commands — these are implementation-specific behaviors for advanced scenarios. REJECT is the most ICD-compliant default behavior. Document as a known gap for future extension.

### 10.4 — NOTE: JHU/APL Ignores vs ARL/PSU Rejects New Commands While Active

**ARL/PSU:** New command with different sessionID while active → processes through state machine → FAILED with `RESOURCE_REJECTED`.

**JHU/APL:** New command with different sessionID while active → **silently ignores** (logs warning, returns without publishing any status). Only same-sessionID commands are processed (as updates via `triggerUpdatedTransition`).

**v2:** Follows ARL/PSU pattern — full state machine traversal for rejection (D3).

**Assessment:** v2's approach is more ICD-compliant. The ICD implies the provider should always acknowledge receipt of a command (§5.1.4.1), so silently ignoring is arguably non-compliant. No action needed — v2 is correct.

### 10.5 — NOTE: Destination Filtering — CFT (v2) vs In-App (Both C++ SDKs)

**Both C++ SDKs:** Filter destination in application code AFTER `read()`:
- ARL/PSU: `DestinationReaderFilter` applied via `setManualFilter()` as a post-read filter
- JHU/APL: `if(msg.destination().id() == this->getServiceProviderUuidAsByteArray())` inline in `DataCallable` lambda

**v2:** Uses DDS Content-Filtered Topics (CFT) with `&hex()` expressions: `"destination.parentID = &hex(...) AND destination.id = &hex(...)"`. Filtering happens in the DDS middleware before data reaches the application.

**Assessment:** v2's CFT approach is more efficient (middleware-level filtering reduces CPU and memory usage in the application). This is a deliberate design improvement, not a divergence. Both C++ SDKs likely avoid CFTs because CycloneDDS has limited CFT support. RTI Connext DDS fully supports CFTs.

### 10.6 — NOTE: Health Monitoring / Diagnostics Not in v2

**C++ SDK (ARL/PSU):** `CycloneReader.getHealthInfo()` returns `ReaderHealthStats`:
- `matchedSenders` — count of matched DataWriters
- `rejectedSamples` — samples rejected by reader
- `lostSamples` — samples lost before delivery
- `missedDeadlines` — deadline QoS violations
- `incompatibleQos` — QoS incompatibilities
- `invalidSamples` / `readSamples` — read counters

**v2 docs:** Optional `StatusMask` listeners mentioned in error-handling.md (§Layer 4), but no structured health stats model and no `get_health_info()` API.

**Assessment:** Future enhancement for production monitoring. Not required for MVP. The RTI Python API provides `DataReader.datareader_protocol_status`, `subscription_matched_status`, etc. — these could be wrapped in a `get_health_info()` method later.

### 10.7 — NOTE: `NOT_ALIVE_NO_WRITERS` Mapping Differences

**C++ SDK (ARL/PSU):** `CycloneReader.read()` (non-instance read) maps `NOT_ALIVE_NO_WRITERS` → `ReadStatus::SUCCESS`, not DISPOSED. Only `readInstance()` maps `NOT_ALIVE_NO_WRITERS` → `ReadStatus::DISPOSED`.

**v2 docs:** Instance state detection (utilities.md, command-services.md) treats both `NOT_ALIVE_DISPOSED` and `NOT_ALIVE_NO_WRITERS` as session-ending events in the provider `_run()` loop.

**Assessment:** v2's safety-first approach is intentional and correct. When a provider detects that its command reader has no writers (consumer crashed), treating it as an implicit cancel is the safest behavior regardless of whether `readInstance()` vs `read()` semantics differ. No change needed.

### 10.8 — NOTE: Observer/Subject vs Callback Pattern

**C++ SDK (ARL/PSU):** Uses a full Observer/Subject pattern (`Subject.h`, `Observer.h`) with `weak_ptr`-based observer registration. `ReportConsumer` extends `Subject` and notifies all registered observers when new data arrives. Used extensively to distribute report data to multiple objectives.

**v2 docs:** Uses direct callbacks (`on_report` callable passed to constructor) or async iteration. No Observer/Subject abstraction.

**Assessment:** Callbacks are simpler and more Pythonic. If an application needs to fan out reports to multiple objectives, it can do so in the callback. An Observer layer could be added later if the pattern emerges frequently. No action needed for MVP.

### 10.9 — NOTE: TaskStateMachine / ObjectiveStateMachine Coverage

**C++ SDK (ARL/PSU):** Full state machines for task and objective lifecycle:
- **TaskStateMachine:** NOT_PLANNED → PLANNING → PLANNED → AWAITING_EXECUTION_APPROVAL → EXECUTION_APPROVED → NOT_QUEUED → QUEUING → QUEUED → EXECUTING → COMPLETED. With PAUSING → PAUSED → RESUMING, CANCELING → CANCELED, RESTARTING → NOT_PLANNED, any → FAILED.
- **ObjectiveStateMachine:** QUEUED → EXECUTING → COMPLETED. With PAUSING → PAUSED → RESUMING, MODIFYING, CANCELING → CANCELED, any → FAILED (with specific reasons: CANNOT_PERFORM_UNDER_CONSTRAINTS, INTERNAL_FAILURE, LOWER_SERVICE_FAILED/TIMEOUT/REJECTED/INTERRUPTED, OBJECTIVE_REPLACED, COMMAND_VALIDATION_FAILED).
- **ObjectiveBase:** Abstract class with virtual hooks: `onCycle`, `onQueued`, `onCanceled`, `onCanceling`, `onCompleted`, `onExecuting`, `onFailed`, `onModifying`, `onPaused`, `onPausing`, `onResuming`, `isObjectiveValid`, `isObjectiveComplete`, `isObjectiveFailed`, `sendExecutionStatus`.

**v2 docs:** composite-services.md covers MissionPlanReportConsumer assembly and GlobalWaypointCommandProvider composite entities, but does **not** define TaskStateMachine, ObjectiveStateMachine, or ObjectiveBase equivalents.

**Assessment:** These state machines are part of the *mission execution layer* — a higher-level orchestration concern that sits above the service SDK. The v2 SDK provides the communication primitives (CommandProvider, ReportConsumer, etc.); the mission executor application would implement its own task/objective state machines using these primitives. This is consistent with the SDK-vs-application boundary. No action needed for the SDK itself, but should be documented as an application-level concern.

### 10.10 — RESOLVED: LargeList/LargeSet Writer-Side Full CRUD ✅

**C++ SDK (ARL/PSU):** `LargeListWriter` and `LargeSetWriter` provide full CRUD:
- **LargeListWriter:** `prepend`, `append`, `insert(pos)`, `update(pos)`, `popFront`, `popBack`, `remove(pos)`, `clear`. Manages linked-list chain pointers (`nextElementID`). Destructor calls `clear()`.
- **LargeSetWriter:** `insert`, `update`, `remove`, `clear`, `getElementById`, `findSetElementIf`. Manages `elementTable_` (Element → SetElement mapping) and `elements_` (unordered_set). STL container interface.

**Resolution:** Added full CRUD helper classes `LargeSetWriter` and `LargeListWriter` to v2. These are standalone write-side managers that own an in-memory element collection and write/dispose DDS samples on every mutation. Providers now own one writer per slot and expose `get_set_writer()` / `get_list_writer()` for incremental CRUD. Bulk `write()` is retained as a convenience method.

- **LargeSetWriter** (large-set-services.md): `insert`, `insert_many`, `update`, `remove`, `clear`, `get`, `find`. Dict-based, keyed by elementID. Auto-maintains `LargeSetMetadata`.
- **LargeListWriter** (large-list-services.md): `prepend`, `append`, `insert_at`, `update`, `pop_front`, `pop_back`, `remove`, `clear`, `prepend_many`, `append_many`. List-based with automatic `nextElementID` pointer rewiring. Auto-maintains `LargeListMetadata` including `startingElementID`.
- Both call `close()` → `clear()` for destructor-equivalent cleanup (dispose all elements).
- Both `LargeSetReportProvider` and `LargeListReportProvider` updated with `source_id` constructor param and root instance disposal in `close()`.

### 10.11 — NOTE: AsyncCommandSession (C++) vs asyncio Events (v2)

**C++ SDK (ARL/PSU):** `AsyncCommandSession.h` wraps `std::future<CommandStatusEnumType>` for consumer-side async command tracking. Methods: `waitForAck()`, `waitForAck_for()`, `waitForStatus()`, `waitForCancel()`, `wait_for()`, `wait_until()`. Uses `std::mutex` + `std::condition_variable`.

**v2 docs:** `CommandConsumerSession` uses `asyncio.Event` for the same purpose — `_ack_event`, `_status_event`, `_cancel_event`. Callers `await session.wait_for_ack()`, etc. Single-threaded, no mutex needed.

**Assessment:** Equivalent functionality, different concurrency models. v2's asyncio approach is cleaner for Python. No action needed.

---

## Appendix A — XML ↔ Doc Cross-Reference

Verified match between `qos/umaa_qos_lib.xml` and architecture docs:

| XML Element | Doc Reference | Match? |
|---|---|---|
| `UMAAQoSLib` library name | qos-profiles.md, dds-context.md | ✅ |
| `DefaultUMAAParticipant` profile | dds-context.md constructor | ✅ (in docs; code still says `UMAAPyQosLib::ParticipantProfile`) |
| `AssignerQoS` profile | dds-context.md, qos-profiles.md | ✅ |
| `TelemetryQoS` — BEST_EFFORT | qos-profiles.md profile table | ✅ |
| `CommandQoS` — RELIABLE, liveliness 5s/10s | qos-profiles.md profile table | ✅ |
| `ConfigQoS` — RELIABLE, TRANSIENT_LOCAL | qos-profiles.md profile table | ✅ |
| `ElementQoS` — RELIABLE, no liveliness | qos-profiles.md profile table | ✅ |
| `InstanceResourceAutoCleanup` snippet | Not documented explicitly | ❌ Missing from docs |
| `CycloneInterop` snippet | Not documented explicitly | ❌ Missing from docs |
| `*ConfigReportType` filter | report-services.md says yes, XML says yes | ✅ |
| PRESENTATION QoS | Bug #26 says resolved, XML has it | ✅ Added to DefaultUMAAParticipant |

## Appendix B — Entity Count Verification

From services-catalog.md:

| Tier | Template Classes | Services | Verified |
|---|---|---|---|
| 0 | 2 (CommandProvider/Consumer) | ~60 | ✅ Catalog lists 60 stems |
| 1 | 2 (ReportProvider/Consumer) | ~169 | ✅ Catalog lists by domain |
| 2 | 2 (LargeSetReport*) | 4 | ✅ Catalog lists 4 root types |
| 3 | 2 (LargeListReport*) | 4 | ✅ Catalog lists 4 root types |
| 4 | 18 (one-off) | ~12 | ✅ Catalog lists 26 total classes |
| **Total** | **26** | **~250** | ✅ |

