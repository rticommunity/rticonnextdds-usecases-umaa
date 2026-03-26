#!/usr/bin/env python3
"""Generate pre-wired service classes from the rtiumaapy.datamodel modules.

Scans the generated datamodel directory for CommandType, AckReportType,
CommandStatusType, ExecutionStatusReportType, and ReportType files, then
produces one __init__.py per UMAA domain under rtiumaapy/services/.

Usage:
    python -m tools.generate_services          # from python/ directory
    python tools/generate_services.py          # direct invocation
"""

from __future__ import annotations

import os
import re
import sys
from collections import defaultdict
from pathlib import Path
from typing import Dict, List, NamedTuple, Optional, Set, Tuple

# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------

DATAMODEL_DIR = Path(__file__).resolve().parent.parent / "rtiumaapy" / "datamodel"
SERVICES_DIR = Path(__file__).resolve().parent.parent / "rtiumaapy" / "services"

# Stems to skip — nested data types without ack/status triplets
SKIP_STEMS = {"Fin", "Propulsor"}

# Domain display names
DOMAIN_NAMES = {
    "CO": "Common Operations",
    "EO": "Engineering/Operations",
    "MM": "Mission Management",
    "MO": "Maneuver/Operations",
    "SA": "Situational Awareness",
    "SEM": "Sensors",
    "SO": "System Operations",
}

# Config command stems — these use {Stem}AckReportType instead of
# {Stem}CommandAckReportType
CONFIG_STEMS = {
    "BITConfig",
    "CommsChannelAddMessageConfig",
    "CommsChannelDeleteMessageConfig",
    "CommsChannelPowerConfig",
    "ContactFilterConfig",
    "EmitterPresetConfig",
    "GlobalPoseConfig",
    "MessageFilterConfig",
    "SASConfig",
}

# Stems that have ExecutionStatusReportType
EXEC_STATUS_STEMS = {
    "BIT",
    "FreeFloat",
    "GlobalDrift",
    "GlobalHover",
    "GlobalVector",
    "GlobalWaypoint",
    "ObjectiveExecutor",
    "PrimitiveDriver",
}


# ---------------------------------------------------------------------------
# Data structures
# ---------------------------------------------------------------------------


class TypeInfo(NamedTuple):
    """Info extracted from a generated datamodel module."""

    file_stem: str  # e.g. "EngineCommandType"
    class_name: str  # e.g. "UMAA_EO_EngineControl_EngineCommandType"
    domain: str  # e.g. "EO"
    module: str  # e.g. "EngineControl"


class CommandFamily(NamedTuple):
    stem: str
    domain: str
    module: str
    command: TypeInfo
    ack: TypeInfo
    status: TypeInfo
    exec_status: Optional[TypeInfo]
    is_config: bool


class ReportFamily(NamedTuple):
    stem: str
    domain: str
    module: str
    report: TypeInfo


# ---------------------------------------------------------------------------
# Scanning
# ---------------------------------------------------------------------------


def scan_type(file_stem: str) -> Optional[TypeInfo]:
    """Read a datamodel .py file and extract the UMAA_ class name + domain/module."""
    filepath = DATAMODEL_DIR / f"{file_stem}.py"
    if not filepath.exists():
        return None
    text = filepath.read_text()
    m = re.search(r"class (UMAA_(\w+?)_(\w+?)_" + re.escape(file_stem) + r")\b", text)
    if not m:
        return None
    return TypeInfo(
        file_stem=file_stem,
        class_name=m.group(1),
        domain=m.group(2),
        module=m.group(3),
    )


