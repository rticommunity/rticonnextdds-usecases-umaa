# UMAAPy2 Architecture Documentation

> Clean-sheet architecture for the UMAA Python SDK v2, built on RTI Connext DDS with `rti.asyncio`.

---

## Documents

| Document | Description |
|---|---|
| [System Architecture](system-architecture.md) | Design principles, threading model, package layout, tiered service architecture, QoS overview, phase roadmap |
| [DDSContext](dds-context.md) | Singleton owning DomainParticipant, Publisher, Subscriber, QoS provider, and service registry |
| [BaseService](base-service.md) | Abstract base class for all 26 service templates — enforces `close()`, auto-registration |
| [QoS Profiles](qos-profiles.md) | 4 QoS profiles with `topic_filter` assignment rules |
| [Command Services](command-services.md) | Tier 0: `CommandProvider` / `CommandConsumer` — 4-slot command pattern, session state machine |
| [Report Services](report-services.md) | Tier 1: `ReportProvider` / `ReportConsumer` — single-topic reporting |
| [Large Set Services](large-set-services.md) | Tier 2: `LargeSetReportProvider` / `LargeSetReportConsumer` — root + set elements |
| [Large List Services](large-list-services.md) | Tier 3: `LargeListReportProvider` / `LargeListReportConsumer` — root + list elements |
| [Composite Services](composite-services.md) | Tier 4: One-off classes for deeply nested types (MissionPlan, Conditional, etc.) |
| [Multi-Topic Utilities](multi-topic-utilities.md) | `read_large_set()`, `read_large_list()`, elements-first protocol, QueryCondition scoping |
| [SpecializationReaderSet](specialization-reader-set.md) | User-selectable generalization/specialization dispatch |
| [Services Catalog](services-catalog.md) | Complete API surface — all ~250 services mapped to template classes |
| [Error Handling](error-handling.md) | 4-layer exception strategy, `CommandHookError` / `CommandFailedError` (D40) |
| [Utilities](utilities.md) | Timestamp, GUID, listener utilities |

---

## Architecture at a Glance

```
┌──────────────────────────────────────────────────────────────┐
│                      Application Code                        │
│   (create services, register callbacks, run event loop)      │
├──────────────────────────────────────────────────────────────┤
│                      UMAAPy2 SDK                             │
│  ┌───────────────────────────────────────────────────────┐   │
│  │                     DDSContext                         │   │
│  │  DomainParticipant · Publisher · Subscriber · QoS     │   │
│  │  Service Registry · Factory Methods                   │   │
│  ├───────────────────────────────────────────────────────┤   │
│  │              BaseService (ABC)                         │   │
│  │  close() · auto-registration · _ctx · _service_name   │   │
│  ├──────┬──────┬──────┬──────┬───────────────────────────┤   │
│  │ Tier0│ Tier1│ Tier2│ Tier3│ Tier 4                    │   │
│  │ Cmd  │Report│LgSet │LgList│ Composite                │   │
│  │ 4slot│1 slot│root+N│root+N│ explicit entities         │   │
│  ├──────┴──────┴──────┴──────┴───────────────────────────┤   │
│  │  Multi-Topic Utilities · SpecializationReaderSet      │   │
│  │  CommandProviderSession · CommandConsumerSession       │   │
│  │  Timestamp · GUID · Listeners                         │   │
│  └───────────────────────────────────────────────────────┘   │
├──────────────────────────────────────────────────────────────┤
│                  RTI Connext DDS + rti.asyncio                │
│  DomainParticipant · DataReader · DataWriter · QoS XML       │
│  reader.take_async() · rti.asyncio.run()                     │
└──────────────────────────────────────────────────────────────┘
```

---

## C++ SDK References

Two C++ reference implementations inform UMAAPy2's design:

| SDK | Organization | DDS Middleware | Key Files |
|---|---|---|---|
| **PSU/ARL C++ SDK** | Penn State Applied Research Lab | RTI Connext DDS | `CommandProviderBase.h`, `ServiceBase.h`, `CommandConsumerBase.h`, `ReportProvider.h` |
| **JHU/APL C++ SDK** | Johns Hopkins Applied Physics Lab | Eclipse Cyclone DDS | `BaseService.hpp`, `ControlServiceProvider.hpp`, `CommandSessionManager.hpp` |

UMAAPy2 uses the same DDS middleware as the PSU/ARL SDK (RTI Connext) but adopts Python's `asyncio` event loop instead of PSU/ARL's poll-based `cycle()` model.
