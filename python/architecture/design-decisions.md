# Design Decisions

> All design decisions for the `rtiumaapy` SDK architecture, cross-referenced against the C++ reference SDKs, ICD requirements, and the @alexcamposruiz PR #22 review.
>
> **Scope:** Decisions that affect the public API, DDS usage patterns, or service implementor experience.
> Purely internal implementation details (e.g. CFT counter naming) are omitted.
>
> **See also:** [design-concerns.md](design-concerns.md) — all concerns, issues, and things-to-watch (C1–C54).

---

## Design Decisions Log

### D1: Async event loop via `rti.asyncio` — not a thread pool

All service logic runs cooperatively on a single Python `asyncio` event loop via RTI's `rti.asyncio` module. Each service uses `reader.take_async()` to yield samples as an async iterator. No thread pool, no `WaitSet`, no poll-based `cycle()`.

**Threading model:** All callbacks are cooperative coroutines. CPU-bound work should use `asyncio.to_thread()`. This is safe because each service owns dedicated readers (D13) — no reader contention.

**Cross-references:** [dds-context.md](dds-context.md)

---

### D2: No side effects on import — explicit DDSContext construction

All imports are inert. No DDS entities created until `DDSContext()` is constructed with explicit parameters (`domain_id`, `qos_file`). No env-var-only config.

**Rationale:** Prevents unintended participant creation during module loading; testable (pass QoS file path in tests); no hidden configuration surprises.

---

### D3: Singleton DDSContext — one participant, one publisher, one subscriber

Only one `DDSContext` per process (`DDSContext.current()` accessor). All services share a single DomainParticipant, Publisher, and Subscriber.

**Rationale:** Bounded resource usage (prevents UDP port exhaustion from duplicate participants); simpler discovery; all discovery happens at participant level.

**Cross-references:** [dds-context.md](dds-context.md)

---

### D4: External QoS assignment via `topic_filter`

QoS is assigned externally in `umaa_qos_lib.xml` using RTI Connext `topic_filter` rules. Four standalone profiles — `Telemetry`, `Command`, `Config`, `Element` — cover all UMAA topic types. `DDSContext.create_reader()` / `create_writer()` resolve QoS by topic name at runtime via `qos_provider.get_topic_data{reader,writer}_qos()`.

| Profile | Reliability | Durability | History | Topics |
|---|---|---|---|---|
| Telemetry | BEST_EFFORT | VOLATILE | KEEP_LAST(1) | `*ReportType` |
| Command | RELIABLE | VOLATILE | KEEP_ALL | `*CommandType`, `*CommandStatusType`, `*CommandAckReportType`, `*ExecutionStatusType` |
| Config | RELIABLE | TRANSIENT_LOCAL | KEEP_ALL | `*SpecsReportType`, `*ConfigReportType` |
| Element | RELIABLE | VOLATILE | KEEP_ALL | `*SetElement`, `*ListElement` |

**Rationale:** Single source of truth in XML; no code coupling to QoS categories; vendor interop by swapping XML; same model as the C++ XML App Framework.

**Cross-references:** [qos-profiles.md](qos-profiles.md)

---

### D5: PRESENTATION QoS at participant level (`access_scope=TOPIC`, `ordered_access=true`)

Publisher and Subscriber QoS set `access_scope=TOPIC` with `ordered_access=true` at participant level, per the UMAA spec. This means samples are ordered per-writer across all topics (rather than the default per-instance ordering), which guarantees elements-first ordering within a subscriber — the foundation of the multi-topic assembly protocol.

