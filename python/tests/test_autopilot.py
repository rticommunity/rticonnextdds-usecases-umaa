"""Tests for AutopilotComponent — startup messages and GlobalVector command.

Covers:
  - on_start() publishes LogReport, UVPlatformSpecs, UVPlatformCapabilities
  - GlobalVectorControl command lifecycle: send → ack → status transitions
    (ISSUED → COMMANDED → EXECUTING → COMPLETED) → exec_status → terminal
"""

from __future__ import annotations

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil

from rtiumaapy.datamodel.HealthReportType import (
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)
from rtiumaapy.datamodel.LogReportType import (
    UMAA_SO_LogReport_LogReportType as LogReportType,
    UMAA_SO_LogReport_LogReportTypeTopic as LOG_TOPIC,
)
from rtiumaapy.datamodel.UVPlatformSpecsReportType import (
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportType as UVSpecsType,
    UMAA_EO_UVPlatformSpecs_UVPlatformSpecsReportTypeTopic as SPECS_TOPIC,
)
from rtiumaapy.datamodel.UVPlatformCapabilitiesReportType import (
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportType as UVCapsType,
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesReportTypeTopic as CAPS_TOPIC,
)
from rtiumaapy.datamodel.GlobalVectorCommandType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorCommandType as GlobalVectorCommand,
)
from rtiumaapy.datamodel.GlobalVectorExecutionStatusReportType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType as GVExecType,
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTopic as GV_EXEC_TOPIC,
)
from rtiumaapy.services.mo import GlobalVectorControlConsumer

from examples.autopilot.autopilot_component import AutopilotComponent
from tests.conftest import wait_for_match


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------


def _make_source_id() -> IdentifierType:
    """Build a random IdentifierType for test isolation."""
    guid_bytes = GUIDUtil.generate()
    guid = NumericGUID(value=dds.Uint8Seq(guid_bytes))
    return IdentifierType(id=guid, parentID=guid)


# ---------------------------------------------------------------------------
# Test consumer — records hook events for assertions
# ---------------------------------------------------------------------------


class _RecordingConsumer(GlobalVectorControlConsumer):
    """GlobalVectorControlConsumer that records all hook invocations."""

    def __init__(self, ctx, *, source_id, destination_id):
        super().__init__(ctx, source_id=source_id, destination_id=destination_id)
        self.acks: list = []
        self.statuses: list = []
        self.exec_statuses: list = []
        self.terminals: list = []

    async def on_ack(self, session_id, ack):
        self.acks.append((session_id, ack))

    async def on_status(self, session_id, status):
        self.statuses.append((session_id, status))

    async def on_exec_status(self, session_id, exec_status):
        self.exec_statuses.append((session_id, exec_status))

    async def on_terminal(self, session_id, status):
        self.terminals.append((session_id, status))


# ---------------------------------------------------------------------------
# Startup tests (on_start)
# ---------------------------------------------------------------------------


@pytest.mark.asyncio
class TestAutopilotStartup:
    """Verify AutopilotComponent.on_start() publishes expected messages."""

    async def test_log_published(self, dds_context: DDSContext):
        """on_start() publishes a LogReport with the startup message."""
        source_id = _make_source_id()
        reader = dds_context.create_reader(LogReportType, LOG_TOPIC)

        component = AutopilotComponent(dds_context, source_id, health_period=60.0)
        await wait_for_match(component.log_provider.writer)

        await component.on_start()
        await asyncio.sleep(0.3)

        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1, "Expected at least one LogReport sample"
        assert valid[0].data.entry == "Autopilot component started"

    async def test_specs_published(self, dds_context: DDSContext):
        """on_start() publishes UVPlatformSpecs with expected values."""
        source_id = _make_source_id()
        reader = dds_context.create_reader(UVSpecsType, SPECS_TOPIC)

        component = AutopilotComponent(dds_context, source_id, health_period=60.0)
        await wait_for_match(component.specs_provider.writer)

        await component.on_start()
        await asyncio.sleep(0.3)

        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1, "Expected at least one UVPlatformSpecs sample"
        specs = valid[0].data
        assert specs.name == "USV1"
        assert specs.lengthAtWaterline == pytest.approx(5.14)
        assert specs.beamAtWaterline == pytest.approx(1.03)
        assert specs.draft == pytest.approx(0.85)

    async def test_capabilities_published(self, dds_context: DDSContext):
        """on_start() publishes UVPlatformCapabilities with expected values."""
        source_id = _make_source_id()
        reader = dds_context.create_reader(UVCapsType, CAPS_TOPIC)

        component = AutopilotComponent(dds_context, source_id, health_period=60.0)
        await wait_for_match(component.caps_provider.writer)

        await component.on_start()
        await asyncio.sleep(0.3)

        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1, "Expected at least one UVPlatformCapabilities sample"
        caps = valid[0].data
        assert caps.minWaterDepth == pytest.approx(2.0)
        assert caps.surfaceCapabilities.maxForwardSpeed == pytest.approx(22.35)
        assert caps.surfaceCapabilities.maxTurnRate == pytest.approx(0.5)

    async def test_all_startup_messages(self, dds_context: DDSContext):
        """on_start() publishes all three startup messages in one call."""
        source_id = _make_source_id()

        log_reader = dds_context.create_reader(LogReportType, LOG_TOPIC)
        specs_reader = dds_context.create_reader(UVSpecsType, SPECS_TOPIC)
        caps_reader = dds_context.create_reader(UVCapsType, CAPS_TOPIC)

        component = AutopilotComponent(dds_context, source_id, health_period=60.0)

        await wait_for_match(component.log_provider.writer)
        await wait_for_match(component.specs_provider.writer)
        await wait_for_match(component.caps_provider.writer)

        await component.on_start()
        await asyncio.sleep(0.3)

        log_samples = [s for s in log_reader.take() if s.info.valid]
        specs_samples = [s for s in specs_reader.take() if s.info.valid]
        caps_samples = [s for s in caps_reader.take() if s.info.valid]

        assert len(log_samples) >= 1, "Missing LogReport"
        assert len(specs_samples) >= 1, "Missing UVPlatformSpecs"
        assert len(caps_samples) >= 1, "Missing UVPlatformCapabilities"

        assert log_samples[0].data.entry == "Autopilot component started"
        assert specs_samples[0].data.name == "USV1"
        assert caps_samples[0].data.minWaterDepth == pytest.approx(2.0)


