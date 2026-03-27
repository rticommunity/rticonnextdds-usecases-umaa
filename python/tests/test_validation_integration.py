"""Integration tests for UMAA validation through base classes.

V4: Verify that validation is wired into CommandProvider,
ReportProvider, and ReportConsumer with real DDS traffic.
"""

import asyncio
import logging

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
from rtiumaapy.report_provider import ReportProvider
from rtiumaapy.report_consumer import ReportConsumer

from rtiumaapy.datamodel.GlobalVectorCommandType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandType as GlobalVectorCommandType,
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandTypeTopic as GlobalVectorCommandTypeTopic,
)
from rtiumaapy.datamodel.GlobalVectorCommandStatusType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusType as GlobalVectorCommandStatusType,
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandStatusTypeTopic as GlobalVectorCommandStatusTypeTopic,
)
from rtiumaapy.datamodel.GlobalVectorCommandAckReportType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportType as GlobalVectorCommandAckReportType,
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandAckReportTypeTopic as GlobalVectorCommandAckReportTypeTopic,
)
from rtiumaapy.datamodel.Measurements import (
    UMAA_Common_Measurement_DateTime as DateTime,
)
from rtiumaapy.datamodel.IdentifierType import (
    UMAA_Common_IdentifierType as IdentifierType,
)
from rtiumaapy.datamodel.Measurements import (
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
    UMAA_SO_HealthReport_HealthReportTypeTopic as HealthReportTypeTopic,
)
from tests.conftest import wait_for_match


# ── Helpers ───────────────────────────────────────────────────────────────


def _make_id() -> IdentifierType:
    return IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
        parentID=NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate())),
    )


# ── Provider/Consumer subclasses ─────────────────────────────────────────


class _DefaultValidationProvider(CommandProvider):
    """Provider using the default validate_command (validate_message)."""

    def __init__(self, ctx, source_id):
        super().__init__(
            ctx, "ValidationProvider",
            command_type=GlobalVectorCommandType,
            ack_type=GlobalVectorCommandAckReportType,
            status_type=GlobalVectorCommandStatusType,
            command_topic=GlobalVectorCommandTypeTopic,
            ack_topic=GlobalVectorCommandAckReportTypeTopic,
            status_topic=GlobalVectorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self.terminal_event = asyncio.Event()

    async def on_executing(self, session):
        await asyncio.sleep(0.05)

    async def on_terminal(self, session):
        self.terminal_event.set()


class _TrackingConsumer(CommandConsumer):
    """Consumer that records terminal status."""

    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "ValidationConsumer",
            command_type=GlobalVectorCommandType,
            ack_type=GlobalVectorCommandAckReportType,
            status_type=GlobalVectorCommandStatusType,
            command_topic=GlobalVectorCommandTypeTopic,
            ack_topic=GlobalVectorCommandAckReportTypeTopic,
            status_topic=GlobalVectorCommandStatusTypeTopic,
            source_id=source_id,
            destination_id=destination_id,
        )
        self.statuses = []
        self.terminal_event = asyncio.Event()
        self.terminal_status = None

    async def on_status(self, session_id, status):
        self.statuses.append(status.commandStatus)

    async def on_terminal(self, session_id, status):
        self.terminal_status = status
        self.terminal_event.set()


class _TrackingReportConsumer(ReportConsumer):
    """Report consumer that records received reports."""

    def __init__(self, ctx, name, report_type, report_topic):
        super().__init__(ctx, name, report_type, report_topic)
        self.received = []
        self.done = asyncio.Event()

    async def on_report(self, sample):
        self.received.append(sample)
        self.done.set()


# ═══════════════════════════════════════════════════════════════════════════
# Command validation integration
# ═══════════════════════════════════════════════════════════════════════════


class TestCommandValidation:
    """Default validate_command uses validate_message on real DDS traffic."""

    @pytest.mark.asyncio
    async def test_command_provider_rejects_invalid(self, dds_context: DDSContext):
        """Send command with invalid field → FAILED(VALIDATION_FAILED)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = _DefaultValidationProvider(dds_context, source_id=provider_id)
        consumer = _TrackingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # Create command with invalid endTime (not auto-stamped by send())
        cmd = GlobalVectorCommandType()
        invalid_end = DateTime()
        invalid_end.nanoseconds = -1  # out of range [0, 999999999]
        cmd.endTime = invalid_end

        await consumer.send(cmd)

        await asyncio.wait_for(consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == CommandStatusEnum.FAILED
        assert (
            consumer.terminal_status.commandStatusReason
            == CommandReasonEnum.VALIDATION_FAILED
        )

    @pytest.mark.asyncio
    async def test_command_provider_accepts_valid(self, dds_context: DDSContext):
        """Send valid command → state advances through COMMANDED to COMPLETED."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = _DefaultValidationProvider(dds_context, source_id=provider_id)
        consumer = _TrackingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )

        provider.start()
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(provider._ack_writer)
        await wait_for_match(provider._status_writer)

        # Send a fully valid command
        cmd = GlobalVectorCommandType()

        await consumer.send(cmd)

        await asyncio.wait_for(consumer.terminal_event.wait(), timeout=10.0)

        assert consumer.terminal_status is not None
        assert consumer.terminal_status.commandStatus == CommandStatusEnum.COMPLETED
        assert CommandStatusEnum.COMMANDED in consumer.statuses


# ═══════════════════════════════════════════════════════════════════════════
# Report validation integration
# ═══════════════════════════════════════════════════════════════════════════


class TestReportValidation:
    """Validation in ReportProvider.write() and ReportConsumer._run()."""

    @pytest.mark.asyncio
    async def test_report_provider_warns_invalid(
        self, dds_context: DDSContext, caplog,
    ):
        """Write invalid report → warning logged, still published."""
        key = HealthReportType()
        prov = ReportProvider(
            dds_context, "HealthProvider",
            HealthReportType, HealthReportTypeTopic, key,
        )
        reader = dds_context.create_reader(HealthReportType, HealthReportTypeTopic)
        await wait_for_match(prov.writer)

        # Invalid: nanoseconds out of range
        sample = HealthReportType()
        sample.timeStamp.nanoseconds = -1

        with caplog.at_level(logging.WARNING):
            prov.write(sample)

        # Warning should be logged
        assert any("validation failed" in r.message.lower() for r in caplog.records)

        # Sample should still be published
        await asyncio.sleep(0.3)
        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1

    @pytest.mark.asyncio
    async def test_report_consumer_warns_invalid(
        self, dds_context: DDSContext, caplog,
    ):
        """Receive invalid report → warning logged, callback still fires."""
        consumer = _TrackingReportConsumer(
            dds_context, "HealthConsumer",
            HealthReportType, HealthReportTypeTopic,
        )
        consumer.start()

        writer = dds_context.create_writer(HealthReportType, HealthReportTypeTopic)
        await wait_for_match(writer)

        # Write an invalid report
        sample = HealthReportType()
        sample.timeStamp.nanoseconds = -1

        with caplog.at_level(logging.WARNING):
            writer.write(sample)
            await asyncio.wait_for(consumer.done.wait(), timeout=5.0)

        # Warning should be logged
        assert any("invalid report" in r.message.lower() for r in caplog.records)

        # Callback still received the data
        assert len(consumer.received) >= 1
