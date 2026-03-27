"""Tests for provider crash detection (C29).

Consumer detects NOT_ALIVE_NO_WRITERS on status reader →
    on_terminal(session_id, None) fires.
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


class CrashableProvider(CommandProvider):
    """Provider that we can 'crash' by closing its status writer."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "CrashableProvider",
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


class CrashConsumer(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "CrashConsumer",
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


class TestProviderCrash:
    """C29: Consumer detects provider crash via NOT_ALIVE_NO_WRITERS."""

    @pytest.mark.asyncio
    async def test_status_writer_close_triggers_terminal(self, dds_context: DDSContext):
        """When provider's status writer closes, consumer sees NO_WRITERS → on_terminal(None)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = CrashableProvider(dds_context, source_id=provider_id)
        consumer = CrashConsumer(
            dds_context, source_id=consumer_id,
            destination_id=provider_id)

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        session_id = await consumer.send(AnchorCommandType())

        await asyncio.wait_for(
            provider.executing_started.wait(), timeout=10.0)

        # Simulate crash: close the provider's status writer
        # This should trigger NOT_ALIVE_NO_WRITERS on consumer's status reader
        provider._status_writer.close()

        # Consumer should detect the crash
        await asyncio.wait_for(
            consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_session_id == session_id
        assert consumer.terminal_status is None  # crash → no final status
