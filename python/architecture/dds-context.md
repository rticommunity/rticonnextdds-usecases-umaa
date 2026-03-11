# DDSContext

> Singleton infrastructure owner — DomainParticipant, Publisher, Subscriber, QoS provider, topic cache, and service registry.

---

## Role

`DDSContext` is the single point of DDS infrastructure ownership. Services receive a `DDSContext` reference at construction time and use it to create their DDS entities (readers/writers). No service creates its own DomainParticipant.

`DDSContext` is a **singleton** — only one can exist at a time. Call `DDSContext.current()` from anywhere to retrieve the active instance without importing it.

**C++ SDK comparison:** The PSU/ARL C++ SDK's `ServiceBase` class holds a `DomainParticipant` pointer passed from outside. UMAAPy2's `DDSContext` consolidates the participant, publisher, subscriber, QoS provider, and topic cache into one object that also manages the service lifecycle.

---

## Class Definition

```python
class DDSContext:
    """Singleton encapsulating all DDS infrastructure for a UMAA application."""

    _instance: Optional[DDSContext] = None

    def __init__(
        self,
        domain_id: int = 0,
        qos_file: Optional[str] = None,
    ) -> None:
        """
        Create the DDS infrastructure.

        Args:
            domain_id: DDS domain ID.
            qos_file: Path to QoS XML. If None, uses bundled umaapy_qos_lib.xml.

        Raises:
            RuntimeError: If a DDSContext already exists (call shutdown() first).
        """
        if DDSContext._instance is not None:
            raise RuntimeError(
                "A DDSContext already exists. Call shutdown() before creating a new one."
            )
        DDSContext._instance = self

        self._domain_id = domain_id
        self._qos_file = qos_file or _default_qos_file()

        # QoS provider — loads XML profiles, sets default profile for topic_filter matching
        self._qos_provider = dds.QosProvider(self._qos_file)
        self._qos_provider.default_profile = "UMAAQoSLib::AssignerQoS"

        # DomainParticipant — one per context
        self._participant = dds.DomainParticipant(
            domain_id,
            qos=self._qos_provider.participant_qos_from_profile(
                "UMAAQoSLib::DefaultUMAAParticipant"
            ),
        )

        # Publisher and Subscriber — one each, shared by all services
        self._publisher = dds.Publisher(self._participant)
        self._subscriber = dds.Subscriber(self._participant)

        # Topic cache (topic_name -> Topic)
        self._topics: Dict[str, dds.Topic] = {}

        # Service registry: key -> provider/consumer service
        self._registry: Dict[str, Any] = {}
```

### Singleton Access

```python
    @classmethod
    def current(cls) -> DDSContext:
        """Return the active DDSContext.

        Raises RuntimeError if no context has been created yet.
        """
        if cls._instance is None:
            raise RuntimeError("DDSContext not initialized.")
        return cls._instance
```

### Properties

```python
    @property
    def participant(self) -> dds.DomainParticipant: ...
    @property
    def publisher(self) -> dds.Publisher: ...
    @property
    def subscriber(self) -> dds.Subscriber: ...
    @property
    def qos_provider(self) -> dds.QosProvider: ...
    @property
    def domain_id(self) -> int: ...
```

---

## Topic Cache

Topics are cached in `_topics: Dict[str, dds.Topic]`. The `get_topic()` method retrieves an existing topic or creates a new one:

```python
    def get_topic(self, data_type: Type, topic_name: str) -> dds.Topic:
        """Retrieve or create a DDS Topic for data_type."""
        if topic_name in self._topics:
            return self._topics[topic_name]

        topic = dds.Topic.find(self._participant, topic_name)
        if topic is None:
            topic = dds.Topic(self._participant, topic_name, data_type)

        self._topics[topic_name] = topic
        return topic
```

Topic names are pre-generated constants from the IDL types module (e.g., `UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTopic`). Pass these directly — don't derive topic names at runtime.

---

## Service Registry

Services register with `DDSContext` via `register_service()`. Registration adds the service to the registry but does NOT start it — services are inert until `run_until_shutdown()` is called. `BaseService.__init__()` calls `register_service()` automatically.