def scan_all() -> Tuple[List[CommandFamily], List[ReportFamily]]:
    """Scan datamodel directory and return command families + report families."""
    files = sorted(
        f[:-3]
        for f in os.listdir(DATAMODEL_DIR)
        if f.endswith(".py") and f != "__init__.py"
    )

    # Categorize
    command_stems = [
        f
        for f in files
        if f.endswith("CommandType")
        and "Ack" not in f
        and "Status" not in f
    ]
    report_stems = [
        f
        for f in files
        if f.endswith("ReportType")
        and "Ack" not in f
        and "ExecutionStatus" not in f
    ]

    # Build command families
    command_families: List[CommandFamily] = []
    for cmd_file in command_stems:
        # Extract bare stem: e.g. "EngineCommandType" -> "Engine"
        stem = cmd_file[: -len("CommandType")]
        if stem in SKIP_STEMS:
            continue

        cmd_info = scan_type(cmd_file)
        if not cmd_info:
            print(f"WARNING: Could not parse {cmd_file}", file=sys.stderr)
            continue

        is_config = stem in CONFIG_STEMS
        if is_config:
            ack_file = f"{stem}AckReportType"
        else:
            ack_file = f"{stem}CommandAckReportType"

        status_file = f"{stem}CommandStatusType"

        ack_info = scan_type(ack_file)
        status_info = scan_type(status_file)

        if not ack_info:
            print(f"WARNING: Missing ack for {stem}: {ack_file}", file=sys.stderr)
            continue
        if not status_info:
            print(f"WARNING: Missing status for {stem}: {status_file}", file=sys.stderr)
            continue

        exec_info = None
        if stem in EXEC_STATUS_STEMS:
            exec_file = f"{stem}ExecutionStatusReportType"
            exec_info = scan_type(exec_file)
            if not exec_info:
                print(
                    f"WARNING: Missing exec status for {stem}: {exec_file}",
                    file=sys.stderr,
                )

        command_families.append(
            CommandFamily(
                stem=stem,
                domain=cmd_info.domain,
                module=cmd_info.module,
                command=cmd_info,
                ack=ack_info,
                status=status_info,
                exec_status=exec_info,
                is_config=is_config,
            )
        )

    # Build report families (exclude ack/exec status reports — those belong to commands)
    ack_report_files = {
        f for f in files if "AckReportType" in f
    }
    exec_report_files = {
        f for f in files if "ExecutionStatusReportType" in f
    }
    # Also exclude CancelConfig status types
    cancel_config_files = {
        f for f in files if "CancelConfig" in f
    }

    report_families: List[ReportFamily] = []
    for rpt_file in report_stems:
        rpt_info = scan_type(rpt_file)
        if not rpt_info:
            print(f"WARNING: Could not parse {rpt_file}", file=sys.stderr)
            continue
        stem = rpt_file[: -len("ReportType")]
        report_families.append(
            ReportFamily(
                stem=stem,
                domain=rpt_info.domain,
                module=rpt_info.module,
                report=rpt_info,
            )
        )

    return command_families, report_families


# ---------------------------------------------------------------------------
# Code generation
# ---------------------------------------------------------------------------


def class_name_for_command(stem: str, is_config: bool, role: str) -> str:
    """Generate the Python class name for a command provider/consumer."""
    suffix = "Provider" if role == "provider" else "Consumer"
    if is_config:
        # Stem already ends with "Config", e.g. "BITConfig" -> "BITConfigProvider"
        return f"{stem}{suffix}"
    else:
        return f"{stem}Control{suffix}"


def class_name_for_report(stem: str, role: str) -> str:
    """Generate the Python class name for a report provider/consumer."""
    return f"{stem}ReportProvider" if role == "provider" else f"{stem}ReportConsumer"


def generate_command_imports(fam: CommandFamily) -> List[str]:
    """Return import lines for a command family."""
    lines = []
    # Command type
    lines.append(
        f"from rtiumaapy.datamodel.{fam.command.file_stem} import ("
    )
    lines.append(f"    {fam.command.class_name},")
    lines.append(f"    {fam.command.class_name}Topic,")
    lines.append(")")
    # Ack type
    lines.append(
        f"from rtiumaapy.datamodel.{fam.ack.file_stem} import ("
    )
    lines.append(f"    {fam.ack.class_name},")
    lines.append(f"    {fam.ack.class_name}Topic,")
    lines.append(")")
    # Status type
    lines.append(
        f"from rtiumaapy.datamodel.{fam.status.file_stem} import ("
    )
    lines.append(f"    {fam.status.class_name},")
    lines.append(f"    {fam.status.class_name}Topic,")
    lines.append(")")
    # Exec status (optional)
    if fam.exec_status:
        lines.append(
            f"from rtiumaapy.datamodel.{fam.exec_status.file_stem} import ("
        )
        lines.append(f"    {fam.exec_status.class_name},")
        lines.append(f"    {fam.exec_status.class_name}Topic,")
        lines.append(")")
    return lines


def generate_command_provider(fam: CommandFamily) -> List[str]:
    """Generate a CommandProvider subclass."""
    cls_name = class_name_for_command(fam.stem, fam.is_config, "provider")
    lines = []
    lines.append("")
    lines.append("")
    lines.append(f"class {cls_name}(CommandProvider):")
    desc = "Config" if fam.is_config else "command"
    lines.append(f'    """{fam.stem} {desc} provider ({fam.domain}::{fam.module})."""')
    lines.append("")
    lines.append(f"    def __init__(self, ctx: DDSContext, *, source_id):")
    lines.append("        super().__init__(")
    lines.append("            ctx,")
    lines.append(f'            service_name="{fam.stem}",')
    lines.append(f"            command_type={fam.command.class_name},")
    lines.append(f"            command_topic={fam.command.class_name}Topic,")
    lines.append(f"            ack_type={fam.ack.class_name},")
    lines.append(f"            ack_topic={fam.ack.class_name}Topic,")
    lines.append(f"            status_type={fam.status.class_name},")
    lines.append(f"            status_topic={fam.status.class_name}Topic,")
    if fam.exec_status:
        lines.append(f"            exec_status_type={fam.exec_status.class_name},")
        lines.append(
            f"            exec_status_topic={fam.exec_status.class_name}Topic,"
        )
    lines.append("            source_id=source_id,")
    lines.append("        )")
    return lines


