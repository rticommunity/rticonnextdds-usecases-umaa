# Exception and Cleanup Findings (2026-05-18)

This document captures a focused review of exception handling and shutdown/cleanup behavior in the Python SDK runtime lifecycle.

## Scope

- Command provider session lifecycle
- Command consumer session lifecycle
- Context startup/shutdown orchestration
- Hook exception isolation

## Findings Already Handled

### 1. Consumer hook exception isolation is robust

- `on_status`, `on_ack`, `on_exec_status`, and `on_terminal` hook exceptions are caught and logged.
- Consumer session cleanup still completes even if `on_terminal` raises.
- Existing tests cover this behavior (`test_consumer_hook_isolation.py`).

### 2. Shutdown is idempotent

- `DDSContext.shutdown()` uses `_is_shutdown` guard and returns on repeated calls.

### 3. Shutdown order is correct for dispatcher safety

- Dispatcher is stopped before task cancellation and DDS entity teardown.
- Service-level `close()` is used for logical cleanup only.

### 4. Context-level service close failures are contained

- `DDSContext.shutdown()` catches/logs service `close()` exceptions and continues teardown.

## Open Findings (Not Yet Fully Handled)

### 1. Provider `on_terminal` exceptions can skip provider session cleanup

In `CommandProviderSession.run()` finalization, `await self._provider.on_terminal(self)` executes before:

- provider instance disposal
- active-session map removal

If `on_terminal()` raises, disposal and map cleanup may be skipped for that session.

Risk:

- lingering `_active_sessions` entries
- missed instance disposal
- shutdown path inconsistencies under hook failure

### 2. `run_until_shutdown()` can double-start already-started services

`DDSContext.run_until_shutdown()` currently creates a new task for every service exposing `_run()` without checking whether a prior `start()` already created a live task.

Risk:

- duplicate reader loops for services that were manually started
- hard-to-debug duplicated processing

### 3. Provider `close()` can abort early on non-cancel exception from `_run` task await

`CommandProvider.close()` cancels `_task` and only handles `asyncio.CancelledError` when awaiting it.
If awaiting `_task` raises a different exception, active-session fail/cleanup logic below may not execute in that `close()` call.

Risk:

- incomplete fail-on-shutdown behavior for active sessions
- reduced cleanup resilience after reader-loop failure

## Suggested Fixes

### A. Harden provider session finalization

Wrap provider `on_terminal` in `try/except` in the `finally` block, and always run disposal and `_active_sessions.pop(...)` afterward.

Suggested shape:

1. `try: await on_terminal(...)`
2. `except Exception: log`
3. always dispose instances
4. always remove session from active map

### B. Prevent double-start in `run_until_shutdown()`

Before creating a task for `_run()`, check whether `_task` exists and is still running.

Suggested guard:

- start only when `_task is None` or `_task.done()`

### C. Make provider `close()` resilient to non-cancel task failures

When awaiting canceled `_task`, catch generic exceptions (log and continue) so active sessions are still failed and awaited.

## Test Gaps to Add

1. Provider hook isolation test:

- Provider subclass whose `on_terminal()` raises.
- Assert session still disposes and is removed from `_active_sessions`.

2. Lifecycle double-start guard test:

- Call `service.start()` and then `ctx.run_until_shutdown()`.
- Assert only one `_run()` task loop executes.

3. Provider close resilience test:

- Force `_run()` task to fail with non-cancel exception.
- Assert `close()` still proceeds to fail/await active sessions.

## Priority

- High: provider `on_terminal` finalization hardening
- High: double-start guard in `run_until_shutdown()`
- Medium: provider `close()` robustness for non-cancel task exceptions

## Notes

- Findings are based on code-path verification in runtime implementation, not architecture docs alone.
- Consumer exception isolation is in better shape than provider finalization paths.