```python
    def register_service(self, key: str, service: Any) -> None:
        """Register a service. Does not start it.

        Called automatically by BaseService.__init__().
        Raises ValueError if key already exists.
        """
        if key in self._registry:
            raise ValueError(f"Service already registered under key '{key}'.")
        self._registry[key] = service

    def unregister_service(self, key: str) -> Optional[Any]:
        """Remove and return a service, or None if not found.
        Cancels the service's _run() task if active."""
        service = self._registry.pop(key, None)
        if service is not None and hasattr(service, '_task'):
            service._task.cancel()
        return service

    def get_service(self, key: str) -> Optional[Any]:
        """Look up a registered service by key."""

    def registered_service_keys(self) -> List[str]:
        """Snapshot of all registered service keys."""
```

**Registry key convention:** Keys are user-chosen strings (e.g., `"EngineControl"`). There is no automatic name derivation.

---

## Factory Methods

All factory methods take `data_type` and `topic_name` parameters. QoS is resolved automatically via `topic_filter` rules — the topic name drives QoS assignment.

### `create_writer()`

```python
    def create_writer(
        self,
        data_type: Type,
        topic_name: str,
    ) -> dds.DataWriter:
        """Create a DataWriter with QoS resolved from topic_filter rules."""
        topic = self.get_topic(data_type, topic_name)
        writer_qos = self._qos_provider.get_topic_datawriter_qos(topic_name)
        return dds.DataWriter(self._publisher, topic, qos=writer_qos)
```

### `create_reader()`

```python
    def create_reader(
        self,
        data_type: Type,
        topic_name: str,
        listener: Optional[dds.DataReaderListener] = None,
        listener_mask: dds.StatusMask = dds.StatusMask.NONE,
    ) -> dds.DataReader:
        """Create a DataReader with QoS resolved from topic_filter rules.

        Optionally attaches a listener for status monitoring.
        Subclass dds.NoOpDataReaderListener and pass it directly.
        """
        topic = self.get_topic(data_type, topic_name)
        reader_qos = self._qos_provider.get_topic_datareader_qos(topic_name)
        return dds.DataReader(
            self._subscriber, topic, reader_qos,
            listener=listener, mask=listener_mask,
        )
```

### `create_filtered_reader()`

Returns a **`(DataReader, ContentFilteredTopic)` tuple** so the caller can update the filter dynamically via `cft.set_filter()`.

```python
    def create_filtered_reader(
        self,
        data_type: Type,
        topic_name: str,
        filter_expression: str,
        filter_parameters: Optional[List[str]] = None,
        filter_name: Optional[str] = None,
    ) -> Tuple[dds.DataReader, dds.ContentFilteredTopic]:
        """Create a content-filtered DataReader.

        Returns (DataReader, ContentFilteredTopic) so the caller can
        update the filter dynamically via cft.set_filter().
        """
        topic = self.get_topic(data_type, topic_name)
        reader_qos = self._qos_provider.get_topic_datareader_qos(topic_name)

        if filter_name is None:
            filter_name = f"{topic.name}_cft_{id(self)}_{self._next_cft_id()}"

        cft = dds.ContentFilteredTopic(
            topic, filter_name,
            dds.Filter(filter_expression, parameters=filter_parameters or []),
        )
        reader = dds.DataReader(self._subscriber, cft, qos=reader_qos)
        return reader, cft
```

**QoS resolution:** All factory methods use `qos_provider.get_topic_datawriter_qos(topic_name)` / `get_topic_datareader_qos(topic_name)`. The QoS provider matches the topic name against `topic_filter` patterns in the XML and returns the correct QoS automatically. No `QosCategory` enum or `PROFILE_MAP` required.

---

## Lifecycle

### Startup

Construction registers services (inert). `run_until_shutdown()` starts them all:

```python
async def main():
    ctx = DDSContext(domain_id=0)
    # Services are constructed — each registers itself but is inert
    provider = EngineCommandProvider(ctx, service_name="EngineControl", ...)
    consumer = GPSReportConsumer(ctx, service_name="GPS", ...)
    # Start all services and block until signal
    await ctx.run_until_shutdown()

rti.asyncio.run(main())
```

