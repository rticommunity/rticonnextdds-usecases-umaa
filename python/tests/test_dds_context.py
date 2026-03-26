"""Tests for rtiumaapy.dds_context — DDSContext singleton, factories, lifecycle."""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from tests.conftest import DEFAULT_DOMAIN_ID, SimpleReport
from rtiumaapy.datamodel.AccelerationReportType import (
    UMAA_SA_AccelerationStatus_AccelerationReportTypeTopic as AccelerationReportTypeTopic,
)
from rtiumaapy.datamodel.BatteryReportType import (
    UMAA_EO_BatteryStatus_BatteryReportTypeTopic as BatteryReportTypeTopic,
)
from rtiumaapy.datamodel.GPSReportType import (
    UMAA_SEM_GPSStatus_GPSReportTypeTopic as GPSReportTypeTopic,
)
from rtiumaapy.datamodel.AnchorCommandType import (
    UMAA_EO_AnchorControl_AnchorCommandTypeTopic as AnchorCommandTypeTopic,
)


# ═══════════════════════════════════════════════════════════════════════════
# Singleton behaviour
# ═══════════════════════════════════════════════════════════════════════════


class TestSingleton:
    """DDSContext enforces at-most-one-instance."""

    @pytest.mark.asyncio
    async def test_cannot_create_two(self, dds_context: DDSContext):
        """Second construction raises RuntimeError."""
        with pytest.raises(RuntimeError, match="already exists"):
            DDSContext(domain_id=DEFAULT_DOMAIN_ID)

    @pytest.mark.asyncio
    async def test_current_returns_instance(self, dds_context: DDSContext):
        assert DDSContext.current() is dds_context

    @pytest.mark.asyncio
    async def test_current_raises_when_none(self, qos_file: str):
        """After shutdown, current() raises."""
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        await ctx.shutdown()
        with pytest.raises(RuntimeError, match="not initialized"):
            DDSContext.current()

    @pytest.mark.asyncio
    async def test_recreate_after_shutdown(self, qos_file: str):
        """Can create a new context after shutting down the old one."""
        ctx1 = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        await ctx1.shutdown()
        ctx2 = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        assert DDSContext.current() is ctx2
        await ctx2.shutdown()


# ═══════════════════════════════════════════════════════════════════════════
# Properties
# ═══════════════════════════════════════════════════════════════════════════


class TestProperties:
    @pytest.mark.asyncio
    async def test_participant(self, dds_context: DDSContext):
        assert isinstance(dds_context.participant, dds.DomainParticipant)

    @pytest.mark.asyncio
    async def test_publisher(self, dds_context: DDSContext):
        assert isinstance(dds_context.publisher, dds.Publisher)

    @pytest.mark.asyncio
    async def test_subscriber(self, dds_context: DDSContext):
        assert isinstance(dds_context.subscriber, dds.Subscriber)

    @pytest.mark.asyncio
    async def test_qos_provider(self, dds_context: DDSContext):
        assert isinstance(dds_context.qos_provider, dds.QosProvider)

    @pytest.mark.asyncio
    async def test_domain_id(self, dds_context: DDSContext):
        assert dds_context.domain_id == DEFAULT_DOMAIN_ID


# ═══════════════════════════════════════════════════════════════════════════
# Topic lookup (D17)
# ═══════════════════════════════════════════════════════════════════════════


class TestTopicLookup:
    @pytest.mark.asyncio
    async def test_get_topic_creates(self, dds_context: DDSContext):
        topic = dds_context.get_topic(SimpleReport, GPSReportTypeTopic)
        assert topic.name == GPSReportTypeTopic

    @pytest.mark.asyncio
    async def test_get_topic_reuses_via_find(self, dds_context: DDSContext):
        """Second call finds the existing Topic via dds.Topic.find()."""
        t1 = dds_context.get_topic(SimpleReport, GPSReportTypeTopic)
        t2 = dds_context.get_topic(SimpleReport, GPSReportTypeTopic)
        assert t1 == t2

    @pytest.mark.asyncio
    async def test_different_names_different_topics(self, dds_context: DDSContext):
        t1 = dds_context.get_topic(SimpleReport, AccelerationReportTypeTopic)
        t2 = dds_context.get_topic(SimpleReport, BatteryReportTypeTopic)
        assert t1.name != t2.name


# ═══════════════════════════════════════════════════════════════════════════
# Factory methods
# ═══════════════════════════════════════════════════════════════════════════


class TestCreateWriter:
    @pytest.mark.asyncio
    async def test_creates_writer(self, dds_context: DDSContext):
        writer = dds_context.create_writer(SimpleReport, GPSReportTypeTopic)
        assert isinstance(writer, dds.DataWriter)

    @pytest.mark.asyncio
    async def test_report_qos_best_effort(self, dds_context: DDSContext):
        """*ReportType topics should get TelemetryQoS → BEST_EFFORT."""
        writer = dds_context.create_writer(SimpleReport, AccelerationReportTypeTopic)
        qos = writer.qos
        assert qos.reliability.kind == dds.ReliabilityKind.BEST_EFFORT

    @pytest.mark.asyncio
    async def test_command_qos_reliable(self, dds_context: DDSContext):
        """*CommandType topics should get CommandQoS → RELIABLE."""
        writer = dds_context.create_writer(SimpleReport, AnchorCommandTypeTopic)
        qos = writer.qos
        assert qos.reliability.kind == dds.ReliabilityKind.RELIABLE


