"""Tests for rtiumaapy.report_provider — ReportProvider publish + dispose."""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.report_provider import ReportProvider
from tests.conftest import FakeReportType, wait_for_match
from rtiumaapy.datamodel.GPSReportType import (
    UMAA_SEM_GPSStatus_GPSReportTypeTopic as GPSReportTypeTopic,
)
from rtiumaapy.datamodel.AnchorSpecsReportType import (
    UMAA_EO_AnchorSpecs_AnchorSpecsReportTypeTopic as AnchorSpecsReportTypeTopic,
)


# ═══════════════════════════════════════════════════════════════════════════
# Construction
# ═══════════════════════════════════════════════════════════════════════════


class TestConstruction:
    @pytest.mark.asyncio
    async def test_creates_writer(self, dds_context: DDSContext):
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        assert isinstance(prov.writer, dds.DataWriter)

    @pytest.mark.asyncio
    async def test_auto_registers(self, dds_context: DDSContext):
        key = FakeReportType(source=1)
        ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        assert dds_context.get_service("GPSProvider") is not None

    @pytest.mark.asyncio
    async def test_report_topic_property(self, dds_context: DDSContext):
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        assert prov.report_topic == GPSReportTypeTopic


# ═══════════════════════════════════════════════════════════════════════════
# Writing
# ═══════════════════════════════════════════════════════════════════════════


class TestWrite:
    @pytest.mark.asyncio
    async def test_write_sample(self, dds_context: DDSContext):
        """Written sample is received by a raw DataReader."""
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        # Create a raw reader on the same topic
        reader = dds_context.create_reader(FakeReportType, GPSReportTypeTopic)

        # Wait for writer-reader matching (BEST_EFFORT drops unmatched writes)
        await wait_for_match(prov.writer)

        sample = FakeReportType(source=1, temperature=98.6)
        prov.write(sample)

        await asyncio.sleep(0.2)

        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        assert len(valid) >= 1
        assert valid[0].data.temperature == 98.6

    @pytest.mark.asyncio
    async def test_write_multiple_samples(self, dds_context: DDSContext):
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        reader = dds_context.create_reader(FakeReportType, GPSReportTypeTopic)

        await wait_for_match(prov.writer)

        prov.write(FakeReportType(source=1, temperature=10.0))
        prov.write(FakeReportType(source=1, temperature=20.0))
        prov.write(FakeReportType(source=1, temperature=30.0))

        await asyncio.sleep(0.2)

        samples = reader.take()
        valid = [s for s in samples if s.info.valid]
        temps = [s.data.temperature for s in valid]
        assert 30.0 in temps


# ═══════════════════════════════════════════════════════════════════════════
# QoS
# ═══════════════════════════════════════════════════════════════════════════


class TestQoS:
    @pytest.mark.asyncio
    async def test_report_qos_best_effort(self, dds_context: DDSContext):
        """*ReportType topics get telemetry QoS → BEST_EFFORT."""
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        assert prov.writer.qos.reliability.kind == dds.ReliabilityKind.BEST_EFFORT

    @pytest.mark.asyncio
    async def test_specs_report_qos_reliable(self, dds_context: DDSContext):
        """*SpecsReportType topics get config QoS → RELIABLE."""
        key = FakeReportType(source=1)
        prov = ReportProvider(
            dds_context, "AnchorSpecsProvider", FakeReportType,
            AnchorSpecsReportTypeTopic, key,
        )
        assert prov.writer.qos.reliability.kind == dds.ReliabilityKind.RELIABLE
