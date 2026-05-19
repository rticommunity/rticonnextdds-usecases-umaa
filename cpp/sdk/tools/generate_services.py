#!/usr/bin/env python3
"""Generate pre-wired C++ service typedefs from the UMAA IDL directory.

Scans datamodel/umaa/idl/UMAA/{Domain}/{Module}/ for CommandType,
AckReportType, CommandStatusType, ExecutionStatusReportType, and ReportType
IDL files, then produces one .hpp per domain under
cpp/sdk/include/umaa/sdk/services/.

Usage:
    python cpp/sdk/tools/generate_services.py       # from repo root
"""

from __future__ import annotations

import os
import sys
from collections import defaultdict
from pathlib import Path
from typing import Dict, List, NamedTuple, Optional, Tuple

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------

REPO_ROOT = Path(__file__).resolve().parent.parent.parent.parent
IDL_DIR = REPO_ROOT / "datamodel" / "umaa" / "idl" / "UMAA"
OUTPUT_DIR = REPO_ROOT / "cpp" / "sdk" / "include" / "umaa" / "sdk" / "services"

# ---------------------------------------------------------------------------
# Constants (same as Python generator)
# ---------------------------------------------------------------------------

SKIP_STEMS = {"Fin", "Propulsor"}

DOMAIN_NAMES = {
    "CO": "Common Operations",
    "EO": "Engineering/Operations",
    "MM": "Mission Management",
    "MO": "Maneuver/Operations",
    "SA": "Situational Awareness",
    "SEM": "Sensors",
    "SO": "System Operations",
}

# Config commands use {Stem}AckReportType instead of {Stem}CommandAckReportType
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

# Stems with ExecutionStatusReportType
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


class CommandFamily(NamedTuple):
    stem: str
    domain: str
    module: str
    command_file: str       # e.g. "GlobalVectorCommandType"
    ack_file: str           # e.g. "GlobalVectorCommandAckReportType"
    status_file: str        # e.g. "GlobalVectorCommandStatusType"
    exec_file: Optional[str]  # e.g. "GlobalVectorExecutionStatusReportType"
    is_config: bool


class ReportFamily(NamedTuple):
    stem: str
    domain: str
    module: str
    report_file: str        # e.g. "SpeedReportType"


# ---------------------------------------------------------------------------
# Scanning
# ---------------------------------------------------------------------------


def scan_idl_dir() -> Tuple[List[CommandFamily], List[ReportFamily]]:
    """Scan IDL directory and return command families + report families."""
    command_families: List[CommandFamily] = []
    report_families: List[ReportFamily] = []

    domains = sorted(
        d for d in os.listdir(IDL_DIR)
        if (IDL_DIR / d).is_dir() and d in DOMAIN_NAMES
    )

    for domain in domains:
        domain_path = IDL_DIR / domain
        modules = sorted(
            m for m in os.listdir(domain_path)
            if (domain_path / m).is_dir()
        )

        for module in modules:
            module_path = domain_path / module
            idl_files = sorted(
                f[:-4] for f in os.listdir(module_path) if f.endswith(".idl")
            )

            # Find command types
            cmd_files = [
                f for f in idl_files
                if f.endswith("CommandType")
                and "Ack" not in f
                and "Status" not in f
            ]

            for cmd_file in cmd_files:
                stem = cmd_file[:-len("CommandType")]
                if stem in SKIP_STEMS:
                    continue

                is_config = stem in CONFIG_STEMS
                if is_config:
                    ack_file = f"{stem}AckReportType"
                else:
                    ack_file = f"{stem}CommandAckReportType"
                status_file = f"{stem}CommandStatusType"

                # Verify ack and status exist
                if ack_file not in idl_files:
                    print(f"  WARNING: Missing ack {ack_file} in {domain}/{module}", file=sys.stderr)
                    continue
                if status_file not in idl_files:
                    print(f"  WARNING: Missing status {status_file} in {domain}/{module}", file=sys.stderr)
                    continue

                exec_file = None
                if stem in EXEC_STATUS_STEMS:
                    candidate = f"{stem}ExecutionStatusReportType"
                    if candidate in idl_files:
                        exec_file = candidate
                    else:
                        print(f"  WARNING: Missing exec {candidate} in {domain}/{module}", file=sys.stderr)

                command_families.append(CommandFamily(
                    stem=stem,
                    domain=domain,
                    module=module,
                    command_file=cmd_file,
                    ack_file=ack_file,
                    status_file=status_file,
                    exec_file=exec_file,
                    is_config=is_config,
                ))

            # Find report types (exclude ack reports and execution status reports)
            rpt_files = [
                f for f in idl_files
                if f.endswith("ReportType")
                and "Ack" not in f
                and "ExecutionStatus" not in f
            ]

            for rpt_file in rpt_files:
                stem = rpt_file[:-len("ReportType")]
                report_families.append(ReportFamily(
                    stem=stem,
                    domain=domain,
                    module=module,
                    report_file=rpt_file,
                ))

    return command_families, report_families