def generate_command_consumer(fam: CommandFamily) -> List[str]:
    """Generate a CommandConsumer subclass."""
    cls_name = class_name_for_command(fam.stem, fam.is_config, "consumer")
    lines = []
    lines.append("")
    lines.append("")
    lines.append(f"class {cls_name}(CommandConsumer):")
    desc = "Config" if fam.is_config else "command"
    lines.append(f'    """{fam.stem} {desc} consumer ({fam.domain}::{fam.module})."""')
    lines.append("")
    lines.append(
        f"    def __init__(self, ctx: DDSContext, *, source_id=None, destination_id=None):"
    )
    lines.append("        super().__init__(")
    lines.append("            ctx,")
    lines.append(f'            service_name="{fam.stem}",')
    lines.append(f"            command_type={fam.command.class_name},")
    lines.append(f"            command_topic={fam.command.class_name}Topic,")
    lines.append(f"            ack_type={fam.ack.class_name},")
    lines.append(f"            ack_topic={fam.ack.class_name}Topic,")
    lines.append(f"            status_type={fam.status.class_name},")
    lines.append(f"            status_topic={fam.status.class_name}Topic,")
    if fam.exec_status:
        lines.append(f"            exec_status_type={fam.exec_status.class_name},")
        lines.append(
            f"            exec_status_topic={fam.exec_status.class_name}Topic,"
        )
    lines.append("            source_id=source_id,")
    lines.append("            destination_id=destination_id,")
    lines.append("        )")
    return lines


def generate_report_provider(fam: ReportFamily) -> List[str]:
    """Generate a ReportProvider subclass."""
    cls_name = class_name_for_report(fam.stem, "provider")
    lines = []
    lines.append("")
    lines.append("")
    lines.append(f"class {cls_name}(ReportProvider):")
    lines.append(f'    """{fam.stem} report provider ({fam.domain}::{fam.module})."""')
    lines.append("")
    lines.append(
        f"    def __init__(self, ctx: DDSContext, service_name: str, key_holder):"
    )
    lines.append("        super().__init__(")
    lines.append("            ctx,")
    lines.append("            service_name=service_name,")
    lines.append(f"            report_type={fam.report.class_name},")
    lines.append(f"            report_topic={fam.report.class_name}Topic,")
    lines.append("            key_holder=key_holder,")
    lines.append("        )")
    return lines


def generate_report_consumer(fam: ReportFamily) -> List[str]:
    """Generate a ReportConsumer subclass."""
    cls_name = class_name_for_report(fam.stem, "consumer")
    stem_display = fam.stem
    lines = []
    lines.append("")
    lines.append("")
    lines.append(f"class {cls_name}(ReportConsumer):")
    lines.append(f'    """{fam.stem} report consumer ({fam.domain}::{fam.module})."""')
    lines.append("")
    lines.append(
        f'    def __init__(self, ctx: DDSContext, service_name: str = "{stem_display}Report"):'
    )
    lines.append("        super().__init__(")
    lines.append("            ctx,")
    lines.append("            service_name=service_name,")
    lines.append(f"            report_type={fam.report.class_name},")
    lines.append(f"            report_topic={fam.report.class_name}Topic,")
    lines.append("        )")
    return lines


