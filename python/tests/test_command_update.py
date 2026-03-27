"""Tests for command update scenarios (D39, C32).

- Same sessionID + newer timestamp → ISSUED(UPDATED) → on_updated() → re-enters
- Older timestamp → ignored
- Update on terminal state (edge case)
"""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.timestamp import UmaaTimestamp
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


class UpdateProvider(CommandProvider):
    """Provider that records update events and blocks for update injection."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "UpdateProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.update_calls = []
        self.executing_started = asyncio.Event()
        self.terminal_event = asyncio.Event()
        self.execute_count = 0

    async def on_updated(self, session, previous_command, updated_command):
        self.update_calls.append((previous_command, updated_command))

    async def on_executing(self, session):
        self.execute_count += 1
        if self.execute_count == 1:
            # First execution — signal and wait for update to arrive
            self.executing_started.set()
            # Sleep briefly so the update can be injected externally
            await asyncio.sleep(0.5)
        # Second execution continues normally → COMPLETED

    async def on_terminal(self, session):
        self.terminal_event.set()


class UpdateConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "UpdateConsumer",
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


class TestCommandUpdate:
    """D39/C32: Command update → ISSUED(UPDATED) → on_updated → re-enter."""

    @pytest.mark.asyncio
    async def test_update_reenters_state_machine(self, dds_context: DDSContext):
        """Update with newer timestamp → on_updated fires, state machine re-enters."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = UpdateProvider(dds_context, source_id=provider_id)
        consumer = UpdateConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # Send initial command
        session_id = await consumer.send(AnchorCommandType())

        # Wait for executing
        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Send update via consumer — same session, new timestamp
        update_cmd = AnchorCommandType()
        await consumer.send(update_cmd, session_id=session_id)

        # Wait for full completion (2 executions + terminal)
        await asyncio.wait_for(
            provider.terminal_event.wait(), timeout=10.0)

        # on_updated was called with previous and updated commands
        assert len(provider.update_calls) >= 1
        previous, updated = provider.update_calls[0]
        # The timestamps should differ (updated is newer)
        assert updated.timeStamp.seconds >= previous.timeStamp.seconds

        # Provider executed twice (original + update)
        assert provider.execute_count == 2

        # Final status should be COMPLETED
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)
        assert consumer.terminal_status.commandStatus == \
            CommandStatusEnum.COMPLETED

    @pytest.mark.asyncio
    async def test_older_timestamp_ignored(self, dds_context: DDSContext):
        """Command with older timestamp is silently ignored."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = UpdateProvider(dds_context, source_id=provider_id)

        provider.start()

        await asyncio.sleep(0.5)

        # Manually write a command with specific timestamps to the writer
        # to test the older-timestamp guard in _handle_valid_sample
        writer = dds_context.create_writer(
            AnchorCommandType, AnchorCommandTypeTopic)
        await wait_for_match(writer)

        session_guid = NumericGUID(
            value=dds.Uint8Seq(GUIDUtil.generate()))

        # First command with timestamp = 100
        cmd1 = AnchorCommandType()
        cmd1.source = consumer_id
        cmd1.destination = provider_id
        cmd1.sessionID = session_guid
        cmd1.timeStamp.seconds = 100
        cmd1.timeStamp.nanoseconds = 0
        writer.write(cmd1)

        # Wait for provider to start executing
        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Send "older" command with timestamp = 50
        cmd2 = AnchorCommandType()
        cmd2.source = consumer_id
        cmd2.destination = provider_id
        cmd2.sessionID = session_guid
        cmd2.timeStamp.seconds = 50
        cmd2.timeStamp.nanoseconds = 0
        writer.write(cmd2)

        # Short wait — older command should be ignored
        await asyncio.sleep(0.5)

        # on_updated should NOT have been called
        assert len(provider.update_calls) == 0

        # Clean up
        await provider.close()
