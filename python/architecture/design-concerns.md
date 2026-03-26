# Design Concerns

> All concerns, issues, and things-to-watch raised during architecture review of the `rtiumaapy` SDK.
> Split from [design-decisions.md](design-decisions.md) for readability.
>
> **Convention:** Resolved concerns are struck through with resolution text. Open concerns have no strikethrough.
> Each concern links to the design decision (D*n*) that resolves it, or notes the file where the fix was applied.

---

## Resolved Concerns (C1–C45)

### C1: ~~Readers subscribe before `run_until_shutdown()`~~ — **Resolved → D34**

~~DDS entities are created at service construction but `_run()` is deferred until `run_until_shutdown()`. Samples may accumulate in reader caches during the gap.~~ Analyzed and accepted as intentional design — see D34 for full rationale and QoS-level impact assessment.

**Raised by:** @alexcamposruiz PR #22 review.

---

### C2: ~~`DataWriter.write()` can block the async loop~~ — **Resolved → D35**

~~Synchronous `write()` on RELIABLE writers can block the asyncio event loop.~~ Decision: use sync `write()` with `ASYNCHRONOUS_PUBLISH_MODE` QoS (already configured on all UMAA profiles) — see D35. Write timeouts propagate to session error path.

**Raised by:** @alexcamposruiz PR #22 review.

---

### C3: ~~ReportConsumer extension model is inconsistent~~ — **Resolved → D36**

~~ReportConsumer allowed both constructor `on_report` callback and subclass override.~~ Unified to subclass-override only — see D36.

**Raised by:** @alexcamposruiz PR #22 review.

---

### C4: ~~No SDK-level helper for blocking work offload~~ — **Resolved → D38**

~~`asyncio.to_thread()` is standard Python, but no SDK-level wrapper existed.~~ Optional `DDSContext.run_blocking()` wrapper added — see D38.

**Raised by:** @alexcamposruiz PR #22 review.

---

### C5: ~~Command update flow undocumented~~ — **Resolved → D39**

~~Command updates (same source + sessionID, newer timestamp) were undocumented.~~ Now handled — state resets to ISSUED(UPDATED), re-enters state machine. See D39.

---

### C6: ~~`UmaaCommandException` dual usage~~ — **Resolved → D40**

~~Single exception class used for both provider-side and consumer-side failures.~~ Split into `CommandHookError` (provider-side) and `CommandFailedError` (consumer-side) — see D40.

**Raised by:** pr4-review analysis.

---

### C7: ~~Consumer reader concurrency (`_run()` vs `_listen_status()`)~~ — **Resolved → D41**

~~Multiple coroutines could compete for the same reader via `take_async()`.~~ Consumer `_run()` is the sole reader; sessions receive dispatched data via method calls + `asyncio.Event`. See D41.

---

### C8: ~~`command-state-machine.md` shows stale callback-based model~~ — **Resolved → deleted**

~~`command-state-machine.md` used the old callback-based constructor model (`on_command: Callable`, `_on_command_execute`).~~ File deleted — `command-services.md` is the sole authoritative source for command session state machine design.

**Source:** pr4-review issue #1 / recommendation #1.

---

### C9: ~~`validate_command()` rejection path — state transitions undefined~~ — **Resolved → D42**

~~Two rejection flows existed with blurry boundaries and an undefined `_reject()` method.~~ Validation happens AFTER ISSUED + Ack. Failure transitions ISSUED → FAILED(VALIDATION_FAILED) via `CommandHookError`. See D42.

**Source:** pr4-review issue #3.

---

### C10: ~~`&hex()` CFT syntax with nested struct field paths — verify against RTI Python API~~ — **Resolved → D16**

~~Nested struct field paths like `destination.parentID = &hex(...)` needed verification.~~ Confirmed working — the C++ SDK's own test uses `source.id = &hex(...)` (same nesting pattern) in `ReportConsumer_test.cpp`. D16 stands as designed.

**Source:** pr4-review issue #5.

---

### C11: ~~EventProcessor still referenced in architecture docs~~ — **Resolved → not applicable**

~~`implementation-gaps.md` §10.2 asks whether to remove or keep `EventProcessor` alongside `rti.asyncio`.~~ The v2 codebase (`rtiumaapy/`) does not contain `EventProcessor` — it was never ported from v1. D1 specifies asyncio exclusively. D38 provides `DDSContext.run_blocking()` for CPU-bound work offload.

