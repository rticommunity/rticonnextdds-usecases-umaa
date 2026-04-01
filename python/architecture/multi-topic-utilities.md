# Multi-Topic Utilities

> Utility functions for reading and writing multi-topic assemblies: `read_large_set()`, `read_large_list()`, elements-first protocol, and QueryCondition scoping.

---

## Overview

UMAA flattens set/list-valued members into separate DDS topics. Reading them back requires **assembly**: when a root sample arrives, read the corresponding element samples from element reader caches and combine them.

Two async utility functions handle this:
- **`read_large_set()`** — reads unordered set elements scoped to a root
- **`read_large_list()`** — reads ordered list elements scoped to a root, sorted by linked-list traversal

Both functions use **QueryCondition** to scope element reads to the correct root sample via foreign key.

### IDL Element Wrapper Structure (Verified)

**Set element** (e.g., `ContactReportTypeContactsSetElement`):

```idl
struct <Prefix>SetElement {
    <PayloadType>  element;          // the wrapped payload — always named "element"
    @key NumericGUID setID;          // FK back to LargeSetMetadata.setID
    @key NumericGUID elementID;      // unique within set
    DateTime elementTimestamp;
};
```

**List element** (e.g., `RouteObjectiveTypeWaypointsListElement`):

```idl
struct <Prefix>ListElement {
    <PayloadType>  element;
    @key NumericGUID listID;         // FK back to LargeListMetadata.listID
    @key NumericGUID elementID;
    DateTime elementTimestamp;
    @optional NumericGUID nextElementID;  // linked-list pointer (empty = tail)
};
```

**Root embeds metadata** (e.g., `ContactReportType`):

```idl
struct ContactReportType {
    @key IdentifierType source;
    DateTime timeStamp;
    LargeSetMetadata contactsSetMetadata;  // contains setID for FK join
};
```

| Field | Set Element | List Element |
|-------|------------|-------------|
| Payload | `element` | `element` |
| FK to root | `setID` | `listID` |
| Unique ID | `elementID` | `elementID` |
| Timestamp | `elementTimestamp` | `elementTimestamp` |
| Ordering | — | `nextElementID` (linked list) |

---

## Elements-First Protocol

Writers **always** publish elements before the root:

```
Writer timeline:
  1. write(element[0])
  2. write(element[1])
  3. write(element[2])
  4. write(root)        ← signals "all elements for this root are ready"
```

When the reader's `take_async()` yields the root sample, the elements are **already in the element reader's cache** — guaranteed by PRESENTATION QoS (`ordered_access=true`). The assembly functions do a synchronous read from cache, not an async wait.

This eliminates the need for assembly timeouts. There is no race condition because DDS delivers samples from the same participant in write order.

**C++ SDK comparison:** The PSU/ARL C++ SDK uses a similar elements-first approach in its service implementations. `rtiumaapy` formalizes this as a protocol with reusable utility functions.

---

## `read_large_set()`

Reads unordered set elements matching a root's foreign key from a single element reader cache.

```python
async def read_large_set(
    element_reader: dds.DataReader,
    set_metadata,  # Pre-extracted LargeSetMetadata from the root sample
    condition: dds.QueryCondition,  # Reusable condition — caller updates parameters
    max_retries: int = 3,
    retry_delay: float = 0.01,
) -> list:
    """
    Read set elements scoped to a root sample's LargeSetMetadata.

    The caller owns the QueryCondition and updates its parameters
    before each call. This avoids per-read condition create/destroy.

    Args:
        element_reader: DataReader for the element topic.
        set_metadata: Pre-extracted LargeSetMetadata from the root sample
            (e.g., `root.contactsSetMetadata`).
        condition: Reusable QueryCondition with parameterized expression.
            Caller must set `condition.parameters = [guid_to_hex(set_metadata.setID)]`
            before calling.
        max_retries: Number of read attempts.
        retry_delay: Seconds between retries (async sleep).

    Returns:
        List of unwrapped element payloads.

    Raises:
        AssemblyError: If no elements found after all retries (configurable).
    """
    accumulated = []
    for attempt in range(max_retries):
        for sample in element_reader.select().condition(condition).read_data():
            accumulated.append(sample.element)  # unwrap payload

        if len(accumulated) >= set_metadata.size:
            break

        if attempt < max_retries - 1:
            await asyncio.sleep(retry_delay)

    return accumulated
```

### Key Design Points

1. **Reusable QueryCondition:** The caller creates the condition once at construction with a parameterized expression (e.g., `"setID = &hex(%0)"`) and updates `condition.parameters` before each call. No per-read create/destroy overhead.

2. **Payload extraction:** Element wrappers always contain a field named `element` holding the actual payload. `read_large_set()` returns unwrapped payloads (`sample.element`), not raw SetElement wrappers.

3. **Size-aware retry:** The function compares `len(accumulated)` against `metadata.size` to determine when all elements have arrived. This is more robust than checking for non-empty results.

4. **`read()` not `take()`:** Elements are read (not taken) from cache. This allows re-reading on retry without losing samples. The cache is cleared when the next root publication's elements arrive.

5. **Async sleep:** `await asyncio.sleep(retry_delay)` yields to the event loop between retries, allowing DDS to deliver any pending samples. This is cooperative with the asyncio model.

---

## `read_large_list()`

