# UMAA Type Validation

> Generic recursive message validator matching the C++ `UmaaDataTypeValidator` + `isMessageValid()` pattern.
>
> **Last updated:** 2026-03-25

---

## Background

The C++ reference SDK validates every incoming command and outgoing report by walking through each message member and checking:

- **Scalar ranges** — `Angle ∈ [-π, π]`, `DateTimeNanoseconds ∈ [0, 999999999]`, etc.
- **Optional fields** — skip if absent, validate inner value if present
- **Enum values** — member of the defined enumeration
- **Union/variant types** — validate the active discriminator branch
- **Nested structs** — recurse into sub-structures until leaf scalars are reached

The C++ implementation uses two classes:
1. **`UmaaDataTypeValidator`** — 109 hand-coded `is*Valid()` methods (1,453 lines) for leaf UMAA types
2. **`isMessageValid()`** — per-service method that calls the validator for each message field

### Python Advantage

Python has runtime type introspection (`dataclasses.fields()`, `typing.get_type_hints()`, union `__annotations__`), so we can replace all 109 hand-coded methods + all per-service `isMessageValid()` implementations with **one generic recursive function** that walks any UMAA type automatically.

---

## Architecture

```
tools/
  generate_field_ranges.py     # One-shot generator: IDL → field_ranges.py

rtiumaapy/
  validation.py                # Generic recursive validator
  field_ranges.py              # Auto-generated: (struct, member) → (min, max) mapping
```

### Data Flow

```
IDL source files                    Runtime sample
(datamodel/umaa/idl/)               (e.g. GlobalVectorCommandType instance)
        │                                    │
        ▼                                    ▼
tools/generate_field_ranges.py      validate_message(sample)
        │                                    │
        ▼                                    │ looks up ranges from
rtiumaapy/field_ranges.py  ◄─────────────────┘
(static dict)                        walks fields via dataclasses/typing
```

---

## Phase V1: IDL Parser + Range Table

**Goal:** Parse all IDL files to build a mapping from `(fully_qualified_struct, member_name)` → `IDL_typedef_name`, then join with the `*_MIN/*_MAX` constants already exposed in generated Python modules to produce a static range lookup table.

### Why IDL Parsing?

Python typedef aliases collapse to primitives at runtime — `Angle` becomes `float`, `DateTimeSeconds` becomes `int`. We can't distinguish `seconds: int` (has range `[-9223372036854775807, 9223372036854775807]`) from a plain `int` just from the type hint. The IDL source preserves the original typedef:

```idl
struct DateTime {
    DateTimeSeconds seconds;      ← typedef double with MIN/MAX
    DateTimeNanoseconds nanoseconds;  ← typedef with MIN/MAX
};
```

### Deliverables

| File | Description |
|------|-------------|
| `tools/generate_field_ranges.py` | Scans `datamodel/umaa/idl/UMAA/` for struct definitions; resolves each member's typedef; joins with `*_MIN/*_MAX` constants from generated Python modules; outputs `field_ranges.py` |
| `rtiumaapy/field_ranges.py` | Auto-generated dict: `FIELD_RANGES: Dict[Tuple[str, str], Tuple[float, float]]` mapping `("UMAA::Common::Measurement::DateTime", "seconds")` → `(-9223372036854775807, 9223372036854775807)` |

### IDL Parsing Strategy

The generator needs to:

1. **Collect all `const` MIN/MAX pairs** from IDL files — these define typedef ranges:
   ```idl
   const double Angle_MIN = -3.14159;
   const double Angle_MAX =  3.14159;
   typedef double Angle;
   ```
   Result: `{"Angle": (-3.14159, 3.14159)}`

2. **Collect all `typedef` aliases** — some types alias others:
   ```idl
   typedef Angle HeadingTrueNorth;  // inherits Angle's range
   ```
   Result: `{"HeadingTrueNorth": (-3.14159, 3.14159)}` (resolved transitively)

3. **Parse all `struct` member declarations** — extract member name + typedef:
   ```idl
   struct DateTime {
       DateTimeSeconds seconds;
       DateTimeNanoseconds nanoseconds;
   };
   ```
   Result: `("UMAA::Common::Measurement::DateTime", "seconds")` → `"DateTimeSeconds"` → range lookup

4. **Handle `@optional`** — note which members are optional (for skip-if-None logic in V2)

5. **Output** the joined table as `field_ranges.py`.

### Range Scope

From the generated Python modules:
- **79 MIN constants** + **74 MAX constants** in `Measurements.py`
- **1 MIN/MAX pair** in `MeasurementConstrainedTypes.py`
- Additional constants in other modules (enumerations, orientations, speeds)
- Types with only MIN (no MAX) get `(min, float('inf'))` — e.g., `DistanceAGL ≥ 0`
- Types with only MAX (no MIN) get `(float('-inf'), max)` — rare

### Validation

- Cross-reference output against C++ `UmaaDataTypeValidator.hpp` (109 methods) to ensure coverage parity
- Count of mapped ranges should be ≥ 80 (matching the ~80 typedef range pairs in IDL)