**Source:** implementation-gaps.md §10.2.

---

### C12: ~~Report QoS BEST_EFFORT vs RELIABLE mismatch~~ — **Resolved → not applicable**

~~`implementation-gaps.md` §9.3/§10.2 claimed the Python SDK uses RELIABLE for reports while production uses BEST_EFFORT.~~ This was true of the legacy `python/resource/umaapy_qos_lib.xml`, but the v2 SDK (`DDSContext`) defaults to `qos/umaa_qos_lib.xml` which uses BEST_EFFORT for `*ReportType` topics via `topic_filter` (D4). No mismatch exists.

**Source:** implementation-gaps.md §9.3, §10.2.

---

### C13: ~~Consumer CFT multi-session OR-clause pattern vs single-session~~ — **Resolved → D15**

~~`implementation-gaps.md` §3.4 documents a multi-session consumer CFT with OR-joined clauses for concurrent sessions.~~ D15 specifies single-session consumer — CFT alternates between `"1 = 0"` (idle) and `sessionID = &hex(...)` (active). The OR-clause pattern in §3.4 is stale; no OR concatenation needed.

**Source:** implementation-gaps.md §3.4.

---

### C14: ~~QueryCondition vs application-level filtering for element scoping~~ — **Resolved → D24**

~~`implementation-gaps.md` §10.2 asks whether to use DDS QueryCondition or application-level post-filtering for FK-scoped element reads.~~ D24 specifies QueryCondition with `setID = &hex(%0)` / `listID = &hex(%0)`, matching the RTI Python API verified in §4. More efficient than app-level filtering (fewer deserializations).

**Source:** implementation-gaps.md §10.2.

---

### C15: ~~Concurrent command support (ACCEPT_CONCURRENT / QUEUE_INCOMING)~~ — **Resolved → D3, D15**

~~`implementation-gaps.md` §10.2 asks what concurrent command model v2 supports.~~ D3 specifies single active session. D15 specifies single-session consumer. Concurrent/queued commands are deferred to future multi-session work (D41 documents the future routing pattern). The C++ SDK's `ACCEPT_CONCURRENT`/`QUEUE_INCOMING` modes are not implemented.

**Source:** implementation-gaps.md §10.2.

---

### C16: ~~Stale `UmaaCommandException` references in command-services.md~~ — **Resolved → D40 (applied)**

~~D40 replaced `UmaaCommandException` with `CommandHookError` (provider) and `CommandFailedError` (consumer). But `command-services.md` still references the old name in multiple places.~~ All 6 references updated.

---

### C17: ~~Provider `_run()` doesn't implement D39 update disambiguation~~ — **Resolved → D12/D39 (applied)**

~~The `_run()` code in `command-services.md` unconditionally rejected any command matching an active sessionID.~~ Updated to implement D12 three-way check: (1) same sessionID + newer timestamp → `session.update()` (D39), (2) same sessionID + older/equal timestamp → silently ignore, (3) different sessionID with active session → `_reject_active()` (D3).

**Source:** PR 4 re-review against D12/D39.

---

### C18: ~~D39 flow diagram references non-existent `on_issued()` hook~~ — **Resolved → D39 (applied)**

~~D39's state machine flow showed `on_issued()` which is not in the hook set (D9).~~ Fixed to: `on_updated(previous, updated)` → `validate_command()` → COMMANDED → `on_commanded()` → EXECUTING → `on_executing()` → COMPLETED.

**Source:** PR 4 re-review cross-reference against D9/D39.

---

### C19: ~~D9 says "6 hooks" — actually 7 with `on_updated()` (D39)~~ — **Resolved → D9 (applied)**

~~D9 and the comparison table said "6 hooks".~~ Updated to 7: `validate_command`, `on_commanded`, `on_executing`, `on_complete`, `on_failed`, `on_terminal`, `on_updated` (D39). D9 text and command-services.md comparison table both corrected.

**Source:** PR 4 re-review cross-reference against D9/D39.

---

### C20: ~~`on_updated()` hook not defined in command-services.md hooks section~~ — **Resolved → D39 (applied)**

~~`command-services.md` was missing the `on_updated()` hook definition.~~ Added full signature `on_updated(self, session, previous_command, updated_command)` with docstring to the hooks section.

