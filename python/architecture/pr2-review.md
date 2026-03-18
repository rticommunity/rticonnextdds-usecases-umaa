# PR 2 Code Review — DDSContext + BaseService

> Reviewed: 2026-03-18
> Status: **All 86 tests passing** (PR 1 + PR 2)

---

## Files Changed

| File | Role |
|---|---|
| `rtiumaapy/dds_context.py` | DDSContext singleton — participant, QoS, topics, registry, factories, lifecycle |
| `rtiumaapy/base_service.py` | BaseService ABC — auto-registration, abstract `close()` |
| `rtiumaapy/__init__.py` | Added `DDSContext`, `BaseService` exports |
| `tests/conftest.py` | Shared fixtures: `domain_id`, `qos_file`, `dds_context`, `SimpleReport` type |
| `tests/test_dds_context.py` | 29 tests — singleton, properties, topic cache, factories, registry, shutdown |
| `tests/test_base_service.py` | 8 tests — auto-registration, abstract enforcement, close lifecycle, `run_until_shutdown` |
| `pyproject.toml` | `requires-python` lowered to `>=3.8` (DDS bindings only available on 3.8) |

---

## Issues Found

### Bugs / Correctness

#### 1. `__init__` sets `_instance` before DDS setup can fail
**File:** `dds_context.py` line 72
**Severity:** Bug

If `dds.QosProvider(...)` or `dds.DomainParticipant(...)` throws, `_instance` is already set to `self`, leaving the singleton in a broken state where no new context can be created.

**Fix:** Move `DDSContext._instance = self` to the end of `__init__`, or wrap DDS setup in try/except and roll back on failure.

#### 2. `shutdown()` is not idempotent
**File:** `dds_context.py` `shutdown()` method
**Severity:** Bug (latent)

Calling `shutdown()` twice will crash on `self._participant.close()` the second time (participant already closed). The `conftest.py` fixture calls `shutdown()` in `finally`, and some tests also call it explicitly. Currently no double-call occurs by accident, but it's fragile.

**Fix:** Add a `_shutdown` boolean guard flag. Set it in `shutdown()`, check it at entry.

#### 3. `_default_qos_file()` docstring says "bundled resource" but prefers repo-level file
**File:** `dds_context.py` `__init__` docstring (line 62)
**Severity:** Minor doc bug

The `__init__` docstring says `qos_file` defaults to `resource/umaa_qos_lib.xml`, but the actual `_default_qos_file()` logic prefers `qos/umaa_qos_lib.xml` at the repo root.

**Fix:** Update the docstring to reflect the actual fallback chain.

---

### Style / Consistency

#### 4. `StubServiceWithRun._run` uses `__import__` inline
**File:** `test_base_service.py` lines 37–39

```python
await __import__("asyncio").Event().wait()
except __import__("asyncio").CancelledError:
```

`asyncio` is already available. Replace with normal `import asyncio` at the top and use `asyncio.Event()` / `asyncio.CancelledError` directly.

#### 5. conftest `_QOS_FILE` uses `__import__("pathlib")` instead of normal import
**File:** `conftest.py` lines 37–42

```python
__import__("pathlib").Path(__file__).resolve().parent.parent.parent
```

Replace with `from pathlib import Path` at the top.

#### 6. `rti.types` import at bottom of conftest
**File:** `conftest.py` line 75

`import rti.types as idltypes` is placed below the fixtures with `# noqa: E402`. Move it to the top imports block to follow standard import ordering. The noqa is only needed because of its placement.

#### 7. `from __future__ import annotations` in test files
**Files:** `test_dds_context.py`, `test_base_service.py`

This turns all annotations into strings (PEP 563), which breaks `@rti.types.struct` decorators that inspect field types at class-definition time. It works now only because `SimpleReport` is defined in `conftest.py` (which does NOT have the future import). If a test ever defines an inline `@struct`, it will silently break.

**Recommendation:** Remove `from __future__ import annotations` from test files as a defensive measure.

#### 8. Unused imports in conftest
**File:** `conftest.py`

- `Generator` from `typing` — never used
- `asyncio` — imported but never referenced directly

---

### Design / Simplicity

#### 9. `run_until_shutdown` doesn't restore signal handlers
**File:** `dds_context.py` `run_until_shutdown()`

After `shutdown()` returns, the SIGINT/SIGTERM handlers installed via `add_signal_handler` remain. Fine for production (process exits), but could interfere with test harnesses or a re-create scenario.

**Fix:** Save and restore original handlers in `shutdown()`, or use `loop.remove_signal_handler()`.

#### 10. No `_run` in BaseService ABC
**File:** `base_service.py`

The architecture doc describes `_run()` as abstract in `BaseService`, but the implementation only has `close()` as abstract. `run_until_shutdown()` uses `hasattr(service, "_run")` duck-typing to detect services with a run loop.

Two options:
- **(a)** Add `async def _run(self) -> None: pass` as an optional default in the ABC (no `hasattr` needed)
- **(b)** Keep as-is and document that `_run` is opt-in (current approach)

Option (b) is fine since not every service needs a `_run` loop (e.g. providers that only react to incoming data).

#### 11. Domain ID allocator is global mutable state
**File:** `conftest.py`

`_next_domain_id` global counter works for serial test execution but would collide under `pytest-xdist` parallel workers. Acceptable for now — add a comment noting the limitation.

---

## Action Items

| # | Issue | Priority | Status |
|---|---|---|---|
| 1 | `_instance` set before DDS init can fail | **High** | **Resolved** |
| 2 | `shutdown()` not idempotent | **High** | **Resolved** |
| 3 | `__init__` docstring stale | Low | **Resolved** |
| 4 | `__import__` in `StubServiceWithRun` | Low | **Resolved** |
| 5 | `__import__("pathlib")` in conftest | Low | **Resolved** |
| 6 | `rti.types` import at bottom of conftest | Low | **Resolved** |
| 7 | `from __future__ import annotations` in test files | Medium | **Resolved** |
| 8 | Unused imports in conftest | Low | **Resolved** |
| 9 | Signal handlers not restored | Low | Deferred |
| 10 | `_run` not in ABC (by design) | — | **Resolved** (documented) |
| 11 | Domain ID allocator not xdist-safe | — | **Resolved** — replaced with UUID partition on DomainParticipant |
