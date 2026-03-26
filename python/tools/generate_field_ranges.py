#!/usr/bin/env python3
"""Generate field range table from UMAA IDL files.

Scans all IDL files under datamodel/umaa/idl/UMAA/ to extract:
- const TYPE NAME_MIN/MAX = value; pairs (typedef ranges)
- struct member declarations with their type references

Then joins them to produce a static lookup table mapping
(struct_fqn, member_name) -> (min, max) for numeric range validation.

Usage:
    python -m tools.generate_field_ranges     # from python/ directory
    python tools/generate_field_ranges.py     # direct invocation

Output:
    rtiumaapy/field_ranges.py
"""

from __future__ import annotations

import re
import sys
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple, Union

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------

IDL_DIR = (
    Path(__file__).resolve().parent.parent.parent
    / "datamodel"
    / "umaa"
    / "idl"
    / "UMAA"
)
OUTPUT_FILE = (
    Path(__file__).resolve().parent.parent / "rtiumaapy" / "field_ranges.py"
)

# ---------------------------------------------------------------------------
# Regex patterns
# ---------------------------------------------------------------------------

# const double TypeName_MIN = value;
RE_CONST = re.compile(
    r"const\s+(double|long\s+long|long|unsigned\s+long\s+long|unsigned\s+long)"
    r"\s+(\w+)_(MIN|MAX)\s*=\s*(.+?)\s*;"
)

# typedef double TypeName;  (optional trailing [N] for arrays)
RE_TYPEDEF = re.compile(
    r"typedef\s+(?:double|long\s+long|long|unsigned\s+long\s+long|unsigned\s+long|"
    r"octet|char|string(?:<\d+>)?|boolean)\s+"
    r"(\w+)\s*(?:\[.*?\])?\s*;"
)

# Struct member: [@optional] [@key] UMAA::X::Y::Type memberName;
RE_MEMBER = re.compile(
    r"(?:@\w+\s+)*((?:UMAA(?:::\w+)+|\w+))\s+(\w+)\s*;"
)

# ---------------------------------------------------------------------------
# Collected data
# ---------------------------------------------------------------------------

_const_min: Dict[str, Union[int, float]] = {}
_const_max: Dict[str, Union[int, float]] = {}
struct_members: Dict[str, List[Tuple[str, str, bool]]] = {}


# ---------------------------------------------------------------------------
# Parsing helpers
# ---------------------------------------------------------------------------


def _parse_const_value(idl_type: str, value_str: str) -> Union[int, float]:
    """Parse a const value string to int or float based on IDL type."""
    s = value_str.strip()
    if "long" in idl_type:
        # Use int() directly to avoid float precision loss for large values
        try:
            return int(s)
        except ValueError:
            return int(float(s))
    return float(s)


def _skip_line(stripped: str) -> bool:
    """Return True if the line should be skipped (blank/comment/preprocessor)."""
    if not stripped:
        return True
    if stripped.startswith("#") or stripped.startswith("//"):
        return True
    if stripped.startswith("/*") or stripped.startswith("*") or stripped.startswith("*/"):
        return True
    return False


# ---------------------------------------------------------------------------
# IDL file parser
# ---------------------------------------------------------------------------


def parse_idl_file(path: Path) -> None:
    """Parse a single IDL file, extracting const ranges and struct members."""
    lines = path.read_text().splitlines()

    module_stack: List[str] = []
    context_stack: List[str] = []  # "module" | "struct" | "other"
    pending: Optional[str] = None  # what the next '{' opens
    pending_name: str = ""
    current_struct_fqn: str = ""
    next_optional: bool = False

    def current_module_fqn() -> str:
        return "::".join(module_stack)

    def in_struct() -> bool:
        return bool(context_stack) and context_stack[-1] == "struct"

    def at_module_level() -> bool:
        return not context_stack or context_stack[-1] == "module"

    for raw_line in lines:
        stripped = raw_line.strip()
        if _skip_line(stripped):
            continue

        # --- Handle standalone '{' (resolves pending declarations) ----------
        if stripped == "{":
            if pending == "module":
                module_stack.append(pending_name)
                context_stack.append("module")
            elif pending == "struct":
                current_struct_fqn = (
                    f"{current_module_fqn()}::{pending_name}"
                )
                struct_members.setdefault(current_struct_fqn, [])
                context_stack.append("struct")
            elif pending == "other":
                context_stack.append("other")
            else:
                context_stack.append("other")
            pending = None
            continue

        # --- Handle standalone '};' ----------------------------------------
        if stripped in ("};", "}"):
            if context_stack:
                level = context_stack.pop()
                if level == "module" and module_stack:
                    module_stack.pop()
            pending = None
            next_optional = False
            continue

        # --- Detect declarations (only at module level, not in struct/other) -
        if not in_struct() and pending is None and at_module_level():
            # Module
            m = re.match(r"\s*module\s+(\w+)", stripped)
            if m:
                if "{" in stripped:
                    module_stack.append(m.group(1))
                    context_stack.append("module")
                else:
                    pending = "module"
                    pending_name = m.group(1)
                continue

            # Struct (but not union — avoid matching 'struct' in error)
            m = re.match(r"(?:@\w+\s+)*struct\s+(\w+)", stripped)
            if m and not re.match(r"(?:@\w+\s+)*union\s", stripped):
                if "{" in stripped:
                    current_struct_fqn = (
                        f"{current_module_fqn()}::{m.group(1)}"
                    )
                    struct_members.setdefault(current_struct_fqn, [])
                    context_stack.append("struct")
                else:
                    pending = "struct"
                    pending_name = m.group(1)
                continue

            # Union or enum — skip their bodies
            if re.match(r"(?:@\w+\s+)*(?:union|enum)\s", stripped):
                if "{" in stripped:
                    context_stack.append("other")
                else:
                    pending = "other"
                continue

        # --- Content processing based on current context --------------------
        if in_struct():
            has_opt = "@optional" in stripped
            m = RE_MEMBER.search(stripped)
            if m:
                type_ref = m.group(1)
                member_name = m.group(2)
                is_opt = has_opt or next_optional
                struct_members[current_struct_fqn].append(
                    (member_name, type_ref, is_opt)
                )
                next_optional = False
            elif has_opt:
                # @optional on its own line before the member
                next_optional = True
            else:
                next_optional = False

        elif at_module_level():
            # Consts
            m = RE_CONST.search(stripped)
            if m:
                idl_type, name, bound, value_str = m.groups()
                fqn = f"{current_module_fqn()}::{name}"
                val = _parse_const_value(idl_type, value_str)
                if bound == "MIN":
                    _const_min[fqn] = val
                else:
                    _const_max[fqn] = val

            # Typedefs (tracked for stats)
            m = RE_TYPEDEF.search(stripped)
            if m:
                pass  # not needed for range table but could be useful

        # else: inside "other" (union/enum) — skip