**Source:** PR 4 re-review — missing hook definition.

---

### C21: ~~Consumer `execute()` callbacks contradict D36/D41~~ — **Resolved → D44**

~~`execute()` takes `on_status` and `on_exec_status` per-call callbacks, which appeared to contradict D36 (subclass-override) and D41 (event dispatch).~~

**Resolution:** D44 eliminated per-call callbacks entirely. `on_status()` and `on_exec_status()` are now subclass-override hooks on `CommandConsumer`, consistent with D36.

**Source:** PR 4 re-review cross-reference against D36/D41.

---

### C22: ~~Session cancel mechanism undefined~~ — **Resolved → D46**

~~`_handle_command_disposed()` calls `session.cancel()`, but this method is never defined.~~ `session.cancel()` defined: calls `self._task.cancel()`. `CancelledError` handler publishes CANCELED. `finally` handles all cleanup. See D46.

**Source:** PR 4 re-review — undefined method.

---

### C23: ~~Double-dispose risk in cancel + finally paths~~ — **Resolved → D46**

~~`cancel()` called, then disposed, then popped. `run()`'s finally also disposed and popped.~~ Eliminated: `finally` is the sole cleanup owner. See D46.

**Source:** PR 4 re-review — cleanup race.

---

### C24: ~~Provider `close()` double-iteration race with session finally blocks~~ — **Resolved → D46**

~~Two-loop close() pattern could race with `finally` blocks.~~ Eliminated: `close()` calls `session.fail()` on all sessions in one pass, then `asyncio.gather()` waits for all `finally` blocks before closing DDS entities. See D46.

**Source:** PR 4 re-review — cleanup race.

---

### C25: ~~Consumer `_run()` only reads status — ack and exec_status readers unread~~ — **Resolved → D44**

~~Consumer `_run()` only read from `self._status_reader`.~~ D44 redesigned `_run()` to use `asyncio.gather()` over three reader loops. All readers now dispatched per D41.

**Source:** PR 4 re-review — missing reader coverage.

---

### C26: ~~Consumer session `execute()` / `_run()` interaction needs pseudocode~~ — **Resolved → D44**

~~Naming was misleading. D41 says sessions never read from DDS directly.~~ D44 fully specifies the consumer `_run()` dispatch with three `take_async()` loops in `asyncio.gather()`.

**Source:** PR 4 re-review — missing interaction model.

---

### C27: ~~`session.run()` has no loop — can't handle updates during execution~~ — **Resolved → D45**

~~`session.run()` is a linear sequential flow with no loop or restart mechanism.~~ D45 eliminated `CommandConsumerSession` and `execute()`. Consumer uses non-blocking `send()` — caller sends updates by calling `send(cmd, session_id)` again.

**Source:** PR 4 re-review — D39 implementation gap.

---

### C28: ~~No test for update vs. rejection disambiguation (D12)~~ — **Resolved → implementation-plan.md**

Added `tests/test_command_disambiguation.py` to PR 4 implementation plan.

**Source:** PR 4 re-review — missing test coverage.

---

### C29: ~~No test for consumer-side provider crash detection~~ — **Resolved → implementation-plan.md**

Added `tests/test_command_provider_crash.py` to PR 4 implementation plan.

**Source:** PR 4 re-review — missing test coverage.

---

### C30: ~~No test for execution status (4th slot)~~ — **Resolved → implementation-plan.md**

Added `tests/test_command_exec_status.py` to PR 4 implementation plan.

**Source:** PR 4 re-review — missing test coverage.

---

### C31: ~~No test for consumer CFT lifecycle~~ — **Resolved → implementation-plan.md**

Added `tests/test_command_consumer_cft.py` to PR 4 implementation plan.

**Source:** PR 4 re-review — missing test coverage.

---

### C32: ~~No explicit test for `on_updated()` hook arguments~~ — **Resolved → implementation-plan.md**

Added explicit argument verification to `test_command_update.py` acceptance criteria.

**Source:** PR 4 re-review — missing test specificity.

---

### C33: ~~Missing acceptance criteria for provider crash, exec_status, CFT lifecycle, double-dispose~~ — **Resolved → implementation-plan.md**

Added all four items to PR 4 acceptance criteria.

**Source:** PR 4 re-review — coverage gaps.

---