# ---------------------------------------------------------------------------
# Code generation helpers
# ---------------------------------------------------------------------------


def include_path(domain: str, module: str, type_file: str) -> str:
    """Return the #include path for a generated type."""
    return f"UMAA/{domain}/{module}/{type_file}.hpp"


def full_type(domain: str, module: str, type_file: str) -> str:
    """Return the fully-qualified C++ type name."""
    return f"UMAA::{domain}::{module}::{type_file}"


def topic_constant(type_file: str) -> str:
    """Return the topic name constant defined in the generated header."""
    return f"{type_file}Topic"


def provider_class_name(stem: str, is_config: bool) -> str:
    if is_config:
        return f"{stem}Provider"
    return f"{stem}ControlProvider"


def consumer_class_name(stem: str, is_config: bool) -> str:
    if is_config:
        return f"{stem}Consumer"
    return f"{stem}ControlConsumer"


def report_provider_class_name(stem: str) -> str:
    return f"{stem}ReportProvider"


def report_consumer_class_name(stem: str) -> str:
    return f"{stem}ReportConsumer"


# ---------------------------------------------------------------------------
# Header generation
# ---------------------------------------------------------------------------


def generate_domain_header(
    domain: str,
    cmd_families: List[CommandFamily],
    rpt_families: List[ReportFamily],
) -> str:
    """Generate a complete .hpp for a domain."""
    lines: List[str] = []
    guard = f"UMAA_SDK_SERVICES_{domain.upper()}_HPP"

    lines.append(f"// Auto-generated by cpp/sdk/tools/generate_services.py — DO NOT EDIT")
    lines.append(f"#ifndef {guard}")
    lines.append(f"#define {guard}")
    lines.append("")
    lines.append('#include "umaa/sdk/command_provider.hpp"')
    lines.append('#include "umaa/sdk/command_consumer.hpp"')
    lines.append('#include "umaa/sdk/report_provider.hpp"')
    lines.append('#include "umaa/sdk/report_consumer.hpp"')
    lines.append("")

    # Collect includes
    includes: List[str] = []
    for fam in sorted(cmd_families, key=lambda f: f.stem):
        includes.append(include_path(fam.domain, fam.module, fam.command_file))
        includes.append(include_path(fam.domain, fam.module, fam.ack_file))
        includes.append(include_path(fam.domain, fam.module, fam.status_file))
        if fam.exec_file:
            includes.append(include_path(fam.domain, fam.module, fam.exec_file))
    for fam in sorted(rpt_families, key=lambda f: f.stem):
        includes.append(include_path(fam.domain, fam.module, fam.report_file))

    for inc in includes:
        lines.append(f'#include "{inc}"')

    lines.append("")
    lines.append(f"namespace umaa::sdk::services::{domain.lower()} {{")
    lines.append("")

    # Command service typedefs
    for fam in sorted(cmd_families, key=lambda f: f.stem):
        cmd_type = full_type(fam.domain, fam.module, fam.command_file)
        ack_type = full_type(fam.domain, fam.module, fam.ack_file)
        sts_type = full_type(fam.domain, fam.module, fam.status_file)

        if fam.exec_file:
            exec_type = full_type(fam.domain, fam.module, fam.exec_file)
            # Provider (4-topic)
            lines.append(f"using {provider_class_name(fam.stem, fam.is_config)} = umaa::sdk::CommandProviderWithExec<")
            lines.append(f"    {cmd_type},")
            lines.append(f"    {ack_type},")
            lines.append(f"    {sts_type},")
            lines.append(f"    {exec_type}>;")
            lines.append("")
            # Consumer (4-topic)
            lines.append(f"using {consumer_class_name(fam.stem, fam.is_config)} = umaa::sdk::CommandConsumerWithExec<")
            lines.append(f"    {cmd_type},")
            lines.append(f"    {ack_type},")
            lines.append(f"    {sts_type},")
            lines.append(f"    {exec_type}>;")
        else:
            # Provider (3-topic)
            lines.append(f"using {provider_class_name(fam.stem, fam.is_config)} = umaa::sdk::CommandProvider<")
            lines.append(f"    {cmd_type},")
            lines.append(f"    {ack_type},")
            lines.append(f"    {sts_type}>;")
            lines.append("")
            # Consumer (3-topic)
            lines.append(f"using {consumer_class_name(fam.stem, fam.is_config)} = umaa::sdk::CommandConsumer<")
            lines.append(f"    {cmd_type},")
            lines.append(f"    {ack_type},")
            lines.append(f"    {sts_type}>;")
        lines.append("")

    # Report service typedefs
    for fam in sorted(rpt_families, key=lambda f: f.stem):
        rpt_type = full_type(fam.domain, fam.module, fam.report_file)
        lines.append(f"using {report_provider_class_name(fam.stem)} = umaa::sdk::ReportProvider<{rpt_type}>;")
        lines.append(f"using {report_consumer_class_name(fam.stem)} = umaa::sdk::ReportConsumer<{rpt_type}>;")
        lines.append("")

    lines.append(f"}} // namespace umaa::sdk::services::{domain.lower()}")
    lines.append("")

    # Topic name constants namespace
    lines.append(f"namespace umaa::sdk::topics::{domain.lower()} {{")
    lines.append("")
    for fam in sorted(cmd_families, key=lambda f: f.stem):
        prefix = fam.stem
        lines.append(f'inline constexpr const char* {prefix}CommandTopic = "{full_type(fam.domain, fam.module, fam.command_file)}";')
        if fam.is_config:
            lines.append(f'inline constexpr const char* {prefix}AckTopic = "{full_type(fam.domain, fam.module, fam.ack_file)}";')
        else:
            lines.append(f'inline constexpr const char* {prefix}CommandAckTopic = "{full_type(fam.domain, fam.module, fam.ack_file)}";')
        lines.append(f'inline constexpr const char* {prefix}CommandStatusTopic = "{full_type(fam.domain, fam.module, fam.status_file)}";')
        if fam.exec_file:
            lines.append(f'inline constexpr const char* {prefix}ExecStatusTopic = "{full_type(fam.domain, fam.module, fam.exec_file)}";')
        lines.append("")
    for fam in sorted(rpt_families, key=lambda f: f.stem):
        lines.append(f'inline constexpr const char* {fam.stem}ReportTopic = "{full_type(fam.domain, fam.module, fam.report_file)}";')
    lines.append("")
    lines.append(f"}} // namespace umaa::sdk::topics::{domain.lower()}")
    lines.append("")
    lines.append(f"#endif // {guard}")
    lines.append("")

    return "\n".join(lines)


