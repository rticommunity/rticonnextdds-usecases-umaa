#!/usr/bin/env python3
"""Run a UMAA reference component with optional synthetic reports."""

from __future__ import annotations

import argparse
import asyncio
import logging
import math
import random

from rtiumaapy import set_timestamp
from rtiumaapy.datamodel.LogReportType import UMAA_SO_LogReport_LogReportType as LogReport
from rtiumaapy.datamodel.SpeedReportType import UMAA_SA_SpeedStatus_SpeedReportType as SpeedReport
from rtiumaapy.datamodel.WaterCurrentReportType import (
    UMAA_SA_WaterCurrentStatus_WaterCurrentReportType as WaterCurrentReport,
)
from rtiumaapy.datamodel.WindReportType import UMAA_SA_WindStatus_WindReportType as WindReport
from rtiumaapy.report_consumer import ReportConsumer
from rtiumaapy.report_provider import ReportProvider

from rtiumaapy.dds_context import (
    DDSContext,
    QOS_ASSIGNER_PROFILE,
    QOS_PARTICIPANT_PROFILE,
)

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
    parser.add_argument("--qos-profile", default=QOS_ASSIGNER_PROFILE)
    parser.add_argument("--participant-qos-profile", default=QOS_PARTICIPANT_PROFILE)
    parser.add_argument("--simulate", action="store_true")
    parser.add_argument("--duration", type=float, default=60.0)
    parser.add_argument("--interval", type=float, default=1.0)
    parser.add_argument("--seed", type=int, default=None)
    parser.add_argument("-v", "--verbose", action="store_true")
    args = parser.parse_args(argv)
    for name in ("duration", "interval"):
        value = getattr(args, name)
        if not math.isfinite(value) or value <= 0:
            parser.error("--{} must be finite and positive".format(name))
    return args


def _random_reports(component, source_id, generator):
    reports = []
    if isinstance(getattr(component, "log", None), ReportProvider):
        sample = LogReport(
            source=source_id,
            entry="Synthetic {} reading {:.3f}".format(
                type(component).__name__, generator.random()
            ),
        )
        sample.level = generator.choice(list(type(sample.level)))
        reports.append((component.log, sample))
    if isinstance(getattr(component, "speed", None), ReportProvider):
        reports.append((component.speed, SpeedReport(
            source=source_id,
            speedOverGround=generator.uniform(0.0, 10.0),
            speedThroughWater=generator.uniform(0.0, 10.0),
        )))
    if isinstance(getattr(component, "water_current", None), ReportProvider):
        reports.append((component.water_current, WaterCurrentReport(
            source=source_id,
            currentDirection=generator.uniform(0.0, 2.0 * math.pi),
            currentSpeed=generator.uniform(0.0, 3.0),
        )))
    if isinstance(getattr(component, "wind", None), ReportProvider):
        reports.append((component.wind, WindReport(
            source=source_id,
            trueInstantaneousDirection=generator.uniform(0.0, 2.0 * math.pi),
            trueInstantaneousSpeed=generator.uniform(0.0, 20.0),
        )))
    for provider, sample in reports:
        set_timestamp(sample)
    return reports


async def _simulate(component, ctx, args):
    generator = random.Random(args.seed)
    consumers = [service for service in vars(component).values()
                 if isinstance(service, ReportConsumer)]
    loop = asyncio.get_running_loop()
    deadline = loop.time() + args.duration
    written = {}
    received = {}
    while loop.time() < deadline:
        for provider, sample in _random_reports(component, ctx.source_id, generator):
            provider.write(sample)
            topic = provider.report_topic
            written[topic] = written.get(topic, 0) + 1
        for consumer in consumers:
            for sample in consumer.reader.take():
                if sample.info.valid:
                    topic = consumer.report_topic
                    received[topic] = received.get(topic, 0) + 1
        await asyncio.sleep(min(args.interval, max(0.0, deadline - loop.time())))
    logging.info("Simulation complete: written=%s received=%s", written, received)


async def _main(args: argparse.Namespace) -> None:
    ctx = DDSContext(
        domain_id=args.domain_id,
        source_guid=args.source_guid,
        qos_profile=args.qos_profile,
        participant_qos_profile=args.participant_qos_profile,
    )
    component_type = COMPONENTS[args.component]
    try:
        component = component_type(ctx, ctx.source_id)
        if args.simulate:
            await _simulate(component, ctx, args)
        else:
            await ctx.run_until_shutdown()
    finally:
        await ctx.shutdown()


def main(argv=None) -> None:
    args = _parse_args(argv)
    logging.basicConfig(
        level=logging.DEBUG if args.verbose else logging.INFO,
        format="%(asctime)s [%(name)s] %(levelname)s: %(message)s",
    )
    asyncio.run(_main(args))


if __name__ == "__main__":
    main()