---

## Phase V2: Generic Recursive Validator

**Goal:** A single `validate_message(sample)` function that validates any UMAA message by walking the type tree.

### API

```python
from rtiumaapy.validation import validate_message

# Returns (is_valid, errors)
valid, errors = validate_message(sample)
# valid: bool
# errors: List[str]  e.g. ["direction.direction: -7.0 out of range [-6.28, 6.28]"]
```

### Walk Algorithm

```python
def validate_message(sample, _path="", _errors=None) -> Tuple[bool, List[str]]:
    """Validate all fields of a UMAA message recursively."""
    errors = _errors if _errors is not None else []
    struct_type = type(sample)
    idl_type_name = _get_idl_type_name(struct_type)  # from @idl.struct type_annotations

    for field in dataclasses.fields(struct_type):
        value = getattr(sample, field.name)
        hint = typing.get_type_hints(struct_type)[field.name]
        field_path = f"{_path}.{field.name}" if _path else field.name

        # Optional: skip None
        if _is_optional(hint) and value is None:
            continue

        # Unwrap Optional[T] → T
        inner_type = _unwrap_optional(hint) if _is_optional(hint) else hint

        # Scalar with range → bounds check
        range_key = (idl_type_name, field.name)
        if range_key in FIELD_RANGES:
            lo, hi = FIELD_RANGES[range_key]
            if not (lo <= value <= hi):
                errors.append(f"{field_path}: {value} out of range [{lo}, {hi}]")
            continue

        # Enum → valid member check
        if isinstance(inner_type, type) and issubclass(inner_type, enum.Enum):
            if not isinstance(value, inner_type):
                errors.append(f"{field_path}: {value!r} is not a valid {inner_type.__name__}")
            continue

        # Union → validate active branch value
        if _is_union_type(inner_type):
            validate_message(value.value, _path=field_path, _errors=errors)
            continue

        # Nested struct → recurse
        if dataclasses.is_dataclass(inner_type):
            validate_message(value, _path=field_path, _errors=errors)
            continue

        # Primitives without range (bool, str, bytes, sequences) → skip

    return len(errors) == 0, errors
```

### Type Detection Helpers

| Check | Method |
|-------|--------|
| Optional | `typing.get_origin(hint) is typing.Union` and `NoneType in typing.get_args(hint)` |
| Enum | `issubclass(inner_type, enum.Enum)` |
| Union (IDL) | `hasattr(inner_type, 'discriminator')` in `__annotations__` |
| Struct | `dataclasses.is_dataclass(inner_type)` |
| Scalar with range | `(idl_type_name, field.name) in FIELD_RANGES` |

### Caching

- `_get_idl_type_name()` result cached per class via `functools.lru_cache`
- `FIELD_RANGES` is a plain dict — O(1) lookup
- `typing.get_type_hints()` cached by Python internally
- No per-call allocations except the error list

### Edge Cases

| Case | Handling |
|------|----------|
| Field with MIN only (no MAX) | Range stored as `(min, float('inf'))` |
| Field with MAX only (no MIN) | Range stored as `(float('-inf'), max)` |
| Sequence members (e.g., `list[FinSpecsType]`) | Iterate and validate each element |
| String length bounds (`@bound(1023)`) | Check `len(value) <= bound` — extract from `member_annotations` |
| `source`, `destination`, `sessionID` fields | Validated as nested structs (IdentifierType / NumericGUID) |
| Circular types | Not present in UMAA IDL; no cycle detection needed |

---

## Phase V3: Integration

**Goal:** Wire `validate_message` into the SDK base classes so validation happens automatically on both sides, matching C++.

### Command Provider Side

Change the default `CommandProvider.validate_command()` from accept-all to auto-validate:

```python
# command_provider.py — base class
async def validate_command(self, command):
    """Default: validate all fields per UMAA IDL constraints."""
    valid, errors = validate_message(command)
    if not valid:
        return False, "; ".join(errors)
    return True, ""
```

Subclasses can override for additional domain-specific logic (e.g., `ObjectiveExecutorControlServiceProvider` checks objective references).

### Report Provider Side

Validate outgoing reports before publishing:

```python
# report_provider.py
def write(self, report):
    """Publish a report sample, validating fields first."""
    valid, errors = validate_message(report)
    if not valid:
        logger.warning("Report validation failed: %s", "; ".join(errors))
        # Still publish — log warning but don't block (matches C++ behavior)
    self._writer.write(report)
```

### Report Consumer Side

Validate incoming reports before delivering to callbacks:

```python
# report_consumer.py — in _run()
async for data in self._reader.take_async():
    valid, errors = validate_message(data)
    if not valid:
        logger.warning("Received invalid report: %s", "; ".join(errors))
        # Still deliver — log warning but don't drop (matches C++ behavior)
    await self.on_report(data)
```

### Command Consumer Side

Validate incoming ack/status/exec_status:

