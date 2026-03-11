# SpecializationReaderSet

> Lazily-created reader set for UMAA FK-based generalization/specialization dispatch.

---

## Overview

Some UMAA types use a **foreign-key-based specialization pattern** where a generalization type (e.g., `ObjectiveType`, `ConditionalType`) references a specialization living on a **separate DDS topic**. The generalization carries three fields:

| Generalization Field | Purpose |
|---------------------|---------|
| `specializationID` | NumericGUID FK → matches `@key specializationReferenceID` on the specialization topic |
| `specializationTimestamp` | Timestamp of the specialization sample |
| `specializationTopic` | **String naming the DDS topic** for this particular specialization |

The specialization type (e.g., `RouteObjectiveType`, `SpeedConditionalType`) lives on its own DDS topic and has:

| Specialization Field | Purpose |
|---------------------|---------|
| `@key specializationReferenceID` | NumericGUID key — matches the generalization's `specializationID` |
| `specializationReferenceTimestamp` | Echoed timestamp |
| (type-specific fields) | The actual specialization data |

> **This is NOT IDL inheritance.** The generalization and specialization are completely separate DDS types on separate DDS topics, joined by FK. The `specializationTopic` string tells the consumer which topic to query.

---

## Specialization Examples

### Objective Specializations (~14 types)

`ObjectiveType.specializationTopic` can name any of:

- `RouteObjectiveType` — has `waypointsListMetadata` (large list of WaypointType)
- `CircleObjectiveType`
- `RacetrackObjectiveType`
- `StationKeepObjectiveType`
- `TransitObjectiveType`
- `AreaSearchObjectiveType`
- `TrackObjectiveType`
- ... and more

### Conditional Specializations (~19 types)

`ConditionalType.specializationTopic` can name any of:

- `SpeedConditionalType`
- `LogicalANDConditionalType`
- `LogicalORConditionalType`
- `TimeConditionalType`
- `DepthConditionalType`
- `GeographicConditionalType`
- ... and more

---

## SpecializationType Registry Entry

Each known specialization is described by a registry entry:

```python
@dataclass
class SpecializationType:
    """Describes a specialization type and its DDS topic."""
    topic_name: str     # DDS topic name (matches specializationTopic string)
    data_type: type     # IDL-generated specialization type class
    has_children: bool = False  # True if specialization owns collections (e.g., RouteObjectiveType)
```

Specialization registries are module-level constants:

```python
OBJECTIVE_SPECIALIZATIONS: dict[str, SpecializationType] = {
    "RouteObjectiveType": SpecializationType(
        topic_name="RouteObjectiveType",
        data_type=RouteObjectiveType,
        has_children=True,  # owns waypointsListMetadata
    ),
    "CircleObjectiveType": SpecializationType(
        topic_name="CircleObjectiveType",
        data_type=CircleObjectiveType,
    ),
    "RacetrackObjectiveType": SpecializationType(
        topic_name="RacetrackObjectiveType",
        data_type=RacetrackObjectiveType,
    ),
    # ... all other objective specializations
}
```

---

## Class Definition

```python
class SpecializationReaderSet:
    """
    Lazily-created reader set for FK-based specialization dispatch.

    Readers are created on first access for each specialization topic.
    Uses QueryCondition with &hex() to filter by specializationReferenceID.
    """

    def __init__(
        self,
        ctx: DDSContext,
        specializations: dict[str, SpecializationType],
    ):
        """
        Args:
            ctx: DDSContext for reader creation.
            specializations: Registry of known specialization types,
                keyed by topic name (matching specializationTopic string).
        """
        self._ctx = ctx
        self._specializations = specializations
        self._readers: dict[str, dds.DataReader] = {}
```

### Lazy Reader Creation

Readers are created the first time a specialization topic is queried:

```python
    def _get_or_create_reader(self, topic_name: str) -> dds.DataReader:
        """Get existing reader or create one for this specialization topic."""
        if topic_name in self._readers:
            return self._readers[topic_name]

        if topic_name not in self._specializations:
            raise ValueError(f"Unknown specialization topic: {topic_name}")

        spec = self._specializations[topic_name]
        reader = self._ctx.create_reader(
            spec.data_type,
            spec.topic_name,
        )
        self._readers[topic_name] = reader
        return reader
```

