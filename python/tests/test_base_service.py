"""Tests for rtiumaapy.base_service — BaseService ABC, auto-registration, close."""

import asyncio

import pytest

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext
from tests.conftest import DEFAULT_DOMAIN_ID


# ── Concrete subclass for testing ─────────────────────────────────────────


class StubService(BaseService):
    """Minimal concrete service used by tests."""

    def __init__(self, ctx: DDSContext, service_name: str) -> None:
        super().__init__(ctx, service_name)
        self.closed = False

    async def close(self) -> None:
        self.closed = True


class StubServiceWithRun(BaseService):
    """Service with a ``_run`` coroutine for lifecycle tests."""

    def __init__(self, ctx: DDSContext, service_name: str) -> None:
        super().__init__(ctx, service_name)
        self.closed = False
        self.ran = False

    async def _run(self) -> None:
        self.ran = True
        # Simulate a long-running service
        try:
            await asyncio.Event().wait()
        except asyncio.CancelledError:
            pass

    async def close(self) -> None:
        self.closed = True


# ═══════════════════════════════════════════════════════════════════════════
# Auto-registration
# ═══════════════════════════════════════════════════════════════════════════


class TestAutoRegistration:
    @pytest.mark.asyncio
    async def test_registered_on_init(self, dds_context: DDSContext):
        svc = StubService(dds_context, "MySvc")
        assert dds_context.get_service("MySvc") is svc

    @pytest.mark.asyncio
    async def test_duplicate_name_raises(self, dds_context: DDSContext):
        StubService(dds_context, "MySvc")
        with pytest.raises(ValueError, match="already registered"):
            StubService(dds_context, "MySvc")


# ═══════════════════════════════════════════════════════════════════════════
# Properties
# ═══════════════════════════════════════════════════════════════════════════


class TestProperties:
    @pytest.mark.asyncio
    async def test_ctx_property(self, dds_context: DDSContext):
        svc = StubService(dds_context, "Svc")
        assert svc.ctx is dds_context

    @pytest.mark.asyncio
    async def test_service_name(self, dds_context: DDSContext):
        svc = StubService(dds_context, "Alpha")
        assert svc.service_name == "Alpha"


# ═══════════════════════════════════════════════════════════════════════════
# Abstract enforcement
# ═══════════════════════════════════════════════════════════════════════════


class TestAbstract:
    def test_cannot_instantiate_base(self, dds_context: DDSContext):
        """BaseService itself is abstract — can't be instantiated."""
        with pytest.raises(TypeError):
            BaseService(dds_context, "Nope")  # type: ignore[abstract]


# ═══════════════════════════════════════════════════════════════════════════
# Close lifecycle
# ═══════════════════════════════════════════════════════════════════════════


class TestClose:
    @pytest.mark.asyncio
    async def test_close_called_on_shutdown(self, qos_file: str):
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        svc = StubService(ctx, "Svc")
        await ctx.shutdown()
        assert svc.closed

    @pytest.mark.asyncio
    async def test_close_order_is_reverse(self, qos_file: str):
        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        order = []  # type: list

        class OrderTracker(BaseService):
            async def close(self) -> None:
                order.append(self.service_name)

        OrderTracker(ctx, "first")
        OrderTracker(ctx, "second")
        OrderTracker(ctx, "third")
        await ctx.shutdown()
        assert order == ["third", "second", "first"]


# ═══════════════════════════════════════════════════════════════════════════
# run_until_shutdown lifecycle
# ═══════════════════════════════════════════════════════════════════════════


class TestRunLifecycle:
    @pytest.mark.asyncio
    async def test_run_task_started_and_cancelled(self, qos_file: str):
        """Services with _run() get started, then cancelled on shutdown."""
        import asyncio
        import signal

        ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)
        svc = StubServiceWithRun(ctx, "Runner")

        # Schedule a signal after a brief delay to trigger shutdown
        loop = asyncio.get_running_loop()

        async def send_signal():
            await asyncio.sleep(0.1)
            loop.call_soon(lambda: __import__("os").kill(__import__("os").getpid(), signal.SIGINT))

        asyncio.create_task(send_signal())
        await ctx.run_until_shutdown()
        assert svc.ran
        assert svc.closed