def generate_domain_module(
    domain: str,
    cmd_families: List[CommandFamily],
    rpt_families: List[ReportFamily],
) -> str:
    """Generate the full __init__.py for a domain subpackage."""
    lines: List[str] = []
    lines.append(f'"""rtiumaapy.services.{domain.lower()} — {DOMAIN_NAMES.get(domain, domain)} service classes.')
    lines.append("")
    lines.append("Auto-generated by tools/generate_services.py. Do not edit manually.")
    lines.append('"""')
    lines.append("")
    lines.append("from __future__ import annotations")
    lines.append("")
    lines.append("from rtiumaapy.command_provider import CommandProvider")
    lines.append("from rtiumaapy.command_consumer import CommandConsumer")
    lines.append("from rtiumaapy.report_provider import ReportProvider")
    lines.append("from rtiumaapy.report_consumer import ReportConsumer")
    lines.append("from rtiumaapy.dds_context import DDSContext")

    # Collect all __all__ entries
    all_names: List[str] = []

    # --- Commands ---
    for fam in sorted(cmd_families, key=lambda f: f.stem):
        lines.append("")
        lines.extend(generate_command_imports(fam))
        lines.extend(generate_command_provider(fam))
        prov_name = class_name_for_command(fam.stem, fam.is_config, "provider")
        all_names.append(prov_name)

        lines.extend(generate_command_consumer(fam))
        cons_name = class_name_for_command(fam.stem, fam.is_config, "consumer")
        all_names.append(cons_name)

    # --- Reports ---
    for fam in sorted(rpt_families, key=lambda f: f.stem):
        lines.append("")
        lines.append(
            f"from rtiumaapy.datamodel.{fam.report.file_stem} import ("
        )
        lines.append(f"    {fam.report.class_name},")
        lines.append(f"    {fam.report.class_name}Topic,")
        lines.append(")")
        lines.extend(generate_report_provider(fam))
        prov_name = class_name_for_report(fam.stem, "provider")
        all_names.append(prov_name)

        lines.extend(generate_report_consumer(fam))
        cons_name = class_name_for_report(fam.stem, "consumer")
        all_names.append(cons_name)

    # Insert __all__ after the base imports
    all_block = ["", "__all__ = ["]
    for name in sorted(all_names):
        all_block.append(f'    "{name}",')
    all_block.append("]")

    # Find insertion point (after the DDSContext import)
    insert_idx = next(
        i for i, line in enumerate(lines) if "DDSContext" in line
    ) + 1
    lines[insert_idx:insert_idx] = all_block

    lines.append("")  # trailing newline
    return "\n".join(lines)


def generate_top_init(
    domain_classes: Dict[str, List[str]],
) -> str:
    """Generate the top-level rtiumaapy/services/__init__.py."""
    lines = [
        '"""rtiumaapy.services — Pre-wired UMAA service classes.',
        "",
        "Auto-generated by tools/generate_services.py. Do not edit manually.",
        '"""',
        "",
        "from __future__ import annotations",
        "",
    ]

    all_names: List[str] = []
    for domain in sorted(domain_classes.keys()):
        names = sorted(domain_classes[domain])
        all_names.extend(names)
        lines.append(f"from rtiumaapy.services.{domain.lower()} import (  # noqa: F401")
        for name in names:
            lines.append(f"    {name},")
        lines.append(")")
        lines.append("")

    lines.append("__all__ = [")
    for name in sorted(all_names):
        lines.append(f'    "{name}",')
    lines.append("]")
    lines.append("")
    return "\n".join(lines)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------


def main() -> None:
    print(f"Scanning datamodel at {DATAMODEL_DIR} ...")
    cmd_families, rpt_families = scan_all()

    # Group by domain
    cmd_by_domain: Dict[str, List[CommandFamily]] = defaultdict(list)
    for fam in cmd_families:
        cmd_by_domain[fam.domain].append(fam)

    rpt_by_domain: Dict[str, List[ReportFamily]] = defaultdict(list)
    for fam in rpt_families:
        rpt_by_domain[fam.domain].append(fam)

    all_domains = sorted(set(cmd_by_domain.keys()) | set(rpt_by_domain.keys()))

    print(f"Found {len(cmd_families)} command families, {len(rpt_families)} report families")
    print(f"Domains: {', '.join(all_domains)}")

    # Create services directory structure
    SERVICES_DIR.mkdir(parents=True, exist_ok=True)

    domain_classes: Dict[str, List[str]] = {}
    total_classes = 0

    for domain in all_domains:
        cmds = cmd_by_domain.get(domain, [])
        rpts = rpt_by_domain.get(domain, [])

        content = generate_domain_module(domain, cmds, rpts)

        # Collect class names for top-level __init__
        names: List[str] = []
        for fam in cmds:
            names.append(class_name_for_command(fam.stem, fam.is_config, "provider"))
            names.append(class_name_for_command(fam.stem, fam.is_config, "consumer"))
        for fam in rpts:
            names.append(class_name_for_report(fam.stem, "provider"))
            names.append(class_name_for_report(fam.stem, "consumer"))

        domain_classes[domain] = names
        total_classes += len(names)

        domain_dir = SERVICES_DIR / domain.lower()
        domain_dir.mkdir(parents=True, exist_ok=True)
        outfile = domain_dir / "__init__.py"
        outfile.write_text(content)
        print(f"  {domain}: {len(names)} classes -> {outfile}")

    # Top-level __init__.py
    top_content = generate_top_init(domain_classes)
    top_file = SERVICES_DIR / "__init__.py"
    top_file.write_text(top_content)
    print(f"  Top-level: {top_file}")

    print(f"\nTotal: {total_classes} classes across {len(all_domains)} domains")


if __name__ == "__main__":
    main()
