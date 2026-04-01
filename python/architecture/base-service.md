# BaseService

> Abstract base class inherited by every service template and composite class. Enforces `close()` and auto-registration with `DDSContext`.

---

## Role

`BaseService` is the root of the service hierarchy. Every service class — `CommandProvider`, `ReportConsumer`, `MissionPlanReportProvider`, etc. — inherits from `BaseService`. It provides:

1. **A reference to `DDSContext`** (`self._ctx`)
2. **Auto-registration** in the DDSContext service registry
3. **An abstract `close()` method** enforcing cleanup

**C++ SDK comparison:** The PSU/ARL C++ SDK defines `ServiceBase` as the base class for all services. However, `CommandProviderBase` does not inherit from `ServiceBase` — the inheritance hierarchy is inconsistent. `rtiumaapy` enforces that *every* service class inherits from `BaseService`, including command templates.

---

## Class Definition

```python
from abc import ABC, abstractmethod

class BaseService(ABC):
    """Abstract base class for all UMAA services."""

    def __init__(self, ctx: DDSContext, service_name: str):
        """
        Initialize the service and register it with the context.

        Args:
            ctx: The DDSContext that owns shared DDS infrastructure.
            service_name: A unique name for this service instance
                (e.g., "EngineControl", "GPSReport").
        """
        self._ctx = ctx
        self._service_name = service_name
        ctx.register_service(service_name, self)

    @property
    def ctx(self) -> DDSContext:
        """The DDSContext this service belongs to."""
        return self._ctx

    @property
    def service_name(self) -> str:
        """The registered name of this service."""
        return self._service_name

    @abstractmethod
    async def close(self) -> None:
        """
        Perform logical cleanup for this service.

        Called by DDSContext.shutdown() in reverse registration order.
        Subclasses should dispose instances, end sessions, and publish
        final messages here but must NOT close DDS entities (readers/
        writers) — entity destruction is handled by DDSContext.shutdown()
        via close_contained_entities() after the dispatcher is stopped.
        """
        ...
```

---

## Auto-Registration

When a service is constructed, `BaseService.__init__()` registers it with the `DDSContext` service registry:

```python
provider = CommandProvider(ctx, service_name="EngineControl", ...)
# At this point, ctx.get_service("EngineControl") returns the provider
```

The service name is a **user-chosen string**, not derived from types. This allows multiple instances of the same template with different names.

Registration order is preserved. `DDSContext.shutdown()` closes services in reverse order.

---

## Inheritance Hierarchy

```
BaseService (ABC)
├── CommandProvider           (Tier 0)
├── CommandConsumer           (Tier 0)
├── ReportProvider            (Tier 1)
├── ReportConsumer            (Tier 1)
├── LargeSetReportProvider    (Tier 2)
├── LargeSetReportConsumer    (Tier 2)
├── LargeListReportProvider   (Tier 3)
├── LargeListReportConsumer   (Tier 3)
├── MissionPlanReportProvider (Tier 4 — composite)
├── MissionPlanReportConsumer (Tier 4 — composite)
├── ConditionalReportProvider (Tier 4 — composite)
├── ConditionalReportConsumer (Tier 4 — composite)
├── ObjectiveExecutorProvider (Tier 4 — composite)
├── ObjectiveExecutorConsumer (Tier 4 — composite)
├── GlobalWaypointCommandProvider   (Tier 4 — composite)
├── GlobalWaypointCommandConsumer   (Tier 4 — composite)
└── ... (remaining composite classes)
```

All 26 service classes inherit directly from `BaseService`. There is no intermediate class between `BaseService` and the template/composite classes.

---

## `close()` Contract

Every subclass **must** implement `close()`:

```python
class ReportProvider(BaseService):
    async def close(self) -> None:
        self._writer.close()
```

```python
class CommandProvider(BaseService):
    async def close(self) -> None:
        # Two-phase: cancel active sessions first, then close entities
        for session in self._active_sessions.values():
            await session.cancel()
        self._command_reader.close()
        self._ack_writer.close()
        self._status_writer.close()
        if self._exec_status_writer is not None:
            self._exec_status_writer.close()
```

The `close()` method is `async` to allow waiting for in-flight command sessions to complete or cancel gracefully.

---

## Design Constraints

| Constraint | Rationale |
|---|---|
| **Abstract `close()`** | Every service must release its DDS entities. Making `close()` abstract catches missing implementations at subclass definition time. |
| **Auto-registration** | Eliminates the error of forgetting to register a service. If it's constructed, it's registered. |
| **String-key registry** | Names are user-chosen strings. This supports multiple instances of the same template type in the same context. |
| **Optional `start()` method** | Creates an `asyncio.Task` for the service's `_run()` coroutine. Used in tests and selective startup scenarios where `run_until_shutdown()` is not appropriate. `run_until_shutdown()` auto-starts all registered services if `start()` was not called (D37). |
| **`async close()`** | Shutdown may involve waiting for in-flight command sessions to cancel gracefully, requiring `await`. Called by `DDSContext.shutdown()` (also async). |
