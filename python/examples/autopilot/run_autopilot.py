#!/usr/bin/env python3
"""run_autopilot — CLI entry point for the UMAA autopilot example.

    python -m examples.autopilot.run_autopilot \\
        --domain-id 0 \\
        --source-guid 01020304050607080910111213141516

Environment:
    UMAA_QOS_FILE   Path to the UMAA QoS XML file (required).
"""

from __future__ import annotations

import argparse
import asyncio
import logging

import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)
from examples.autopilot.autopilot_component import AutopilotComponent


def _make_source_id(guid_hex: str) -> IdentifierType:
    """Build an IdentifierType from a 32-char hex GUID string."""
    guid_bytes = GUIDUtil.from_string(guid_hex)
    guid = NumericGUID(value=dds.Uint8Seq(guid_bytes))
    return IdentifierType(id=guid, parentID=guid)


def _parse_args(argv=None) -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Run the UMAA autopilot example component.",
    )
    parser.add_argument(
        "--domain-id",
        type=int,
        default=0,
        help="DDS domain ID (default: 0).",
    )
    parser.add_argument(
        "--source-guid",
        type=str,
        default=None,
        help="32-char hex GUID for this component's source identity. "
             "If omitted, a random GUID is generated.",
    )
    parser.add_argument(
        "--health-period",
        type=float,
        default=1.0,
        help="Seconds between health report publications (default: 1.0).",
    )
    parser.add_argument(
        "-v", "--verbose",
        action="store_true",
        help="Enable DEBUG logging.",
    )
    return parser.parse_args(argv)


async def _main(args: argparse.Namespace) -> None:
    # Build source identity
    if args.source_guid:
        source_id = _make_source_id(args.source_guid)
    else:
        guid_bytes = GUIDUtil.generate()
        guid = NumericGUID(value=dds.Uint8Seq(guid_bytes))
        source_id = IdentifierType(id=guid, parentID=guid)
        logging.getLogger("autopilot").info(
            "Generated source GUID: %s", GUIDUtil.to_hex(guid_bytes),
        )

    ctx = DDSContext(domain_id=args.domain_id)
    component = AutopilotComponent(
        ctx,
        source_id,
        health_period=args.health_period,
    )
    component.start()

    try:
        await ctx.run_until_shutdown()
    finally:
        await component.stop()


def main(argv=None) -> None:
    args = _parse_args(argv)
    logging.basicConfig(
        level=logging.DEBUG if args.verbose else logging.INFO,
        format="%(asctime)s [%(name)s] %(levelname)s: %(message)s",
    )
    asyncio.run(_main(args))


if __name__ == "__main__":
    main()