### C34: ~~`source_id` type hint says `str` but usage accesses `.parentID` / `.id`~~ — **Resolved → applied**

Fixed: type hint changed to `IdentifierType`.

**Source:** PR 4 final review — G1.

---

### C35: ~~Consumer `cancel()` race if called between `send()` and `_run()` dispatch~~ — **Resolved → applied**

Fixed: `cancel()` now only disposes the command instance. Filter reset, session state clear, and `on_terminal()` all happen in `_end_session()` — called by `_read_status_loop()` when CANCELED arrives.

**Source:** PR 4 final review — G2.

---

### C36: ~~Consumer constructor calls `ctx.create_topic()` but discards return values~~ — **Resolved → applied**

Removed. `create_writer()` and `create_filtered_reader()` handle topic lookup internally.

**Source:** PR 4 final review — G3.

---

### C37: ~~`_read_ack_loop()` body is a no-op~~ — **Resolved → applied**

Fixed: added `on_ack(session_id, ack)` hook. Consumer hooks are now 4 total: `on_status`, `on_ack`, `on_exec_status`, `on_terminal`.

**Source:** PR 4 final review — G4.

---

### C38: ~~`_publish_status()` doesn't update `_current_state`~~ — **Resolved → applied**

Fixed: `_publish_status()` now sets `self._current_state = status` before the DDS write, mirroring C++ `CommandStateMachine::advanceState()`.

**Source:** PR 4 final review — G5.

---

### C39: ~~Consumer `close()` closes readers immediately after `cancel()` — `on_terminal()` may not fire~~ — **Resolved → applied**

Fixed: `close()` calls `_end_session(None)` — the sole session cleanup owner. `_end_session()` disposes the command instance, clears state, resets filters, and calls `on_terminal(session_id, None)`. Readers close after `_end_session()` returns.

**Source:** Implementation plan final review — C35 interaction with `close()`.

---

### C40: ~~Consumer `send()` doesn't stamp `command.source`~~ — **Resolved → applied (D47)**

Fixed: consumer constructor now takes `source_id` and `destination_id` (D47). `send()` auto-stamps all four header fields on every write: `source`, `destination`, `sessionID`, `timeStamp`.

**Source:** Implementation plan final review — consumer field stamping.

---

### C41: ~~PR3 ships `ReportConsumer` with callback API, PR4 immediately refactors to hook API (D36)~~ — **Resolved → accepted**

Accepted: PR3 is shipped. PR4 refactors `ReportConsumer` from callback to subclass-override hook (D36) and `ReportProvider.write()` from sync to async (D35). Clean-sheet internal library — no external consumers to break.

**Source:** Implementation plan final review — PR3→PR4 API consistency.

---

### C42: ~~Provider constructor doesn't store `ack_type`/`status_type`/`exec_status_type`~~ — **Resolved → applied**

Fixed: constructor now stores all three types. `_dispose_provider_instances()` uses them to construct key-only samples for instance lookup and disposal.

**Source:** Final review — provider constructor type storage.

---

### C43: ~~`_reject_active()` calls `_publish_status(command, status)` but session's `_publish_status(status, reason=None)` takes no command param~~ — **Resolved → applied**

Fixed: `_reject_active()` now creates an ephemeral `CommandProviderSession` to publish the rejection sequence — matching the C++ SDK pattern. The ephemeral session is never added to `_active_sessions`.

**Source:** Final review — reject path vs session path signature mismatch.

---

### C44: ~~`CommandProviderSession.update()` referenced in `_run()` routing but not defined~~ — **Resolved → applied (D48)**

Fixed: `update(new_command)` added as the third interruption intent alongside `cancel()` and `fail()` (D48). Uses `task.cancel()` + `_updated` flag + `while True` loop re-entry.

**Source:** Final review — update method not defined.

---

### C45: ~~PR4 consumer deliverable and acceptance criteria missing D47~~ — **Resolved → applied**

Fixed: PR4 consumer deliverable now references D47. Acceptance criteria updated with source/destination auto-stamping verification and update re-entry via D48.

**Source:** Final review — implementation plan D47 coverage.

---

## Open Concerns (C46–C54)

### C46: ~~Provider overview says "filtered by sourceID" — should say "filtered by destination"~~ — **Resolved → applied**

~~The overview bullet says "Receives commands (filtered by `sourceID`)" but the provider's CFT actually matches on the `destination` field of incoming commands.~~ Fixed: changed to "Receives commands addressed to this provider (filtered by `destination`)".

