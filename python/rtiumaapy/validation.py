"""Generic recursive UMAA message validator.

Validates any UMAA message by walking its type tree and checking:
- Scalar ranges (from the auto-generated FIELD_RANGES table)
- Optional fields (skip if None)
- Enum values (member of the defined enumeration)
- Union/variant types (validate the active branch value)
- Nested structs (recurse)
- Sequences of structs (iterate and validate each element)

Usage::

    from rtiumaapy.validation import validate_message

    valid, errors = validate_message(sample)
    # valid: bool
    # errors: List[str]
"""

from __future__ import annotations

import collections.abc
import dataclasses
import enum
import typing
from functools import lru_cache
from typing import List, Tuple

from rtiumaapy.field_ranges import FIELD_RANGES

# ---------------------------------------------------------------------------
# Type introspection helpers
# ---------------------------------------------------------------------------


@lru_cache(maxsize=512)
def _get_idl_type_name(cls: type) -> str:
    """Return the IDL FQN for a dataclass, e.g. 'UMAA::Common::Measurement::DateTime'."""
    ts = getattr(cls, "type_support", None)
    if ts is not None and hasattr(ts, "type_name"):
        return ts.type_name
    return ""


@lru_cache(maxsize=512)
def _get_type_hints(cls: type) -> dict:
    """Cached wrapper around typing.get_type_hints."""
    return typing.get_type_hints(cls)


def _is_optional(hint: type) -> bool:
    """Check if a type hint is Optional[T] (i.e. Union[T, None])."""
    return (
        typing.get_origin(hint) is typing.Union
        and type(None) in typing.get_args(hint)
    )


def _unwrap_optional(hint: type) -> type:
    """Extract T from Optional[T]."""
    args = typing.get_args(hint)
    return next(t for t in args if t is not type(None))


def _is_union_type(cls: type) -> bool:
    """Check if a dataclass is an IDL union (has discriminator + value fields)."""
    if not (isinstance(cls, type) and dataclasses.is_dataclass(cls)):
        return False
    hints = _get_type_hints(cls)
    return "discriminator" in hints and "value" in hints


def _is_sequence_hint(hint: type) -> bool:
    """Check if a type hint is Sequence[T] or list[T]."""
    origin = typing.get_origin(hint)
    return origin is list or origin is collections.abc.Sequence


def _get_sequence_element_type(hint: type) -> type:
    """Extract T from Sequence[T]."""
    args = typing.get_args(hint)
    return args[0] if args else None


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------


def validate_message(
    sample: object,
    _path: str = "",
    _errors: List[str] = None,
) -> Tuple[bool, List[str]]:
    """Validate all fields of a UMAA message recursively.

    Args:
        sample: A UMAA dataclass instance to validate.
        _path: Internal — dot-delimited field path for error messages.
        _errors: Internal — accumulator for error strings.

    Returns:
        (is_valid, errors) where errors is a list of human-readable strings.
    """
    if _errors is None:
        _errors = []

    sample_type = type(sample)

    # --- Union type: validate the active branch value ---
    if _is_union_type(sample_type):
        _validate_union(sample, _path, _errors)
        return len(_errors) == 0, _errors

    # --- Struct: walk fields ---
    if not dataclasses.is_dataclass(sample_type):
        return len(_errors) == 0, _errors

    idl_name = _get_idl_type_name(sample_type)
    hints = _get_type_hints(sample_type)

    for dc_field in dataclasses.fields(sample_type):
        name = dc_field.name
        value = getattr(sample, name)
        hint = hints.get(name)
        if hint is None:
            continue

        field_path = f"{_path}.{name}" if _path else name

        # Optional: skip None values
        if _is_optional(hint):
            if value is None:
                continue
            inner = _unwrap_optional(hint)
        else:
            inner = hint

        # 1. Scalar with range check
        range_key = (idl_name, name)
        if range_key in FIELD_RANGES:
            lo, hi = FIELD_RANGES[range_key]
            if not (lo <= value <= hi):
                _errors.append(
                    f"{field_path}: {value} out of range [{lo}, {hi}]"
                )
            continue

        # 2. Enum check
        if isinstance(inner, type) and issubclass(inner, enum.Enum):
            if not isinstance(value, inner):
                _errors.append(
                    f"{field_path}: {value!r} is not a valid {inner.__name__}"
                )
            continue

        # 3. Union (IDL) — recurse into the union
        if _is_union_type(inner):
            validate_message(value, _path=field_path, _errors=_errors)
            continue

        # 4. Sequence of struct/union — validate each element
        if _is_sequence_hint(hint) or (
            _is_optional(hints.get(name, hint))
            and _is_sequence_hint(_unwrap_optional(hints.get(name, hint)))
        ):
            elem_type = _get_sequence_element_type(
                inner if _is_sequence_hint(inner) else hint
            )
            if elem_type is not None and isinstance(elem_type, type) and dataclasses.is_dataclass(elem_type):
                for i, elem in enumerate(value):
                    validate_message(
                        elem, _path=f"{field_path}[{i}]", _errors=_errors
                    )
            continue

        # 5. Nested struct — recurse
        if isinstance(inner, type) and dataclasses.is_dataclass(inner):
            validate_message(value, _path=field_path, _errors=_errors)
            continue

        # 6. Primitives without range (bool, str, bytes, int, float) — skip

    return len(_errors) == 0, _errors


def _validate_union(
    union_sample: object, path: str, errors: List[str]
) -> None:
    """Validate the active branch of an IDL union."""
    value = getattr(union_sample, "value", None)
    if value is None:
        return

    value_type = type(value)

    # If the branch value is a dataclass, recurse
    if dataclasses.is_dataclass(value_type):
        validate_message(value, _path=path, _errors=errors)
    elif isinstance(value, enum.Enum):
        pass  # Enum branch — valid by construction
    # else: primitive branch — no range check available at union level
