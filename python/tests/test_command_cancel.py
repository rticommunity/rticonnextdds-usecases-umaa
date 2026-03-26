"""Tests for command cancellation.

Consumer dispose → provider detects NOT_ALIVE_DISPOSED → CANCELED.
Consumer cancel() → _end_session(None) → immediate cleanup (D50).
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


def _make_id() -> IdentifierType:
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


class SlowProvider(CommandProvider):
    """Provider that blocks in on_executing for cancel tests."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "SlowCancelProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.executing_started = asyncio.Event()
        self.terminal_event = asyncio.Event()
        self.terminal_state = None

    async def on_executing(self, session):
        self.executing_started.set()
        await asyncio.sleep(30)

    async def on_terminal(self, session):
        self.terminal_state = session.current_state
        self.terminal_event.set()


class CancelConsumer(CommandConsumer):
    """Consumer tracking terminal for cancel tests."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "CancelConsumer",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.terminal_event = asyncio.Event()
        self.terminal_session_id = None
        self.terminal_status = None

    async def on_terminal(self, session_id, status):
        self.terminal_session_id = session_id
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestConsumerCancel:
    """D50: Consumer cancel() → immediate cleanup."""

    @pytest.mark.asyncio
    async def test_cancel_clears_state_immediately(self, dds_context: DDSContext):
        """cancel() disposes command, resets filters, clears state, fires on_terminal(None)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SlowProvider(dds_context, source_id=provider_id)
        consumer = CancelConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        session_id = await consumer.send(AnchorCommandType())

        # Wait for provider to start executing
        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Cancel from consumer side
        await consumer.cancel()

        # Consumer state should be cleared immediately
        assert consumer._session_id is None
        assert consumer._session_command is None

        # Consumer's on_terminal should have fired with None status
        assert consumer.terminal_event.is_set()
        assert consumer.terminal_session_id == session_id
        assert consumer.terminal_status is None

        # Provider should eventually see the cancel too
        await asyncio.wait_for(
            provider.terminal_event.wait(), timeout=10.0)
        assert provider.terminal_state == CommandStatusEnum.CANCELED

    @pytest.mark.asyncio
    async def test_cancel_no_active_session_noop(self, dds_context: DDSContext):
        """cancel() with no active session does nothing."""
        consumer_id = _make_id()
        provider_id = _make_id()

        consumer = CancelConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        # Should not raise
        await consumer.cancel()
        assert not consumer.terminal_event.is_set()

    @pytest.mark.asyncio
    async def test_cancel_idempotent_after_terminal(self, dds_context: DDSContext):
        """If provider CANCELED arrives after consumer already cancelled → no-op (D50)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = CancelConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        # Start a session manually to test idempotency
        await consumer.send(AnchorCommandType())

        # Cancel clears state
        await consumer.cancel()
        assert consumer._session_id is None

        # Another cancel should be a no-op
        consumer.terminal_event.clear()
        await consumer.cancel()
        # on_terminal should NOT fire again (session was already None)
        assert not consumer.terminal_event.is_set()
