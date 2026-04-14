"""BaseService — abstract base class for all UMAA service templates.

Every service class (``CommandProvider``, ``ReportConsumer``, composites,
etc.) inherits from ``BaseService``.  It provides:

* A reference to the owning :class:`DDSContext` (``self._ctx``).
* Automatic registration in the context's service registry.
* An abstract :meth:`close` method enforcing cleanup.
"""

from __future__ import annotations

from abc import ABC, abstractmethod
from typing import Optional, TYPE_CHECKING

if TYPE_CHECKING:
    from rtiumaapy.dds_context import DDSContext


class BaseService(ABC):
    """Abstract base class for all UMAA services.

    Subclasses **must** implement :meth:`close`.

    Subclasses **may** define an ``async def _run(self) -> None`` coroutine
    for event-driven processing (e.g. ``async for`` on a DataReader).
    If present, :meth:`DDSContext.run_until_shutdown` will create an
    ``asyncio.Task`` for it automatically.  Services that are purely
    called by external code (e.g. a report provider's ``publish()``)
    should omit ``_run``.
    """

    def __init__(self, ctx: DDSContext, service_name: Optional[str] = None) -> None:
        """Initialise the service and register it with the context.

        Args:
            ctx: The :class:`DDSContext` that owns shared DDS infrastructure.
            service_name: A unique name for this service instance
                (e.g. ``"EngineControl"``, ``"GPSReport"``).
                Defaults to the class name if not provided.
        """
        self._ctx = ctx
        self._service_name = service_name or type(self).__name__
        ctx.register_service(self._service_name, self)

    # ── Properties ────────────────────────────────────────────────────────

    @property
    def ctx(self) -> DDSContext:
        """The :class:`DDSContext` this service belongs to."""
        return self._ctx

    @property
    def service_name(self) -> str:
        """The registered name of this service."""
        return self._service_name

    # ── Lifecycle ─────────────────────────────────────────────────────────

    @abstractmethod
    async def close(self) -> None:
        """Perform logical cleanup for this service.

        Called by :meth:`DDSContext.shutdown` in reverse registration order.
        Subclasses should cancel tasks, dispose instances, and end sessions
        here but must **not** close DDS entities (readers/writers) — the
        ``rti.asyncio`` dispatcher may still reference their wait-sets.
        Entity destruction is handled by ``DDSContext.shutdown()`` via
        ``close_contained_entities()`` after the dispatcher is stopped.
        """
        ...
