#!/usr/bin/env python3
"""Run one discovery-only UMAA reference component."""

from __future__ import annotations

import argparse
import asyncio
import logging

from rtiumaapy.dds_context import DDSContext

from examples.reference_components.components import (
    ColregsHazardAvoidanceComponent,
    LoggingComponent,
    MissionExecutorComponent,
    USVNavigationComponent,
    WaterEnvironmentComponent,
    WeatherComponent,
)

COMPONENTS = {
    "colregs-hazard-avoidance": ColregsHazardAvoidanceComponent,
    "logging": LoggingComponent,
    "mission-executor": MissionExecutorComponent,
    "usv-navigation": USVNavigationComponent,
    "water-environment": WaterEnvironmentComponent,
    "weather": WeatherComponent,
}


def _parse_args(argv=None) -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Run a discovery-only UMAA reference component.",
    )
    parser.add_argument("component", choices=sorted(COMPONENTS))
    parser.add_argument("--domain-id", type=int, default=0)
    parser.add_argument("--source-guid", type=str, default=None)
    parser.add_argument("-v", "--verbose", action="store_true")
    return parser.parse_args(argv)


async def _main(args: argparse.Namespace) -> None:
    ctx = DDSContext(domain_id=args.domain_id, source_guid=args.source_guid)
    component_type = COMPONENTS[args.component]
    component_type(ctx, ctx.source_id)
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