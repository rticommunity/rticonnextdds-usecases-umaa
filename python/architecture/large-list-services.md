# Large List Services

> Tier 3: `LargeListReportProvider`, `LargeListReportConsumer`, and `LargeListWriter` — root report with ordered list element children and full CRUD element management.

---

## Overview

Similar to Tier 2 (Large Set), some UMAA types have **ordered list-valued members** flattened into separate topics. The key difference from sets: **order matters**, and ordering is maintained via a **linked-list** structure using `nextElementID` pointers.

| Tier | Collection Type | Ordering | Structure |
|---|---|---|---|
| Tier 2 (Large Set) | Unordered set | No ordering guarantee | FK to root via `setID` |
| Tier 3 (Large List) | Ordered list | Linked-list chain | FK via `listID` + chain via `nextElementID` |

**C++ SDK comparison:** The PSU/ARL C++ `LargeListWriter` provides full positional CRUD: prepend, append, insert-at-index, update, popFront, popBack, remove-at-index, and clear. UMAAPy2's `LargeListWriter` provides equivalent operations, automatically managing linked-list pointer rewiring and DDS writes/disposes on every mutation.

---

## IDL Element Structure (Verified)

Every list element wrapper has these fields (see [Multi-Topic Utilities](multi-topic-utilities.md#idl-element-wrapper-structure)):

| Field | Type | Key? | Purpose |
|---|---|---|---|
| `element` | `<PayloadType>` | No | The actual data (unwrap to access) |
| `listID` | `NumericGUID` | `@key` | FK → parent's `LargeListMetadata.listID` |
| `elementID` | `NumericGUID` | `@key` | Unique element identifier |
| `elementTimestamp` | `DateTime` | No | When this element was last updated |
| `nextElementID` | `@optional NumericGUID` | No | Points to next element in list (`null` = end) |

The root type's `LargeListMetadata` has:

| Field | Type | Purpose |
|---|---|---|
| `listID` | `NumericGUID` | Primary key for this list instance |
| `startingElementID` | `NumericGUID` | Head of the linked list — first element |
| `updateElementID` | `NumericGUID` | Last-updated element |
| `updateElementTimestamp` | `DateTime` | Optional timestamp of update |
| `size` | `int32` | Total number of elements in the list |

---

## ListElementSlot

```python
@dataclass
class ListElementSlot:
    """Describes a list element topic for a large list report."""
    name: str              # Human-readable slot name (e.g., "waypoints")
    element_type: type     # IDL-generated element type
    element_topic: str     # Topic name from generated constants
    metadata_field: str    # Name of the LargeListMetadata field on the root (e.g., "waypointsListMetadata")
```

---

## LargeListWriter

`LargeListWriter` manages an in-memory ordered list of elements over DDS with full positional CRUD. Every mutation immediately writes or disposes DDS samples and automatically rewires `nextElementID` linked-list pointers.

**C++ SDK comparison:** Maps directly to `arlcore::umaa::LargeListWriter<Element, ListElement>`. The C++ version uses `std::list<ListElement>` for O(1) insert/remove at known iterators. The Python version uses a `list` for simplicity (positional access is the primary API).

### Class Definition

```python
class LargeListWriter:
    """Manages a mutable ordered list of elements over DDS with full CRUD.

    Each mutation (prepend, append, insert, update, remove, popFront, popBack,
    clear) immediately writes or disposes the corresponding DDS sample and
    rewires linked-list pointers as needed.

    C++ SDK equivalent: arlcore::umaa::LargeListWriter<Element, ListElement>
    """

    def __init__(
        self,
        element_writer: dds.DataWriter,
        element_type: type,
        list_id: Optional[bytes] = None,
    ):
        """
        Args:
            element_writer: DataWriter for the list element topic.
            element_type: IDL-generated ListElement wrapper type.
            list_id: Optional 16-byte NumericGUID. Auto-generated if omitted.
        """
        self._writer = element_writer
        self._element_type = element_type
        self._list_id = list_id or GUIDUtil.generate()

        # Ordered list of (elementID, payload, wrapper) tuples
        self._elements: list[tuple[bytes, Any, Any]] = []

        # Metadata tracks size, head, and last-updated element
        self._metadata = LargeListMetadata()
        self._metadata.listID = self._list_id
        self._metadata.size = 0
        self._metadata.startingElementID = GUIDUtil.NIL
        self._metadata.updateElementID = GUIDUtil.NIL

    # ── Properties ──────────────────────────────────────────────

    @property
    def metadata(self) -> LargeListMetadata:
        """Current metadata. Attach to the root sample before publishing."""
        return self._metadata

    @property
    def list_id(self) -> bytes:
        return self._list_id

    def __len__(self) -> int:
        return len(self._elements)

    def __bool__(self) -> bool:
        return len(self._elements) > 0

    def __getitem__(self, index: int):
        """Get element payload at index."""
        return self._elements[index][1]

    def __iter__(self):
        """Iterate over (elementID, payload) pairs in order."""
        for eid, payload, _ in self._elements:
            yield eid, payload

    # ── Positional CRUD Operations ──────────────────────────────

    def prepend(self, payload, element_id: Optional[bytes] = None) -> bytes:
        """Add an element to the beginning of the list.

        Rewires: new.nextElementID → old head.elementID.

        Returns:
            The elementID assigned to this element.
        """
        eid = element_id or GUIDUtil.generate()
        wrapper = self._new_list_element(payload, eid)

        if self._elements:
            wrapper.nextElementID = self._elements[0][0]  # point to old head

        self._writer.write(wrapper)
        self._elements.insert(0, (eid, payload, wrapper))
        self._update_metadata(wrapper)
        return eid

    def append(self, payload, element_id: Optional[bytes] = None) -> bytes:
        """Add an element to the end of the list.

        Rewires: old tail.nextElementID → new.elementID.

        Returns:
            The elementID assigned to this element.
        """
        eid = element_id or GUIDUtil.generate()
        wrapper = self._new_list_element(payload, eid)
        # nextElementID is None (end of list)

        if self._elements:
            # Update old tail to point to new element
            old_eid, old_payload, old_wrapper = self._elements[-1]
            old_wrapper.nextElementID = eid
            old_wrapper.elementTimestamp = UmaaTimestamp.now()
            self._writer.write(old_wrapper)
            self._elements[-1] = (old_eid, old_payload, old_wrapper)

        self._writer.write(wrapper)
        self._elements.append((eid, payload, wrapper))
        self._update_metadata(wrapper)
        return eid

    def insert_at(self, index: int, payload, element_id: Optional[bytes] = None) -> bytes:
        """Insert an element at a specific position.

        Rewires: prev.nextElementID → new.elementID, new.nextElementID → old[index].elementID.

        Args:
            index: Position to insert at (0 = prepend, len = append).
            payload: The element data.

        Returns:
            The elementID assigned to this element.
        """
        if index <= 0:
            return self.prepend(payload, element_id)
        if index >= len(self._elements):
            return self.append(payload, element_id)

        eid = element_id or GUIDUtil.generate()
        wrapper = self._new_list_element(payload, eid)

        # Point new element to the element currently at this position
        wrapper.nextElementID = self._elements[index][0]

        # Update predecessor to point to new element
        prev_eid, prev_payload, prev_wrapper = self._elements[index - 1]
        prev_wrapper.nextElementID = eid
        prev_wrapper.elementTimestamp = UmaaTimestamp.now()
        self._writer.write(prev_wrapper)
        self._elements[index - 1] = (prev_eid, prev_payload, prev_wrapper)

        self._writer.write(wrapper)
        self._elements.insert(index, (eid, payload, wrapper))
        self._update_metadata(wrapper)
        return eid

    def update(self, index: int, new_payload) -> None:
        """Update the payload of an existing element at a given index.

        Writes the updated sample. Does not change linked-list pointers.

        Raises:
            IndexError: If index is out of range.
        """
        if index < 0 or index >= len(self._elements):
            raise IndexError(f"Index {index} out of range (size={len(self._elements)})")

        eid, _, old_wrapper = self._elements[index]
        wrapper = self._element_type()
        wrapper.listID = self._list_id
        wrapper.elementID = eid
        wrapper.element = new_payload
        wrapper.elementTimestamp = UmaaTimestamp.now()
        # Preserve nextElementID from old wrapper
        wrapper.nextElementID = old_wrapper.nextElementID

        self._writer.write(wrapper)
        self._elements[index] = (eid, new_payload, wrapper)
        self._update_metadata(wrapper)

    def pop_front(self) -> None:
        """Remove the first element. Disposes its DDS instance.

        The new head becomes the element that was second.

        Raises:
            IndexError: If the list is empty.
        """
        if not self._elements:
            raise IndexError("pop_front from empty list")

        eid, _, wrapper = self._elements.pop(0)
        handle = self._writer.lookup_instance(wrapper)
        if handle != dds.InstanceHandle.nil():
            self._writer.dispose_instance(handle)
        self._update_metadata(wrapper, disposed=True)

    def pop_back(self) -> None:
        """Remove the last element. Disposes its DDS instance.

        Rewires: new tail.nextElementID → None.

        Raises:
            IndexError: If the list is empty.
        """
        if not self._elements:
            raise IndexError("pop_back from empty list")

        if len(self._elements) > 1:
            # Update new tail to clear its nextElementID
            prev_eid, prev_payload, prev_wrapper = self._elements[-2]
            prev_wrapper.nextElementID = None
            prev_wrapper.elementTimestamp = UmaaTimestamp.now()
            self._writer.write(prev_wrapper)
            self._elements[-2] = (prev_eid, prev_payload, prev_wrapper)

        eid, _, wrapper = self._elements.pop()
        handle = self._writer.lookup_instance(wrapper)
        if handle != dds.InstanceHandle.nil():
            self._writer.dispose_instance(handle)
        self._update_metadata(wrapper, disposed=True)

    def remove(self, index: int) -> None:
        """Remove the element at a given index. Disposes the DDS instance.

        Rewires: prev.nextElementID → removed.nextElementID.

        Raises:
            IndexError: If index is out of range.
        """
        if index < 0 or index >= len(self._elements):
            raise IndexError(f"Index {index} out of range")
        if index == 0:
            return self.pop_front()
        if index == len(self._elements) - 1:
            return self.pop_back()

        # Rewire predecessor to skip removed element
        prev_eid, prev_payload, prev_wrapper = self._elements[index - 1]
        removed_eid, _, removed_wrapper = self._elements[index]
        prev_wrapper.nextElementID = removed_wrapper.nextElementID
        prev_wrapper.elementTimestamp = UmaaTimestamp.now()
        self._writer.write(prev_wrapper)
        self._elements[index - 1] = (prev_eid, prev_payload, prev_wrapper)

        # Dispose the removed element
        self._elements.pop(index)
        handle = self._writer.lookup_instance(removed_wrapper)
        if handle != dds.InstanceHandle.nil():
            self._writer.dispose_instance(handle)
        self._update_metadata(removed_wrapper, disposed=True)

    def clear(self) -> None:
        """Remove all elements. Disposes each DDS instance via pop_front."""
        while self._elements:
            self.pop_front()

    # ── Bulk Convenience ─────────────────────────────────────────

    def prepend_many(self, payloads: list) -> list[bytes]:
        """Prepend multiple elements in order (first payload becomes first element)."""
        ids = []
        for i, payload in enumerate(payloads):
            ids.append(self.insert_at(i, payload))
        return ids

    def append_many(self, payloads: list) -> list[bytes]:
        """Append multiple elements in order."""
        ids = []
        for payload in payloads:
            ids.append(self.append(payload))
        return ids

    # ── Accessors ────────────────────────────────────────────────

    def element_at(self, index: int) -> Optional[Any]:
        """Get the payload at a given index, or None if out of range."""
        if 0 <= index < len(self._elements):
            return self._elements[index][1]
        return None

    @property
    def front(self):
        """First element payload, or None if empty."""
        return self._elements[0][1] if self._elements else None

    @property
    def back(self):
        """Last element payload, or None if empty."""
        return self._elements[-1][1] if self._elements else None

    # ── Internals ────────────────────────────────────────────────

    def _new_list_element(self, payload, element_id: bytes):
        """Build a ListElement wrapper with generated fields."""
        wrapper = self._element_type()
        wrapper.listID = self._list_id
        wrapper.elementID = element_id
        wrapper.element = payload
        wrapper.elementTimestamp = UmaaTimestamp.now()
        wrapper.nextElementID = None  # caller sets if needed
        return wrapper

    def _update_metadata(self, wrapper, disposed: bool = False) -> None:
        self._metadata.updateElementID = wrapper.elementID
        if disposed:
            self._metadata.updateElementTimestamp = None
        else:
            self._metadata.updateElementTimestamp = wrapper.elementTimestamp
        self._metadata.size = len(self._elements)
        if self._elements:
            self._metadata.startingElementID = self._elements[0][0]
        else:
            self._metadata.startingElementID = GUIDUtil.NIL

    def close(self) -> None:
        """Dispose all remaining elements (destructor equivalent)."""
        self.clear()
```

### Key Design Points

- **Write-through:** Every positional operation immediately writes or disposes DDS samples. No explicit flush.
- **Automatic pointer rewiring:** `prepend`, `append`, `insert_at`, `remove`, `pop_front`, `pop_back` all manage `nextElementID` pointers automatically. The caller never touches linked-list fields.
- **Elements-first protocol still applies:** Perform all mutations, then publish root with `writer.metadata` attached.
- **Metadata is auto-maintained:** `metadata.startingElementID` always points to the current head. `metadata.size` always reflects the current count.
- **Dispose on remove:** All removal operations dispose the DDS instance, matching the C++ destructor/clear pattern.
- **Compared to `wire_list_chain()`:** The previous `wire_list_chain()` utility is still available for bulk-write scenarios, but `LargeListWriter` replaces it for incremental CRUD where individual elements are added/removed/updated over time.

### Operation Complexity

| Operation | DDS writes | DDS disposes | Notes |
|---|---|---|---|
| `prepend` | 1 | 0 | Writes new element with next→old head |
| `append` | 2 | 0 | Updates old tail + writes new element |
| `insert_at(i)` | 2 | 0 | Updates prev + writes new element |
| `update(i)` | 1 | 0 | Writes updated element |
| `pop_front` | 0 | 1 | Disposes head |
| `pop_back` | 1 | 1 | Updates new tail + disposes old tail |
| `remove(i)` | 1 | 1 | Updates prev + disposes removed |
| `clear` | 0 | N | Disposes each element via pop_front |

---

## LargeListReportProvider

Owns a writer for the root and one `LargeListWriter` per list element slot.

### Entity Layout

| Slot | Entity | QoS | Notes |
|---|---|---|---|
| **root** | DataWriter | Report QoS (via topic_filter) | Root report |
| **element[0..N]** | DataWriter | Element QoS (via topic_filter) | RELIABLE, elements must not be lost |

### Class Definition

```python
class LargeListReportProvider(BaseService):
    """Publishes a root report plus ordered list element children with full CRUD."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        source_id: bytes,
        elements: list[ListElementSlot],
    ):
        super().__init__(ctx, service_name)
        self._source_id = source_id
        self._report_type = report_type

        self._root_writer = ctx.create_writer(
            report_type, report_topic,
        )

        self._list_writers: dict[str, LargeListWriter] = {}
        for slot in elements:
            element_writer = ctx.create_writer(
                slot.element_type, slot.element_topic,
            )
            self._list_writers[slot.name] = LargeListWriter(
                element_writer, slot.element_type,
            )

    def get_list_writer(self, slot_name: str) -> LargeListWriter:
        """Get the LargeListWriter for a named slot."""
        return self._list_writers[slot_name]

    def publish(self, root_sample) -> None:
        """Publish the root report.

        Before calling this, use get_list_writer(slot_name) to perform
        prepend/append/insert/update/remove operations. Each mutation writes
        its DDS sample immediately. This method publishes the root which
        signals that the current batch of element changes is complete.
        """
        self._root_writer.write(root_sample)

    def write(self, root_sample, elements: dict[str, list]) -> None:
        """
        Convenience: bulk-publish a root report with its list elements.

        Elements are written BEFORE the root (elements-first protocol).
        The caller is responsible for wiring nextElementID pointers (use
        wire_list_chain()) or use LargeListWriter for automatic management.

        Args:
            root_sample: The root report sample (metadata.startingElementID
                         must point to the first element).
            elements: Dict mapping slot name → list of element samples (in order).
        """
        # Phase 1: Write all elements (linked-list already wired by caller)
        for slot_name, element_list in elements.items():
            writer = self._list_writers[slot_name]._writer
            for elem in element_list:
                writer.write(elem)

        # Phase 2: Write root (signals elements are complete)
        self._root_writer.write(root_sample)

    async def close(self) -> None:
        # Dispose all list elements (LargeListWriter.close → clear → dispose each)
        for lw in self._list_writers.values():
            lw.close()
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

### Building the Linked-List Chain

The provider must wire up `nextElementID` pointers before publishing:

```python
def wire_list_chain(elements: list) -> None:
    """Set nextElementID on each element to form the linked list."""
    for i in range(len(elements) - 1):
        elements[i].nextElementID = elements[i + 1].elementID
    if elements:
        elements[-1].nextElementID = None  # End of list
```

The root's `LargeListMetadata.startingElementID` must be set to the first element's `elementID`.

---

## LargeListReportConsumer

Owns a reader for the root and one reader per list element slot. Uses `read_large_list()` to assemble in order via linked-list traversal.

### Class Definition

```python
class LargeListReportConsumer(BaseService):
    """Subscribes to a root report plus ordered list element children."""

    def __init__(
        self,
        ctx: DDSContext,
        service_name: str,
        report_type,
        report_topic: str,
        elements: list[ListElementSlot],
        on_report: Optional[Callable] = None,
    ):
        super().__init__(ctx, service_name)

        self._root_reader = ctx.create_reader(
            report_type, report_topic,
        )

        self._element_readers: dict[str, dds.DataReader] = {}
        self._element_conditions: dict[str, dds.QueryCondition] = {}
        self._element_slots: dict[str, ListElementSlot] = {}
        for slot in elements:
            reader = ctx.create_reader(
                slot.element_type, slot.element_topic,
            )
            self._element_readers[slot.name] = reader
            # Reusable QueryCondition — parameters updated per read
            self._element_conditions[slot.name] = dds.QueryCondition(
                dds.Query(reader, "listID = &hex(%0)"),
                dds.DataState.any_data,
            )
            self._element_slots[slot.name] = slot

        self._on_report = on_report

    async def _run(self) -> None:
        """Main event loop — assembles root + ordered elements on each root arrival."""
        async for samples in self._root_reader.take_async():
            for sample in samples:
                if not sample.info.valid:
                    continue

                # Read elements from each slot via linked-list traversal
                assembled = {}
                for slot_name, reader in self._element_readers.items():
                    slot = self._element_slots[slot_name]
                    list_metadata = getattr(sample.data, slot.metadata_field)
                    condition = self._element_conditions[slot_name]
                    condition.parameters = [guid_to_hex(list_metadata.listID)]
                    assembled[slot_name] = await read_large_list(
                        reader, list_metadata, condition,
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
- `read_large_list()` uses QueryCondition with `&hex()` to match elements by `listID`
- Ordering is restored via **linked-list traversal**: `startingElementID` → `nextElementID` → `nextElementID` → ... → `null`
- Each returned element is the **unwrapped payload** (extracted from `sample.element`)
- `metadata.size` is used for size-aware retry (wait until all elements arrive)

---

## Linked-List Traversal (Reader Side)

The consumer-side `read_large_list()` function (from [Multi-Topic Utilities](multi-topic-utilities.md)) works as follows:

1. Read `metadata.startingElementID` from the root → this is the head of the list
2. Query all elements where `listID` matches using `&hex()` QueryCondition
3. Build a lookup dict: `elementID → element`
4. Walk the chain: `startingElementID` → `elem.nextElementID` → ... → `null`
5. Return the elements in linked-list order

```python
# Simplified view of linked-list traversal in read_large_list()
current_id = metadata.startingElementID
result = []
while current_id is not None:
    elem = by_id[current_id]
    result.append(elem.element)  # unwrap payload
    current_id = elem.nextElementID
```

This replaces the index-based sorting approach — UMAA lists do not have index fields.

---

## Types Covered

| Root Type | Element Slot(s) | Metadata Field |
|---|---|---|
| `RouteObjectiveType` | `RouteObjectiveTypeWaypointsListElement` | `waypointsListMetadata` |
| `BarrierZoneReportType` | `BarrierZoneReportTypeVerticesListElement` | `verticesListMetadata` |
| `SearchPatternReportType` | `SearchPatternReportTypeWaypointsListElement` | `waypointsListMetadata` |

> Multi-level types with nested lists (e.g., `MissionPlanReportType`) use Tier 4 composite classes, not `LargeListReportConsumer` directly.

---

## Usage Example

### Consumer (unchanged — reads assembled list)

```python
route_consumer = LargeListReportConsumer(ctx,
    service_name="RouteObjective",
    report_type=RouteObjectiveType,
    report_topic=RouteObjectiveTypeTopic,
    elements=[
        ListElementSlot(
            name="waypoints",
            element_type=RouteObjectiveTypeWaypointsListElement,
            element_topic=RouteObjectiveTypeWaypointsListElementTopic,
            metadata_field="waypointsListMetadata",
        ),
    ],
    on_report=handle_route,
)

def handle_route(root, elements):
    waypoints = elements["waypoints"]  # In linked-list order, unwrapped payloads
    print(f"Route with {len(waypoints)} waypoints")
    for i, wp in enumerate(waypoints):
        print(f"  [{i}] lat={wp.latitude}, lon={wp.longitude}")
```

### Provider — Full CRUD

```python
route_provider = LargeListReportProvider(ctx,
    service_name="RouteObjective",
    report_type=RouteObjectiveType,
    report_topic=RouteObjectiveTypeTopic,
    source_id=my_source_id,
    elements=[
        ListElementSlot(
            name="waypoints",
            element_type=RouteObjectiveTypeWaypointsListElement,
            element_topic=RouteObjectiveTypeWaypointsListElementTopic,
            metadata_field="waypointsListMetadata",
        ),
    ],
)

# Get the list writer for the "waypoints" slot
waypoints = route_provider.get_list_writer("waypoints")

# Build a route: append waypoints in order
eid_a = waypoints.append(waypoint_a)
eid_b = waypoints.append(waypoint_b)
eid_c = waypoints.append(waypoint_c)
# List: [A → B → C]

# Insert a waypoint between A and B
eid_x = waypoints.insert_at(1, waypoint_x)
# List: [A → X → B → C]

# Update waypoint B (index 2 after insert)
waypoints.update(2, updated_waypoint_b)

# Remove waypoint X (index 1)
waypoints.remove(1)
# List: [A → B' → C]

# Prepend a starting waypoint
eid_start = waypoints.prepend(start_waypoint)
# List: [Start → A → B' → C]

# Pop the last waypoint
waypoints.pop_back()
# List: [Start → A → B']

# Publish root with current metadata
root = RouteObjectiveType()
root.source = my_source_id
root.waypointsListMetadata = waypoints.metadata  # auto-maintained
route_provider.publish(root)

# Accessors
first_wp = waypoints.front          # Start
last_wp = waypoints.back            # B'
wp_at_1 = waypoints.element_at(1)   # A
total = len(waypoints)              # 3

# Clear and republish empty
waypoints.clear()
```

---

## Related Documents

- [Large Set Services](large-set-services.md) — Tier 2 (unordered set variant)
- [Multi-Topic Utilities](multi-topic-utilities.md) — `read_large_list()` implementation with linked-list traversal
- [Composite Services](composite-services.md) — Tier 4 types that combine list elements with nested composites

---
