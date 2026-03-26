# PR4 Implementation Issues

> Discovered during implementation of CommandProvider + CommandConsumer.

---

## Issues

### I1: Service close() must NOT close DDS entities directly

**Symptom:** Segfault (EXIT:139) during `DDSContext.shutdown()` teardown when `CommandProvider.close()` called `self._command_reader.close()`.

**Root cause:** The `rti.asyncio` dispatcher background thread still held reference to the reader's wait set while the main thread closed the entity. Connext native code accessed freed memory → SIGSEGV.

**Fix (two parts):**

1. Removed individual entity `.close()` calls from all service `close()` methods (`CommandProvider`, `CommandConsumer`, `ReportProvider`, `ReportConsumer`). Service `close()` now only performs logical cleanup (dispose instances, fail sessions). It does **not** cancel `_run()` tasks or close DDS entities.
2. `DDSContext.shutdown()` now calls `await rti_asyncio.close()` **first** — before cancelling tasks or calling service `close()`. This stops the dispatcher thread so no waitset references exist when entities are later destroyed. `writer.write()` is synchronous and does not require the dispatcher, so services can still publish final messages (FAILED statuses, dispose instances) after the dispatcher is stopped.

**Shutdown ordering in `DDSContext.shutdown()`:**
```
1. await rti_asyncio.close()          — stop listening (dispatcher thread)
2. Cancel _run() tasks                — CancelledError via asyncio event loop
3. Service close() (reverse order)    — final writes only (dispose, fail sessions)
4. participant.close_contained_entities()  — destroy all DDS entities safely
5. participant.close()
6. Clear singleton
```

**Rationale for dispatcher-first ordering:** Stopping the dispatcher first means `take_async()` coroutines cannot block, so `task.cancel()` in step 2 is immediately effective. Service `close()` in step 3 only uses synchronous `writer.write()` for final publishes — no dispatcher needed. This ordering eliminates both the I1 segfault and the I2 DDS warnings.

**Applies to:** All service `close()` methods that create DDS entities.

### I2: DDS teardown-order warnings ~~(harmless)~~ — RESOLVED

**Symptom:** `ERROR PRESPsReader_deleteReadCondition:!goto WR pres psReader` and `ERROR DDS_Condition_get_trigger_value:ERROR: Bad parameter: self` printed to stderr after test suite completes (EXIT:0).

**Root cause:** `close_contained_entities()` destroys entities in container order rather than the reverse dependency order (reader → read condition → waitset). The `rti.asyncio` dispatcher's WaitSet references read conditions that were already deleted.

**Fix:** Resolved by the I1 fix — `await rti_asyncio.close()` before `close_contained_entities()` ensures the dispatcher's waitset references are released before entities are destroyed. Warnings no longer appear (0 occurrences confirmed).

### I3: Multiple services with same name crash BaseService registration

**Symptom:** `ValueError: key already registered` when creating two `CommandConsumer` instances with the same `service_name` in the same `DDSContext`.

**Fix:** Tests that create multiple consumers/providers of the same type must use unique service names (e.g., `"Consumer1"`, `"Consumer2"`).

