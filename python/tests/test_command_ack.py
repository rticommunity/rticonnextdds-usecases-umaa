"""Tests for ack round-trip (C37).

Provider echoes command in ack → consumer on_ack() fires with correct data.
"""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.command_provider import CommandProvider
from rtiumaapy.command_consumer import CommandConsumer
from rtiumaapy.command_provider_session import CommandStatusEnum

from rtiumaapy.datamodel.AnchorCommandType import (
    UMAA_EO_AnchorControl_AnchorCommandType as AnchorCommandType,
    UMAA_EO_AnchorControl_AnchorCommandTypeTopic as AnchorCommandTypeTopic,
)
from rtiumaapy.datamodel.AnchorCommandStatusType import (
    UMAA_EO_AnchorControl_AnchorCommandStatusType as AnchorCommandStatusType,
    UMAA_EO_AnchorControl_AnchorCommandStatusTypeTopic as AnchorCommandStatusTypeTopic,
)
from rtiumaapy.datamodel.AnchorCommandAckReportType import (
    UMAA_EO_AnchorControl_AnchorCommandAckReportType as AnchorCommandAckReportType,
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypeTopic as AnchorCommandAckReportTypeTopic,
)
from rtiumaapy.datamodel.IdentifierType import (
    UMAA_Common_IdentifierType as IdentifierType,
)
from rtiumaapy.datamodel.Measurements import (
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)
from tests.conftest import wait_for_match


def _make_id() -> IdentifierType:
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


class AckProvider(CommandProvider):
    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "AckProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.terminal_event = asyncio.Event()

    async def on_executing(self, session):
        await asyncio.sleep(0.05)

    async def on_terminal(self, session):
        self.terminal_event.set()


class AckConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "AckConsumer",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.acks = []
        self.ack_event = asyncio.Event()
        self.terminal_event = asyncio.Event()

    async def on_ack(self, session_id, ack):
        self.acks.append(ack)
        self.ack_event.set()

    async def on_terminal(self, session_id, status):
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestAckRoundTrip:
    """C37: ack round-trip verification."""

    @pytest.mark.asyncio
    async def test_ack_echoes_command(self, dds_context: DDSContext):
        """Provider echoes command in ack → consumer on_ack fires with correct data."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = AckProvider(dds_context, source_id=provider_id)
        consumer = AckConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        cmd = AnchorCommandType()
        session_id = await consumer.send(cmd)

        # Wait for ack
        await asyncio.wait_for(consumer.ack_event.wait(), timeout=10.0)

        assert len(consumer.acks) >= 1
        ack = consumer.acks[0]

        # Ack should have the provider's source
        assert bytes(ack.source.id.value) == bytes(provider_id.id.value)

        # Ack should echo the command with matching sessionID
        assert bytes(ack.sessionID.value) == session_id

        # Ack.command should echo the original command's source
        assert bytes(ack.command.source.id.value) == \
            bytes(consumer_id.id.value)

        # Wait for full completion
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)