Same as `read_large_set()` but for ordered list elements. List elements form a **linked list** via `nextElementID`. The function reads all elements matching the `listID` and then sorts by following the linked list from `startingElementID`.

```python
async def read_large_list(
    element_reader: dds.DataReader,
    list_metadata,  # Pre-extracted LargeListMetadata from the root sample
    condition: dds.QueryCondition,  # Reusable condition — caller updates parameters
    max_retries: int = 3,
    retry_delay: float = 0.01,
) -> list:
    """
    Read ordered list elements scoped to a root sample's LargeListMetadata.

    Same as read_large_set() but sorts elements
    by following the linked-list chain (startingElementID → nextElementID).

    Args:
        element_reader: DataReader for the element topic.
        list_metadata: Pre-extracted LargeListMetadata from the root sample.
        condition: Reusable QueryCondition with parameterized expression.
            Caller must set `condition.parameters = [guid_to_hex(list_metadata.listID)]`
            before calling.
        max_retries: Number of read attempts.
        retry_delay: Seconds between retries.

    Returns:
        Sorted list of unwrapped element payloads.
    """
    raw_elements = []
    for attempt in range(max_retries):
        for sample in element_reader.select().condition(condition).read_data():
            raw_elements.append(sample)

        if len(raw_elements) >= list_metadata.size:
            break

        if attempt < max_retries - 1:
            await asyncio.sleep(retry_delay)

    # Sort by following the linked list
    by_id = {bytes(e.elementID): e for e in raw_elements}
    ordered = []
    current_id = bytes(list_metadata.startingElementID)
    while current_id in by_id:
        elem = by_id[current_id]
        ordered.append(elem.element)  # unwrap payload
        next_id = getattr(elem, 'nextElementID', None)
        if next_id is None:
            break
        current_id = bytes(next_id)

    return ordered
```

---

## AssemblyError

Raised when element assembly fails irrecoverably:

```python
class AssemblyError(Exception):
    """Raised when multi-topic assembly fails."""

    def __init__(self, root_type: str, slot_name: str, message: str):
        self.root_type = root_type
        self.slot_name = slot_name
        super().__init__(f"Assembly failed for {root_type}.{slot_name}: {message}")
```

By default, `read_large_set()` and `read_large_list()` return empty lists for slots with no matching elements (soft failure). Services can opt into raising `AssemblyError` on empty results if the slot is required.

---

## Write Helpers

Provider-side write helpers ensure the elements-first protocol is followed:

```python
def write_set_elements(
    root_writer: dds.DataWriter,
    root_sample,
    element_writers: dict[str, dds.DataWriter],
    elements: dict[str, list],
) -> None:
    """
    Write elements first, then root.

    Args:
        root_writer: Writer for the root topic.
        root_sample: The root sample to publish.
        element_writers: Dict mapping slot name → DataWriter.
        elements: Dict mapping slot name → list of element samples.
    """
    # Phase 1: Write all elements
    for slot_name, element_list in elements.items():
        writer = element_writers[slot_name]
        for elem in element_list:
            writer.write(elem)

    # Phase 2: Write root
    root_writer.write(root_sample)
```

---

## QueryCondition Scoping

### Why QueryConditions?

Element readers may retain samples from **previous** root publications in their cache (KEEP_ALL history). Without scoping, `read()` would return stale elements mixed with current ones.

QueryConditions filter the reader cache by `setID` (or `listID`), returning only elements that belong to the current root sample. The `&hex()` syntax is required for `NumericGUID` (octet[16]) comparison:

```python
query = dds.Query(reader, f"setID = &hex({guid_to_hex(metadata.setID)})")
condition = dds.QueryCondition(query, dds.DataState.any_data)
samples = reader.select().condition(condition).read_data()
```

### Lifecycle

QueryConditions are created per-read and closed immediately after:

```python
condition = dds.QueryCondition(...)
try:
    samples = reader.select().condition(condition).read()
finally:
    condition.close()
```

This avoids accumulating stale conditions on the reader.

---

## Data Flow

```
┌──────────────────────────────────────────────────────────────────┐
│ Provider (Writer Side)                                           │
│                                                                  │
│   write(elem1) → write(elem2) → write(elem3) → write(root)     │
│   ─────────────────────────────────────────────▶                 │
│   (elements-first protocol)                                      │
└──────────────────────────────────────────────────────────────────┘
                              │
                              │ DDS delivery (ordered_access=true)
                              ▼
┌──────────────────────────────────────────────────────────────────┐
│ Consumer (Reader Side)                                           │
│                                                                  │
│   root_reader.take_async() yields root sample                    │
│       │                                                          │
│       ├── read_large_set(root, element_readers)                  │
│       │       └── QueryCondition(fk = root.key) → read() cache  │
│       │                                                          │
│       └── on_elements(root, assembled_elements)                  │
│                                                                  │
└──────────────────────────────────────────────────────────────────┘
```

---

## Related Documents

- [Large Set Services](large-set-services.md) — Tier 2 template using `read_large_set()`
- [Large List Services](large-list-services.md) — Tier 3 template using `read_large_list()`
- [Composite Services](composite-services.md) — Tier 4 types chaining assembly across levels
- [QoS Profiles](qos-profiles.md) — Element QoS profile (RELIABLE, KEEP_ALL)
