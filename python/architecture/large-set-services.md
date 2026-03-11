# Large Set Services

> Tier 2: `LargeSetReportProvider`, `LargeSetReportConsumer`, and `LargeSetWriter` — root report with flat set element children and full CRUD element management.

---

## Overview

Some UMAA report types contain **set-valued members** too large to fit in a single DDS sample. The UMAA IDL flattens these into separate topics:

- A **root topic** containing metadata about the set (size, update info)
- One or more **set element topics** containing the collection members

Each set element has FK fields linking it back to the root's metadata.

**C++ SDK comparison:** The PSU/ARL C++ SDK provides `LargeSetWriter` — a mutable container that manages an in-memory element table and writes/disposes DDS samples on every mutation. UMAAPy2 provides an equivalent `LargeSetWriter` helper alongside `LargeSetReportProvider` / `LargeSetReportConsumer` template classes.

---

## IDL Element Structure (Verified)

Every set element wrapper has the same field layout (see [Multi-Topic Utilities](multi-topic-utilities.md#idl-element-wrapper-structure)):

| Field | Type | Key? | Purpose |
|---|---|---|---|
| `element` | `<PayloadType>` | No | The actual data (unwrap to access) |
| `setID` | `NumericGUID` | `@key` | FK → parent's `LargeSetMetadata.setID` |
| `elementID` | `NumericGUID` | `@key` | Unique element identifier |
| `elementTimestamp` | `DateTime` | No | When this element was last updated |

The root type's `LargeSetMetadata` has:

| Field | Type | Purpose |
|---|---|---|
| `setID` | `NumericGUID` | Primary key for this set instance |
| `updateElementID` | `NumericGUID` | Last-updated element |
| `updateElementTimestamp` | `DateTime` | Optional timestamp of update |
| `size` | `int32` | Total number of elements in the set |

---

## SetElementSlot

A `SetElementSlot` describes one set element topic associated with a root report:

```python
@dataclass
class SetElementSlot:
    """Describes a set element topic for a large set report."""
    name: str              # Human-readable slot name (e.g., "contacts")
    element_type: type     # IDL-generated element type
    element_topic: str     # Topic name from generated constants
    metadata_field: str    # Name of the LargeSetMetadata field on the root (e.g., "contactsSetMetadata")
```

The `metadata_field` is the name of the root type's `LargeSetMetadata` member. For example, if the root type has `contactsSetMetadata: LargeSetMetadata`, then `metadata_field = "contactsSetMetadata"`.

---

## LargeSetWriter

`LargeSetWriter` manages an in-memory element table and writes/disposes DDS element samples on every mutation — matching the C++ SDK `LargeSetWriter` pattern exactly. It owns a `setID`, tracks all elements, and automatically maintains `LargeSetMetadata`.

**C++ SDK comparison:** The C++ `LargeSetWriter` uses `std::unordered_set<SetElement>` + `std::unordered_map<Element, SetElement>` for O(1) lookup. The Python version uses a `dict[bytes, tuple[Element, SetElement]]` keyed by `elementID` for the same semantics.

### Class Definition

```python
class LargeSetWriter:
    """Manages a mutable set of elements over DDS with full CRUD operations.

    Each mutation (insert, update, remove, clear) immediately writes or disposes
    the corresponding DDS sample. The caller publishes the root with
    writer.metadata after mutations are complete.

    C++ SDK equivalent: arlcore::umaa::LargeSetWriter<Element, SetElement>
    """

    def __init__(
        self,
        element_writer: dds.DataWriter,
        element_type: type,
        set_id: Optional[bytes] = None,
    ):
        """
        Args:
            element_writer: DataWriter for the set element topic.
            element_type: IDL-generated SetElement wrapper type.
            set_id: Optional 16-byte NumericGUID. Auto-generated if omitted.
        """
        self._writer = element_writer
        self._element_type = element_type
        self._set_id = set_id or GUIDUtil.generate()

        # elementID → (payload Element, full SetElement wrapper)
        self._elements: dict[bytes, tuple[Any, Any]] = {}

        # Metadata tracks size and last-updated element
        self._metadata = LargeSetMetadata()
        self._metadata.setID = self._set_id
        self._metadata.size = 0
        self._metadata.updateElementID = GUIDUtil.NIL

    # ── Properties ──────────────────────────────────────────────

    @property
    def metadata(self) -> LargeSetMetadata:
        """Current metadata. Attach to the root sample before publishing."""
        return self._metadata

    @property
    def set_id(self) -> bytes:
        return self._set_id

    def __len__(self) -> int:
        return len(self._elements)

    def __bool__(self) -> bool:
        return len(self._elements) > 0

    def __iter__(self):
        """Iterate over (elementID, payload) pairs."""
        for eid, (payload, _) in self._elements.items():
            yield eid, payload

    def __contains__(self, element_id: bytes) -> bool:
        return element_id in self._elements

    # ── CRUD Operations ─────────────────────────────────────────

    def insert(self, payload, element_id: Optional[bytes] = None) -> bytes:
        """Add an element to the set. Writes the DDS sample immediately.

        Args:
            payload: The element data (e.g., ContactType instance).
            element_id: Optional elementID. Auto-generated if omitted.

        Returns:
            The elementID (bytes) assigned to this element.

        Raises:
            ValueError: If an element with the same elementID already exists.
        """
        eid = element_id or GUIDUtil.generate()
        if eid in self._elements:
            raise ValueError(f"Element {GUIDUtil.to_string(eid)} already exists in set")

        wrapper = self._new_set_element(payload, eid)
        self._writer.write(wrapper)

        self._elements[eid] = (payload, wrapper)
        self._update_metadata(wrapper)
        return eid

    def insert_many(self, payloads: list, element_ids: Optional[list[bytes]] = None) -> list[bytes]:
        """Insert multiple elements. Each is written immediately.

        Args:
            payloads: List of element data objects.
            element_ids: Optional list of elementIDs (must match length of payloads).

        Returns:
            List of elementIDs assigned to each element.
        """
        if element_ids and len(element_ids) != len(payloads):
            raise ValueError("element_ids length must match payloads length")
        ids = []
        for i, payload in enumerate(payloads):
            eid = element_ids[i] if element_ids else None
            ids.append(self.insert(payload, eid))
        return ids

    def update(self, element_id: bytes, new_payload) -> None:
        """Update an existing element's payload. Writes the updated DDS sample.

        Args:
            element_id: The elementID of the element to update.
            new_payload: The new element data.

        Raises:
            KeyError: If elementID is not in the set.
        """
        if element_id not in self._elements:
            raise KeyError(f"Element {GUIDUtil.to_string(element_id)} not found in set")

        _, old_wrapper = self._elements[element_id]
        wrapper = self._element_type()
        wrapper.setID = self._set_id
        wrapper.elementID = element_id
        wrapper.element = new_payload
        wrapper.elementTimestamp = UmaaTimestamp.now()

        self._writer.write(wrapper)
        self._elements[element_id] = (new_payload, wrapper)
        self._update_metadata(wrapper)

    def remove(self, element_id: bytes) -> None:
        """Remove an element from the set. Disposes the DDS instance.

        Args:
            element_id: The elementID of the element to remove.

        Raises:
            KeyError: If elementID is not in the set.
        """
        if element_id not in self._elements:
            raise KeyError(f"Element {GUIDUtil.to_string(element_id)} not found in set")

        _, wrapper = self._elements.pop(element_id)
        handle = self._writer.lookup_instance(wrapper)
        if handle != dds.InstanceHandle.nil():
            self._writer.dispose_instance(handle)
        self._update_metadata(wrapper, disposed=True)

    def clear(self) -> None:
        """Remove all elements. Disposes every DDS instance."""
        for eid in list(self._elements.keys()):
            self.remove(eid)

    def get(self, element_id: bytes) -> Optional[Any]:
        """Retrieve an element's payload by its elementID."""
        entry = self._elements.get(element_id)
        return entry[0] if entry else None

    def find(self, predicate: Callable) -> Optional[tuple[bytes, Any]]:
        """Find the first element matching a predicate.

        Args:
            predicate: Callable(payload) → bool

        Returns:
            (elementID, payload) tuple, or None if not found.
        """
        for eid, (payload, _) in self._elements.items():
            if predicate(payload):
                return eid, payload
        return None

    # ── Internals ────────────────────────────────────────────────

    def _new_set_element(self, payload, element_id: bytes):
        """Build a SetElement wrapper with generated fields."""
        wrapper = self._element_type()
        wrapper.setID = self._set_id
        wrapper.elementID = element_id
        wrapper.element = payload
        wrapper.elementTimestamp = UmaaTimestamp.now()
        return wrapper

    def _update_metadata(self, wrapper, disposed: bool = False) -> None:
        self._metadata.updateElementID = wrapper.elementID
        if disposed:
            self._metadata.updateElementTimestamp = None
        else:
            self._metadata.updateElementTimestamp = wrapper.elementTimestamp
        self._metadata.size = len(self._elements)

    def close(self) -> None:
        """Dispose all remaining elements (destructor equivalent)."""
        self.clear()
```

### Key Design Points

- **Write-through:** Every `insert` / `update` / `remove` immediately writes or disposes the DDS sample — no explicit flush step.
- **Elements-first protocol still applies:** Call `writer.insert(...)` for all mutations, then publish the root sample with `writer.metadata` attached.
- **Metadata is auto-maintained:** `writer.metadata` always reflects the current set state (size, updateElementID, updateElementTimestamp). Attach it to the root sample before publishing.
- **Dispose on remove/clear:** `remove()` and `clear()` dispose the DDS instance (per ICD), signaling consumers that the element no longer exists.
- **Destructor cleanup:** `close()` calls `clear()`, disposing all remaining elements — matches C++ destructor pattern.

---

## LargeSetReportProvider

Owns a writer for the root and one `LargeSetWriter` per set element slot.

### Entity Layout

| Slot | Entity | QoS | Notes |
|---|---|---|---|
| **root** | DataWriter | Report QoS (via topic_filter) | Root report |
| **element[0..N]** | DataWriter | Element QoS (via topic_filter) | RELIABLE, elements must not be lost |

### Class Definition

```python
class LargeSetReportProvider(BaseService):
    """Publishes a root report plus set element children with full CRUD."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        source_id: bytes,
        elements: list[SetElementSlot],
    ):
        super().__init__(ctx, service_name)
        self._source_id = source_id
        self._report_type = report_type

        self._root_writer = ctx.create_writer(
            report_type, report_topic,
        )

        self._set_writers: dict[str, LargeSetWriter] = {}
        for slot in elements:
            element_writer = ctx.create_writer(
                slot.element_type, slot.element_topic,
            )
            self._set_writers[slot.name] = LargeSetWriter(
                element_writer, slot.element_type,
            )

    def get_set_writer(self, slot_name: str) -> LargeSetWriter:
        """Get the LargeSetWriter for a named slot."""
        return self._set_writers[slot_name]

    def publish(self, root_sample) -> None:
        """Publish the root report.

        Before calling this, use get_set_writer(slot_name) to perform
        insert/update/remove operations. Each mutation writes its DDS
        sample immediately. This method publishes the root which signals
        that the current batch of element changes is complete.

        The metadata fields on root_sample are automatically populated
        from each LargeSetWriter's current metadata.
        """
        self._root_writer.write(root_sample)

    def write(self, root_sample, elements: dict[str, list]) -> None:
        """
        Convenience: bulk-publish a root report with its set elements.

        Clears existing elements, inserts all new ones, then publishes root.
        Elements are written BEFORE the root (elements-first protocol).

        Args:
            root_sample: The root report sample.
            elements: Dict mapping slot name → list of element samples.
                      Each element sample is the full wrapper (with setID, elementID, etc.).
        """
        # Phase 1: Write all elements first
        for slot_name, element_list in elements.items():
            writer = self._set_writers[slot_name]._writer
            for elem in element_list:
                writer.write(elem)

        # Phase 2: Write root (signals elements are complete)
        self._root_writer.write(root_sample)

    async def close(self) -> None:
        # Dispose all set elements (LargeSetWriter.close → clear → dispose each)
        for sw in self._set_writers.values():
            sw.close()
        # Dispose root instance
        try:
            key_holder = self._report_type()
            key_holder.source = self._source_id
            handle = self._root_writer.lookup_instance(key_holder)
            if handle != dds.InstanceHandle.nil():
                self._root_writer.dispose_instance(handle)
        except Exception:
            pass
        self._root_writer.close()
```

### Elements-First Protocol

Writers publish elements **before** the root. Readers receive the root notification and then read the elements from the element reader using a QueryCondition scoped by `setID` — the elements are guaranteed to be in the reader cache because RELIABLE QoS ensures delivery.

See [Multi-Topic Utilities](multi-topic-utilities.md) for the reader-side implementation.

---

## LargeSetReportConsumer

Owns a reader for the root and one reader per set element slot. Uses `read_large_set()` to assemble the root + elements.

### Entity Layout

| Slot | Entity | QoS | Notes |
|---|---|---|---|
| **root** | DataReader | Report QoS (via topic_filter) | Triggers assembly |
| **element[0..N]** | DataReader | Element QoS (via topic_filter) | RELIABLE, filtered by setID |

### Class Definition

```python
class LargeSetReportConsumer(BaseService):
    """Subscribes to a root report plus set element children."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        elements: list[SetElementSlot],
        on_report: Optional[Callable] = None,
    ):
        super().__init__(ctx, service_name)

        self._root_reader = ctx.create_reader(
            report_type, report_topic,
        )

        self._element_readers: dict[str, dds.DataReader] = {}
        self._element_conditions: dict[str, dds.QueryCondition] = {}
        self._element_slots: dict[str, SetElementSlot] = {}
        for slot in elements:
            reader = ctx.create_reader(
                slot.element_type, slot.element_topic,
            )
            self._element_readers[slot.name] = reader
            # Reusable QueryCondition — parameters updated per read
            self._element_conditions[slot.name] = dds.QueryCondition(
                dds.Query(reader, "setID = &hex(%0)"),
                dds.DataState.any_data,
            )
            self._element_slots[slot.name] = slot

        self._on_report = on_report

    async def _run(self) -> None:
        """Main event loop — assembles root + elements on each root arrival."""
        async for samples in self._root_reader.take_async():
            for sample in samples:
                if not sample.info.valid:
                    continue

                # Read elements from each slot using reusable condition
                assembled = {}
                for slot_name, reader in self._element_readers.items():
                    slot = self._element_slots[slot_name]
                    set_metadata = getattr(sample.data, slot.metadata_field)
                    condition = self._element_conditions[slot_name]
                    condition.parameters = [guid_to_hex(set_metadata.setID)]
                    assembled[slot_name] = await read_large_set(
                        reader, set_metadata, condition,
                    )

                if self._on_report:
                    self._on_report(sample.data, assembled)

    def close(self) -> None:
        for condition in self._element_conditions.values():
            condition.close()
        for reader in self._element_readers.values():
            reader.close()
        self._root_reader.close()
```

**Key points:**
- `read_large_set()` uses a QueryCondition with `&hex()` to match elements by `setID`
- Each returned element is the **unwrapped payload** (extracted from `sample.element`)
- `metadata.size` is used for size-aware retry (wait until all elements arrive)

---

## Types Covered

| Root Type | Element Slot(s) | Metadata Field |
|---|---|---|
| `ContactReportType` | `ContactReportTypeContactsSetElement` | `contactsSetMetadata` |
| `TrackReportType` | `TrackReportTypeTracksSetElement` | `tracksSetMetadata` |
| `MissionPlanReportType` | `MissionPlanReportTypeMissionPlanSetElement` + `...ConstraintsSetElement` | Multiple (Tier 4) |

> `MissionPlanReportType` has multiple nested set levels — it uses Tier 4 composite classes, not `LargeSetReportConsumer` directly.

---

## Usage Example

```python
# Consumer
contact_consumer = LargeSetReportConsumer(ctx,
    service_name="ContactReport",
    report_type=ContactReportType,
    report_topic=ContactReportTypeTopic,
    elements=[
        SetElementSlot(
            name="contacts",
            element_type=ContactReportTypeContactsSetElement,
            element_topic=ContactReportTypeContactsSetElementTopic,
            metadata_field="contactsSetMetadata",
        ),
    ],
    on_report=handle_contacts,
)

def handle_contacts(root, elements):
    contacts = elements["contacts"]  # List of unwrapped ContactType payloads
    print(f"Received {len(contacts)} contacts")
    for contact in contacts:
        print(f"  Contact: {contact.contactID}")
```

```python
# Provider — full CRUD
contact_provider = LargeSetReportProvider(ctx,
    service_name="ContactReport",
    report_type=ContactReportType,
    report_topic=ContactReportTypeTopic,
    source_id=my_source_id,
    elements=[
        SetElementSlot(
            name="contacts",
            element_type=ContactReportTypeContactsSetElement,
            element_topic=ContactReportTypeContactsSetElementTopic,
            metadata_field="contactsSetMetadata",
        ),
    ],
)

# Get the set writer for the "contacts" slot
contacts = contact_provider.get_set_writer("contacts")

# Insert elements (each write is immediate on DDS)
eid1 = contacts.insert(contact_a)
eid2 = contacts.insert(contact_b)
eid3 = contacts.insert(contact_c)

# Update an element by its elementID
contacts.update(eid2, updated_contact_b)

# Remove an element
contacts.remove(eid3)

# Publish root with current metadata
root = ContactReportType()
root.source = my_source_id
root.contactsSetMetadata = contacts.metadata   # auto-maintained
contact_provider.publish(root)

# Lookup and predicate search
payload = contacts.get(eid1)             # by elementID
result = contacts.find(lambda c: c.name == "Target Alpha")  # (eid, payload) or None

# Clear all elements (disposes each DDS instance)
contacts.clear()
```

---

## Related Documents

- [Large List Services](large-list-services.md) — Tier 3 (ordered list variant)
- [Multi-Topic Utilities](multi-topic-utilities.md) — `read_large_set()` implementation
- [Composite Services](composite-services.md) — Tier 4 types with multi-level sets

---