**Source:** Final review round 2 — command-services.md overview vs constructor code.

---

### C47: ~~Consumer `on_terminal()` hook does not document `None` status case~~ — **Resolved → applied**

~~`on_terminal(session_id, status)` can be called with `status=None` when the session ends due to provider crash or consumer shutdown, but the docstring didn't mention this.~~ Fixed: docstring now documents the `None` case with an Args section explaining when `status` is `None` (provider crash or consumer shutdown).

**Source:** Final review round 2 — `_end_session()` passes `None` on crash/shutdown paths.

---

### ~~C48: Consumer `_run()` gather() missing `return_exceptions=True` — one dead reader orphans others~~ — **Resolved → superseded by C67**

~~Consumer `_run()` used `await asyncio.gather(*tasks)` without `return_exceptions=True`.~~ Originally fixed by adding `return_exceptions=True`. Superseded by C67: `return_exceptions=True` silently absorbs exceptions (results list never inspected). C67 replaces it with try/except that logs and re-raises — all readers stop together on error (clean death) rather than limping with a dead reader.

**Source:** Final review round 2 — consumer reader loop exception propagation.

---

### C49: ~~Provider `_run()` reader loop has no exception wrapper — transient error kills command processing~~ — **Resolved → applied**

~~The provider's `_run()` method had a bare `async for` with no try/except.~~ Fixed: wrapped in `try/except Exception` with `_logger.exception()` before re-raise. A transient DDS error is now logged with full traceback instead of silently killing the provider.

**Source:** Final review round 2 — provider reader loop robustness.

---

### C50: ~~`CancelledError` during `CommandHookError` handler can escape the while-loop~~ — **Resolved**

**Original concern:** In provider session `run()`, the `except CommandHookError` and `except Exception` handlers contain `await` calls (`_publish_fail()`, `on_failed()`). If `cancel()`, `fail()`, or `update()` is called while one of these handlers is executing, a new `CancelledError` is delivered at the next await point. This `CancelledError` is outside the inner `try` block and escapes to the `finally` block directly — the intent flags (`_updated`, `_failed`) are not checked.

**Resolution:** D46 (rewritten) and D48 (rewritten) eliminate CancelledError as an intent carrier. `cancel()` and `fail()` are now async — they set the terminal state via `_transition_to()` and publish the terminal status *before* calling `task.cancel()`. CancelledError is just a wakeup signal; the `except CancelledError` handler is a debug log. The `except Exception` handler is guarded by a terminal-state check — if `cancel()`/`fail()` already set a terminal state, it skips publish and `on_failed()`. Updates use `set_new_command()` (sync, no `task.cancel()` at all). No flags, no CancelledError at await points in exception handlers.

**Source:** Final review round 2 — CancelledError at await points in exception handlers. Resolved by D46 rewrite + D48 rewrite + D49.

---

### C51: ~~Consumer `cancel()` + `_end_session()` potential double-disposal of command instance~~ — **Resolved → D50**

`cancel()` now delegates to `_end_session(None)` directly — single dispose path, no double-dispose. `_read_status_loop()` ignores late-arriving CANCELED status because `_session_id` is already `None`. Matches C++ SDK `closeCommandSession()` pattern.

**Source:** Final review round 2 — cancel + end_session dispose paths. Resolved by D50.

---

### C52: ~~`error-handling.md` still uses old `UmaaCommandException` — needs D40 update~~ — **Resolved → applied**

All 10 `UmaaCommandException` references replaced with D40 types: `CommandHookError` (provider) and `CommandFailedError` (consumer). Tagline, overview table, Layer 4 diagram, class definitions, usage examples, error tables, and flow diagrams all updated. Provider `run()` snippet updated to match current state-machine design.

**Source:** Final review round 2 — cross-document consistency with D40.

---

### C53: ~~`base-service.md` says "No `start()` method" — contradicts D37~~ — **Resolved → applied**

Updated `base-service.md` design constraints table: replaced "No `start()` method" with "Optional `start()` method" documenting its role in tests and selective startup. `run_until_shutdown()` auto-starts services if `start()` was not called (D37). Used in 5 test call sites across `test_report_consumer.py` and `test_report_lifecycle.py`.

**Source:** Final review round 2 — base-service.md vs D37.

