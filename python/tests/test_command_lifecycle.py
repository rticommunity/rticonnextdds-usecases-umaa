"""Tests for the happy-path command lifecycle: send → ISSUED → COMMANDED → EXECUTING → COMPLETED.

Uses AnchorCommand types as the concrete IDL implementation.
"""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.command_provider import CommandProvider
from rtiumaapy.command_consumer import CommandConsumer
from rtiumaapy.command_provider_session import (
    CommandStatusEnum,
    CommandReasonEnum,
)

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


# ── Helpers ───────────────────────────────────────────────────────────────

def _make_id() -> IdentifierType:
    """Create an IdentifierType with random GUIDs."""
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


# ── Concrete subclasses ──────────────────────────────────────────────────

class TrackingProvider(CommandProvider):
    """CommandProvider that records hook calls for assertions."""

    def __init__(self, ctx, source_id, **kwargs):
        super().__init__(
            ctx, "AnchorProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            **kwargs,
        )
        self.hook_calls = []
        self.executing_done = asyncio.Event()

    async def on_commanded(self, session):
        self.hook_calls.append("on_commanded")

    async def on_executing(self, session):
        self.hook_calls.append("on_executing")
        # Simulate some work
        await asyncio.sleep(0.05)

    async def on_complete(self, session):
        self.hook_calls.append("on_complete")

    async def on_terminal(self, session):
        self.hook_calls.append("on_terminal")
        self.executing_done.set()


class TrackingConsumer(CommandConsumer):
    """CommandConsumer that records hook calls for assertions."""

    def __init__(self, ctx, source_id, destination_id, **kwargs):
        super().__init__(
            ctx, "AnchorConsumer",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
            **kwargs,
        )
        self.statuses = []
        self.acks = []
        self.terminal_event = asyncio.Event()
        self.terminal_status = None

    async def on_status(self, session_id, status):
        self.statuses.append(status.commandStatus)

    async def on_ack(self, session_id, ack):
        self.acks.append(ack)

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestHappyPath:
    """Full happy path: send → all hooks → COMPLETED."""

    @pytest.mark.asyncio
    async def test_full_lifecycle(self, dds_context: DDSContext):
        """Consumer sends → provider processes through all 7 hooks → COMPLETED → instances disposed."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = TrackingProvider(dds_context, source_id=provider_id)
        consumer = TrackingConsumer(
            dds_context,
            source_id=consumer_id,
            destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        # Wait for DDS matching
        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # Send command
        cmd = AnchorCommandType()
        session_id = await consumer.send(cmd)
        assert session_id is not None
        assert len(session_id) == 16

        # Wait for provider to complete
        await asyncio.wait_for(provider.executing_done.wait(), timeout=10.0)

        # Wait for consumer to see terminal
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        # Provider hook order
        assert provider.hook_calls == [
            "on_commanded", "on_executing", "on_complete", "on_terminal"]

        # Consumer received terminal COMPLETED status
        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == CommandStatusEnum.COMPLETED
        assert consumer.terminal_status.commandStatusReason == CommandReasonEnum.SUCCEEDED

        # Consumer observed full status progression
        assert CommandStatusEnum.ISSUED in consumer.statuses
        assert CommandStatusEnum.COMMANDED in consumer.statuses
        assert CommandStatusEnum.EXECUTING in consumer.statuses
        assert CommandStatusEnum.COMPLETED in consumer.statuses

    @pytest.mark.asyncio
    async def test_consumer_auto_stamps_headers(self, dds_context: DDSContext):
        """send() auto-stamps source, destination, sessionID, timeStamp (D47)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = TrackingProvider(dds_context, source_id=provider_id)
        consumer = TrackingConsumer(
            dds_context,
            source_id=consumer_id,
            destination_id=provider_id,
        )

        provider.start()
        consumer.start()
        await wait_for_match(consumer._command_writer)

        cmd = AnchorCommandType()
        # Header fields are all defaults before send()
        session_id = await consumer.send(cmd)

        # Verify the command was stamped correctly
        assert consumer._session_command.source == consumer_id
        assert consumer._session_command.destination == provider_id
        assert bytes(consumer._session_command.sessionID.value) == session_id
        assert consumer._session_command.timeStamp.seconds > 0

    @pytest.mark.asyncio
    async def test_consumer_send_guard_active_session(self, dds_context: DDSContext):
        """send() raises RuntimeError if there's already an active session."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = TrackingConsumer(
            dds_context,
            source_id=consumer_id,
            destination_id=provider_id,
        )

        cmd = AnchorCommandType()
        await consumer.send(cmd)

        with pytest.raises(RuntimeError, match="already has an active session"):
            await consumer.send(AnchorCommandType())

    @pytest.mark.asyncio
    async def test_consumer_send_update_wrong_session(self, dds_context: DDSContext):
        """send(session_id=wrong) raises RuntimeError."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = TrackingConsumer(
            dds_context,
            source_id=consumer_id,
            destination_id=provider_id,
        )

        await consumer.send(AnchorCommandType())

        with pytest.raises(RuntimeError, match="No active session"):
            await consumer.send(
                AnchorCommandType(), session_id=GUIDUtil.generate())