---

## Reading a Specialization: `read_one()`

Given a generalization sample's `specializationTopic` and `specializationID`, read the matching specialization sample:

```python
    async def read_one(
        self,
        specialization_topic: str,
        specialization_id: bytes,  # NumericGUID
        timeout_ms: int = 5000,
    ) -> Optional[Any]:
        """
        Read the specialization sample matching the given ID.

        Args:
            specialization_topic: Value of generalization.specializationTopic
            specialization_id: Value of generalization.specializationID (NumericGUID)
            timeout_ms: How long to wait for the sample.

        Returns:
            The specialization data, or None if not found within timeout.
        """
        reader = self._get_or_create_reader(specialization_topic)
        hex_id = guid_to_hex(specialization_id)

        # QueryCondition to find the specific specialization by FK
        condition = dds.QueryCondition(
            dds.Query(reader, f"specializationReferenceID = &hex({hex_id})"),
            dds.DataState.any_data,
        )

        # Poll with async retry — no WaitSet, consistent with take_async pattern (D16)
        deadline = asyncio.get_event_loop().time() + timeout_ms / 1000
        while asyncio.get_event_loop().time() < deadline:
            samples = reader.select().condition(condition).read_data()
            if samples:
                return samples[0]
            await asyncio.sleep(0.05)  # cooperative yield between retries

        return None
```

---

## Usage in Composite Services

### With ObjectiveType

```python
# In MissionPlanReportConsumer._on_root():
for obj in task.objectives:
    spec_topic = obj.specializationTopic
    spec_id = obj.specializationID

    if spec_topic:
        obj.specialization = await self._spec_readers.read_one(
            spec_topic, spec_id
        )

        # If the specialization owns collections (e.g., RouteObjectiveType.waypointsListMetadata),
        # chain a read_large_list() call:
        spec_type = self._spec_readers._specializations.get(spec_topic)
        if spec_type and spec_type.has_children and obj.specialization:
            if spec_topic == "RouteObjectiveType":
                obj.specialization.waypoints = await read_large_list(
                    route_waypoints_reader,
                    metadata=obj.specialization,
                    metadata_field="waypointsListMetadata",
                )
```

### With ConditionalType

```python
# ConditionalType also uses the same specializationID/Topic pattern
conditional_spec_readers = SpecializationReaderSet(
    ctx, CONDITIONAL_SPECIALIZATIONS
)

# Read a conditional's specialization
cond_data = await conditional_spec_readers.read_one(
    conditional.specializationTopic,
    conditional.specializationID,
)
```

---

## Close

```python
    def close(self) -> None:
        """Close all lazily-created readers."""
        for reader in self._readers.values():
            reader.close()
        self._readers.clear()
```

---

## Design Constraints

| Constraint | Rationale |
|---|---|
| **FK-based, not inheritance** | UMAA specializations are separate DDS types on separate topics, joined by `specializationID` ↔ `@key specializationReferenceID`. No IDL inheritance involved. |
| **Lazy reader creation** | Not all specialization topics may be used in a given session. Readers are created on first access to avoid unnecessary DDS overhead. |
| **`specializationTopic` drives dispatch** | The string field on the generalization names the DDS topic. This is the primary dispatch key — no `isinstance` or type discriminator needed. |
| **QueryCondition with `&hex()`** | `specializationReferenceID` is NumericGUID (`octet[16]`), requiring `&hex()` in filter expressions. |
| **Registry is static** | Specialization registries are compile-time constants derived from the IDL. No runtime discovery of new specialization topics. |
| **Some specializations own collections** | E.g., `RouteObjectiveType` has `waypointsListMetadata` — the consumer must chain `read_large_list()` after resolving the specialization. |

---

## Related Documents

- [Composite Services](composite-services.md) — Multi-level assembly using SpecializationReaderSet
- [Multi-Topic Utilities](multi-topic-utilities.md) — `read_large_set()`, `read_large_list()` for specialization children
- [Implementation Gaps §6](implementation-gaps.md) — Verified FK relationships and specialization patterns

---
