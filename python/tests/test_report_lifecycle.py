"""Tests for report lifecycle — provider → consumer round-trip and dispose."""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.report_consumer import ReportConsumer
from rtiumaapy.report_provider import ReportProvider
from tests.conftest import FakeReportType, wait_for_match
from rtiumaapy.datamodel.GPSReportType import (
    UMAA_SEM_GPSStatus_GPSReportTypeTopic as GPSReportTypeTopic,
)


# ═══════════════════════════════════════════════════════════════════════════
# End-to-end round-trip
# ═══════════════════════════════════════════════════════════════════════════


class TestRoundTrip:
    @pytest.mark.asyncio
    async def test_provider_to_consumer(self, dds_context: DDSContext):
        """Provider writes → Consumer on_report fires with correct data."""
        received = []  # type: list
        done = asyncio.Event()
        key = FakeReportType(source=7)

        class TestConsumer(ReportConsumer):
            async def on_report(self, sample):
                received.append(sample)
                done.set()

        provider = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        consumer = TestConsumer(
            dds_context, "GPSConsumer", FakeReportType, GPSReportTypeTopic,
        )
        consumer.start()

        await wait_for_match(provider.writer)  # ensure matched before writing

        provider.write(FakeReportType(source=7, temperature=99.9))

        await asyncio.wait_for(done.wait(), timeout=5.0)

        assert len(received) >= 1
        assert received[0].source == 7
        assert received[0].temperature == 99.9


# ═══════════════════════════════════════════════════════════════════════════
# Instance disposal on close
# ═══════════════════════════════════════════════════════════════════════════


class TestDispose:
    @pytest.mark.asyncio
    async def test_close_disposes_instance(self, dds_context: DDSContext):
        """After provider.close(), subscriber sees NOT_ALIVE_DISPOSED."""
        key = FakeReportType(source=42)
        provider = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        reader = dds_context.create_reader(FakeReportType, GPSReportTypeTopic)

        # Wait for match then write so BEST_EFFORT data is delivered
        await wait_for_match(provider.writer)

        # Write a sample so the instance is registered
        provider.write(FakeReportType(source=42, temperature=50.0))
        await asyncio.sleep(0.2)

        # Drain the alive sample
        reader.take()

        # Close the provider — should dispose the instance
        await provider.close()

        # Poll for the dispose notification (arrives asynchronously)
        disposed = []  # type: list
        deadline = asyncio.get_running_loop().time() + 5.0
        while not disposed and asyncio.get_running_loop().time() < deadline:
            await asyncio.sleep(0.1)
            for s in reader.take():
                if s.info.state.instance_state == dds.InstanceState.NOT_ALIVE_DISPOSED:
                    disposed.append(s)

        assert len(disposed) >= 1

    @pytest.mark.asyncio
    async def test_close_without_write_no_crash(self, dds_context: DDSContext):
        """Closing a provider that never wrote should not raise."""
        key = FakeReportType(source=99)
        provider = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        await provider.close()
        # No exception means pass


# ═══════════════════════════════════════════════════════════════════════════
# Shutdown integration
# ═══════════════════════════════════════════════════════════════════════════


class TestShutdownIntegration:
    @pytest.mark.asyncio
    async def test_shutdown_closes_provider_and_consumer(self, dds_context: DDSContext):
        """DDSContext.shutdown() calls close() on both provider and consumer."""
        key = FakeReportType(source=1)
        provider = ReportProvider(
            dds_context, "GPSProvider", FakeReportType, GPSReportTypeTopic, key,
        )
        consumer = ReportConsumer(
            dds_context, "GPSConsumer", FakeReportType, GPSReportTypeTopic,
        )

        # Provider and consumer are registered
        assert dds_context.get_service("GPSProvider") is provider
        assert dds_context.get_service("GPSConsumer") is consumer

        await dds_context.shutdown()

        # Registry is cleared after shutdown
        assert dds_context.registered_service_keys() == []
