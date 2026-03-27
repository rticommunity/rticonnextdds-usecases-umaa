# PR 4 Readiness Assessment — CommandProvider + CommandConsumer

> Pre-implementation review of all architecture docs feeding into PR 4.
> Cross-referenced against both C++ reference SDKs (ARL/PSU and JHU/APL).
>
> **Date:** 2026-03-20 | **Updated:** 2026-03-23
> **Confidence Level:** ~~7.5~~ **9.5 / 10** — All issues and concerns resolved

---

## Issues Found

### 1. ~~State Machine Doc Divergence~~ (Medium Risk) — **Resolved → C8 (deleted)**

`command-state-machine.md` still shows the **old callback-based model** (`on_command: Callable`, `_on_command_execute`) while `command-services.md` shows the **correct subclass-override model** (6 async hooks). The arch_review flags this at §2.3: *"command-state-machine.md also has a stale callback-based constructor model"*. This was supposed to be reconciled but wasn't.

**Impact:** If you follow `command-state-machine.md` literally for `CommandProviderSession.run()`, you'll implement the wrong interface. The session's `run()` in `command-services.md` (which calls `self._provider.validate_command()`, `self._provider.on_commanded()`, etc.) is the authoritative version.

**Outcome:** `command-state-machine.md` deleted. `command-services.md` is sole authority. All cross-references updated. See C8.

### 2. ~~`UmaaCommandException` Signature Mismatch~~ (Medium Risk) — **Resolved → D40**

The implemented `UmaaCommandException` in `errors.py` takes `(session_id, reason, stage)`. But PR 4's `command-services.md` shows provider hooks raising it as `UmaaCommandException(reason, msg)` — a 2-arg call with `CommandFailedReasonEnum` as the first arg. The session catches it and uses `e.reason` as the ICD failure reason enum.

These are **two different use patterns** — the provider-side needs a DDS reason enum, the consumer-side needs a human-readable string + stage. Either:
- Overload/refactor `UmaaCommandException` to carry both a `CommandFailedReasonEnum` value and a message
- Or add a separate provider-side exception class

**Outcome:** Split into two classes — `CommandHookError(reason_enum, message)` for provider hooks and `CommandFailedError(session_id, status, reason_enum, message)` for consumer-side failures. See D40.

### 3. ~~`validate_command` Rejection Path vs D3 Rejection~~ (Low-Medium Risk) — **Resolved → D42**

Two different rejection flows are described but their boundaries are blurry:
- `validate_command()` returns `(False, reason_string)` → `_reject(reason)` — publishes ISSUED → Ack → FAILED(VALIDATION_FAILED)? Or just a rejection ack?
- `_reject_active()` (D3) — ISSUED → Ack → COMMANDED → FAILED(RESOURCE_REJECTED) — full state machine traversal

The `_reject()` method shown in `command-services.md` session `run()` is not defined anywhere. It should follow the same full state machine traversal as D3 but with `VALIDATION_FAILED` reason from ISSUED state. This needs clarification.

**Outcome:** Validation moved AFTER ISSUED + Ack (matching C++ SDK `handleIssued()`). Failure raises `CommandHookError(VALIDATION_FAILED, reason)` caught by existing exception handler — no `_reject()` needed. Sequence: ISSUED → Ack → FAILED(VALIDATION_FAILED). `command-services.md` `session.run()` updated. See D42.

### 4. ~~Consumer Has No `_run()` — But Needs One~~ (Low Risk) — **Resolved → D41**

`command-services.md` shows `CommandConsumer._run()` that loops on `self._status_reader.take_async()` for instance state detection (provider crash via `NOT_ALIVE_NO_WRITERS`). But the consumer session's `_listen_status()` also reads from the same status reader. If both run concurrently, they'll **compete for the same samples** (`take` is destructive).

The design needs to decide: either the session's `_listen_status()` handles instance state detection, OR `_run()` is the sole reader that routes to sessions. Can't be both.

**Outcome:** `_run()` is the sole reader. Sessions receive dispatched data via method calls + `asyncio.Event` — they never read from DDS directly. See D41.

### 5. ~~C++ SDK Uses In-App Filter for Provider, v2 Uses DDS CFT~~ (Low Risk) — **Resolved → D16, C10**

The C++ SDK applies a `DestinationReaderFilter` **post-read** (in-app), while v2 uses a DDS-level CFT with `&hex()`. This is actually fine and arguably better (fewer unnecessary deserializations), but the `&hex()` syntax for nested struct fields (`destination.parentID`) should be verified against the actual RTI Python API. The `&hex()` function with nested field paths is less commonly tested.

