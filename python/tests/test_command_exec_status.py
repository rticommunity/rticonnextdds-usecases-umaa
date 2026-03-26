"""Tests for execution status round-trip (C30).

4th-slot exec_status: provider publishes during on_executing(),
consumer receives via on_exec_status() hook.
Also: 3-slot mode (no exec_status) works correctly.
"""

import asyncio

import pytest
import rti.connextdds as dds
import rti.types as idltypes

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.timestamp import UmaaTimestamp
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
from rtiumaapy.datamodel.GlobalDriftExecutionStatusReportType import (
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportType as GlobalDriftExecStatusType,
    UMAA_MO_GlobalDriftControl_GlobalDriftExecutionStatusReportTypeTopic as GlobalDriftExecStatusTopic,
)
from rtiumaapy.datamodel.GlobalDriftCommandType import (
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType as GlobalDriftCommandType,
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTopic as GlobalDriftCommandTopic,
)
from rtiumaapy.datamodel.GlobalDriftCommandStatusType import (
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandStatusType as GlobalDriftCommandStatusType,
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandStatusTypeTopic as GlobalDriftCommandStatusTopic,
)
from rtiumaapy.datamodel.GlobalDriftCommandAckReportType import (
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType as GlobalDriftAckType,
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeTopic as GlobalDriftAckTopic,
)
from tests.conftest import wait_for_match


def _make_id() -> IdentifierType:
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


class ExecStatusProvider(CommandProvider):
    """Provider that publishes exec_status during on_executing."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "ExecStatusProvider",
            command_type=GlobalDriftCommandType,
            ack_type=GlobalDriftAckType,
            status_type=GlobalDriftCommandStatusType,
            command_topic=GlobalDriftCommandTopic,
            ack_topic=GlobalDriftAckTopic,
            status_topic=GlobalDriftCommandStatusTopic,
            exec_status_type=GlobalDriftExecStatusType,
            exec_status_topic=GlobalDriftExecStatusTopic,
            source_id=source_id,
        )
        self.terminal_event = asyncio.Event()

    async def on_executing(self, session):
        # Publish exec status during execution
        exec_status = GlobalDriftExecStatusType()
        exec_status.source = self._source_id
        exec_status.sessionID = session.command.sessionID
        exec_status.distanceFromReference = 42.5
        ts = UmaaTimestamp.now()
        exec_status.timeStamp.seconds = ts.seconds
        exec_status.timeStamp.nanoseconds = ts.nanoseconds
        self._exec_status_writer.write(exec_status)
        await asyncio.sleep(0.1)  # Ensure consumer has time to receive

    async def on_terminal(self, session):
        self.terminal_event.set()


class ExecStatusConsumer(CommandConsumer):
    """Consumer with exec_status reader."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "ExecStatusConsumer",
            command_type=GlobalDriftCommandType,
            ack_type=GlobalDriftAckType,
            status_type=GlobalDriftCommandStatusType,
            command_topic=GlobalDriftCommandTopic,
            ack_topic=GlobalDriftAckTopic,
            status_topic=GlobalDriftCommandStatusTopic,
            exec_status_type=GlobalDriftExecStatusType,
            exec_status_topic=GlobalDriftExecStatusTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.exec_statuses = []
        self.terminal_event = asyncio.Event()
        self.terminal_status = None

    async def on_exec_status(self, session_id, exec_status):
        self.exec_statuses.append(exec_status)

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


class ThreeSlotProvider(CommandProvider):
    """Provider without exec_status (3-slot mode)."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "ThreeSlotProvider",
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


class ThreeSlotConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "ThreeSlotConsumer",
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

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


# ═══════════════════════════════════════════════════════════════════════════
# Tests
# ═══════════════════════════════════════════════════════════════════════════


class TestExecStatusRoundTrip:
    """C30: exec_status 4th-slot round-trip."""

    @pytest.mark.asyncio
    async def test_exec_status_received(self, dds_context: DDSContext):
        """Provider writes exec_status → consumer on_exec_status() receives it."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = ExecStatusProvider(dds_context, source_id=provider_id)
        consumer = ExecStatusConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)
        await wait_for_match(provider._exec_status_writer)

        cmd = GlobalDriftCommandType()
        await consumer.send(cmd)

        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        # Consumer should have received at least one exec status
        assert len(consumer.exec_statuses) >= 1
        assert consumer.exec_statuses[0].distanceFromReference == 42.5

        # Final status should be COMPLETED
        assert consumer.terminal_status.commandStatus == \
            CommandStatusEnum.COMPLETED


class TestThreeSlotMode:
    """C30: 3-slot mode (no exec_status) still works."""

    @pytest.mark.asyncio
    async def test_three_slot_completes(self, dds_context: DDSContext):
        """Command lifecycle works without exec_status type/topic."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = ThreeSlotProvider(dds_context, source_id=provider_id)
        consumer = ThreeSlotConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_status.commandStatus == \
            CommandStatusEnum.COMPLETED