**Cross-references:** [qos-profiles.md](qos-profiles.md), [multi-topic-utilities.md](multi-topic-utilities.md), [RTI PRESENTATION QoS](https://community.rti.com/static/documentation/connext-dds/7.6.0/doc/manuals/connext_dds_professional/users_manual/users_manual/PRESENTATION_QosPolicy.htm)

---

### D6: Registry-based lifecycle with auto-registration

Services auto-register with `DDSContext` on construction (via `BaseService.__init__()`). `run_until_shutdown()` starts all registry services. `shutdown()` closes in reverse registration order (LIFO).

**Construction ≠ start:** Service construction creates DDS entities and registers; `_run()` tasks are launched only when `run_until_shutdown()` is called.

**Rationale:** No registration ceremony; deterministic teardown order; all entities exist before any processing begins (no startup races).

**Cross-references:** [dds-context.md](dds-context.md), [base-service.md](base-service.md)

---

### D7: Async `close()` on all services — logical cleanup only

`BaseService.close()` is abstract async. `DDSContext.shutdown()` stops the dispatcher and cancels all `_run()` tasks first, then awaits each `close()` in reverse order. Service `close()` performs **logical cleanup only** — dispose instances, fail active sessions, publish final messages via synchronous `writer.write()`. Services must **not** close DDS entities (readers/writers); entity destruction is handled by `DDSContext.shutdown()` via `close_contained_entities()` after the dispatcher is stopped (D52).

**Rationale:** Cleanup may require async operations (cancelling pending sessions, awaiting final status writes). The dispatcher is stopped before `close()` runs, so `take_async()` cannot block. Synchronous `writer.write()` does not require the dispatcher, allowing final publishes (FAILED statuses, instance disposal) to succeed.

---

### D8: Signal handlers only set event — deferred cleanup

SIGINT/SIGTERM handlers only call `stop.set()`. Actual `shutdown()` happens in async context after `run_until_shutdown()` returns.

**Rationale:** Signal handlers must be fast; async cleanup can await properly; no race conditions between signal delivery and entity lifecycle.

---

### D9: Subclass-override model with 7 async hooks for CommandProvider

CommandProvider uses subclass-override with 7 hooks: `validate_command`, `on_commanded`, `on_executing`, `on_complete`, `on_failed`, `on_terminal`, `on_updated` (D39).

Base class owns ALL status publishing — subclass hooks never call `_publish_status()` directly.

**Rationale:** Matches C++ SDK's virtual-hook model (subclass, base-owns-publishing). Exception-based failure and `on_terminal` always-runs provide clean error paths. All hooks are coroutines for native async integration.

**Alternatives rejected:** Single callback; callback-based constructor model.

**Cross-references:** [command-services.md](command-services.md), D42

---

### D10: Exception-based failure with per-state reason validation

Failures triggered by raising `UmaaCommandException(reason, msg)` from any hook. `_publish_fail()` validates the reason against the current state using the ICD Figure 15 matrix.

| State | Valid Failure Reasons |
|---|---|
| ISSUED | VALIDATION_FAILED, SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED |
| COMMANDED | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_REJECTED |
| EXECUTING | SERVICE_FAILED, INTERRUPTED, TIMEOUT, RESOURCE_FAILED, OBJECTIVE_FAILED |

Invalid reason/state combos log a warning and fall back to `SERVICE_FAILED`.

**Cross-references:** [command-services.md](command-services.md), C++ SDK `CommandStateMachine::fail()`

---

### D11: Ack and ISSUED status — both required, no strict ordering

ICD §4.1.4 requires the provider to publish ISSUED status; §4.1.4.1 requires the provider to publish ack. Both must happen, but the ICD does not mandate a relative ordering between them — DDS is asynchronous and delivery order to the consumer is not guaranteed regardless of publish order. The read loop acks every valid command sample immediately upon receipt; the session publishes ISSUED when it starts.

**Rationale:** ICD §4.1.4 and §4.1.4.1 describe ISSUED and ack in separate sections as requirements, not as an ordered sequence. The C++ SDK happens to publish ISSUED first (`handleIssued()` → `sendStatus()` → `sendAck()`), but this is an implementation choice, not an ICD mandate.

---

### D12: Active command rejection vs. update — source + sessionID disambiguation

When a command arrives while a session is active:

- **Same source + same sessionID + newer timestamp → Update (D39).** State resets to ISSUED with reason UPDATED.
- **Different sessionID → Rejection.** Provider traverses ISSUED → COMMANDED → FAILED(RESOURCE_REJECTED). All three transitions publish; no user hooks fire. ICD Figure 15 only permits `RESOURCE_REJECTED` from COMMANDED → FAILED, so intermediate states cannot be skipped.

**Cross-references:** [command-services.md](command-services.md), D39

---

### D13: Instance state detection — no LivelinessMonitor

Inline instance state detection in `_run()` data loops (via `sample.info.state.instance_state`) instead of a separate listener thread.

- `NOT_ALIVE_DISPOSED` → consumer canceled → cancel session
- `NOT_ALIVE_NO_WRITERS` → writer lost (crash) → fail session

**Rationale:** Single asyncio thread (no middleware thread bridges); per-instance granularity; matches both C++ SDKs.

---

### D14: Explicit instance disposal protocol

After terminal state or cancel, both provider and consumer dispose their instances via `lookup_instance()` → nil check → `dispose_instance()` (ICD §5.1.5 / §5.1.6). ReportProvider also disposes on `close()` (ICD §5.2.1.3).

---

### D15: Single-session consumer with dynamic CFT

CommandConsumer supports ONE active command at a time. CFT starts as `"1 = 0"` (block all), updates to `sessionID = &hex(...)` when session starts, resets on completion.

**Rationale:** Simplified state tracking; matches provider-side ICD §4.1.4.4 constraint (one active command); no session multiplexing race conditions.

---

### D16: CFT with `&hex()` for NumericGUID filtering

ContentFilteredTopic expressions for GUID fields use RTI's `&hex()` builtin with space-separated hex bytes. Used for: provider-side destination filtering, consumer session filtering, specialization FK filtering.

**Example:** `destination.parentID = &hex(55 0e 84 00 ...)`

**Rationale:** RTI API requirement for `octet[16]` comparisons; more efficient than application-level post-filtering (fewer deserializations). Verified working with real DDS in spike test `tests/spike_c64_hex_filter.py` (C64).

**Note:** `NumericGUID` is an `@idl.alias` wrapping `Sequence[idl.uint8]`. In Python, IDL type fields expect `NumericGUID(value=dds.Uint8Seq(raw_bytes))`, not raw `bytes` directly. `GUIDUtil.to_hex()` accepts raw `bytes`; extract from a `NumericGUID` field via `bytes(field.value)`.

**Cross-references:** [utilities.md](utilities.md), `guid_util.py`

---

### D17: Topic lookup via `dds.Topic.find()` — no manual cache

`DDSContext.get_topic()` uses `dds.Topic.find(participant, topic_name)` to look up an existing Topic before creating one. DDS natively tracks registered Topics, so no application-level cache is needed.

**Rationale:** `dds.Topic.find()` is the idiomatic RTI API for topic reuse. Multiple DataReaders/DataWriters can be created on the same Topic (per D29) — the lookup ensures they share the same `Topic` object without SDK-side bookkeeping.

**Status:** Planned for PR 4.

---

### D18: CFT tuple return for dynamic filter updates

`create_filtered_reader()` returns `(DataReader, ContentFilteredTopic)` so callers can update the filter via `cft.set_filter()` without recreating the reader.

**Used in:** CommandConsumer dynamic session filters; SpecializationReaderSet lazy topic filtering.

---

### D19: Tiered service architecture (Tiers 0–4)

Services organized by DDS entity pattern:

| Tier | Pattern | Count | Examples |
|---|---|---|---|
| 0 | Command (3 writers + 1 reader) | ~120 (60 families × 2) | EngineControlProvider/Consumer |
| 1 | Report (1 writer or 1 reader) | ~338 (169 × 2) | GPSReportProvider/Consumer |
| 2 | Large Set (root + element writers) | ~8 | ContactReportProvider/Consumer |
| 3 | Large List (root + linked-list writers) | ~8 | ... |
| 4 | Composite (handwritten one-offs) | ~12 | MissionPlanReportConsumer |

**Rationale:** Pattern-based generation for ~240 of ~250 UMAA services; explicit handwritten classes for the remaining 12 complex types.

**Cross-references:** [service-library.md](service-library.md), [composite-services.md](composite-services.md)

---

### D20: Pre-wired concrete classes, not factories

One named concrete class per UMAA service (e.g., `EngineControlProvider`). Inherits base template with hardcoded types/topics. Users subclass to add hooks.

**Rationale:** IDE autocomplete; users subclass directly without indirection; type-safe; transparent (constructor only calls `super().__init__()`).

**Alternatives rejected:** Factory functions; dataclass definitions; generic `create_service()` registry.

**Cross-references:** [service-library.md](service-library.md)

---

### D21: Handwritten composites for complex nested types

~12 composite types get handwritten concrete classes. Every reader/writer is explicitly listed. Specialization dispatch is type-specific logic.

**Rationale:** Only 12 types need this; transparent (debug-friendly); specialization dispatch cannot be expressed as generic tree slots.

**Alternatives rejected:** Recursive `CompositeReportConsumer(children=[...])` template.

**Cross-references:** [composite-services.md](composite-services.md)

---

### D22: User-selectable specialization types via `SpecializationReaderSet`

Composite services accept `supported_specializations: list[SpecializationType]` with sensible defaults. `SpecializationReaderSet` creates dedicated DataReaders only for selected types.

```python
USV_OBJECTIVES = [
    SpecializationType(RouteObjectiveType, "RouteObjectiveTypeTopic"),
    SpecializationType(StationkeepObjectiveType, "StationkeepObjectiveTypeTopic"),
]
provider = MissionPlanObjectiveAddCommandProvider(
    ctx, source_id=src, supported_specializations=USV_OBJECTIVES)
```

**Rationale:** Bounded resource usage; component definitions show different deployments handle different subsets.

**Cross-references:** [specialization-reader-set.md](specialization-reader-set.md)

---

### D23: Elements-first protocol for multi-topic assembly

Writers publish elements BEFORE root. Readers guarantee elements are in cache via PRESENTATION QoS (D5). Assembly is race-free — no timeout needed.

**Rationale:** Reliable by design (RELIABLE QoS + PRESENTATION guarantees order); deterministic; no retry logic. This matches the C++ reference SDK, where `LargeSetWriter::insert()` and `LargeListWriter::append()` both call `elementSender_->send(e)` before `updateMetadata()` — ensuring elements reach subscribers before the root signal.

**Alternatives rejected:** Root-first protocol; async assembly with timeouts.

**Cross-references:** [multi-topic-utilities.md](multi-topic-utilities.md)

---

### D24: QueryCondition for FK-based element scoping

Element readers use reusable `QueryCondition` with `setID = &hex(%0)` or `listID = &hex(%0)` to filter by FK. Parameters updated per read. Efficient at subscriber level.

**Alternatives rejected (from C++ SDKs):** Application-level post-filtering.

**Cross-references:** [multi-topic-utilities.md](multi-topic-utilities.md), [large-set-services.md](large-set-services.md)

---

### D25: LargeSetWriter / LargeListWriter with write-through semantics

All CRUD operations write or dispose DDS samples immediately (no buffering/flush). Metadata auto-maintained after every mutation.

- **LargeSetWriter:** insert, insert_many, update, remove, clear, get, find
- **LargeListWriter:** prepend, append, insert_at, update, pop_front, pop_back, remove, clear

**LargeListWriter** also maintains `nextElementID` linked-list pointers automatically.

**Cross-references:** [large-set-services.md](large-set-services.md), [large-list-services.md](large-list-services.md)

---

### D26: 4-layer error model

| Layer | `rtiumaapy` | C++ Reference SDK |
|---|---|---|
| Application callbacks | Raise exceptions from hooks | Return `CommandStateResult` enum (`OK`, `ADVANCE`, `ERROR`) |
| Service templates | Catch exceptions → convert to error status (FAILED + reason) | `handleFailure()` calls `cmdSession->fail(reason)` → `sendStatus()` → `sendExecutionStatus()` |
| Utility functions | Return empty list (soft) or raise `AssemblyError` (configurable hard) | Return `SendStatus` / `ReadStatus` enums (`SUCCESS`, `ERROR`, `NO_DATA`, `DISPOSED`, `INVALID_DATA`) |
| DDS I/O | Status codes checked internally | `SenderBase::send()` / `ReaderBase::readUpToN()` return status enums; callers check and log |

**Key difference:** The C++ SDK uses return codes at every layer (`CommandStateResult`, `SendStatus`, `ReadStatus`). `rtiumaapy` uses Python exceptions for the top two layers (more idiomatic — exceptions propagate naturally through async call stacks) and return values for utilities. The conversion point is the same in both: the service template layer catches the error and publishes FAILED status with the appropriate ICD reason code.

**Cross-references:** [error-handling.md](error-handling.md)

---

### D27: Sample validity check before processing

Every reader loop checks `sample.info.valid` before processing data. Invalid samples (disposed/no-writers) are checked for instance state to detect cancel or crash.

---

### D28: Request/Reply is Pub/Sub — no additional template needed

ICD review confirms UMAA Request/Reply is standard Pub/Sub — the provider publishes a report, the consumer subscribes. No RPC or Request-Reply API needed.

---

### D29: Services own all their DDS entities — no sharing

Each provider/consumer creates and owns its own DataReaders and DataWriters. No entity sharing between services. `DDSContext.create_reader()` always creates a new DataReader; there is no `find_by_topic()` reuse.

**Rationale:** Isolated lifecycle; independent QoS tuning; no resource contention; simpler cleanup. Even the worst case (Mission Executor with all specialization types) produces ~20 readers — trivial for DDS.

**Alternatives rejected:** Shared reader pool with callback multiplexing (`ManagedReader`).

---

### D30: Topic names from generated constants

IDL-generated type modules provide `*Topic` string constants. All `DDSContext` factory methods require `topic_name: str` as a required parameter. No runtime derivation from type names.

**Rationale:** Single source of truth for topic naming; no string typos at runtime.

---

### D31: No XML Application Creation for entity lifecycle

The SDK uses XML for QoS assignment only (D4). Topics, readers, and writers are created programmatically in Python.

**Rationale:** XML Application Creation was evaluated for this use case — a fixed UMAA datamodel seems like the ideal scenario for a static entity graph. However, generalization/specialization types (e.g., objective types, conditional types) are flexible per component: different components support different subsets (D22). Defining those entities statically in XML would either over-provision (create readers for all 13 objective types when only 3 are needed) or require per-deployment XML files, adding XML coupling that doesn't provide value. The UMAA system model already captures component definitions, and the DDS entities per service class are fixed — so the SDK constrains entity usage at the service template level (each template creates exactly the readers/writers it needs) but provides flexibility at the service composition level (which specialization types to support, how many services to instantiate). By defining explicit service constructors the SDK exposes visibility to DDS entities created per service and provides the best balance of composability, flexibility, and explicit definition.

**Raised by:** @alexcamposruiz PR #22 review.

---

### D32: No RTI Request-Reply or RPC APIs for command services

The command architecture builds a custom multi-topic protocol on raw DDS entities (command topic, ack topic, status topic, optional exec-status topic) rather than using RTI Connext Request-Reply or RPC APIs.

**Rationale:** The UMAA ICD mandates specific topics, QoS profiles, and a per-state state machine (ISSUED → COMMANDED → EXECUTING → terminal) that don't map to Request-Reply semantics. The ICD's multi-topic protocol with explicit ack/status separation, instance disposal protocol, and per-state failure reasons requires direct control over individual DataWriters and DataReaders.

**Raised by:** @alexcamposruiz PR #22 review.

---

### D33: Package name `rtiumaapy`

SDK packaged as `rtiumaapy`. RTI-branded; distinct from any prior work.

---

### D34: Create DDS entities at construction, process at `run_until_shutdown()`

Service constructors create all DataReaders and DataWriters immediately; `_run()` coroutines (which contain `take_async()` loops) are not started until `run_until_shutdown()`. This means readers are subscribed on the DDS bus before Python-level processing begins.

**Rationale:** The gap between entity creation and `_run()` allows DDS discovery to complete — by the time processing starts, all remote endpoints are matched and no startup races exist. All entities appear atomically to remote participants (e.g., a CommandConsumer sees both the ack writer and status writer simultaneously). Construction failures surface before the event loop, simplifying error handling.

**Queue accumulation risk:** During the gap, samples may accumulate in reader caches. In practice this is low risk for UMAA:

| QoS pattern | Behavior during gap | Impact |
|---|---|---|
| KEEP_LAST 1 (most UMAA topics) | Only latest sample survives | Correct — latest state is desired |
| KEEP_ALL / KEEP_LAST N (commands, elements) | Samples queue in order | Correct — `take_async()` drains FIFO on first iteration; no loss |
| VOLATILE durability | Only post-match samples arrive | Inherent to VOLATILE regardless of `_run()` timing |
| TRANSIENT_LOCAL durability | Historical samples delivered from writer cache | Processed in order on first `take_async()` iteration |

The gap is typically milliseconds (remaining service construction). Commands have sequence IDs and the state machine (D11) handles ordering. Large-set/large-list services expect element batches by design (D23). The alternative — creating entities inside `_run()` — would introduce discovery races where processing starts before remote endpoints are matched, causing missed samples or failed writes.

**Resolves:** C1.

---

### D35: Use sync `write()` with `ASYNCHRONOUS_PUBLISH_MODE` QoS for all DataWriters

All service DataWriters use sync `writer.write(sample)`. Non-blocking behaviour is guaranteed by the `ASYNCHRONOUS_PUBLISH_MODE_QOS` already configured on every UMAA QoS profile (TelemetryQoS, ConfigQoS, CommandQoS, ElementQoS).

**Rationale:** With `ASYNCHRONOUS_PUBLISH_MODE`, `write()` serializes the sample into the send queue and returns immediately — the actual network send is offloaded to a dedicated RTI middleware thread. This is critical for UMAA, where many message types are large (complex nested structs, variable-length sequences). The asynchronous publish thread handles serialization coalescing, fragmentation, and network I/O without blocking the application's asyncio event loop.

Per the [RTI PUBLISH_MODE QoS documentation](https://community.rti.com/static/documentation/connext-dds/7.6.0/doc/manuals/connext_dds_professional/users_manual/users_manual/PUBLISH_MODE_QosPolicy__DDS_Extension_.htm#sending_2410472787_1931822), `ASYNCHRONOUS_PUBLISH_MODE` also enables flow control and publication prioritization options via `FlowController` QoS policies. While not currently used, this provides a path to per-topic bandwidth throttling or priority-based scheduling in the future if needed — all configurable via QoS XML without code changes (D4).

The application does not use `write_async()` because it is only available on `DynamicData.DataWriter`, not on IDL-generated typed DataWriters in the installed RTI Connext Python version (C63). The QoS-level `ASYNCHRONOUS_PUBLISH_MODE` achieves the same non-blocking goal at the middleware layer.

Write timeouts are not caught at the SDK level. If the send queue fills (KEEP_ALL, `max_samples=500`) and `max_blocking_time` (1 second) expires, the resulting exception propagates into the session error path, which transitions the session to FAILED (D40). This is the correct response — a full send queue means the reader is unreachable, and silently dropping the write would leave the state machine inconsistent. The `max_blocking_time` value is the deployer's tuning knob via QoS XML (D4).

**Resolves:** C2, C63.

---

### D36: Subclass-override extension model for all consumers

ReportConsumer (and all future consumer base classes) use a single extension model: subclass and override `async def on_report(self, sample)`. The constructor `on_report` callback parameter is removed.

**Rationale:** CommandProvider already uses subclass-override hooks (D9). A single extension model across the SDK eliminates ambiguity (no precedence rules for callback-vs-override) and provides a natural place for stateful processing, multi-sample correlation, and error handling. The boilerplate for a trivial consumer is minimal:

```python
class GpsConsumer(ReportConsumer):
    async def on_report(self, sample):
        print(sample)
```

The `start()` method is retained — it provides explicit per-service task control for tests and selective startup scenarios where `run_until_shutdown()` is not used.

**Resolves:** C3.

---

### D37: Explicit `start()` method for per-service task control

Services expose a `start()` method that creates an `asyncio.Task` for the service's `_run()` coroutine independently of `DDSContext.run_until_shutdown()`.

**Rationale:** `run_until_shutdown()` starts all registered services and blocks until a signal arrives — this is the normal application lifecycle (D34). However, tests and selective startup scenarios need to start a single service's processing without entering the full signal-driven loop. `start()` provides that: it calls `asyncio.ensure_future(self._run())`, allowing the caller to control exactly when and which services begin processing. This is used extensively in integration tests (5 call sites across `test_report_consumer.py` and `test_report_lifecycle.py`).

---

### D38: Optional `DDSContext.run_blocking()` helper for CPU-bound / synchronous work

`DDSContext` provides a `run_blocking(func, *args)` convenience method that wraps `asyncio.to_thread()`. Service hook authors may use it to offload blocking work from the event loop.

**Rationale:** Service hooks (D9) run on the asyncio event loop. If a hook implementation performs CPU-intensive work (path planning, sensor processing) or synchronous I/O (database, file), it blocks the loop and stalls all other services. The standard pattern is `await asyncio.to_thread(fn, *args)` — a one-liner that Python async developers should already know.

The wrapper provides a central point for future configuration (custom executor, bounded thread pool, SDK-level logging of offloaded work) without adding mandatory complexity. Service authors can use either `await self.ctx.run_blocking(fn, *args)` or `await asyncio.to_thread(fn, *args)` — both are acceptable.

**Thread safety note:** Offloaded functions run in a separate thread. They must not access DDS entities or shared service state without synchronization. Hook docstrings should document this.

**Resolves:** C4.

---

### D39: Command update flow — same source + sessionID with newer timestamp

When a command is received with the same source and sessionID as the active session but a newer timestamp, the provider treats it as a **command update** (ICD §4.1.4.2):

1. Status transitions back to **ISSUED** with reason **UPDATED**
2. Publish the ISSUED(UPDATED) status
3. Reset internal command state (cancel any in-progress hook work)
4. Re-enter the normal state machine from ISSUED: `on_issued()` → COMMANDED → `on_executing()` → ...

If the command is already in a **terminal state** (COMPLETED, FAILED, CANCELED), the update is rejected — publish **FAILED** status.

Commands with an **older timestamp** than the current command are silently ignored.

**Use case:** `GlobalVectorCommand` updates — an autopilot continuously receives updated heading/speed vectors while executing. Each update resets the state machine and applies the new command parameters without requiring a cancel/re-issue cycle.

**C++ SDK alignment:** The C++ SDK implements this via `handleUpdate()` in `CommandProviderBase` which calls `session.update()` → reset transitions → trigger UPDATED → `onUpdated(session, previousCmd, updatedCmd)` → re-run `handleIssued()`. The Python SDK adds an `on_updated(previous_command, updated_command)` async hook consistent with D9.

**State machine flow:**
```
Active session (ISSUED/COMMANDED/EXECUTING)
  ↓ same source + sessionID, newer timestamp
ISSUED (reason=UPDATED)  ←── publish status
  ↓ on_updated(previous, updated)
  ↓ validate_command()
COMMANDED
  ↓ on_commanded()
EXECUTING
  ↓ on_executing()
  ↓ ...
COMPLETED
```

**Resolves:** C5.

---
### D40: Two separate command exception types — `CommandHookError` and `CommandFailedError`

The single `UmaaCommandException` is replaced with two distinct exception classes:

- **`CommandHookError(reason_enum, message)`** — raised by provider hook authors to signal a failure. Carries an ICD `CommandStatusReasonEnum` value and a human-readable message. The framework catches it, validates the reason is legal for the current state (D12), and publishes FAILED status.

- **`CommandFailedError(session_id, status, reason_enum, message)`** — raised on the consumer side when a FAILED status is received from the provider. Carries the full context from the DDS `CommandStatusType` sample (session ID, terminal status, ICD reason, log message).

**Rationale:** These are semantically different operations: "I'm a hook author signaling a failure" vs. "I'm a consumer receiving a failure notification." The C++ SDK avoids this entirely by using return enums (`CommandStateResult::ERROR`) on the provider side and raw DDS `CommandStatusType` reads on the consumer side — no exception classes at all. Python uses exceptions for control flow, so two types cleanly map the two roles without constructor overloading or ambiguity.

| Role | Python exception | C++ SDK equivalent |
|---|---|---|
| Provider hook signals failure | `raise CommandHookError(VALIDATION_FAILED, "bad param")` | `return CommandStateResult::ERROR` |
| Consumer receives failure | `raise CommandFailedError(sid, FAILED, OBJECTIVE_FAILED, msg)` | Read `CommandStatusType` from status reader |

**Resolves:** C6.

---

### D41: Consumer single-reader-dispatches pattern

The consumer's `_run()` method is the sole owner of all DDS readers. It receives every sample and dispatches to the appropriate session via direct method calls and `asyncio.Event` signaling — sessions never read from DDS directly.

**Single-session (current, D3):** `_run()` loops over incoming samples, calls session methods (e.g., `_on_status_received()`), and sets `asyncio.Event` to unblock the session's `execute()` coroutine waiting on that event.

**Multi-session (future):** `_run()` routes by sessionID using a `dict[GUID, session]` lookup. For disposed instances, `reader.key_value(sample.info.instance_handle)` recovers the key to identify which session should be notified. Each session still waits on its own `asyncio.Event`.

**Rationale:** A single reader loop avoids the complexity and undefined behavior of multiple coroutines calling `take_async()` on the same reader. The C++ SDK uses a similar pattern — the consumer base class owns the status reader and invokes session-specific callbacks. Python's `asyncio.Event` provides the same session-level notification mechanism without threads.

**Resolves:** C7.

---

### D42: Validation happens AFTER ISSUED + Ack — not before

`validate_command()` is called after the provider publishes ISSUED status and sends the ack, not before entering the state machine. If validation fails, the session transitions directly from ISSUED → FAILED(VALIDATION_FAILED). The undefined `_reject()` method is eliminated — validation failure is a `CommandHookError` caught by the existing exception handler.

**Sequence (validation failure):**

| Step | State | Message |
|------|-------|---------|
| 1 | ISSUED | Publish ISSUED status |
| 2 | ISSUED | Send Ack |
| 3 | ISSUED | `validate_command()` returns `(False, reason)` |
| 4 | ISSUED → FAILED | `CommandHookError(VALIDATION_FAILED, reason)` raised internally |
| 5 | FAILED | `on_failed()` hook fires |
| 6 | FAILED | Publish FAILED(VALIDATION_FAILED) status |

**Comparison with active-command rejection (D3/D12):**

| Scenario | Sequence | Reason | Hooks |
|---|---|---|---|
| Validation failure | ISSUED → Ack → FAILED | VALIDATION_FAILED | `validate_command()` returned false |
| Active-command rejection | ISSUED → Ack → COMMANDED → FAILED | RESOURCE_REJECTED | No hooks fire |

**C++ SDK alignment:** The C++ SDK calls `isCommandValid()` inside `handleIssued()` — after `sendStatus()` (ISSUED) and `sendAck()` have already executed. If validation fails, it calls `handleFailure(VALIDATION_FAILED)` which transitions ISSUED → FAILED and publishes the FAILED status. The Python SDK mirrors this exactly.

**Rationale:** ICD §4.1.4 requires the provider to acknowledge receipt of every command. Publishing ISSUED + Ack before validation ensures the consumer always sees a response. `VALIDATION_FAILED` is defined in D10 as valid only from ISSUED state — confirming that validation is an ISSUED-state operation, not a pre-state-machine gate.

**Resolves:** C9.

---

### D43: Two-layer extension model — dispatch and hooks

The SDK uses two distinct extension layers, each with a different pattern, scope, and author:

#### Layer 1 — DDS Dispatch (`_run()` loops) — Framework-internal

`_run()` is the sole owner of all DDS readers (D41). It processes raw DDS sample metadata — `valid`, `instance_state`, `instance_handle` — and routes to sessions. **Users never touch this layer.**

**Provider `_run()` — command reader dispatch:**

| DDS Event | `sample.info` | Action |
|---|---|---|
| New command (no active session) | `valid=True` | Create `CommandProviderSession`, `asyncio.create_task(session.run())` |
| Same sessionID, newer timestamp | `valid=True` | `session.update(sample.data)` (D39) |
| Same sessionID, older timestamp | `valid=True` | Silently ignore |
| Different sessionID, active exists | `valid=True` | `_reject_active(sample.data)` (D3) |
| Consumer disposed command | `valid=False`, `NOT_ALIVE_DISPOSED` | `session.cancel()` → `task.cancel()` → `CancelledError` → CANCELED → finally cleanup (D46) |
| Consumer writer lost (crash) | `valid=False`, `NOT_ALIVE_NO_WRITERS` | `session.cancel()` → same path (D46) |

**Consumer `_run()` — multiplexed reader dispatch (D44/D45):**

`_run()` uses `asyncio.gather()` over three reader loops (status, ack, exec_status). Each loop dispatches to consumer hooks. No `CommandConsumerSession` object — session state is `_session_id` + `_session_command` on the consumer.

| DDS Event | `sample.info` | Action |
|---|---|---|
| Status update (ALIVE) | `valid=True` | `await self.on_status(session_id, data)` → if terminal: dispose, reset, `await self.on_terminal(session_id, data)` |
| Ack received (ALIVE) | `valid=True` | Informational (RELIABLE QoS guarantees delivery) |
| Exec status (ALIVE) | `valid=True` | `await self.on_exec_status(session_id, data)` |
| Provider disposed status | `valid=False`, `NOT_ALIVE_DISPOSED` | Normal cleanup (provider confirmed disposal) |
| Provider writer lost (crash) | `valid=False`, `NOT_ALIVE_NO_WRITERS` | Reset session → `await self.on_terminal(session_id, None)` |

**C++ SDK equivalent:** `CommandProviderBase::handleIncomingCommand()` (routes CASE 1-3: cancel, update, new/reject) + `cycleSession()` (polls each active session through state machine). The C++ SDK uses polling (`cycle()`) while Python uses async iteration (`take_async()`).

#### Layer 2 — Hooks (subclass overrides) — Service author

**Hooks define what the service DOES.** The service author subclasses and overrides hooks to inject domain-specific behavior. Hooks are class-level — one implementation per service class.

**Provider hooks (7 total, D9/D39):**

```python
class CommandProvider(BaseService):
    # Validation
    async def validate_command(self, command) -> tuple[bool, str]

    # Update notification (D39)
    async def on_updated(self, session, previous_command, updated_command) -> None

    # State-transition hooks
    async def on_commanded(self, session) -> None
    async def on_executing(self, session) -> None   # primary — must implement
    async def on_complete(self, session) -> None
    async def on_failed(self, session, exception) -> None
    async def on_terminal(self, session) -> None     # always fires (finally)
```

**Consumer hooks (4 total, D44/D45):**

```python
class CommandConsumer(BaseService):
    async def on_status(self, session_id, status) -> None       # every status
    async def on_ack(self, session_id, ack) -> None             # command ack (echoed command)
    async def on_exec_status(self, session_id, exec_status) -> None  # execution progress
    async def on_terminal(self, session_id, status) -> None     # COMPLETED/FAILED/CANCELED
```

**Report consumer hook (D36):**

```python
class ReportConsumer(BaseService):
    async def on_report(self, sample) -> None        # subclass override
```

All services use the same pattern: subclass and override hooks. No per-call callbacks.

**C++ SDK equivalent:** `isCommandValid()`, `onIssued()`, `onCommanded()`, `onExecuting()`, `isCommandCompleted()`, `isCommandFailed()`, `onCompleted()`, `onCanceled()`, `onFailed()`, `onUpdated()` — all virtual methods on `CommandProviderBase`. The C++ SDK has more hooks because it uses a polling model (`isCommandCompleted` / `isCommandFailed` are called every cycle; Python's coroutine model simply awaits `on_executing()` return).

| C++ SDK Hook | Python Hook | Notes |
|---|---|---|
| `isCommandValid(cmd)` → `bool` | `validate_command(cmd)` → `(bool, str)` | Python adds reason string |
| `onIssued(session)` → `CommandStateResult` | *(no equivalent — ISSUED is automatic)* | Python publishes ISSUED unconditionally (D11) |
| `onCommanded(session)` → `CommandStateResult` | `on_commanded(session)` | Raise `CommandHookError` instead of returning ERROR |
| `onExecuting(session)` → `CommandStateResult` | `on_executing(session)` | Coroutine runs until done; no polling |
| `isCommandCompleted(session)` → `bool` | *(no equivalent)* | Python: `on_executing()` return = completed |
| `isCommandFailed(session)` → `ReasonEnum` | *(no equivalent)* | Python: `on_executing()` raises = failed |
| `onCompleted(session)` → `bool` | `on_complete(session)` | Post-completion notification |
| `onCanceled(session)` → `bool` | `CancelledError` handler publishes CANCELED (D46) | `on_terminal()` fires in finally |
| `onFailed(session)` → `bool` | `on_failed(session, exception)` | Python passes the exception |
| *(no equivalent)* | `on_terminal(session)` | Python adds always-run cleanup |
| `onUpdated(session, prev, updated)` → `bool` | `on_updated(session, prev, updated)` | Same semantics |
| `onInterrupted(session)` → `bool` | *(not applicable — single session, D3)* | Multi-session only |
| `onCycle()` → `bool` | *(no equivalent)* | Polling model only |

**C++ SDK Consumer mapping:**

| C++ SDK Consumer | Python Consumer | Notes |
|---|---|---|
| `send(cmd)` | `send(cmd)` | Non-blocking, returns session_id (D45) |
| `read(ackPtr)` → `ReadStatus` | `_run()` dispatches ack to session | D41: session never reads directly |
| `read(statusPtr)` → `ReadStatus` | `_run()` dispatches status → `on_status()` + `on_terminal()` hooks | D45: hooks replace caller polling |
| `read(exeStatusPtr)` → `ReadStatus` | `_run()` dispatches exec_status → `on_exec_status()` hook | D45: hook replaces caller polling |
| `isValidAck(ack, header)` | CFT on `sessionID` (D15) | DDS-level filtering replaces app-level |
| `isValidStatus(status, header)` | CFT on `sessionID` (D15) | DDS-level filtering replaces app-level |
| `AsyncCommandSession::waitForStatus(s)` | `on_status()` + `on_terminal()` hooks | Terminal wait replaced by `on_terminal()` hook |
| `AsyncCommandSession::waitForAck()` | Ack received by `_read_ack_loop()` (informational) | No blocking wait needed |
| `AsyncCommandSession::requestCancel()` | `dispose_instance()` on command writer | DDS dispose = cancel (ICD §5.1.4.5) |
| `openCommandSession()` / `closeCommandSession()` | Managed by `send()` / `cancel()` | Automatic lifecycle |

#### Summary

| Layer | Pattern | Scope | Author | Python | C++ SDK |
|---|---|---|---|---|---|
| **1. Dispatch** | `_run()` loops | Framework | SDK developer | `take_async()` + route | `handleIncomingCommand()` + `cycleSession()` |
| **2. Hooks** | Subclass override | Class-level | Service author | 10 hooks (7 provider + 3 consumer) | 12+ virtual methods |

**Resolves:** C21 (terminology clarified). **Updated by:** D44 (observers eliminated, two-layer model).

---

### D44: CommandConsumer is a hook-based registered service — no per-call observers

`CommandConsumer` follows the same subclass-override model as `CommandProvider`. It is a registered service (one per command family per component) with baked-in hooks, not optional per-call callbacks.

**Key changes from the observer model:**

1. **`on_status()`, `on_ack()`, `on_exec_status()`, and `on_terminal()` are hooks** (Layer 2 subclass overrides), not optional callbacks. They are always called by `_run()` dispatch — no opt-in needed.
2. **One `CommandConsumer` subclass per command family per component.** Registration with `DDSContext` (D6) enforces lifecycle.
3. **Layer 3 (observers) is eliminated.** The SDK now uses only two extension layers: dispatch and hooks.

**Updated by:** D45 (send/update/cancel model replaces execute(), adds on_terminal).

**Supersedes:** D43 Layer 3 (observers) — eliminated. D43 is now a two-layer model (dispatch + hooks).
**Resolves:** C25 (consumer `_run()` dispatch fully specified), C26 (execute/session interaction simplified).

---

### D45: Consumer `send()` + hooks model — non-blocking, update-capable

The consumer API is `send()` (non-blocking) + hooks, not `execute()` (blocking). This matches the C++ SDK's `CommandConsumerBase::send()` model while replacing C++ polling with Python hooks.

**API:**

```python
class CommandConsumer(BaseService):
    # --- Send / update / cancel ---
    async def send(self, command, session_id: bytes = None) -> bytes
    async def cancel(self) -> None

    # --- Hooks (3 total) ---
    async def on_status(self, session_id, status) -> None
    async def on_exec_status(self, session_id, exec_status) -> None
    async def on_terminal(self, session_id, status) -> None
```

**`send()` behavior:**
- `send(cmd)` — No session_id: generates a unique sessionID, stamps the command, activates CFT filters, writes. Returns session_id as a handle.
- `send(cmd, session_id=sid)` — With session_id: stamps newer timestamp on same sessionID, writes. Provider receives as D39 update. Returns same session_id.
- `cancel()` — Disposes command instance (ICD §5.1.4.5), resets filters.

**Hook flow:**
1. `_run()` dispatches every status sample → `on_status(session_id, status)`
2. If terminal (COMPLETED/FAILED/CANCELED): base class disposes command instance (ICD §5.1.5), resets CFT filters, clears session → `on_terminal(session_id, status)`
3. Exec status → `on_exec_status(session_id, exec_status)`
4. Provider crash (NOT_ALIVE_NO_WRITERS) → `on_terminal(session_id, None)`

**No `CommandConsumerSession` class** — session state is just `_session_id` + `_session_command` on the consumer. The consumer IS the session (one at a time).

**C++ SDK comparison:**

| C++ SDK | Python (D45) |
|---|---|
| `send(cmd)` — auto-opens session if needed, sends update if session open | `send(cmd)` / `send(cmd, session_id)` — explicit new vs. update |
| Caller polls `read(&status)` in loop | `_run()` dispatches → `on_status()` hook |
| Caller checks `isStateFinal()` | `_run()` detects terminal → `on_terminal()` hook |
| `closeCommandSession()` → dispose | `cancel()` → dispose |
| `sessionSetUp()` / `sessionTearDown()` virtual hooks | Not needed — `send()` handles setup; `on_terminal()` handles teardown |

**Rationale:**
- **Non-blocking send:** Caller fires and forgets. Hooks handle everything. No `await` blocking the caller until terminal.
- **Update support:** Returning session_id as a handle lets the caller send updates naturally — solves the gap where `execute()` blocked until terminal.
- **Simpler internals:** No `CommandConsumerSession` class, no `asyncio.Event` machinery. Session state is two fields on the consumer.
- **C++ alignment:** Same `send()` mental model. C++ caller owns the read loop; Python's `_run()` replaces it with hooks.

**Supersedes:** D44 consumer hooks (expanded from 2 to 4 with `on_terminal()` and `on_ack()`), `execute()` API, `CommandConsumerSession` class.
**Resolves:** C27 (update during execution — now trivial via `send(cmd, session_id)`).

---

### D46: Provider cancel/shutdown via async `cancel()`/`fail()` — state set externally, `task.cancel()` as wakeup

**Supersedes original D46** (three-intent CancelledError model). All session interruption now works by setting the terminal state and publishing *before* cancelling the task. CancelledError is just a wakeup signal — the handler contains no logic.

**Two async methods on `CommandProviderSession`:**

```python
async def cancel(self):   # consumer disposed command → CANCELED
async def fail(self):      # provider shutdown → FAILED(SERVICE_FAILED)
```

Both follow the same pattern: guard → `_transition_to()` → `_publish_status()` → `task.cancel()`. No flags needed — the intent is expressed directly in `_current_state`. First caller wins (second sees terminal state in guard). Safe because no `await` between `_transition_to()` and `task.cancel()` — no interleaving on the event loop.

**`run()` CancelledError handler is trivial:**

```python
except asyncio.CancelledError:
    _logger.debug("Session %s: task cancelled in state %s",
                  self._session_id, self._current_state)
```

**Key change from original D46:** `_failed` flag eliminated. `cancel()` and `fail()` are async (publish before cancel). CancelledError carries no intent — the terminal state is already set and published.

**Resolves:** C22 (cancel mechanism defined), C23 (single cleanup owner), C24 (gather-based close), C50 (CancelledError escape — eliminated entirely).

---

### D47: Consumer auto-stamps all four header fields in `send()` — matches C++ SDK

Consumer constructor takes `source_id: IdentifierType` and `destination_id: IdentifierType`, mirroring the C++ `CommandHeader` struct which holds `sourceId`, `destinationId`, and `sessionId`.

`send()` auto-stamps all four header fields on every write:

```python
command.source = self._source_id          # consumer's identity
command.destination = self._destination_id # target provider's identity
command.sessionID = session_id             # generated (new) or echoed (update)
command.timeStamp = current_timestamp()    # always fresh
```

Caller never sets these fields — they populate the command payload and call `send()`.

**C++ SDK equivalent:** `CommandConsumerBase` takes `CommandHeader` in constructor. `send()` stamps `cmd->source().id(header_.sourceId.id())`, `cmd->destination().id(header_.destinationId.id())`, `cmd->sessionID(header_.sessionId.getGuid())`, `cmd->timeStamp(getTimestamp())`.

**Why `destination_id` in constructor, not `send()`:** A consumer always talks to one provider — `destination_id` is fixed for the consumer's lifetime. The provider's CFT filters incoming commands on `destination == provider.source_id`, so the field has a real routing purpose.

**Resolves:** C40 (consumer `send()` now stamps source and destination).

---

### D48: Command update via checkpoint after `on_executing()` — no CancelledError for updates

**Supersedes original D48** (CancelledError + while-loop re-entry). Updates are now data-only: `set_new_command()` stores the pending command. The `run()` loop checks `_new_command` at a natural checkpoint after `on_executing()` returns.

**External method:**

```python
def set_new_command(self, new_command):
    """Store a pending command update. Does NOT call task.cancel()."""
    self._new_command = new_command
```

**Internal method (called at checkpoint):**

```python
async def _apply_update(self):
    """Swap to the new command and re-enter from ISSUED."""
    previous = self._command
    self._command = self._new_command
    self._new_command = None
    self._transition_to(CommandStatusEnum.ISSUED,
                        reason=CommandStatusReasonEnum.UPDATED)
    await self._publish_status()
    await self._provider.on_updated(self, previous, self._command)
```

**Checkpoint in run():**

```python
elif self._current_state == CommandStatusEnum.EXECUTING:
    await self._provider.on_executing(self)
    if self._new_command is not None:
        await self._apply_update()
    else:
        self._transition_to(CommandStatusEnum.COMPLETED)
        ...
```

**C++ SDK alignment:** `on_executing()` runs to completion — updates are never delivered mid-hook. Matches C++ SDK where `onExecuting()` returns before `handleIncomingCommand()` processes the update on the next `cycle()`.

**Key change from original D48:** CancelledError is no longer used for updates. `_updated` and `_previous_command` flags eliminated. One fewer interruption intent. No risk of CancelledError escaping exception handlers (C50).

**Resolves:** C44 (update method defined, run re-entry implemented), C50 (CancelledError escape eliminated).

---

### D49: Transition table validates every state change — `_transition_to()` guards illegal transitions

`_transition_to(state, reason)` is a sync method that validates against `_VALID_TRANSITIONS` (a dict mapping `current_state → set of allowed next states`). If the transition is illegal, it forces `_current_state = FAILED` and raises `RuntimeError`. The state machine is always left in a valid state.

```python
_VALID_TRANSITIONS = {
    None:          {ISSUED, FAILED, CANCELED},
    ISSUED:        {COMMANDED, FAILED, CANCELED},
    COMMANDED:     {EXECUTING, FAILED, CANCELED},
    EXECUTING:     {COMPLETED, FAILED, CANCELED, ISSUED},
}
```

FAILED/CANCELED reachable from every non-terminal state. ISSUED reachable from EXECUTING (update re-entry). Terminal states absent as keys — any transition *from* a terminal is automatically illegal.

**`_publish_status()` is separated from `_transition_to()`** — state change is sync and validated; DDS publish is async and fire-and-forget (catches and logs write failures).

**C++ SDK equivalent:** `advanceState()` in `CommandStateMachine.cpp` validates transitions. Python's `_transition_to()` serves the same purpose.

---

### D50: Consumer `cancel()` calls `_end_session()` — immediate cleanup, no provider round-trip

`cancel()` delegates to `_end_session(None)` for all cleanup: dispose command instance, clear state, reset CFT filters, call `on_terminal()`. No separate dispose-only step followed by waiting for the provider's CANCELED status.

```python
async def cancel(self) -> None:
    if self._session_id is None:
        return
    await self._end_session(None)
```

**Idempotency:** If the provider's CANCELED status arrives later, `_read_status_loop()` checks `self._session_id is not None` — it's already `None`, so the sample is ignored. Same guard handles `close()` after `cancel()`.

**C++ SDK match:** `closeCommandSession()` is the sole cleanup path — called from user code (cancel), from `read(CmdStatus*)` on terminal status, and from the destructor. It disposes the command and sets `isSessionOpen_ = false`. No round-trip wait.

**What changes:**
- `cancel()` no longer does its own `lookup_instance()` + `dispose_instance()` — `_end_session()` handles dispose via `_dispose_command_instance()`
- `on_terminal(session_id, None)` fires immediately on cancel — caller knows it's a cancel since they called `cancel()`
- `on_status(CANCELED)` does NOT fire for caller-initiated cancels (filters are already reset)
- C51 (double-dispose) is eliminated — single dispose path through `_end_session()`

**Resolves:** C51 (consumer cancel + _end_session double-dispose).

---

### D51: Failure reason validation inside `_transition_to()` — single chokepoint

Per ICD Figure 15, not all `CommandFailedReasonEnum` values are valid from all states (e.g., `OBJECTIVE_FAILED` only from EXECUTING). The `_VALID_FAIL_REASONS` table maps each pre-FAILED state to its allowed reason set.

Previously, a separate `_publish_fail()` method performed this validation, but the session state machine rewrite (D49) routes all transitions through `_transition_to()` → `_publish_status()`. The `except Exception` handler called `_transition_to()` directly, bypassing `_publish_fail()`. Rather than requiring callers to remember which method to use, validation now lives inside `_transition_to()` itself:

```python
if state == CommandStatusEnum.FAILED and reason is not None:
    valid = self._VALID_FAIL_REASONS.get(self._current_state, set())
    if reason not in valid:
        reason = CommandFailedReasonEnum.SERVICE_FAILED
```

This means every path that transitions to FAILED — `run()`'s except handler, `cancel()`, `fail()`, `_reject_active()` — gets reason validation automatically. Invalid reasons are coerced to `SERVICE_FAILED` with a warning log.

**What changes:**
- `_transition_to()` gains a FAILED-specific reason validation block
- `_publish_fail()` removed — `_transition_to()` → `_publish_status()` is the only path
- Stale positional-arg `_publish_status(status, reason)` snippet removed from docs

**Resolves:** C59 (per-state reason validation disconnected from new run()).

---

## Concerns

All concerns have been moved to **[design-concerns.md](design-concerns.md)** for readability.

- **C1–C45:** Resolved (see design-concerns.md for full history)
- **C46–C54:** Open — raised during final review round 2

---

### D52: Dispatcher-first shutdown ordering — stop listening before final writes

`DDSContext.shutdown()` stops the `rti.asyncio` dispatcher **first** (step 1), before cancelling tasks or calling service `close()`. The full ordering is:

```
1. await rti_asyncio.close()          — stop listening (dispatcher thread)
2. Cancel _run() tasks                — CancelledError via asyncio event loop
3. Service close() (reverse order)    — final writes only (dispose, fail sessions)
4. participant.close_contained_entities()  — destroy all DDS entities safely
5. participant.close()
6. Clear singleton
```

**Rationale:** The `rti.asyncio` dispatcher runs on a background thread, holding waitset references to all reader entities. If DDS entities are destroyed while the dispatcher is active, the native code accesses freed memory (segfault). Stopping the dispatcher first eliminates this race.

This ordering is safe because `writer.write()` is synchronous (D35 — backed by `ASYNCHRONOUS_PUBLISH_MODE` at the middleware layer) and does not require the dispatcher. Only `take_async()` reader loops depend on it. Stopping the dispatcher first means:

- `task.cancel()` in step 2 is immediately effective — `take_async()` cannot block because the dispatcher is already stopped. `CancelledError` is delivered by the Python `asyncio` event loop, not the dispatcher.
- Service `close()` in step 3 can still publish final messages (FAILED statuses, instance disposals) via `writer.write()`.
- `close_contained_entities()` in step 4 safely destroys all DDS entities with no waitset references outstanding.

The semantic model is: **stop listening → wrap up → tear down.**

**Cross-references:** [dds-context.md](dds-context.md) (shutdown section), D7, D35.
