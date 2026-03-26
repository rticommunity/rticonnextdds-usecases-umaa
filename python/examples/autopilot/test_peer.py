#!/usr/bin/env python3
"""test_peer — Sends a GlobalVector command and monitors health reports.

Usage::

    # Terminal 1: start the autopilot
    python -m examples.autopilot.run_autopilot --source-guid 01020304050607080910111213141516

    # Terminal 2: run the test peer
    python -m examples.autopilot.test_peer \\
        --target-guid 01020304050607080910111213141516

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
from rtiumaapy.datamodel.GlobalVectorCommandType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandType as GlobalVectorCommand,
)
from rtiumaapy.services.mo import GlobalVectorControlConsumer
from rtiumaapy.services.so import HealthReportConsumer

logger = logging.getLogger("test_peer")


def _make_id(guid_hex: str) -> IdentifierType:
    """Build an IdentifierType from a 32-char hex GUID string."""
    guid_bytes = GUIDUtil.from_string(guid_hex)
    guid = NumericGUID(value=dds.Uint8Seq(guid_bytes))
    return IdentifierType(id=guid, parentID=guid)


# ---------------------------------------------------------------------------
# Subclassed consumers with hooks
# ---------------------------------------------------------------------------


class _HealthWatcher(HealthReportConsumer):
    """Prints every health report received."""

    def __init__(self, ctx):
        super().__init__(ctx, service_name="HealthWatcher")

    async def on_report(self, sample):
        logger.info(
            "Health — severity=%s code=%s source=%s",
            sample.severity,
            sample.code,
            GUIDUtil.to_hex(sample.source.id.value),
        )


class _VectorConsumer(GlobalVectorControlConsumer):
    """Logs status and exec-status updates."""

    async def on_ack(self, session_id, ack):
        logger.info("Ack received for session %s", GUIDUtil.to_hex(session_id))

    async def on_status(self, session_id, status):
        logger.info(
            "Status update — session=%s status=%s",
            GUIDUtil.to_hex(session_id),
            status.status,
        )

    async def on_exec_status(self, session_id, exec_status):
        logger.info(
            "Exec status — dir=%s speed=%s elev=%s",
            exec_status.directionAchieved,
            exec_status.speedAchieved,
            exec_status.elevationAchieved,
        )

    async def on_terminal(self, session_id, status):
        logger.info("Session %s terminated", GUIDUtil.to_hex(session_id))


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------


def _parse_args(argv=None) -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Send a GlobalVector command and watch health reports.",
    )
    parser.add_argument(
        "--domain-id",
        type=int,
        default=0,
        help="DDS domain ID (default: 0).",
    )
    parser.add_argument(
        "--target-guid",
        type=str,
        required=True,
        help="32-char hex GUID of the autopilot to command.",
    )
    parser.add_argument(
        "--source-guid",
        type=str,
        default=None,
        help="32-char hex GUID for this peer's identity. Random if omitted.",
    )
    parser.add_argument(
        "--direction",
        type=float,
        default=45.0,
        help="Commanded direction in degrees (default: 45.0).",
    )
    parser.add_argument(
        "--speed",
        type=float,
        default=2.5,
        help="Commanded speed in m/s (default: 2.5).",
    )
    parser.add_argument(
        "-v", "--verbose",
        action="store_true",
        help="Enable DEBUG logging.",
    )
    return parser.parse_args(argv)


async def _main(args: argparse.Namespace) -> None:
    target_id = _make_id(args.target_guid)

    if args.source_guid:
        source_id = _make_id(args.source_guid)
    else:
        guid_bytes = GUIDUtil.generate()
        guid = NumericGUID(value=dds.Uint8Seq(guid_bytes))
        source_id = IdentifierType(id=guid, parentID=guid)
        logger.info("Generated peer GUID: %s", GUIDUtil.to_hex(guid_bytes))

    ctx = DDSContext(domain_id=args.domain_id)

    # Health watcher (passive — runs until shutdown)
    _HealthWatcher(ctx)

    # Command consumer (active — sends one command then monitors)
    consumer = _VectorConsumer(
        ctx, source_id=source_id, destination_id=target_id,
    )

    # Build and send the command after a brief discovery delay
    async def _send_after_delay():
        await asyncio.sleep(2.0)  # allow DDS discovery
        cmd = GlobalVectorCommand()
        cmd.direction = args.direction
        cmd.speed = args.speed
        cmd.elevation = 0.0
        session_id = await consumer.send(cmd)
        logger.info(
            "Sent GlobalVector command — session=%s direction=%.1f speed=%.1f",
            GUIDUtil.to_hex(session_id),
            args.direction,
            args.speed,
        )

    asyncio.get_event_loop().create_task(_send_after_delay())
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
