#!/usr/bin/env python3
"""run_globalvector_consumer — Send a GlobalVectorControl command to an autopilot provider.

Sends a single GlobalVectorCommand, logs lifecycle events
(ack, status transitions, exec_status, terminal), then exits.
"""

from __future__ import annotations

import argparse
import asyncio
import logging

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.datamodel.GlobalVectorCommandType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandType as GlobalVectorCommandType,
)
from rtiumaapy.datamodel.MaritimeEnumerationSets import (
    UMAA_Common_MaritimeEnumeration_DirectionModeEnumModule_DirectionModeEnumType as DirectionModeEnum,
)
from rtiumaapy.services.mo import GlobalVectorControlConsumer

logger = logging.getLogger("globalvector_consumer")


class LoggingGlobalVectorConsumer(GlobalVectorControlConsumer):
    """GlobalVectorControlConsumer that logs every hook and signals completion."""

    def __init__(self, ctx, *, source_id, destination_id):
        super().__init__(ctx, source_id=source_id, destination_id=destination_id)
        self._done = asyncio.Event()

    async def on_ack(self, session_id, ack):
        logger.info(
            "ACK received — session=%s", GUIDUtil.to_hex(session_id),
        )

    async def on_status(self, session_id, status):
        logger.info(
            "STATUS — session=%s commandStatus=%s",
            GUIDUtil.to_hex(session_id),
            status.commandStatus,
        )

    async def on_exec_status(self, session_id, exec_status):
        logger.info(
            "EXEC_STATUS — session=%s directionAchieved=%s speedAchieved=%s",
            GUIDUtil.to_hex(session_id),
            getattr(exec_status, "directionAchieved", "?"),
            getattr(exec_status, "speedAchieved", "?"),
        )

    async def on_terminal(self, session_id, status):
        logger.info(
            "TERMINAL — session=%s commandStatus=%s",
            GUIDUtil.to_hex(session_id),
            status.commandStatus if status else None,
        )
        self._done.set()


def _parse_args(argv=None) -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Send a GlobalVectorControl command to a UMAA autopilot.",
    )
    parser.add_argument(
        "--domain-id", type=int, default=0,
        help="DDS domain ID (default: 0).",
    )
    parser.add_argument(
        "--source-guid", type=str, default=None,
        help="Hex GUID (32 chars or UUID with dashes) for this consumer's identity. Random if omitted.",
    )
    parser.add_argument(
        "--destination-guid", type=str, default=None,
        help="Hex GUID (32 chars or UUID with dashes) of the target autopilot provider. Random if omitted.",
    )
    parser.add_argument(
        "-v", "--verbose", action="store_true",
        help="Enable DEBUG logging.",
    )
    return parser.parse_args(argv)


async def _main(args: argparse.Namespace) -> None:
    ctx = DDSContext(domain_id=args.domain_id, source_guid=args.source_guid)
    destination_id = GUIDUtil.make_source_id(args.destination_guid)

    logger.info("Consumer source GUID: %s", ctx.source_guid)
    logger.info("Provider destination GUID: %s",
                GUIDUtil.to_hex(bytes(destination_id.id.value)))

    consumer = LoggingGlobalVectorConsumer(
        ctx,
        source_id=ctx.source_id,
        destination_id=destination_id,
    )

    # Start the consumer reader loops
    consumer._task = asyncio.create_task(consumer._run())

    try:
        # Wait until the provider is discovered
        logger.info("Waiting for provider to be discovered ...")
        if not await consumer.wait_for_discovery(timeout=60.0):
            logger.error("No provider discovered within 60s — exiting.")
            return
        logger.info("Provider discovered — sending command ...")

        # Build and send a GlobalVectorCommand
        cmd = GlobalVectorCommandType()
        cmd.directionMode = DirectionModeEnum.HEADING
        session_id = await consumer.send(cmd)

        logger.info("Command sent — session=%s, waiting for terminal ...",
                    GUIDUtil.to_hex(session_id))

        # Wait for command lifecycle to complete (or timeout)
        try:
            await asyncio.wait_for(consumer._done.wait(), timeout=30.0)
        except asyncio.TimeoutError:
            logger.warning("Timed out waiting for terminal status after 30s")
    finally:
        await consumer.close()
        await ctx.shutdown()


def main(argv=None) -> None:
    args = _parse_args(argv)
    logging.basicConfig(
        level=logging.DEBUG if args.verbose else logging.INFO,
        format="%(asctime)s [%(name)s] %(levelname)s: %(message)s",
    )
    try:
        asyncio.run(_main(args))
    except KeyboardInterrupt:
        logger.info("Interrupted — shutting down.")


if __name__ == "__main__":
    main()
