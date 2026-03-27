"""Tests for consumer CFT lifecycle (C31).

- Idle: filter is "1 = 0" (rejects all samples)
- Active: filter is "sessionID = &hex(...)" (receives only its session)
- After completion: filter resets to "1 = 0"
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


class SimpleProvider(CommandProvider):
    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "CFTProvider",
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


class CFTConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "CFTConsumer",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.statuses = []
        self.terminal_event = asyncio.Event()

    async def on_status(self, session_id, status):
        self.statuses.append(status)

    async def on_terminal(self, session_id, status):
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestConsumerCFT:
    """C31: Consumer CFT lifecycle."""

    @pytest.mark.asyncio
    async def test_idle_filter_blocks_all(self, dds_context: DDSContext):
        """Before send(), CFT is '1 = 0' — no samples pass."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = CFTConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        # Check that the idle filter expression is "1 = 0"
        assert consumer._status_cft.filter_expression == "1 = 0"
        assert consumer._ack_cft.filter_expression == "1 = 0"

    @pytest.mark.asyncio
    async def test_active_filter_selects_session(self, dds_context: DDSContext):
        """After send(), CFT uses 'sessionID = &hex(...)'."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = CFTConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        session_id = await consumer.send(AnchorCommandType())

        # Filter should now contain hex representation of session_id
        hex_str = GUIDUtil.to_hex(session_id)
        assert f"&hex({hex_str})" in consumer._status_cft.filter_expression
        assert f"&hex({hex_str})" in consumer._ack_cft.filter_expression

    @pytest.mark.asyncio
    async def test_filter_resets_after_completion(self, dds_context: DDSContext):
        """After session completes, CFT resets to '1 = 0'."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SimpleProvider(dds_context, source_id=provider_id)
        consumer = CFTConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        await consumer.send(AnchorCommandType())

        # Wait for completion
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        # Filter should be reset
        assert consumer._status_cft.filter_expression == "1 = 0"
        assert consumer._ack_cft.filter_expression == "1 = 0"

    @pytest.mark.asyncio
    async def test_only_session_samples_received(self, dds_context: DDSContext):
        """Consumer only receives status for its own session, not others."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SimpleProvider(dds_context, source_id=provider_id)
        consumer = CFTConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        session_id = await consumer.send(AnchorCommandType())

        # Write a stale status using a different sessionID directly
        stale_writer = dds_context.create_writer(
            AnchorCommandStatusType, AnchorCommandStatusTypeTopic)
        await wait_for_match(stale_writer)

        stale = AnchorCommandStatusType()
        stale.sessionID = NumericGUID(
            value=dds.Uint8Seq(GUIDUtil.generate()))
        stale.source = provider_id
        stale.commandStatus = CommandStatusEnum.FAILED
        stale_writer.write(stale)

        # Wait for the real session to complete
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        # All received statuses should be for our session, not the stale one
        for s in consumer.statuses:
            assert bytes(s.sessionID.value) == session_id