class TestCreateReader:
    @pytest.mark.asyncio
    async def test_creates_reader(self, dds_context: DDSContext):
        reader = dds_context.create_reader(SimpleReport, GPSReportTypeTopic)
        assert isinstance(reader, dds.DataReader)

    @pytest.mark.asyncio
    async def test_report_qos_best_effort(self, dds_context: DDSContext):
        reader = dds_context.create_reader(SimpleReport, AccelerationReportTypeTopic)
        qos = reader.qos
        assert qos.reliability.kind == dds.ReliabilityKind.BEST_EFFORT


class TestCreateFilteredReader:
    @pytest.mark.asyncio
    async def test_creates_filtered_reader(self, dds_context: DDSContext):
        reader, cft = dds_context.create_filtered_reader(
            SimpleReport, AnchorCommandTypeTopic, "1=0"
        )
        assert isinstance(reader, dds.DataReader)
        assert isinstance(cft, dds.ContentFilteredTopic)
        assert cft.filter_expression == "1=0"

    @pytest.mark.asyncio
    async def test_filter_can_be_updated(self, dds_context: DDSContext):
        reader, cft = dds_context.create_filtered_reader(
            SimpleReport, AnchorCommandTypeTopic, "1=0"
        )
        cft.set_filter(dds.Filter("id > 5"))
        assert cft.filter_expression == "id > 5"

    @pytest.mark.asyncio
    async def test_custom_filter_name(self, dds_context: DDSContext):
        reader, cft = dds_context.create_filtered_reader(
            SimpleReport, AnchorCommandTypeTopic, "1=0",
            filter_name="my_custom_cft",
        )
        assert cft.name == "my_custom_cft"

    @pytest.mark.asyncio
    async def test_auto_filter_name_unique(self, dds_context: DDSContext):
        _, cft1 = dds_context.create_filtered_reader(
            SimpleReport, AnchorCommandTypeTopic, "1=0"
        )
        _, cft2 = dds_context.create_filtered_reader(
            SimpleReport, AnchorCommandTypeTopic, "1=0"
        )
        assert cft1.name != cft2.name


# ═══════════════════════════════════════════════════════════════════════════
# Service registry
# ═══════════════════════════════════════════════════════════════════════════


class TestServiceRegistry:
    @pytest.mark.asyncio
    async def test_register_and_get(self, dds_context: DDSContext):
        sentinel = object()
        dds_context.register_service("svc1", sentinel)
        assert dds_context.get_service("svc1") is sentinel

    @pytest.mark.asyncio
    async def test_duplicate_key_raises(self, dds_context: DDSContext):
        dds_context.register_service("svc1", object())
        with pytest.raises(ValueError, match="already registered"):
            dds_context.register_service("svc1", object())

    @pytest.mark.asyncio
    async def test_unregister(self, dds_context: DDSContext):
        sentinel = object()
        dds_context.register_service("svc1", sentinel)
        removed = dds_context.unregister_service("svc1")
        assert removed is sentinel
        assert dds_context.get_service("svc1") is None

    @pytest.mark.asyncio
    async def test_unregister_missing(self, dds_context: DDSContext):
        assert dds_context.unregister_service("nonexistent") is None

    @pytest.mark.asyncio
    async def test_registered_keys(self, dds_context: DDSContext):
        dds_context.register_service("a", object())
        dds_context.register_service("b", object())
        keys = dds_context.registered_service_keys()
        assert keys == ["a", "b"]


# ═══════════════════════════════════════════════════════════════════════════
# Shutdown
# ═══════════════════════════════════════════════════════════════════════════


class TestShutdown:
    @pytest.mark.asyncio
    async def test_shutdown_clears_singleton(self, qos_file: str):
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        await ctx.shutdown()
        assert DDSContext._instance is None

    @pytest.mark.asyncio
    async def test_shutdown_clears_registry(self, qos_file: str):
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)

        class FakeService:
            closed = False
            async def close(self):
                self.closed = True

        svc = FakeService()
        ctx.register_service("fake", svc)
        await ctx.shutdown()
        assert svc.closed
        assert ctx.registered_service_keys() == []

    @pytest.mark.asyncio
    async def test_shutdown_closes_in_reverse_order(self, qos_file: str):
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        order = []  # type: list

        class Svc:
            def __init__(self, name: str):
                self.name = name
            async def close(self):
                order.append(self.name)

        ctx.register_service("first", Svc("first"))
        ctx.register_service("second", Svc("second"))
        ctx.register_service("third", Svc("third"))
        await ctx.shutdown()
        assert order == ["third", "second", "first"]