---

### C54: ~~`report-services.md` and large-set/list-services.md show sync `write()` — needs D35 alignment note~~ — **Resolved → applied**

Added notes at the top of `report-services.md`, `large-set-services.md`, and `large-list-services.md` confirming sync `write()` is correct under `ASYNCHRONOUS_PUBLISH_MODE` QoS (D35 revised).

**Source:** Final review round 2 — cross-document consistency with D35.

---

### ~~C55: `_reject_active()` calls `_publish_status()` with positional args — incompatible with new zero-arg signature~~ — **Resolved**

`_reject_active()` calls `await temp._publish_status(CommandStatusEnum.ISSUED)` and `await temp._publish_status(CommandStatusEnum.FAILED, reason=...)`. The session state machine rewrite (D49) changed `_publish_status()` to take no arguments — it reads from `_current_state` and `_current_reason` (set by `_transition_to()`). `_reject_active()` must be updated to use `_transition_to()` → `_publish_status()` pairs for each step in the rejection sequence.

**Source:** Post-merge review — `_reject_active()` predates session state machine rewrite.

---

### ~~C56: `_reject_active()` double-acks — read loop acks before call, then `_reject_active()` acks again~~ — **Resolved**

The provider read loop now publishes an ack for every valid command sample immediately upon receipt — before routing. Then `_reject_active()` also calls `temp._publish_ack()`. The rejected command gets two acks on the wire. Either the read loop should skip acking for commands that will be rejected, or `_reject_active()` should drop its `_publish_ack()` call.

**Source:** Post-merge review — ack responsibility moved to read loop but `_reject_active()` not updated.

---

### ~~C57: `_handle_command_disposed()` is `def` but uses `await` — needs `async def`~~ — **Resolved**

```python
def _handle_command_disposed(self, key_data):
    ...
    await self._active_sessions[session_id].cancel()
```

`session.cancel()` is async (D46 rewrite). The caller must be `async def` for `await` to be valid Python. The read loop already `await`s the call (`await self._handle_command_disposed(key_data)`), so only the definition needs the `async` keyword.

**Source:** Post-merge review — `cancel()` changed from sync to async but `_handle_command_disposed` signature not updated.

---

### ~~C58: Provider `_run()` has indentation error — `for sample` at wrong level~~ — **Resolved**

```python
        try:
            async for samples in self._command_reader.take_async():
            for sample in samples:
```

The inner `for sample in samples:` must be indented one level under the `async for`. As written, it's at the same indentation level — a Python syntax error (empty `async for` body, followed by an unrelated `for`).

**Source:** Post-merge review — indentation drift during multi-replacement edits.

---

### ~~C59: Per-state failure reason validation (`_VALID_FAIL_REASONS` / `_publish_fail()`) disconnected from new `run()`~~ — **Resolved (D51)**

Two issues in the "Per-State Failure Reason Validation" section:

1. **Stale `_publish_status()` signature.** The section shows `_publish_status(self, status, reason=None)` — the old signature that takes positional args and sets `_current_state` internally. The session state machine now defines a zero-arg `_publish_status(self)` that reads from `_current_state`/`_current_reason`. These are two conflicting definitions of the same method on `CommandProviderSession`.

2. **`_publish_fail()` is orphaned.** The `except Exception` handler in `run()` calls `_transition_to(FAILED, reason=reason)` → `_publish_status()` directly. It does not call `_publish_fail()`, so the `_VALID_FAIL_REASONS` table is never consulted. A hook could raise `CommandHookError(OBJECTIVE_FAILED, ...)` from the ISSUED state, and the handler would publish FAILED with OBJECTIVE_FAILED — violating ICD Figure 15 (OBJECTIVE_FAILED only valid from EXECUTING).

The per-state reason validation needs to be integrated into the new code path — either inside `_transition_to()` or as a step before it in the `except Exception` handler. The stale `_publish_status()` snippet should be removed.

**Source:** Post-merge review — `_VALID_FAIL_REASONS` predates session state machine rewrite, never reconnected.

---

### ~~C60: C58 fix incomplete — `for sample` body not re-indented~~ — **Resolved**

The C58 fix moved `for sample in samples:` from 12-space to 16-space indentation (inside the `async for`), but the entire body underneath (`if sample.info.valid:` and all children) remained at its original indentation. As written, the `if` is at the same level as the `for` — a Python syntax error (empty `for` body). The entire `if`/`else` block and all its children (~30 lines) need 4 additional spaces each.