def generate_all_services_header(domains: List[str]) -> str:
    """Generate the umbrella services.hpp that includes all domain headers."""
    lines: List[str] = []
    guard = "UMAA_SDK_SERVICES_HPP"
    lines.append("// Auto-generated by cpp/sdk/tools/generate_services.py — DO NOT EDIT")
    lines.append(f"#ifndef {guard}")
    lines.append(f"#define {guard}")
    lines.append("")
    for d in sorted(domains):
        lines.append(f'#include "umaa/sdk/services/{d.lower()}.hpp"')
    lines.append("")
    lines.append(f"#endif // {guard}")
    lines.append("")
    return "\n".join(lines)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------


def main() -> None:
    print(f"Scanning IDL at {IDL_DIR} ...")
    cmd_families, rpt_families = scan_idl_dir()

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

    # Create output directory
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)

    total_typedefs = 0
    for domain in all_domains:
        cmds = cmd_by_domain.get(domain, [])
        rpts = rpt_by_domain.get(domain, [])

        content = generate_domain_header(domain, cmds, rpts)
        count = len(cmds) * 2 + len(rpts) * 2  # provider + consumer each
        total_typedefs += count

        outfile = OUTPUT_DIR / f"{domain.lower()}.hpp"
        outfile.write_text(content)
        print(f"  {domain}: {count} typedefs -> {outfile.relative_to(REPO_ROOT)}")

    # Umbrella header
    umbrella = generate_all_services_header(all_domains)
    umbrella_path = OUTPUT_DIR / "all.hpp"
    umbrella_path.write_text(umbrella)
    print(f"  Umbrella -> {umbrella_path.relative_to(REPO_ROOT)}")

    print(f"\nTotal: {total_typedefs} service typedefs across {len(all_domains)} domains")


if __name__ == "__main__":
    main()