From anywhere else in the application: `ctx = DDSContext.current()`

### `run_until_shutdown()`

Starts all registered services' `_run()` coroutines, then blocks until SIGINT/SIGTERM:

```python
    async def run_until_shutdown(self):
        """Start all registered services and block until SIGINT/SIGTERM."""
        # Start _run() for every registered service
        for service in self._registry.values():
            if hasattr(service, '_run'):
                service._task = asyncio.create_task(service._run())
        # Wait for shutdown signal
        stop = asyncio.Event()
        loop = asyncio.get_running_loop()
        for sig in (signal.SIGINT, signal.SIGTERM):
            loop.add_signal_handler(sig, stop.set)
        await stop.wait()
        await self.shutdown()
```

### Shutdown

Shutdown is **async** — cancels `_run()` tasks, awaits `close()` on each service, then tears down DDS:

```python
    async def shutdown(self) -> None:
        """Tear down all managed resources in order:
        1. Cancel every service's _run() task.
        2. Await close() on every registered service (reverse order).
        3. Close all DDS contained entities.
        4. Close the DomainParticipant.
        5. Clear the singleton reference.
        """
        # 1. Cancel _run() tasks
        for service in self._registry.values():
            if hasattr(service, '_task'):
                service._task.cancel()

        # 2. Close registered services (reverse order)
        for key, service in reversed(list(self._registry.items())):
            try:
                await service.close()
            except Exception:
                _logger.exception("Error closing service %s", key)
        self._registry.clear()

        # 3-4. Close DDS entities
        self._participant.close_contained_entities()
        self._participant.close()
        self._topics.clear()

        # 5. Clear singleton
        if DDSContext._instance is self:
            DDSContext._instance = None
```

---

## Content-Filtered Topics (CFTs)

Command providers use CFTs to filter incoming commands by their `destination` field. The filter uses `&hex()` for NumericGUID fields (see [Command Services](command-services.md#cft-filter-syntax)).

```python
# Inside CommandProvider.__init__
hex_id = guid_to_hex(my_id)
self._command_reader, self._command_cft = ctx.create_filtered_reader(
    data_type=CommandType,
    topic_name=command_topic_name,
    filter_expression=(
        f"destination.parentID = &hex({hex_id}) AND "
        f"destination.id = &hex({hex_id})"
    ),
)
```

Consumer sessions use dynamic CFTs initialized with `"1 = 0"` (block all) and updated per session via `cft.set_filter()`:

```python
# Consumer reader — blocks everything initially
self._status_reader, self._status_cft = ctx.create_filtered_reader(
    data_type=CommandStatusType,
    topic_name=status_topic_name,
    filter_expression="1 = 0",
)

# After receiving ack — open filter for this session's source
self._status_cft.set_filter(dds.Filter(
    f"source.id = &hex({guid_to_hex(provider_source)}) AND "
    f"sessionID = &hex({guid_to_hex(session_id)})"
))
```

---

## Design Constraints

| Constraint | Rationale |
|---|---|
| **Singleton** | Only one DDSContext per process. Prevents duplicate participants. Access via `DDSContext.current()`. |
| **One DomainParticipant** | Avoids UDP port exhaustion and simplifies discovery. |
| **One Publisher / one Subscriber** | Services share publisher/subscriber. Participant-level QoS inherited. |
| **Topic cache** | `_topics: Dict[str, Topic]` avoids duplicate Topic creation. DDS also coalesces internally. |
| **External QoS via `topic_filter`** | QoS resolved from `topic_filter` rules in `umaa_qos_lib.xml` via `get_topic_*_qos(topic_name)`. No application-level QoS enum. |
| **CFT tuple return** | `create_filtered_reader()` returns `(reader, cft)` so callers can call `cft.set_filter()` for dynamic updates. |
| **Async shutdown** | `shutdown()` is async — signal handlers set an event, `run_until_shutdown()` returns, then `shutdown()` is awaited in the normal async flow. |
| **Register ≠ start** | `register_service()` is inert. `run_until_shutdown()` starts all services. No startup races — all DDS entities exist before any `_run()` begins. |

---
