"""ReportConsumer — single-topic report subscriber (Tier 1).

A ``ReportConsumer`` owns one ``DataReader`` and delivers incoming
samples via the ``on_report`` subclass-override hook (D36).
"""

import asyncio
import logging
from typing import Optional, Type

import rti.connextdds as dds
import rti.asyncio  # noqa: F401 — enables take_async on DataReader

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.validation import validate_message

_logger = logging.getLogger(__name__)


class ReportConsumer(BaseService):
    """Subscribes to a single report type and delivers via subclass override.

    Subclass and override ``on_report()`` to process incoming samples::

        class GpsConsumer(ReportConsumer):
            async def on_report(self, sample):
                print(sample)

    Args:
        ctx: The :class:`DDSContext` owning shared DDS infrastructure.
        service_name: Unique name for this service instance.
        report_type: An ``@idl.struct`` type (the IDL-generated Python class).
        report_topic: The DDS topic name (drives QoS assignment).
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type: Type,
        report_topic: str,
    ) -> None:
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._report_topic = report_topic
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

    async def on_report(self, sample) -> None:
        """Called for each valid incoming sample.

        Override in a subclass to process data.  The default
        implementation is a no-op.
        """

    async def _run(self) -> None:
        """Async event loop — delivers valid samples to :meth:`on_report`.

        ``take_async()`` yields individual ``Sample`` objects (with ``.data``
        and ``.info`` attributes), one at a time.
        """
        async for sample in self._reader.take_async():
            if sample.info.valid:
                try:
                    valid, errors = validate_message(sample.data)
                    if not valid:
                        _logger.warning(
                            "Received invalid report on %s: %s",
                            self._report_topic,
                            "; ".join(errors),
                        )
                    await self.on_report(sample.data)
                except Exception:
                    _logger.exception(
                        "on_report hook failed for %s",
                        self._report_topic,
                    )

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """Cancel the event loop task.

        Entity cleanup is deferred to ``DDSContext.shutdown()`` which stops
        the ``rti.asyncio`` dispatcher before calling
        ``close_contained_entities()``.

        This method is idempotent — calling it more than once is safe.
        """
        # Cancel the _run() task so take_async() exits cleanly
        if self._task is not None and not self._task.done():
            self._task.cancel()
            try:
                await self._task
            except asyncio.CancelledError:
                pass
            self._task = None
