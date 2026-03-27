# PR Commit Plan — py_sdk Branch

> **Created:** 2026-03-25  
> **Branch:** `py_sdk`  
> **Last committed:** `a2b71ff1` — PR 3: ReportProvider + ReportConsumer, generated Python datamodel  
> **Status:** Pre-release in progress — V4 validation tests done, packaging/docs remaining

---

## Overview

Three commits on top of the existing PR 3 commit, pushed to `origin/py_sdk`:

| # | Commit | Scope | Description |
|---|--------|-------|-------------|
| **1** | PR 4: CommandProvider + CommandConsumer | SDK core | Full ICD command state machine (Tier 0) |
| **2** | Pre-release v0.1.0 | Service library + autopilot + docs | 350 service classes, autopilot example, architecture docs |
| **3** | Validation feature (V1–V4) | IDL validator + integration | Generic recursive validator with range table + tests |

---

## Commit 1: PR 4 — CommandProvider + CommandConsumer

The Tier 0 command state machine: provider session lifecycle, consumer send/update, ack/status round-trips, rejection, cancellation, crash detection.

### New files

```
python/rtiumaapy/command_provider.py          # CommandProvider base class
python/rtiumaapy/command_provider_session.py   # Session state machine + enums
python/rtiumaapy/command_consumer.py           # CommandConsumer base class
python/tests/test_command_lifecycle.py         # Happy path: send → ISSUED → COMMANDED → EXECUTING → COMPLETED
python/tests/test_command_rejection.py         # validate_command rejection + RESOURCE_REJECTED
python/tests/test_command_ack.py               # Ack round-trip (C37)
python/tests/test_command_cancel.py            # Consumer-initiated cancel
python/tests/test_command_update.py            # Command update (D39)
python/tests/test_command_failure.py           # on_executing raises → FAILED
python/tests/test_command_shutdown.py          # Graceful shutdown during execution
python/tests/test_command_exec_status.py       # Execution status reporting
python/tests/test_command_provider_crash.py    # NOT_ALIVE_NO_WRITERS detection (C29)
python/tests/test_command_consumer_cft.py      # Content-filtered topic for session isolation
python/tests/test_command_disambiguation.py    # Duplicate session disambiguation
```

### Modified files

```
python/rtiumaapy/__init__.py       # Export CommandProvider, CommandConsumer, CommandProviderSession
python/rtiumaapy/errors.py         # CommandHookError, CommandFailedError additions
python/rtiumaapy/base_service.py   # Minor tweaks for command lifecycle hooks
python/rtiumaapy/dds_context.py    # create_filtered_reader(), CFT counter
python/rtiumaapy/timestamp.py      # set_timestamp utility
python/tests/conftest.py           # wait_for_match helper, FakeReportType fixture
python/tests/test_dds_context.py   # Tests for create_filtered_reader
python/tests/test_errors.py        # Tests for new error types
python/tests/test_timestamp.py     # Tests for set_timestamp
python/tests/test_report_consumer.py  # Minor fixture updates
python/tests/test_report_lifecycle.py # Minor fixture updates
```

### Architecture docs (modified)

```
python/architecture/command-services.md    # Updated with final design
python/architecture/base-service.md        # Updated hooks
python/architecture/dds-context.md         # CFT documentation
python/architecture/error-handling.md      # New error types
python/architecture/utilities.md           # set_timestamp
python/architecture/README.md              # Updated index
python/architecture/system-architecture.md # Updated overview
```

### Architecture docs (new)

```
python/architecture/design-concerns.md
python/architecture/design-decisions.md
python/architecture/pr4-issues.md
python/architecture/pr4-review.md
python/architecture/session-state-machine-proposal.md
```

### Excluded from this commit (not part of PR 4)

```
python/architecture/command-state-machine.md   # DELETED — replaced by command-services.md
python/architecture/v1/                        # Old doc versions (reference only, don't commit)
python/c++_ref/                                # C++ reference code (reference only, don't commit)
python/umaa_docs/                              # UMAA spec docs (reference only, don't commit)
python/umaapy-1.1.1/                           # Old package (reference only, don't commit)
python/tests/xtypes_reproducer/                # Bug reproducer (don't commit)
python/tests/pytest_*.txt                      # Test output logs (don't commit)
python/tests/spike_*.py                        # Spike/scratch (don't commit)
python/et                                      # Accidental file (don't commit)
python/leep 120                                # Accidental file (don't commit)
python/rtiumaapy/*.bak                         # Backup files (don't commit)
python/.venv/                                  # Virtual env (don't commit)
```