**Outcome:** Verified — C++ SDK's own `ReportConsumer_test.cpp` uses `source.id = &hex(...)` (same nesting depth). D16 stands as designed. See C10.

### 6. ~~Command Update Flow Undocumented~~ (Medium Risk) — **Resolved → D39**

The C++ SDK has a well-defined `update()` path: command update arrives during EXECUTING → state resets to ISSUED with reason UPDATED → re-runs from `handleIssued()`. The v2 `command-services.md` mentions update handling in passing (*"When a command update arrives during EXECUTING, the session restarts from ISSUED with reason UPDATED per ICD §4.1.4.2"*) but the actual `_run()` code only handles **new commands** and **dispose**. There's no code path for an update (same sessionID, new data, ALIVE instance state).

The C++ SDK treats this as: same `sessionID` arrives again → `handleUpdate()` → cancel current execution → restart state machine. The v2 `_run()` code would need to check if the incoming `session_id` already exists in `_active_sessions` and route to an update path instead of rejecting.

**Current code path:** `session_id in self._active_sessions` → `_reject_active()` (D3 rejection). This is **wrong** if the incoming command is an update to the same session, not a new concurrent command from a different consumer.

**Outcome:** Full update flow defined — same source + sessionID + newer timestamp → ISSUED(UPDATED) → re-enters state machine. `on_updated(previous, updated)` hook added. D12 updated with disambiguation logic. See D39.

### 7. `exec_status_topic` Parameter Naming (Nit) — **Deferred to implementation**

Constructor shows `exec_status_topic: str = None` but Python type checkers will flag this — should be `Optional[str] = None`.

**Outcome:** Will be fixed during PR 4 implementation. No design decision needed.

---

## External Review — @alexcamposruiz (PR #22, 2026-03-20)

> *"The architecture looks solid and provides nice abstractions that make UMAA services very easy to implement and reason about. It cleanly abstracts UMAA protocol details. I like how it leverages rti.connext.async."*

### R1. ~~Use of XML Application Creation~~ (Doc Gap) — **Resolved → D31**

**Summary:** The architecture should explicitly discuss XML Application Creation beyond QoS assignment. The SDK already relies on XML for QoS, and Connext XML Application Creation can also define participants, publishers, subscribers, topics, readers, and writers. The docs should explain why the SDK uses XML for QoS but creates topics and entities in Python.

**Impact:** This question will come up from users familiar with Connext. For this SDK, XML Application Creation may not be the right fit, but that rationale should be stated directly in the architecture docs rather than left implicit.

**Outcome:** Rationale added as D31 — generalization/specialization types require per-component flexibility that static XML can't express without per-deployment files. SDK constrains entity usage at the service template level while providing composition flexibility.

### R2. ~~Use of RTI's Request-Reply or RPC APIs~~ (Doc Gap) — **Resolved → D32**

**Summary:** The command architecture builds a custom multi-topic command/response protocol on raw DDS entities (one command topic, one ack topic, one status topic, one optional execution-status topic). The design docs do not explicitly discuss why it does not use RTI Connext's higher-level RPC or Request-Reply APIs instead.

