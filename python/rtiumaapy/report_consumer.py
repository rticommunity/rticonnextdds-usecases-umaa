"""ReportConsumer — single-topic report subscriber (Tier 1).

A ``ReportConsumer`` owns one ``DataReader`` and delivers incoming
samples to a user-supplied callback via an async event loop (``_run``).
"""

import asyncio
import logging
from typing import Callable, Optional, Type

import rti.connextdds as dds
import rti.asyncio  # noqa: F401 — enables take_async on DataReader

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext

_logger = logging.getLogger(__name__)


class ReportConsumer(BaseService):
    """Subscribes to a single report type and delivers via callback.

    Args:
        ctx: The :class:`DDSContext` owning shared DDS infrastructure.
        service_name: Unique name for this service instance.
        report_type: An ``@idl.struct`` type (the IDL-generated Python class).
        report_topic: The DDS topic name (drives QoS assignment).
        on_report: Optional callback invoked for each valid sample.
            Signature: ``(sample) -> None``.
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type: Type,
        report_topic: str,
        on_report: Optional[Callable] = None,
    ) -> None:
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._report_topic = report_topic
        self._on_report = on_report
        self._reader = ctx.create_reader(report_type, report_topic)
        self._task: Optional[asyncio.Task] = None

    # ── Properties ────────────────────────────────────────────────────────

    @property
    def reader(self) -> dds.DataReader:
        """The underlying ``DataReader`` (for advanced use)."""
        return self._reader

    @property
    def report_topic(self) -> str:
        """The DDS topic name."""
        return self._report_topic

    # ── Event-driven processing ───────────────────────────────────────────

    def start(self) -> None:
        """Start the asynchronous event loop that delivers samples.

        Creates an ``asyncio.Task`` running :meth:`_run`.  The task is
        automatically cancelled when :meth:`close` is called.
        """
        if self._task is None or self._task.done():
            self._task = asyncio.ensure_future(self._run())

    async def _run(self) -> None:
        """Async event loop — delivers valid samples to *on_report*.

        ``take_async()`` yields individual ``Sample`` objects (with ``.data``
        and ``.info`` attributes), one at a time.
        """
        async for sample in self._reader.take_async():
            if sample.info.valid and self._on_report is not None:
                try:
                    self._on_report(sample.data)
                except Exception:
                    _logger.exception(
                        "on_report callback failed for %s",
                        self._report_topic,
                    )

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """Cancel the event loop task and close the DataReader.

        This method is idempotent — calling it more than once is safe.
        """
        # 1. Cancel the _run() task so take_async() exits cleanly
        if self._task is not None and not self._task.done():
            self._task.cancel()
            try:
                await self._task
            except asyncio.CancelledError:
                pass
            self._task = None

        # 2. Close the reader (ignore if already closed by shutdown)
        try:
            self._reader.close()
        except dds.AlreadyClosedError:
            pass
