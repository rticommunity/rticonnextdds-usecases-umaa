"""ReportProvider — single-topic report publisher (Tier 1).

A ``ReportProvider`` owns one ``DataWriter`` and publishes report samples.
On ``close()``, the keyed instance is disposed so that subscribers see
the NOT_ALIVE_DISPOSED state transition (per UMAA §5.2.1.3).
"""

import asyncio
import logging
from typing import Optional, Type

import rti.connextdds as dds

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext
from rtiumaapy.validation import validate_message

_logger = logging.getLogger(__name__)


class ReportProvider(BaseService):
    """Publishes a single keyed report type.

    Args:
        ctx: The :class:`DDSContext` owning shared DDS infrastructure.
        service_name: Unique name for this service instance.
            Defaults to the class name if not provided.
        report_type: An ``@idl.struct`` type (the IDL-generated Python class).
        report_topic: The DDS topic name (drives QoS assignment).
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: Optional[str] = None,
        *,
        report_type: Type,
        report_topic: str,
    ) -> None:
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._report_topic = report_topic
        self._instance_handle: Optional[dds.InstanceHandle] = None
        self._writer = ctx.create_writer(report_type, report_topic)

    # ── Properties ────────────────────────────────────────────────────────

    @property
    def writer(self) -> dds.DataWriter:
        """The underlying ``DataWriter``."""
        return self._writer

    @property
    def report_topic(self) -> str:
        """The DDS topic name."""
        return self._report_topic

    # ── Publishing ────────────────────────────────────────────────────────

    def write(self, sample) -> None:
        """Publish a report sample, validating fields first.

        Logs a warning if validation fails but still publishes
        (matches C++ behavior).

        Args:
            sample: An instance of *report_type* with fields populated.
        """
        valid, errors = validate_message(sample)
        if not valid:
            _logger.warning(
                "Report validation failed for %s: %s",
                self._report_topic,
                "; ".join(errors),
            )
        self._writer.write(sample)
        if self._instance_handle is None:
            self._instance_handle = self._writer.lookup_instance(sample)

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """Dispose the report instance so subscribers see NOT_ALIVE_DISPOSED.

        Entity cleanup is deferred to ``DDSContext.shutdown()`` which stops
        the ``rti.asyncio`` dispatcher before calling
        ``close_contained_entities()``.

        This method is idempotent — calling it more than once is safe.
        """
        try:
            if self._instance_handle is not None and self._instance_handle != dds.InstanceHandle.nil():
                self._writer.dispose_instance(self._instance_handle)
                # BEST_EFFORT dispose: allow time for the dispose message to
                # be sent on the wire before shutdown continues.
                await asyncio.sleep(0.1)
        except dds.AlreadyClosedError:
            return  # writer already closed — nothing else to do
        except Exception:
            _logger.debug(
                "Report instance dispose failed for %s (may not have been registered)",
                self._report_topic,
            )
