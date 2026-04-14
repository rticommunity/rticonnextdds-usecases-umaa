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

from rtiumaapy.dds_context import DDSContext
from examples.autopilot.autopilot_component import AutopilotComponent


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
        help="Hex GUID (32 chars or UUID with dashes) for this component's "
             "source identity. If omitted, a random GUID is generated.",
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
    ctx = DDSContext(domain_id=args.domain_id, source_guid=args.source_guid)
    component = AutopilotComponent(
        ctx,
        ctx.source_id,
        health_period=args.health_period,
    )
    await ctx.run_until_shutdown()


def main(argv=None) -> None:
    args = _parse_args(argv)
    logging.basicConfig(
        level=logging.DEBUG if args.verbose else logging.INFO,
        format="%(asctime)s [%(name)s] %(levelname)s: %(message)s",
    )
    asyncio.run(_main(args))


if __name__ == "__main__":
    main()