```python
# command_consumer.py — in status/ack/exec_status handlers
valid, errors = validate_message(sample)
if not valid:
    logger.warning("Received invalid %s: %s", sample_kind, "; ".join(errors))
```

### Autopilot Example

Remove explicit `validate_command` overrides from the `_AP*Provider` classes — the base class default now handles it:

```python
# Before (current)
class _APGlobalVectorProvider(GlobalVectorControlProvider):
    async def validate_command(self, command):
        return True, ""  # ← placeholder

# After
class _APGlobalVectorProvider(GlobalVectorControlProvider):
    # validate_command inherited from base — auto-validates via validate_message()
```

---

## Phase V4: Tests

**Goal:** Comprehensive validation tests covering all type categories.

### Test File: `tests/test_validation.py`

| Test | Description |
|------|-------------|
| `test_valid_datetime` | DateTime with valid seconds/nanoseconds passes |
| `test_invalid_datetime_seconds` | DateTime with seconds out of range fails with specific error |
| `test_invalid_datetime_nanoseconds` | DateTime with nanoseconds < 0 or > 999999999 fails |
| `test_valid_global_vector_command` | Fully populated GlobalVectorCommandType passes |
| `test_invalid_direction_range` | Direction heading out of `[-2π, 2π]` fails |
| `test_invalid_speed_range` | Speed out of `[-299792458, 299792458]` fails |
| `test_optional_none_skipped` | Optional field set to `None` does not produce errors |
| `test_optional_present_validated` | Optional field with value is validated |
| `test_optional_present_invalid` | Optional field with out-of-range value fails |
| `test_enum_valid` | Valid enum member passes |
| `test_enum_invalid` | Invalid enum value fails |
| `test_union_active_branch_validated` | Union variant's active branch validated recursively |
| `test_nested_struct_recursion` | Error path shows full dotted path (e.g., `direction.direction`) |
| `test_multiple_errors_collected` | Multiple invalid fields produce multiple error strings |
| `test_report_type_validated` | HealthReportType / LogReportType validation works |
| `test_boundary_values` | Values exactly at MIN and MAX pass |
| `test_min_only_range` | Types with only MIN (e.g., `DistanceAGL ≥ 0`) accept large values |
| `test_field_ranges_coverage` | Assert `len(FIELD_RANGES) >= 80` (matches typedef count) |

### Test File: `tests/test_validation_integration.py`

| Test | Description |
|------|-------------|
| `test_command_provider_rejects_invalid` | Send command with invalid field → FAILED(VALIDATION_FAILED) |
| `test_command_provider_accepts_valid` | Send valid command → COMMANDED (state advances) |
| `test_report_provider_warns_invalid` | Write invalid report → warning logged, still published |
| `test_report_consumer_warns_invalid` | Receive invalid report → warning logged, callback still fires |

---

## Phase Summary

| Phase | Deliverable | Status |
|-------|-------------|--------|
| **V1** | `tools/generate_field_ranges.py` → `rtiumaapy/field_ranges.py` | |
| **V2** | `rtiumaapy/validation.py` — generic recursive validator | |
| **V3** | Integration into base classes + autopilot cleanup | |
| **V4** | `tests/test_validation.py` + `tests/test_validation_integration.py` | |

---

## Design Decisions

| # | Decision | Rationale |
|---|----------|-----------|
| D1 | Parse IDL source for field→typedef mapping | Python typedefs collapse to `int`/`float` at runtime; IDL preserves original type names needed for range lookup |
| D2 | Single generic recursive function (not 109 hand-coded methods) | Python runtime introspection makes this possible; eliminates maintenance burden |
| D3 | Validate on both sides (provider + consumer) | Matches C++ reference SDK behavior |
| D4 | Commands: reject on validation failure | Per UMAA ICD §4.1.4 — VALIDATION_FAILED reason |
| D5 | Reports: warn but don't drop | Matches C++ behavior — log and continue |
| D6 | Cache type metadata, not per-call recomputation | `lru_cache` on IDL type name resolution; `FIELD_RANGES` is static dict |
| D7 | Auto-generated range table (not hand-coded) | Eliminates human error; regenerated when IDL changes |
| D8 | Subclasses can override `validate_command` | Domain-specific validation (e.g., objective references) layers on top of field validation |

---

## C++ Parity Reference

| C++ Component | Python Equivalent | Lines (C++) | Lines (Python, est.) |
|---------------|-------------------|-------------|---------------------|
| `UmaaDataTypeValidator.hpp/.cpp` | `field_ranges.py` (auto-gen) + `validation.py` | 2,593 | ~200 |
| Per-service `isMessageValid()` | Eliminated — generic walker handles all | ~50/service × ~20 services = ~1,000 | 0 |
| `UmaaMessageValidator<T>` interface | Not needed — duck typing | 36 | 0 |
| `ControlService::isMessageValid` | `CommandProvider.validate_command` default | ~10/service | 4 (base class) |
| `StatusService::isMessageValid` | `ReportProvider.write` / `ReportConsumer._run` | ~10/service | 4 (base class) |
| **Total** | | ~3,600+ | ~210 |
