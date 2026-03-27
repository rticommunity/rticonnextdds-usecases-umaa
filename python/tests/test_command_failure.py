"""Tests for command failure scenarios.

- CommandHookError from provider hooks → FAILED with correct reason
- Invalid transition guard: _transition_to rejects impossible state jumps
- Reason coercion (D51): invalid reason for current state → coerced to SERVICE_FAILED
"""

import asyncio

import pytest
import rti.connextdds as dds

from rtiumaapy.dds_context import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.errors import CommandHookError
from rtiumaapy.command_provider import CommandProvider
from rtiumaapy.command_consumer import CommandConsumer
from rtiumaapy.command_provider_session import (
    CommandProviderSession,
    CommandStatusEnum,
    CommandReasonEnum,
    _VALID_TRANSITIONS,
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


class FailingProvider(CommandProvider):
    """Provider that raises CommandHookError in on_executing."""

    def __init__(self, ctx, source_id, reason_enum=None, exc=None):
        super().__init__(
            ctx, "FailingProvider",
            command_type=AnchorCommandType,
            ack_type=AnchorCommandAckReportType,
            status_type=AnchorCommandStatusType,
            command_topic=AnchorCommandTypeTopic,
            ack_topic=AnchorCommandAckReportTypeTopic,
            status_topic=AnchorCommandStatusTypeTopic,
            source_id=source_id,
        )
        self._reason = reason_enum or CommandReasonEnum.OBJECTIVE_FAILED
        self._exc = exc
        self.terminal_event = asyncio.Event()
        self.failed_exception = None

    async def on_executing(self, session):
        if self._exc is not None:
            raise self._exc
        raise CommandHookError(self._reason, "test failure")

    async def on_failed(self, session, exception):
        self.failed_exception = exception

    async def on_terminal(self, session):
        self.terminal_event.set()


class StatusCollector(CommandConsumer):
    def __init__(self, ctx, source_id, destination_id):
        super().__init__(
            ctx, "StatusCollector",
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
# Hook failure tests
# ═══════════════════════════════════════════════════════════════════════════


class TestCommandHookError:
    """CommandHookError from hooks → FAILED with correct reason."""

    @pytest.mark.asyncio
    async def test_objective_failed(self, dds_context: DDSContext):
        """CommandHookError(OBJECTIVE_FAILED) in on_executing → FAILED(OBJECTIVE_FAILED)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = FailingProvider(
            dds_context, source_id=provider_id,
            reason_enum=CommandReasonEnum.OBJECTIVE_FAILED)
        consumer = StatusCollector(
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
            CommandStatusEnum.FAILED
        assert consumer.terminal_status.commandStatusReason == \
            CommandReasonEnum.OBJECTIVE_FAILED

    @pytest.mark.asyncio
    async def test_generic_exception_becomes_service_failed(self, dds_context: DDSContext):
        """Non-CommandHookError exception → FAILED(SERVICE_FAILED)."""
        provider_id = _make_id()
        consumer_id = _make_id()

        provider = FailingProvider(
            dds_context, source_id=provider_id,
            exc=RuntimeError("unexpected"))
        consumer = StatusCollector(
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
            CommandStatusEnum.FAILED
        assert consumer.terminal_status.commandStatusReason == \
            CommandReasonEnum.SERVICE_FAILED


# ═══════════════════════════════════════════════════════════════════════════
# Transition guard tests (unit-level — no DDS needed)
# ═══════════════════════════════════════════════════════════════════════════


class _FakeProvider:
    """Minimal provider stub for unit-testing CommandProviderSession."""

    _status_type = AnchorCommandStatusType
    _ack_type = AnchorCommandAckReportType
    _source_id = _make_id()
    _status_writer = None
    _ack_writer = None
    _exec_status_writer = None
    _exec_status_type = None
    _active_sessions = {}

    async def validate_command(self, command):
        return (True, "")

    async def on_commanded(self, session):
        pass

    async def on_executing(self, session):
        pass

    async def on_complete(self, session):
        pass

    async def on_failed(self, session, exception):
        pass

    async def on_terminal(self, session):
        pass

    async def on_updated(self, session, prev, upd):
        pass


class TestTransitionGuard:
    """_transition_to() rejects impossible state jumps."""

    def test_illegal_transition_raises(self):
        """ISSUED → COMPLETED is illegal → RuntimeError, state forced to FAILED."""
        prov = _FakeProvider()
        cmd = AnchorCommandType()
        session = CommandProviderSession(prov, cmd)

        session._transition_to(CommandStatusEnum.ISSUED)
        assert session.current_state == CommandStatusEnum.ISSUED

        with pytest.raises(RuntimeError, match="illegal transition"):
            session._transition_to(CommandStatusEnum.COMPLETED)

        assert session.current_state == CommandStatusEnum.FAILED

    def test_valid_transition_succeeds(self):
        """ISSUED → COMMANDED is valid."""
        prov = _FakeProvider()
        cmd = AnchorCommandType()
        session = CommandProviderSession(prov, cmd)

        session._transition_to(CommandStatusEnum.ISSUED)
        session._transition_to(CommandStatusEnum.COMMANDED)
        assert session.current_state == CommandStatusEnum.COMMANDED


class TestReasonCoercion:
    """D51: Invalid reason for current state → coerced to SERVICE_FAILED."""

    def test_objective_failed_from_issued_coerced(self):
        """OBJECTIVE_FAILED is not valid from ISSUED → coerced to SERVICE_FAILED."""
        prov = _FakeProvider()
        cmd = AnchorCommandType()
        session = CommandProviderSession(prov, cmd)

        session._transition_to(CommandStatusEnum.ISSUED)
        session._transition_to(
            CommandStatusEnum.FAILED,
            reason=CommandReasonEnum.OBJECTIVE_FAILED)

        assert session.current_state == CommandStatusEnum.FAILED
        assert session._current_reason == CommandReasonEnum.SERVICE_FAILED

    def test_resource_rejected_from_executing_coerced(self):
        """RESOURCE_REJECTED not valid from EXECUTING → coerced."""
        prov = _FakeProvider()
        cmd = AnchorCommandType()
        session = CommandProviderSession(prov, cmd)

        session._transition_to(CommandStatusEnum.ISSUED)
        session._transition_to(CommandStatusEnum.COMMANDED)
        session._transition_to(CommandStatusEnum.EXECUTING)
        session._transition_to(
            CommandStatusEnum.FAILED,
            reason=CommandReasonEnum.RESOURCE_REJECTED)

        assert session.current_state == CommandStatusEnum.FAILED
        assert session._current_reason == CommandReasonEnum.SERVICE_FAILED

    def test_valid_reason_not_coerced(self):
        """OBJECTIVE_FAILED from EXECUTING is valid → kept."""
        prov = _FakeProvider()
        cmd = AnchorCommandType()
        session = CommandProviderSession(prov, cmd)

        session._transition_to(CommandStatusEnum.ISSUED)
        session._transition_to(CommandStatusEnum.COMMANDED)
        session._transition_to(CommandStatusEnum.EXECUTING)
        session._transition_to(
            CommandStatusEnum.FAILED,
            reason=CommandReasonEnum.OBJECTIVE_FAILED)

        assert session._current_reason == CommandReasonEnum.OBJECTIVE_FAILED