# ---------------------------------------------------------------------------
# GlobalVectorCommand tests
# ---------------------------------------------------------------------------


@pytest.mark.asyncio
class TestGlobalVectorCommand:
    """Verify GlobalVector command lifecycle: send → ack → statuses → terminal."""

    async def test_command_ack_received(self, dds_context: DDSContext):
        """Provider publishes an ack when a command is received."""
        provider_id = _make_source_id()
        consumer_id = _make_source_id()

        component = AutopilotComponent(dds_context, provider_id, health_period=60.0)
        component.global_vector.start()

        consumer = _RecordingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(component.global_vector._ack_writer)

        cmd = GlobalVectorCommand()
        await consumer.send(cmd)

        await asyncio.sleep(1.0)

        assert len(consumer.acks) >= 1, "Expected at least one ack from the provider"

    async def test_command_status_transitions(self, dds_context: DDSContext):
        """Provider publishes ISSUED → COMMANDED → EXECUTING → COMPLETED."""
        provider_id = _make_source_id()
        consumer_id = _make_source_id()

        component = AutopilotComponent(dds_context, provider_id, health_period=60.0)
        component.global_vector.start()

        consumer = _RecordingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(component.global_vector._ack_writer)
        await wait_for_match(component.global_vector._status_writer)

        cmd = GlobalVectorCommand()
        session_id = await consumer.send(cmd)

        await asyncio.sleep(1.0)

        status_names = [s.commandStatus.name for _, s in consumer.statuses]
        assert "ISSUED" in status_names, f"Missing ISSUED in {status_names}"
        assert "COMMANDED" in status_names, f"Missing COMMANDED in {status_names}"
        assert "EXECUTING" in status_names, f"Missing EXECUTING in {status_names}"

    async def test_command_completes_successfully(self, dds_context: DDSContext):
        """Session reaches COMPLETED with SUCCEEDED reason."""
        provider_id = _make_source_id()
        consumer_id = _make_source_id()

        component = AutopilotComponent(dds_context, provider_id, health_period=60.0)
        component.global_vector.start()

        consumer = _RecordingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(component.global_vector._ack_writer)
        await wait_for_match(component.global_vector._status_writer)

        cmd = GlobalVectorCommand()
        await consumer.send(cmd)

        await asyncio.sleep(1.0)

        # Terminal hook should have been called
        assert len(consumer.terminals) >= 1, "Expected terminal callback"
        terminal_status = consumer.terminals[0][1]
        assert terminal_status is not None, "Terminal status should not be None"
        assert terminal_status.commandStatus.name == "COMPLETED"

    async def test_exec_status_published(self, dds_context: DDSContext):
        """Provider publishes an execution status report during EXECUTING.

        Uses a direct (unfiltered) reader rather than the consumer's
        on_exec_status hook.  The consumer tears down its session as
        soon as COMPLETED status arrives, so the exec_status hook may
        never fire — that is correct SDK behaviour (session lifecycle
        tests cover teardown).  This test verifies the provider *sent*
        the message, which is an independent concern.
        """
        provider_id = _make_source_id()
        consumer_id = _make_source_id()

        # Direct reader — sees all exec_status samples, independent of
        # consumer session state.
        exec_reader = dds_context.create_reader(GVExecType, GV_EXEC_TOPIC)

        component = AutopilotComponent(dds_context, provider_id, health_period=60.0)
        component.global_vector.start()

        consumer = _RecordingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(component.global_vector._ack_writer)
        await wait_for_match(component.global_vector._status_writer)
        if component.global_vector._exec_status_writer is not None:
            await wait_for_match(component.global_vector._exec_status_writer)

        cmd = GlobalVectorCommand()
        await consumer.send(cmd)

        await asyncio.sleep(2.0)

        samples = exec_reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1, "Expected provider to publish execution status"

    async def test_session_id_consistent(self, dds_context: DDSContext):
        """All lifecycle events reference the same session_id."""
        provider_id = _make_source_id()
        consumer_id = _make_source_id()

        component = AutopilotComponent(dds_context, provider_id, health_period=60.0)
        component.global_vector.start()

        consumer = _RecordingConsumer(
            dds_context, source_id=consumer_id, destination_id=provider_id,
        )
        consumer.start()

        await wait_for_match(consumer._command_writer)
        await wait_for_match(component.global_vector._ack_writer)
        await wait_for_match(component.global_vector._status_writer)

        cmd = GlobalVectorCommand()
        session_id = await consumer.send(cmd)

        await asyncio.sleep(1.0)

        for sid, _ in consumer.acks:
            assert sid == session_id, "Ack session_id mismatch"
        for sid, _ in consumer.statuses:
            assert sid == session_id, "Status session_id mismatch"
        for sid, _ in consumer.exec_statuses:
            assert sid == session_id, "ExecStatus session_id mismatch"
        for sid, _ in consumer.terminals:
            assert sid == session_id, "Terminal session_id mismatch"
