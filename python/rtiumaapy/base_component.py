"""BaseComponent — abstract base class for UMAA application components.

A *component* composes multiple :class:`BaseService` instances into a
cohesive UMAA application (e.g. an autopilot, a mission executor).

Lifecycle (managed automatically by :class:`DDSContext`):

1. ``__init__(ctx, name)`` — create DDS services, register with context.
2. ``on_start()``          — one-shot startup (publish initial messages, etc.).
3. ``_run()``              — async coroutine for periodic / event-driven work.
4. ``close()``             — publish final messages, release resources.
"""

from __future__ import annotations

from abc import ABC, abstractmethod
from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from rtiumaapy.dds_context import DDSContext


class BaseComponent(ABC):
    """Abstract base class for UMAA application components.

    Subclasses **must** implement :meth:`_run` and :meth:`close`.
    Subclasses **may** override :meth:`on_start` for one-shot startup work.

    The component registers itself with the :class:`DDSContext` so that
    :meth:`DDSContext.run_until_shutdown` calls ``on_start()`` once, then
    starts ``_run()``, and calls ``close()`` during shutdown (while DDS
    writers are still open).
    """

    def __init__(self, ctx: DDSContext, component_name: str) -> None:
        """Initialise the component and register it with the context.

        Args:
            ctx: The :class:`DDSContext` that owns shared DDS infrastructure.
            component_name: A unique name for this component instance
                (e.g. ``"Autopilot"``, ``"MissionExecutor"``).
        """
        self._ctx = ctx
        self._component_name = component_name
        ctx.register_service(component_name, self)

    @property
    def ctx(self) -> DDSContext:
        """The :class:`DDSContext` this component belongs to."""
        return self._ctx

    @property
    def component_name(self) -> str:
        """The registered name of this component."""
        return self._component_name

    async def on_start(self) -> None:
        """One-shot startup hook — called before ``_run()``.

        Override to publish initial announcements (specs, capabilities,
        startup log entries, etc.).  The default implementation is a no-op.
        """

    @abstractmethod
    async def _run(self) -> None:
        """Component main loop — started by ``run_until_shutdown()``.

        Override to implement periodic publishing, event loops, or
        orchestration logic.  The task is cancelled during shutdown.
        """
        ...

    @abstractmethod
    async def close(self) -> None:
        """Cleanup — called by ``DDSContext.shutdown()`` while writers are still open.

        Override to publish final status messages, log shutdown events, etc.
        """
        ...
