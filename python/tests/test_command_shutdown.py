"""Tests for command shutdown scenarios.

- Provider close() → active session FAILED(SERVICE_FAILED) + instance disposal
- Consumer close() during active session → _end_session(None) fires on_terminal(C39)
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
    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "ShutdownProvider",
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
        await asyncio.sleep(30)


class ShutdownConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "ShutdownConsumer",
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
        self.terminal_status = None
        self.terminal_session_id = None

    async def on_status(self, session_id, status):
        self.statuses.append(
            (status.commandStatus, status.commandStatusReason))

    async def on_terminal(self, session_id, status):
        self.terminal_session_id = session_id
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestProviderShutdown:
    """Provider close() → FAILED(SERVICE_FAILED)."""

    @pytest.mark.asyncio
    async def test_close_fails_active_session(self, dds_context: DDSContext):
        """Provider close() during active session → FAILED(SERVICE_FAILED) published."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SlowProvider(dds_context, source_id=provider_id)
        consumer = ShutdownConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Shutdown the provider
        await provider.close()

        # Consumer should receive FAILED(SERVICE_FAILED) status
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == \
            CommandStatusEnum.FAILED
        assert consumer.terminal_status.commandStatusReason == \
            CommandReasonEnum.SERVICE_FAILED

    @pytest.mark.asyncio
    async def test_close_no_active_sessions(self, dds_context: DDSContext):
        """Provider close() with no active sessions → clean shutdown."""
        provider_id = _make_id()
        provider = SlowProvider(dds_context, source_id=provider_id)
        provider.start()
        await asyncio.sleep(0.3)

        # Should not raise
        await provider.close()


class TestConsumerShutdown:
    """Consumer close() during active session (C39)."""

    @pytest.mark.asyncio
    async def test_close_fires_on_terminal(self, dds_context: DDSContext):
        """Consumer close() with active session → _end_session(None) → on_terminal fires."""
        provider_id = _make_id()
        consumer_id = _make_id()

        consumer = ShutdownConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        session_id = await consumer.send(AnchorCommandType())

        # Close consumer with active session
        await consumer.close()

        # on_terminal should have fired with None status
        assert consumer.terminal_event.is_set()
        assert consumer.terminal_session_id == session_id
        assert consumer.terminal_status is None

        # State should be cleared
        assert consumer._session_id is None

    @pytest.mark.asyncio
    async def test_close_no_active_session(self, dds_context: DDSContext):
        """Consumer close() with no active session → clean shutdown."""
        consumer_id = _make_id()
        provider_id = _make_id()

        consumer = ShutdownConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        consumer.start()
        await asyncio.sleep(0.3)

        # Should not raise
        await consumer.close()
        assert not consumer.terminal_event.is_set()
