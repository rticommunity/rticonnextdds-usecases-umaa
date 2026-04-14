"""Tests for rtiumaapy.report_consumer — ReportConsumer subclass-override delivery (D36)."""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.report_consumer import ReportConsumer
from tests.conftest import FakeReportType, wait_for_match
from rtiumaapy.datamodel.GPSReportType import (
    UMAA_SEM_GPSStatus_GPSReportTypeTopic as GPSReportTypeTopic,
)


# ═══════════════════════════════════════════════════════════════════════════
# Construction
# ═══════════════════════════════════════════════════════════════════════════


class TestConstruction:
    @pytest.mark.asyncio
    async def test_creates_reader(self, dds_context: DDSContext):
        consumer = ReportConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        assert isinstance(consumer.reader, dds.DataReader)

    @pytest.mark.asyncio
    async def test_auto_registers(self, dds_context: DDSContext):
        ReportConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        assert dds_context.get_service("GPSConsumer") is not None

    @pytest.mark.asyncio
    async def test_report_topic_property(self, dds_context: DDSContext):
        consumer = ReportConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        assert consumer.report_topic == GPSReportTypeTopic


# ═══════════════════════════════════════════════════════════════════════════
# Subclass-override delivery (D36)
# ═══════════════════════════════════════════════════════════════════════════


class TestOnReport:
    @pytest.mark.asyncio
    async def test_on_report_fires_on_data(self, dds_context: DDSContext):
        """Raw writer → subclass on_report receives the sample."""
        received = []  # type: list
        done = asyncio.Event()

        class TestConsumer(ReportConsumer):
            async def on_report(self, sample):
                received.append(sample)
                done.set()

        consumer = TestConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        consumer.start()

        writer = dds_context.create_writer(FakeReportType, GPSReportTypeTopic)
        await wait_for_match(writer)

        writer.write(FakeReportType(source=1, temperature=42.0))

        await asyncio.wait_for(done.wait(), timeout=5.0)

        assert len(received) >= 1
        assert received[0].temperature == 42.0

    @pytest.mark.asyncio
    async def test_multiple_samples_delivered(self, dds_context: DDSContext):
        received = []  # type: list
        done = asyncio.Event()

        class TestConsumer(ReportConsumer):
            async def on_report(self, sample):
                received.append(sample)
                if len(received) >= 3:
                    done.set()

        consumer = TestConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        consumer.start()

        writer = dds_context.create_writer(FakeReportType, GPSReportTypeTopic)
        await wait_for_match(writer)

        for temp in [10.0, 20.0, 30.0]:
            writer.write(FakeReportType(source=1, temperature=temp))
            await asyncio.sleep(0.05)

        await asyncio.wait_for(done.wait(), timeout=5.0)

        temps = [s.temperature for s in received]
        assert 10.0 in temps
        assert 30.0 in temps

    @pytest.mark.asyncio
    async def test_default_on_report_no_crash(self, dds_context: DDSContext):
        """Base class on_report (no-op) runs without error."""
        consumer = ReportConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        consumer.start()

        writer = dds_context.create_writer(FakeReportType, GPSReportTypeTopic)
        await wait_for_match(writer)

        writer.write(FakeReportType(source=1, temperature=42.0))

        await asyncio.sleep(0.3)
        # No exception means pass

    @pytest.mark.asyncio
    async def test_on_report_exception_logged_not_raised(self, dds_context: DDSContext):
        """A failing on_report doesn't crash the run loop."""
        call_count = [0]
        done = asyncio.Event()

        class FailThenSucceedConsumer(ReportConsumer):
            async def on_report(self, sample):
                call_count[0] += 1
                if call_count[0] == 1:
                    raise ValueError("boom")
                # Second call succeeded — signal done
                done.set()

        consumer = FailThenSucceedConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        consumer.start()

        writer = dds_context.create_writer(FakeReportType, GPSReportTypeTopic)
        await wait_for_match(writer)

        writer.write(FakeReportType(source=1, temperature=1.0))
        await asyncio.sleep(0.2)
        writer.write(FakeReportType(source=1, temperature=2.0))

        await asyncio.wait_for(done.wait(), timeout=5.0)

        # Both calls happened — the exception didn't kill the loop
        assert call_count[0] >= 2


# ═══════════════════════════════════════════════════════════════════════════
# QoS
# ═══════════════════════════════════════════════════════════════════════════


class TestQoS:
    @pytest.mark.asyncio
    async def test_report_qos_best_effort(self, dds_context: DDSContext):
        consumer = ReportConsumer(
            dds_context, "GPSConsumer", report_type=FakeReportType, report_topic=GPSReportTypeTopic,
        )
        assert consumer.reader.qos.reliability.kind == dds.ReliabilityKind.BEST_EFFORT