---

## Commit 2: Pre-release v0.1.0

Service library (350 classes), autopilot example, architecture docs updates, README, pyproject.toml.

### New files

```
python/rtiumaapy/services/__init__.py      # Re-exports all 350 classes
python/rtiumaapy/services/co/__init__.py   # CO domain (42 classes)
python/rtiumaapy/services/eo/__init__.py   # EO domain (58 classes)
python/rtiumaapy/services/mm/__init__.py   # MM domain (70 classes)
python/rtiumaapy/services/mo/__init__.py   # MO domain (18 classes)
python/rtiumaapy/services/sa/__init__.py   # SA domain (66 classes)
python/rtiumaapy/services/sem/__init__.py  # SEM domain (26 classes)
python/rtiumaapy/services/so/__init__.py   # SO domain (70 classes)
python/tests/test_service_library.py       # 1,408 parametrized tests
python/examples/autopilot/__init__.py
python/examples/autopilot/autopilot_component.py   # 18 services, AP* subclasses
python/examples/autopilot/run_autopilot.py          # CLI entry point
python/examples/autopilot/test_peer.py              # Manual test peer
python/tools/generate_services.py                   # Service class generator
python/resource/__init__.py                         # QoS resource package
python/resource/umaa_qos_lib.xml
python/resource/umaapy_qos_lib.xml
```

### Modified files

```
python/pyproject.toml                          # Version 0.1.0, deps
python/README.md                               # Quickstart, installation
python/architecture/implementation-plan.md     # Mark PRs complete, add release section
python/architecture/implementation-gaps.md     # Updated gaps list
python/architecture/large-list-services.md     # Minor updates
python/architecture/large-set-services.md      # Minor updates
python/architecture/report-services.md         # Minor updates
```

---

## Commit 3: Validation Feature (V1–V4)

Generic recursive UMAA message validator — IDL-parsed range table, recursive walker, base class integration, comprehensive tests.

### New files

```
python/tools/generate_field_ranges.py          # IDL parser → field_ranges.py
python/rtiumaapy/field_ranges.py               # Auto-generated: 607 (struct, member) → (min, max) entries
python/rtiumaapy/validation.py                 # validate_message() — generic recursive validator
python/tests/test_validation.py                # 37 unit tests (scalars, optional, nested, enum, union, sequence, ranges, coverage)
python/tests/test_validation_integration.py    # 4 DDS integration tests (command reject/accept, report warn)
python/architecture/validation.md              # Full design doc (V1–V4 plan)
```

### Modified files (V3 integration)

```
python/rtiumaapy/command_provider.py    # validate_command() default calls validate_message()
python/rtiumaapy/report_provider.py     # write() validates + warns
python/rtiumaapy/report_consumer.py     # _run() validates + warns
python/rtiumaapy/command_consumer.py    # reader loops validate + warn
```

> **Note:** The 4 modified files above are new in Commit 1 (PR 4), so Commit 3 modifies
> files that Commit 1 introduces. The validation import + logic is added on top.

---

## Files NOT committed (add to .gitignore or leave untracked)

| Path | Reason |
|------|--------|
| `python/.venv/` | Virtual environment |
| `python/c++_ref/` | C++ reference (local dev only) |
| `python/umaa_docs/` | UMAA spec documents (not redistributable) |
| `python/umaapy-1.1.1/` | Old package version |
| `python/architecture/v1/` | Archived doc versions |
| `python/tests/xtypes_reproducer/` | Bug reproducer scratch |
| `python/tests/pytest_*.txt` | Test output logs |
| `python/tests/spike_*.py` | Scratch/spike files |
| `python/rtiumaapy/*.bak` | Backup files |
| `python/et`, `python/leep 120` | Accidental files |

---

## Test Counts

| After Commit | Total Tests | New This Commit |
|-------------|-------------|-----------------|
| PR 3 (existing) | 163 | — |
| PR 4 | 163 + new command tests | ~80 command lifecycle tests |
| Pre-release v0.1.0 | ~1,573 | ~1,408 service library tests |
| Validation | ~1,614 | 41 validation tests |
