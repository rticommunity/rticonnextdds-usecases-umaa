"""Tests for command disambiguation (C28).

Update vs. reject routing: session X active, session Y rejected,
session X updated, verify X still active after Y rejection.
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


class DisambigProvider(CommandProvider):
    """Provider that tracks updates and blocks for injection."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "DisambigProvider",
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
        self.update_calls = []
        self.execute_count = 0

    async def on_updated(self, session, prev, upd):
        self.update_calls.append((prev, upd))

    async def on_executing(self, session):
        self.execute_count += 1
        if self.execute_count == 1:
            self.executing_started.set()
            await asyncio.sleep(1.0)  # Hold session open

    async def on_terminal(self, session):
        self.terminal_event.set()


class DisambigConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id, name="DisambigConsumer"):
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
        self.terminal_event = asyncio.Event()
        self.terminal_status = None

    async def on_status(self, session_id, status):
        self.statuses.append(
            (status.commandStatus, status.commandStatusReason))

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestDisambiguation:
    """C28: combined update vs. reject routing."""

    @pytest.mark.asyncio
    async def test_reject_y_then_update_x(self, dds_context: DDSContext):
        """Session X active, Y rejected, X updated — X still completes."""
        provider_id = _make_id()
        consumer_x_id = _make_id()
        consumer_y_id = _make_id()

        provider = DisambigProvider(dds_context, source_id=provider_id)

        consumer_x = DisambigConsumer(
            dds_context, source_id=consumer_x_id,
            destination_id=provider_id, name="ConsumerX")
        consumer_y = DisambigConsumer(
            dds_context, source_id=consumer_y_id,
            destination_id=provider_id, name="ConsumerY")

        provider.start()
        consumer_x.start()
        consumer_y.start()

        await wait_for_match(consumer_x._command_writer)
        await wait_for_match(consumer_y._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer, min_count=2)

        # X sends first → occupies session
        session_x = await consumer_x.send(AnchorCommandType())
        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Y sends → gets rejected
        await consumer_y.send(AnchorCommandType())
        await asyncio.wait_for(
            consumer_y.terminal_event.wait(), timeout=10.0)

        assert consumer_y.terminal_status.commandStatus == \
            CommandStatusEnum.FAILED
        assert consumer_y.terminal_status.commandStatusReason == \
            CommandReasonEnum.RESOURCE_REJECTED

        # X sends update → X still active
        update_cmd = AnchorCommandType()
        await consumer_x.send(update_cmd, session_id=session_x)

        # X should complete eventually
        await asyncio.wait_for(
            provider.terminal_event.wait(), timeout=10.0)

        await asyncio.wait_for(
            consumer_x.terminal_event.wait(), timeout=10.0)
        assert consumer_x.terminal_status.commandStatus == \
            CommandStatusEnum.COMPLETED

        # Provider saw the update
        assert len(provider.update_calls) >= 1