**Source:** Final review — cascading indentation not applied when C58 was resolved.

---

### ~~C61: Stale `UmaaCommandException` reference in Related Documents~~ — **Resolved**

The last line of command-services.md reads:

```
- [Error Handling](error-handling.md) — `UmaaCommandException` and rejection handling
```

Should reference `CommandHookError` / `CommandFailedError` per D40.

**Source:** Final review — D40 rename applied to error-handling.md but not this cross-reference.

---

### ~~C62: Ack ordering prose contradicts code and overstates ICD requirement~~ — **Resolved**

Three related inconsistencies stemming from ack responsibility moving from the session to the read loop:

1. **"ISSUED before ack" Key Properties bullet** claims ICD §4.1.4 mandates ISSUED-before-ack ordering and that this "corrects v1 Bug #27." The ICD actually describes ISSUED (§4.1.4 step 3) and ack (§4.1.4.1 step 1) in separate sections — both must happen, but no strict ordering is mandated. DDS is asynchronous; delivery order to the consumer is not guaranteed regardless of publish order. The current code acks in the read loop (before session creation), then the session publishes ISSUED later — this is ICD-compliant.

2. **D11 in design-decisions.md** states: *"ICD §4.1.4 explicitly specifies: receiver must publish status, then ACK receipt."* This overstates the ICD. The ICD requires both; it does not mandate their relative ordering.

3. **Active Command Rejection numbered steps** list "2. Send the **ack**" as a step performed by `_reject_active()`. But C56 removed `_publish_ack()` from `_reject_active()` — the read loop already acked before calling `_reject_active()`. The numbered steps should reflect that ack happens in the read loop, not in the rejection sequence.

**Source:** Final review — ack responsibility moved to read loop but prose in Key Properties, D11, and Rejection steps not updated.

---

### C63: ~~`write_async()` not available on installed RTI Connext Python~~ — **Resolved → D35 (revised)**

D35 originally specified `write_async()` for all DataWriters. The RTI 7.6.0 docs show `write_async()` on `DynamicData.DataWriter`, but runtime check on the installed version shows `hasattr(dds.DataWriter, 'write_async')` returns `False`. The method is not available on IDL-generated typed DataWriters.

**Resolution:** Use sync `write()` with `ASYNCHRONOUS_PUBLISH_MODE` QoS (Option C). All four UMAA data QoS profiles (TelemetryQoS, ConfigQoS, CommandQoS, ElementQoS) already configure `ASYNCHRONOUS_PUBLISH_MODE_QOS`, which causes `write()` to hand the sample to a dedicated RTI middleware thread and return immediately — non-blocking by design. Write timeouts (`max_blocking_time=1s` on KEEP_ALL profiles) are not caught; they propagate into the session error path and transition to FAILED (D40). D35 has been revised accordingly.

**Source:** PR4 implementation recon — API verification.

---

### C64: ~~`&hex()` CFT filter expression untested with actual DDS~~ — **Resolved**

The entire command architecture (provider destination filter, consumer session filter) relies on `sessionID = &hex(xx xx xx ...)` filter expressions. `GUIDUtil.to_hex()` produces the space-separated hex string, but no existing test creates a CFT with `&hex()` and verifies it actually filters correctly against real DDS data.

**Resolution:** Verified via `tests/spike_c64_hex_filter.py`. The spike test creates an `AnchorCommandStatusType` writer, writes two samples with distinct `NumericGUID` sessionIDs, reads through a CFT with `sessionID = &hex(...)`, and confirms only the matching sample passes. The filter works correctly with the installed RTI Connext Python version.

**Finding:** `GUIDUtil.generate()` returns raw `bytes`, but IDL type fields expect `NumericGUID(value=dds.Uint8Seq(bytes))`. Callers must wrap accordingly.

**Source:** PR4 implementation recon — no `&hex()` found in any test file.

---

### C65: ~~Generated IDL enum class names are extremely long~~ — **Resolved → aliased imports**

The generated Python enum classes use fully-qualified underscore-separated names:
- `UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule_CommandStatusEnumType`
- `UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule_CommandStatusReasonEnumType`