**Impact:** Even if the answer is UMAA protocol fidelity (the ICD mandates specific topics, QoS, and state machines that don't map to Request-Reply), the rationale should be stated explicitly so reviewers and future maintainers don't re-ask.

**Outcome:** Rationale added as D32 — UMAA ICD mandates specific topics, QoS, per-state state machine, instance disposal, and ack/status separation that don't map to Request-Reply semantics.

### R3. ~~Readers Subscribe Before `run_until_shutdown()`~~ (Design Consideration) — **Resolved → D34**

**Summary:** The docs defer service `_run()` startup but not DDS entity creation. "Inert" currently means "not yet processing in Python," not "not yet subscribed on DDS." Samples may accumulate in reader caches or be replaced before the application starts its async processing loop.

**Impact:** This could be a valid design choice, but the implication — potential sample accumulation or loss before processing begins — should be documented.

**Outcome:** Accepted as intentional design. D34 documents the QoS-level impact assessment — KEEP_LAST 1 retains only latest (correct), KEEP_ALL queues in order (correct), gap is milliseconds. Discovery completion before `_run()` is a benefit, not a bug.

### R4. ~~Blocking Writes Can Interfere with the Async Loop~~ (Design Consideration) — **Resolved → D35**

**Summary:** `DataWriter.write()` is a potentially blocking call, and not all QoS profiles specify async publication. The Python API provides `write_async`, but it is only available on `DynamicData.DataWriter`, not on IDL-generated typed DataWriters (C63).

**Impact:** If a write blocks (e.g. waiting for reliable acknowledgment or flow-control), it could stall the entire async event loop. Services performing high-frequency writes on reliable topics are most at risk.

**Outcome:** Sync `write()` used for all DataWriters. Non-blocking behaviour is guaranteed by `ASYNCHRONOUS_PUBLISH_MODE_QOS` configured on every UMAA QoS profile. Write timeouts propagate to session error path (FAILED). See D35.

### R5. ~~ReportConsumer API Has Inconsistent Definitions~~ (Code Issue) — **Resolved → D36, D37**

**Summary:** The report-consumer design presents two different extension models: constructor callback and overridden `on_report()`. It also has a different startup model: explicit `start()` vs. context-driven startup.

**References:**
- `report_consumer.py` L32 — constructor callback model
- `report_consumer.py` L70 — callback invocation
- `report_consumer.py` L61 — explicit `start()`
- `dds_context.py` L259 — centralized startup

**Impact:** Users won't know which extension model to follow. The dual-model is a leftover from evolution; it should be unified.

**Outcome:** Unified to subclass-override only (D36). Constructor callback removed. `start()` retained for per-service task control in tests (D37).

### R6. ~~Consider a `DDSContext`-Owned Helper for Blocking Work Offload~~ (Enhancement) — **Resolved → D38**

**Summary:** The architecture recommends pushing CPU-bound or blocking work to `asyncio.to_thread()` or an executor, but does not provide a standard SDK-level helper. Each service author would independently choose whether to use `asyncio.to_thread()`, a custom executor, where executor lifecycle is managed, etc.

**Suggested API:**
```python
await ctx.run_blocking(self._hardware.set_rpm_sync, rpm)
```

**Impact:** Low — ergonomic improvement. Does not block PR 4 but would improve consistency.

**Outcome:** `DDSContext.run_blocking()` added as optional wrapper around `asyncio.to_thread()`. Scoped to PR 8. See D38.

---

## What's Solid

- **6-hook subclass model**: Well thought out, maps cleanly to C++ SDK, clear separation of concerns
- **Per-state failure reason validation**: `_VALID_FAIL_REASONS` table matches C++ `CommandStateMachine::fail()` exactly
- **Instance disposal protocol**: Fully specified with `lookup_instance()` → `dispose_instance()` patterns for all 3 writer types
- **CFT design**: Consumer single-session `"1 = 0"` ↔ `sessionID` is clean
- **Cancel support**: `asyncio.Event` + `asyncio.wait(FIRST_COMPLETED)` is the right async pattern
- **Existing DDSContext infrastructure**: `create_filtered_reader()`, `create_writer()`, service registry, `run_until_shutdown()` — all PR 4 prerequisites are in place and working
- **All v1 bugs addressed**: #25 (liveliness), #27 (ack ordering), #28 (validation), #29 (disposal), #30 (shutdown status)

---

## Recommendations Before Starting — **All Resolved**

### From Pre-Implementation Review

1. ~~**Reconcile `command-state-machine.md`**~~ — **Deleted.** `command-services.md` is sole authority. See C8.
2. ~~**Decide the update vs reject ambiguity**~~ — **Updates supported.** Full flow defined in D39. D12 updated with disambiguation logic.
3. ~~**Resolve the `UmaaCommandException` dual usage**~~ — **Split into two classes.** `CommandHookError` (provider) + `CommandFailedError` (consumer). See D40.
4. ~~**Clarify the consumer reader concurrency**~~ — **`_run()` is sole reader.** Sessions dispatched via method calls + `asyncio.Event`. See D41.

### From @alexcamposruiz Review

5. ~~**Add "Why not XML App Creation?" rationale**~~ — **Added as D31.**
6. ~~**Add "Why not Request-Reply / RPC?" rationale**~~ — **Added as D32.**
7. ~~**Document reader-before-run semantics**~~ — **Documented in D34.** Intentional design with QoS impact analysis.
8. ~~**Evaluate `write()` vs `write_async()` policy**~~ — **Sync `write()` with `ASYNCHRONOUS_PUBLISH_MODE` QoS.** See D35.
9. ~~**Unify ReportConsumer extension model**~~ — **Subclass-override only.** See D36. `start()` retained (D37).
10. ~~**Consider `DDSContext.run_blocking()` helper**~~ — **Added as D38.** Scoped to PR 8.
11. ~~**Replace `_topics` dict cache with `dds.Topic.find()`**~~ — **Adopted as D17.** Scoped to PR 4.
