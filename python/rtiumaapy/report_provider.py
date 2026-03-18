"""ReportProvider — single-topic report publisher (Tier 1).

A ``ReportProvider`` owns one ``DataWriter`` and publishes report samples.
On ``close()``, the keyed instance is disposed so that subscribers see
the NOT_ALIVE_DISPOSED state transition (per UMAA §5.2.1.3).
"""

import asyncio
import logging
from typing import Type

import rti.connextdds as dds

from rtiumaapy.base_service import BaseService
from rtiumaapy.dds_context import DDSContext

_logger = logging.getLogger(__name__)


class ReportProvider(BaseService):
    """Publishes a single keyed report type.

    Args:
        ctx: The :class:`DDSContext` owning shared DDS infrastructure.
        service_name: Unique name for this service instance.
        report_type: An ``@idl.struct`` type (the IDL-generated Python class).
        report_topic: The DDS topic name (drives QoS assignment).
        key_holder: A default-constructed instance of *report_type* with the
            key field(s) populated to the values used when publishing.
            Used by ``close()`` to look up and dispose the DDS instance.
    """

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type: Type,
        report_topic: str,
        key_holder: object,
    ) -> None:
        super().__init__(ctx, service_name)
        self._report_type = report_type
        self._report_topic = report_topic
        self._key_holder = key_holder
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
        """Publish a report sample.

        Args:
            sample: An instance of *report_type* with fields populated.
        """
        self._writer.write(sample)

    # ── Lifecycle ─────────────────────────────────────────────────────────

    async def close(self) -> None:
        """Dispose the report instance and close the writer.

        Disposing notifies subscribers that this provider has stopped
        publishing (instance state → NOT_ALIVE_DISPOSED).

        This method is idempotent — calling it more than once is safe.
        """
        try:
            handle = self._writer.lookup_instance(self._key_holder)
            if handle != dds.InstanceHandle.nil():
                self._writer.dispose_instance(handle)
                # BEST_EFFORT dispose: allow time for the dispose message to
                # be sent on the wire before closing the writer.  Without this
                # the writer.close() can tear down the transport before the
                # dispose is transmitted.
                await asyncio.sleep(0.1)
        except dds.AlreadyClosedError:
            return  # writer already closed — nothing else to do
        except Exception:
            _logger.debug(
                "Report instance dispose failed for %s (may not have been registered)",
                self._report_topic,
            )
        try:
            self._writer.close()
        except dds.AlreadyClosedError:
            pass
