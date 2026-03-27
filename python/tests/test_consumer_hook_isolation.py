"""Tests that consumer hook errors don't crash reader loops.

A failing on_status / on_ack / on_terminal override must be logged
but must not tear down the consumer's asyncio.gather (C80).
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


# ── Provider ──────────────────────────────────────────────────────────────


class SimpleProvider(CommandProvider):
    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "HookIsoProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )

    async def on_executing(self, session):
        await asyncio.sleep(0.05)


# ── Failing consumers ────────────────────────────────────────────────────


class FailingStatusConsumer(CommandConsumer):
    """on_status raises, but the consumer should still reach terminal."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "FailingStatusConsumer",
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
        self.terminal_status = None

    async def on_status(self, session_id, status):
        raise ValueError("on_status boom")

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


class FailingAckConsumer(CommandConsumer):
    """on_ack raises, but the consumer should still reach terminal."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "FailingAckConsumer",
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

    async def on_ack(self, session_id, ack):
        raise ValueError("on_ack boom")

    async def on_terminal(self, session_id, status):
        self.terminal_event.set()


class FailingTerminalConsumer(CommandConsumer):
    """on_terminal raises, but the consumer should survive for more sessions."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "FailingTerminalConsumer",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.terminal_count = 0
        self.second_terminal = asyncio.Event()

    async def on_terminal(self, session_id, status):
        self.terminal_count += 1
        if self.terminal_count >= 2:
            self.second_terminal.set()
        raise ValueError("on_terminal boom")


# ── Tests ─────────────────────────────────────────────────────────────────


class TestConsumerHookIsolation:
    """Hook errors are logged but don't crash the reader loops."""

    @pytest.mark.asyncio
    async def test_on_status_error_still_reaches_terminal(
        self, dds_context: DDSContext,
    ):
        """on_status raises every time, but terminal detection still works."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SimpleProvider(dds_context, source_id=provider_id)
        consumer = FailingStatusConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == CommandStatusEnum.COMPLETED

    @pytest.mark.asyncio
    async def test_on_ack_error_still_reaches_terminal(
        self, dds_context: DDSContext,
    ):
        """on_ack raises, but status/terminal loops are unaffected."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SimpleProvider(dds_context, source_id=provider_id)
        consumer = FailingAckConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

    @pytest.mark.asyncio
    async def test_on_terminal_error_allows_second_session(
        self, dds_context: DDSContext,
    ):
        """on_terminal raises, but consumer can run a second session."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = SimpleProvider(dds_context, source_id=provider_id)
        consumer = FailingTerminalConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # First session — on_terminal will raise
        await consumer.send(AnchorCommandType())
        await asyncio.sleep(1.0)

        # Consumer should have cleaned up (session_id is None) despite error
        assert consumer._session_id is None

        # Second session — proves the consumer survived the first error
        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer.second_terminal.wait(), timeout=10.0)

        assert consumer.terminal_count == 2