# ---------------------------------------------------------------------------
# Resolution
# ---------------------------------------------------------------------------


def _resolve_type_ref(struct_fqn: str, type_ref: str) -> str:
    """Resolve a type reference to a fully qualified IDL name."""
    if "::" in type_ref:
        return type_ref
    # Local reference — prepend the struct's enclosing module
    module = struct_fqn.rsplit("::", 1)[0]
    return f"{module}::{type_ref}"


def build_field_ranges() -> (
    Dict[Tuple[str, str], Tuple[Union[int, float], Union[int, float]]]
):
    """Build the (struct_fqn, member_name) -> (min, max) lookup table."""
    # Merge const MIN/MAX into typedef ranges
    typedef_ranges: Dict[
        str, Tuple[Union[int, float], Union[int, float]]
    ] = {}
    all_names = set(_const_min.keys()) | set(_const_max.keys())
    for fqn in sorted(all_names):
        lo = _const_min.get(fqn, float("-inf"))
        hi = _const_max.get(fqn, float("inf"))
        typedef_ranges[fqn] = (lo, hi)

    # Join struct members with typedef ranges
    field_ranges: Dict[
        Tuple[str, str], Tuple[Union[int, float], Union[int, float]]
    ] = {}
    for struct_fqn, members in struct_members.items():
        for member_name, type_ref, _is_optional in members:
            resolved = _resolve_type_ref(struct_fqn, type_ref)
            if resolved in typedef_ranges:
                field_ranges[(struct_fqn, member_name)] = typedef_ranges[
                    resolved
                ]

    return field_ranges


# ---------------------------------------------------------------------------
# Output
# ---------------------------------------------------------------------------


def _format_value(v: Union[int, float]) -> str:
    """Format a range bound for Python source output."""
    if v == float("inf"):
        return "float('inf')"
    if v == float("-inf"):
        return "float('-inf')"
    return repr(v)


def write_output(
    field_ranges: Dict[
        Tuple[str, str], Tuple[Union[int, float], Union[int, float]]
    ],
) -> None:
    """Write the generated field_ranges.py file."""
    lines = [
        '"""Auto-generated field range table from UMAA IDL files.',
        "",
        "DO NOT EDIT — regenerate with: python -m tools.generate_field_ranges",
        '"""',
        "",
        "from __future__ import annotations",
        "",
        "from typing import Dict, Tuple, Union",
        "",
        "NumericRange = Tuple[Union[int, float], Union[int, float]]",
        "",
        "# (struct_fqn, member_name) -> (min_value, max_value)",
        "FIELD_RANGES: Dict[Tuple[str, str], NumericRange] = {",
    ]

    prev_struct = None
    for key in sorted(field_ranges.keys()):
        struct_fqn, member = key
        if struct_fqn != prev_struct:
            if prev_struct is not None:
                lines.append("")
            lines.append(f"    # {struct_fqn}")
            prev_struct = struct_fqn
        lo, hi = field_ranges[key]
        lo_s, hi_s = _format_value(lo), _format_value(hi)
        lines.append(
            f'    ("{struct_fqn}", "{member}"): ({lo_s}, {hi_s}),'
        )

    lines.append("}")
    lines.append("")

    OUTPUT_FILE.write_text("\n".join(lines))


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------


def main() -> None:
    if not IDL_DIR.is_dir():
        print(f"ERROR: IDL directory not found: {IDL_DIR}", file=sys.stderr)
        sys.exit(1)

    # Parse all IDL files
    idl_files = sorted(IDL_DIR.rglob("*.idl"))
    for f in idl_files:
        parse_idl_file(f)

    # Build and write
    field_ranges = build_field_ranges()
    write_output(field_ranges)

    # Stats
    typedef_count = len(set(_const_min.keys()) | set(_const_max.keys()))
    struct_count = len(struct_members)
    entry_count = len(field_ranges)
    print(f"Parsed {len(idl_files)} IDL files")
    print(f"Found {typedef_count} typedef ranges, {struct_count} structs")
    print(f"Generated {entry_count} field range entries -> {OUTPUT_FILE}")


if __name__ == "__main__":
    main()
