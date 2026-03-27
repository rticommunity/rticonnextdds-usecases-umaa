"""Tests for command rejection scenarios.

D3: Second command with different sessionID during active session →
    ISSUED → COMMANDED → FAILED(RESOURCE_REJECTED).

D42: validate_command returns (False, reason) →
     ISSUED + Ack published, then FAILED(VALIDATION_FAILED).
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
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


# ── Slow executing provider ───────────────────────────────────────────────

class SlowProvider(CommandProvider):
    """Provider that blocks in on_executing so we can inject a second command."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "SlowProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.executing_started = asyncio.Event()

    async def on_executing(self, session):
        self.executing_started.set()
        # Block to keep session active
        await asyncio.sleep(30)


class RejectingValidator(CommandProvider):
    """Provider that rejects commands via validate_command (D42)."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "RejectingValidator",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.terminal_event = asyncio.Event()

    async def validate_command(self, command):
        return (False, "bad anchor setting")

    async def on_terminal(self, session):
        self.terminal_event.set()


class StatusCollector(CommandConsumer):
    """Consumer that collects all status updates."""

    def __init__(self, ctx, source_id, destination_id, name="StatusCollector"):
        super().__init__(
            ctx, name,
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
        self.acks = []
        self.terminal_event = asyncio.Event()
        self.terminal_status = None

    async def on_status(self, session_id, status):
        self.statuses.append(
            (status.commandStatus, status.commandStatusReason))

    async def on_ack(self, session_id, ack):
        self.acks.append(ack)

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestD3Rejection:
    """D3: Second command during active session → RESOURCE_REJECTED."""

    @pytest.mark.asyncio
    async def test_reject_second_session(self, dds_context: DDSContext):
        """A second consumer sending while provider is busy gets rejected."""
        provider_id = _make_id()
        consumer1_id = _make_id()
        consumer2_id = _make_id()

        provider = SlowProvider(dds_context, source_id=provider_id)

        consumer1 = StatusCollector(
            dds_context, source_id=consumer1_id,
            destination_id=provider_id, name="Consumer1")
        consumer2 = StatusCollector(
            dds_context, source_id=consumer2_id,
            destination_id=provider_id, name="Consumer2")

        provider.start()
        consumer1.start()
        consumer2.start()

        await wait_for_match(consumer1._command_writer)
        await wait_for_match(consumer2._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer, min_count=2)

        # Consumer 1 sends — occupies the session
        await consumer1.send(AnchorCommandType())
        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Consumer 2 sends different session → rejected
        await consumer2.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer2.terminal_event.wait(), timeout=10.0)

        # Consumer 2 should see the rejection sequence ending in FAILED
        assert consumer2.terminal_status is not None
        assert consumer2.terminal_status.commandStatus == \
            CommandStatusEnum.FAILED
        assert consumer2.terminal_status.commandStatusReason == \
            CommandReasonEnum.RESOURCE_REJECTED

        # Clean up
        await provider.close()


class TestD42ValidationRejection:
    """D42: validate_command returns (False, ...) → ISSUED + Ack then FAILED."""

    @pytest.mark.asyncio
    async def test_validation_failure(self, dds_context: DDSContext):
        """validate_command returning (False, ...) → FAILED(VALIDATION_FAILED)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = RejectingValidator(dds_context, source_id=provider_id)
        consumer = StatusCollector(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # Extra settling time for content-filtered ack reader discovery
        await asyncio.sleep(0.2)

        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        # Consumer should see ISSUED then FAILED(VALIDATION_FAILED)
        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == \
            CommandStatusEnum.FAILED
        assert consumer.terminal_status.commandStatusReason == \
            CommandReasonEnum.VALIDATION_FAILED

        # ISSUED was published before FAILED
        assert len(consumer.statuses) >= 2
        assert consumer.statuses[0][0] == CommandStatusEnum.ISSUED

        # Ack was published
        assert len(consumer.acks) >= 1