**Resolution:** Option A — aliased imports at the top of each file. The full `from ... import ... as` form shows exactly where the type comes from (the UMAA datamodel), making it clear the alias is not invented. Example:
```python
from rtiumaapy.datamodel.MaritimeEnumerationSets import (
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumModule_CommandStatusEnumType as CommandStatusEnum,
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumModule_CommandStatusReasonEnumType as CommandStatusReasonEnum,
)
```

This is preferred over a re-export module (Option B) because it keeps the UMAA datamodel provenance visible at the point of use — readers of any file can trace the alias back to the generated type without an extra indirection layer.

**Impact:** Code readability in all command service files and tests.

**Source:** PR4 implementation recon — verified actual generated class names.

---

### ~~C66: Consumer `_end_session()` has no re-entry guard — double-call risk~~ — **Resolved → applied**

`_end_session()` could be called twice if `on_status()` user code called `self.cancel()` (which calls `_end_session(None)`) and then the outer `_read_status_loop` code called `_end_session(sample.data)` for the same terminal sample. The second call would dispose a `None` command and invoke `on_terminal()` a second time with `None` session_id.

**Fix (applied):**
1. Added early-exit guard at top of `_end_session()`: `if self._session_id is None: return`
2. Added docstring note to `on_status()` advising hook authors not to call `cancel()` from this hook — terminal statuses are detected automatically.

**Source:** PR4 post-implementation review.

---

### ~~C67: Consumer `_run()` silently swallows reader loop exceptions~~ — **Resolved → applied (supersedes C48)**

~~`_run()` uses `asyncio.gather(*tasks, return_exceptions=True)` which silently absorbs any exception from the three reader loops.~~ Fixed: removed `return_exceptions=True` and wrapped `gather` in try/except. Exceptions are now logged via `_logger.exception()` before re-raise. `CancelledError` (normal shutdown) is swallowed. Supersedes C48 — fail-loud is better than limping with a silently dead reader.

**Source:** PR4 post-implementation review.

---

### ~~C68: `_publish_status()` is async but performs no awaits~~ — **Resolved → applied**

~~`CommandProviderSession._publish_status()` is `async def` but only calls synchronous `writer.write()`.~~ Fixed: changed to plain `def`, removed `await` at all 11 call sites (8 in `command_provider_session.py`, 3 in `command_provider.py`). Now consistent with `_publish_ack()` which is also a plain `def`. Safe under D46 — `CancelledError` delivery at these former yield points was just a harmless wakeup signal.

**Source:** PR4 post-implementation review.

---

### ~~C69: Provider `close()` cancels `_run` before failing sessions — ordering fragility~~ — **Resolved → accepted (correct by design)**

~~`CommandProvider.close()` cancels the `_run()` task first (killing `take_async()`), then calls `session.fail()` on active sessions.~~ Ordering is correct: stop accepting new commands first, then fail existing sessions. `close()` never destroys DDS entities — that's `DDSContext.shutdown()`'s job — so `_publish_status()` (now sync, C68) always has live writers. Safe both under D52 and when called independently.

**Source:** PR4 post-implementation review.

---

### ~~C70: Provider `close()` may double-cancel session tasks~~ — **Resolved → accepted (misleading title)**

~~`close()` calls `session.fail()` which internally calls `self._task.cancel()` on the session task. Then `close()` gathers those same session tasks via `asyncio.gather()`.~~ The gather doesn't cancel — it *awaits* the already-cancelling tasks so their `finally` blocks (`on_terminal`, `_dispose_provider_instances`, pop from `_active_sessions`) complete before `close()` returns. This is essential, not redundant.

**Source:** PR4 post-implementation review.

---

### C71: Timestamp comparison in provider could use a helper

**Status:** Resolved → won't fix.

`_handle_valid_sample()` compares timestamps with a multi-line seconds+nanoseconds conditional. This is correct but verbose. A `UmaaTimestamp.compare()` or `__lt__` helper would improve readability and prevent bugs if the same comparison is needed elsewhere.

**Severity:** Low — readability improvement only.

**Source:** PR4 post-implementation review.

**Resolution:** Won't fix. The comparison appears at a single call site. The objects are IDL-generated `DateTimeType` structs, not `DateTimeFields`, so a helper on `UmaaTimestamp` wouldn't directly apply. Creating a duck-typed free function for one use site violates YAGNI. The current code is correct and readable enough inline.
