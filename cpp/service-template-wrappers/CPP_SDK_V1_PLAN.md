# C++ UMAA SDK v1 Plan

> **Goal**: Mirror the Python SDK's architecture and feature set, incorporating proven
> patterns from the PSU/ARL and JHU/APL reference architectures, using the existing
> C++ AsyncWaitSet service-template-wrappers as the DDS integration base.  The
> xml-app-framework variant will be removed once this SDK is stable.

---

## 0. Reference Architectures (New Input)

Three existing C++ codebases inform this design:

| Source | Location | Key Contributions |
|--------|----------|-------------------|
| **RTI service-template-wrappers** | `cpp/service-template-wrappers/` | AsyncWaitSet event dispatch, programmatic QoS via `datawriter_qos_w_topic_name`, working CMake integration |
| **PSU/ARL SDK Common** | `cpp/reference_architectures/umaa-sdk-common-v1.0.0-DistroA/` | `CommandStateMachine` (ICD-correct transitions), `CommandProviderSession` (dispose-on-destructor), `CommandProviderBase` with `IncomingCommandBehavior` enum, `ReportProvider`/`ReportConsumer` templates |
| **JHU/APL Autopilot** | `cpp/reference_architectures/umaa-usv-autopilot-v1.0.0-DistroA/` | `BaseComponent` → `registerService()` pattern, `Runner` lifecycle (`onInit`→`onRun`→`onShutdown`), `ControlServiceProvider<Cmd,Sts,Ack,Exec>` template, Observer pattern, full 18-service autopilot reference |

### What We Adopt from Each

| Pattern | Source | How We Use It |
|---------|--------|---------------|
| `CommandStateMachine` transition table | PSU | Adopt logic directly — proven ICD state map (ISSUED→COMMANDED→EXECUTING→COMPLETED/FAILED/CANCELED) |
| `CommandProviderSession` dispose-on-destructor | PSU | Destructor disposes ack + status + exec_status — guarantees cleanup even on exceptions |
| `IncomingCommandBehavior` enum | PSU | Support CANCEL_EXISTING (default), QUEUE_INCOMING, REJECT_INCOMING policies |
| `BaseComponent` + `registerService()` | JHU | Component owns service vector, auto-lifecycle management |
| `Runner` lifecycle (`onInit`→`onRun`→`onShutdown`) | JHU | Maps to our `start()`→`run_until_shutdown()`→`shutdown()` |
| AsyncWaitSet event-driven dispatch | RTI wrappers | Better scalability than PSU's polling `cycle()` or JHU's thread-per-service |
| Direct DDS (no IO abstraction) | Design decision | Neither PSU's `ReaderBase/SenderBase` nor JHU's `Messenger` — we target RTI only, reducing indirection |
| `AssignerQoS` via `datawriter_qos_w_topic_name` | RTI wrappers | Keep existing proven QoS approach |

### What We Explicitly Do NOT Adopt

| Pattern | Source | Reason |
|---------|--------|--------|
| Polling `cycle()` model | PSU | AsyncWaitSet is more efficient and scalable |
| Thread-per-service | JHU | Over-allocates OS threads; AsyncWaitSet threadpool is lighter |
| IO abstraction layer (`ReaderBase`/`SenderBase`) | PSU | We only target RTI Connext — no need for vendor abstraction |
| `Messenger` | JHU | Same — unnecessary indirection for single-vendor SDK |
| Boost dependency | JHU | Keep SDK dependency-free (std::optional from C++17, or polyfill) |
| log4cpp | JHU | Use RTI's built-in logging + simple stderr logger |

---

## 1. Architecture Comparison

| Concept | Python SDK | RTI Wrappers (current) | PSU/ARL | JHU/APL | **C++ SDK v1 (target)** |
|---------|-----------|----------------------|---------|---------|------------------------|
| DDS infra owner | `DDSContext` singleton | `DDSUMAAParticipant` (shared_ptr) | N/A (expects external) | `DdsApplication` | `DDSContext` singleton (RAII) |
| Base service | `BaseService` (`_run()`, `close()`) | None | `ServiceBase` (`cycle()`) | `BaseService` (threaded) | `BaseService` (virtual `start()`, `close()`) |
| Component | `BaseComponent` | None | None | `BaseComponent` (registry) | `BaseComponent` (registry, lifecycle) |
| Report provider | `ReportProvider` | `DDSUMAAStatusProvider<T>` | `ReportProvider<T>` (sender) | `StatusServiceProvider<T>` | `ReportProvider<T>` (writer + dispose) |
| Report consumer | `ReportConsumer` | `DDSUMAAStatusConsumer<T>` | `ReportConsumer<T>` (polling) | `StatusServiceConsumer<T>` (threaded) | `ReportConsumer<T>` (AsyncWaitSet + hook) |
| Command provider | `CommandProvider` + session | `DDSUMAAControlProvider<>` (flat) | `CommandProviderBase<>` + session | `ControlServiceProvider<>` | `CommandProvider<>` + `CommandProviderSession` |
| Command state machine | Python enum + transitions | None | `CommandStateMachine` ✓ | `UmaaState` util | `CommandStateMachine` (adopted from PSU) |
| Command consumer | `CommandConsumer` | `DDSUMAAControlConsumer<>` | `CommandConsumerBase<>` | `ControlServiceConsumer<>` | `CommandConsumer<>` (send + hooks) |
| Incoming cmd policy | N/A (one-at-a-time) | N/A | `IncomingCommandBehavior` enum | Cancel existing | `IncomingCommandBehavior` enum (from PSU) |
| QoS | `AssignerQoS` topic_filter | `datawriter_qos_w_topic_name` | External config | XML profile | `datawriter_qos_w_topic_name` |
| Event model | `asyncio` + `take_async` | AsyncWaitSet (1 per service) | Polling `cycle()` | Thread + waitset | **Single shared AsyncWaitSet** |
| Shutdown | cancel tasks → close → DDS | None | `shutDown()` per service | `onShutdown()` cascade | stop AWS → close (reverse) → DDS |

---

## 2. Proposed Directory Layout

```
cpp/sdk/                           # NEW — replaces service-template-wrappers
├── CMakeLists.txt
├── include/
│   └── umaa/
│       ├── context.hpp            # DDSContext (participant, pub/sub, QoS, registry)
│       ├── base_service.hpp       # BaseService ABC
│       ├── base_component.hpp     # BaseComponent ABC
│       ├── report_provider.hpp    # ReportProvider<T>
│       ├── report_consumer.hpp    # ReportConsumer<T>
│       ├── command_provider.hpp   # CommandProvider<Cmd,Ack,Sts,Exec>
│       ├── command_session.hpp    # CommandProviderSession (state machine per active command)
│       ├── command_consumer.hpp   # CommandConsumer<Cmd,Ack,Sts,Exec>
│       ├── guid_util.hpp          # GUIDUtil helper
│       ├── timestamp.hpp          # set_timestamp() helper
│       └── services/              # Pre-wired service typedefs (generated)
│           ├── mo.hpp
│           ├── sa.hpp
│           ├── so.hpp
│           ├── eo.hpp
│           ├── mm.hpp
│           └── sem.hpp
├── src/
│   ├── context.cpp                # DDSContext implementation
│   └── guid_util.cpp              # GUID generation
├── examples/
│   └── autopilot/
│       ├── autopilot_component.hpp
│       ├── autopilot_component.cpp
│       └── main.cpp
└── tools/
    └── generate_services.py       # Generates services/*.hpp from IDL catalog
```

---

## 3. Core Classes

### 3.1 `DDSContext` (mirrors Python `DDSContext`)

```cpp
class DDSContext {
public:
    struct Config {
        int domain_id = 0;
        std::string qos_file;          // defaults to ../../qos/umaa_qos_lib.xml
        std::string source_guid;       // optional — auto-generated if empty
    };

    explicit DDSContext(const Config& cfg);
    ~DDSContext();                     // calls shutdown() if not already

    // Singleton access
    static DDSContext& current();

    // Entity factories (QoS resolved via topic_filter)
    template<typename T>
    dds::pub::DataWriter<T> create_writer(const std::string& topic_name);

    template<typename T>
    dds::sub::DataReader<T> create_reader(const std::string& topic_name);

    // Service registry
    void register_service(const std::string& name, BaseService* svc);

    // Lifecycle — blocks until SIGINT/SIGTERM
    void run_until_shutdown();
    void shutdown();

    // Accessors
    dds::domain::DomainParticipant& participant();
    const UMAA::Common::IdentifierType& source_id() const;

private:
    // ... participant, publisher, subscriber, qos_provider, registry, async_waitset
};
```

### 3.2 `BaseService`

```cpp
class BaseService {
public:
    BaseService(DDSContext& ctx, const std::string& service_name);
    virtual ~BaseService() = default;

    virtual void start() {}                   // called once before run loop
    virtual void close() = 0;                 // cleanup (dispose, etc.)

    const std::string& service_name() const;

protected:
    DDSContext& _ctx;
};
```

### 3.3 `BaseComponent`

```cpp
class BaseComponent : public BaseService {
public:
    BaseComponent(DDSContext& ctx, const std::string& name);

    virtual void on_start() {}                // one-shot init
    virtual void run_iteration() {}           // called per loop tick
    void close() override {}                  // override for cleanup
};
```

### 3.4 `ReportProvider<T>`

```cpp
template<typename T>
class ReportProvider : public BaseService {
public:
    ReportProvider(DDSContext& ctx,
                   const std::string& service_name,
                   const std::string& topic_name);

    void write(const T& sample);
    void close() override;                    // disposes keyed instance

    dds::pub::DataWriter<T>& writer();

private:
    dds::pub::DataWriter<T> _writer;
    dds::core::InstanceHandle _handle;
};
```

### 3.5 `ReportConsumer<T>`

```cpp
template<typename T>
class ReportConsumer : public BaseService {
public:
    using Callback = std::function<void(const T&)>;

    ReportConsumer(DDSContext& ctx,
                   const std::string& service_name,
                   const std::string& topic_name,
                   Callback on_report = nullptr);

    // Subclass-override hook (alternative to callback)
    virtual void on_report(const T& sample) {}

    void close() override;
    dds::sub::DataReader<T>& reader();

private:
    dds::sub::DataReader<T> _reader;
    Callback _callback;
    // AsyncWaitSet condition attached by DDSContext
};
```

### 3.6 `CommandProvider<Cmd, Ack, Sts, Exec>` (combines RTI AsyncWaitSet + PSU session logic)

```cpp
// Adopted from PSU — policy for handling a new command while one is active
enum class IncomingCommandBehavior {
    CANCEL_EXISTING,      // Cancel active command, start new (default)
    QUEUE_INCOMING,       // Queue new, process when current finishes
    REJECT_INCOMING,      // Fail the new command immediately
    ACCEPT_CONCURRENT     // Allow multiple active sessions
};

template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandProvider : public BaseService {
public:
    CommandProvider(DDSContext& ctx,
                   const std::string& service_name,
                   const std::string& cmd_topic,
                   const std::string& ack_topic,
                   const std::string& sts_topic,
                   const std::string& exec_topic,
                   IncomingCommandBehavior behavior = IncomingCommandBehavior::CANCEL_EXISTING);

    // Subclass hooks (called from AsyncWaitSet thread)
    virtual void on_command(CommandProviderSession<Cmd,Ack,Sts,Exec>& session, const Cmd& cmd) = 0;
    virtual void on_terminal(CommandProviderSession<Cmd,Ack,Sts,Exec>& session) {}

    void close() override;

    // Policy control
    void set_behavior(IncomingCommandBehavior b);
    IncomingCommandBehavior behavior() const;

    // Active session access
    std::optional<std::reference_wrapper<CommandProviderSession<Cmd,Ack,Sts,Exec>>> active_session();

    // Writers for advanced use
    dds::pub::DataWriter<Ack>& ack_writer();
    dds::pub::DataWriter<Sts>& status_writer();
    dds::pub::DataWriter<Exec>& exec_writer();

private:
    // reader, writers, active sessions map (keyed by session GUID), AsyncWaitSet condition
    std::map<NumericGuid, std::unique_ptr<CommandProviderSession<Cmd,Ack,Sts,Exec>>> active_sessions_;
    std::vector<std::unique_ptr<CommandProviderSession<Cmd,Ack,Sts,Exec>>> queued_commands_;
    IncomingCommandBehavior behavior_;
};
```

### 3.7 `CommandStateMachine` (adopted from PSU/ARL)

The PSU reference architecture provides a proven, ICD-correct state machine.
We adopt its transition logic directly:

```
Valid Transitions (from PSU CommandStateMachine.h):
  ISSUED    → ISSUED    : UPDATED
  ISSUED    → COMMANDED : SUCCEEDED
  ISSUED    → FAILED    : VALIDATION_FAILED, RESOURCE_FAILED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
  ISSUED    → CANCELED  : CANCELED
  COMMANDED → ISSUED    : UPDATED
  COMMANDED → EXECUTING : SUCCEEDED
  COMMANDED → FAILED    : RESOURCE_REJECTED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
  COMMANDED → CANCELED  : CANCELED
  EXECUTING → ISSUED    : UPDATED
  EXECUTING → COMPLETED : SUCCEEDED
  EXECUTING → FAILED    : OBJECTIVE_FAILED, RESOURCE_FAILED, INTERRUPTED, TIMEOUT, SERVICE_FAILED
  EXECUTING → CANCELED  : CANCELED
```

```cpp
class CommandStateMachine {
public:
    bool advance_state();                                     // ISSUED→COMMANDED→EXECUTING→COMPLETED
    bool update();                                            // return to ISSUED (command update)
    bool cancel();                                           // → CANCELED
    bool fail(CommandStatusReasonEnumType reason);           // → FAILED (validated per-state)
    void reset();

    CommandStatusEnumType state() const;
    CommandStatusReasonEnumType reason() const;
    bool is_final() const;
    static bool is_state_final(CommandStatusEnumType state);
};
```

### 3.8 `CommandProviderSession<Cmd, Ack, Sts, Exec>` (inspired by PSU `CommandProviderSession`)

```cpp
template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandProviderSession {
public:
    CommandProviderSession(const NumericGuid& source, const Cmd& command,
                   dds::pub::DataWriter<Ack>& ack_writer,
                   dds::pub::DataWriter<Sts>& status_writer,
                   dds::pub::DataWriter<Exec>& exec_writer);

    // Non-copyable, non-movable (same as PSU)
    CommandProviderSession(const CommandProviderSession&) = delete;
    CommandProviderSession& operator=(const CommandProviderSession&) = delete;

    // Destructor disposes ack + status + exec_status (PSU pattern)
    ~CommandProviderSession();

    // State transitions (delegates to CommandStateMachine)
    bool advance_state();
    bool update(const Cmd& new_command);
    bool cancel();
    bool fail(CommandStatusReasonEnumType reason);

    // Publishing
    void send_ack();
    void send_status(const std::string& log_message = "");
    void send_exec_status(const Exec& exec);

    // Accessors
    const Cmd& command() const;
    CommandStatusEnumType state() const;
    CommandStatusReasonEnumType reason() const;
    bool is_final() const;
    const NumericGuid& session_id() const;

private:
    NumericGuid source_;
    NumericGuid session_id_;
    CommandStateMachine state_machine_;
    Cmd command_;
    dds::pub::DataWriter<Ack>& ack_writer_;
    dds::pub::DataWriter<Sts>& status_writer_;
    dds::pub::DataWriter<Exec>& exec_writer_;
    bool has_published_exec_ = false;
};
```

### 3.9 `CommandConsumer<Cmd, Ack, Sts, Exec>`

```cpp
template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandConsumer : public BaseService {
public:
    CommandConsumer(DDSContext& ctx,
                    const std::string& service_name,
                    const std::string& cmd_topic,
                    const std::string& ack_topic,
                    const std::string& sts_topic,
                    const std::string& exec_topic,
                    const UMAA::Common::IdentifierType& source_id);

    // Send a command
    void send_command(const Cmd& cmd);

    // Subclass hooks
    virtual void on_ack(const Ack& ack) {}
    virtual void on_status(const Sts& status) {}
    virtual void on_exec_status(const Exec& exec) {}

    void close() override;
};
```

---

## 4. Pre-wired Service Generation

A Python script (`tools/generate_services.py`) will produce `services/*.hpp` files
using the same IDL catalog as the Python generator.  Each file provides typedefs:

```cpp
// services/mo.hpp (example)
#include "umaa/command_provider.hpp"
#include "umaa/command_consumer.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandType.hpp"
// ...

using GlobalVectorControlProvider = CommandProvider<
    GlobalVectorCommandType,
    GlobalVectorCommandAckReportType,
    GlobalVectorCommandStatusType,
    GlobalVectorExecutionStatusReportType>;

using GlobalVectorControlConsumer = CommandConsumer<
    GlobalVectorCommandType,
    GlobalVectorCommandAckReportType,
    GlobalVectorCommandStatusType,
    GlobalVectorExecutionStatusReportType>;
```

Topic names will come from a constexpr string map (generated alongside).

---

## 5. Lifecycle & Shutdown Ordering

```
DDSContext::run_until_shutdown()
│
├─ for each service: service->start()
├─ AsyncWaitSet.start()
├─ Block on signal (SIGINT/SIGTERM)
│
└─ shutdown():
     ├─ AsyncWaitSet.stop()
     ├─ for each service (reverse): service->close()
     ├─ participant.close_contained_entities()
     └─ participant.close()
```

---

## 6. Key Design Decisions

| Decision | Rationale | Reference |
|----------|-----------|-----------|
| Single shared `AsyncWaitSet` in `DDSContext` | Avoids 1 threadpool per service (current RTI wrappers) and avoids thread-per-service (JHU). Better scalability. | RTI wrappers (improved) |
| `CommandStateMachine` adopted from PSU | Proven ICD-correct transition table — no need to reinvent | PSU `CommandStateMachine.h` |
| `CommandProviderSession` dispose-on-destructor | Guarantees ack/status/exec disposal even on exceptions; matches UMAA §5.2.1.3 | PSU `CommandProviderSession` |
| `IncomingCommandBehavior` policy enum | Supports CANCEL_EXISTING, QUEUE, REJECT, CONCURRENT without provider subclass changes | PSU `CommandProviderBase` |
| `BaseComponent` + `registerService()` | Validated pattern from JHU — component owns service lifecycle vector | JHU `BaseComponent` |
| Direct DDS (no IO abstraction) | Single-vendor (RTI) target; PSU's `ReaderBase`/`SenderBase` and JHU's `Messenger` add unnecessary indirection | Design decision |
| No boost dependency | PSU SDK is lightweight (no boost); JHU uses boost but we prefer stdlib-only | PSU approach |
| RAII `DDSContext` singleton | Mirrors Python's `DDSContext` — single owner, deterministic shutdown | Python SDK |
| Virtual hooks + optional callbacks | Consistent with Python's subclass-override pattern; `std::function` callbacks for simple cases | Python SDK + JHU Observer |
| Topic name constants from generated code | Avoids hand-maintained string literals; both PSU and current wrappers suffer from this | All (improvement) |
| Dispose on close for keyed types | All three references do this — it's ICD-required (§5.2.1.3) | PSU, Python, JHU |
| C++17 minimum | PSU uses `std::optional`, `if constexpr`, structured bindings; matches modern Connext 7.x requirements | PSU style |

---

## 7. Migration from Current C++ Code

| Current File | Fate |
|-------------|------|
| `dds_umaa_participant.hpp` | Absorbed into `context.hpp` (DDSContext) |
| `dds_umaa_service.hpp` | Split into `report_provider.hpp`, `report_consumer.hpp`, `command_provider.hpp`, `command_consumer.hpp` |
| `umaa_services.hpp` | Replaced by generated `services/*.hpp` |
| `application.hpp` | Absorbed into `context.hpp` (signal handling, arg parsing) |
| `autopilot.cxx` | Migrates to `examples/autopilot/` with `BaseComponent` subclass |
| `cpp/xml-app-framework/` | **Removed** after SDK v1 is validated |
| `cpp/reference_architectures/` | **Kept as reference** — not part of build, used for validation |

### Code Adopted from References

| Component | Source File | Integration Method |
|-----------|------------|-------------------|
| `CommandStateMachine` | PSU `include/umaa/CommandStateMachine.h` | Rewrite (clean-room) using same transition table; avoid `arlcore` namespace |
| Session dispose pattern | PSU `include/umaa/services/base/CommandProviderSession.h` | Adopt destructor-dispose pattern in our `CommandProviderSession` |
| `IncomingCommandBehavior` | PSU `include/umaa/services/base/CommandProviderBase.h` | Adopt enum + handling logic |
| `BaseComponent` lifecycle | JHU `framework/component/BaseComponent.hpp` | Adopt registerService + lifecycle pattern |
| Timestamp helper | PSU `include/umaa/UmaaUtils.h` | Port `getTimestamp()` to our `timestamp.hpp` |
| Content filter | PSU `include/umaa/DestinationReaderFilter.h` | Adopt for command provider destination filtering |

---

## 8. Implementation Phases

### Phase 1: Core Infrastructure (~3 days)
- [ ] `DDSContext` (participant, QoS, entity factories, signal handling, `run_until_shutdown()`)
- [ ] `BaseService` and `BaseComponent` (lifecycle from JHU Runner pattern)
- [ ] `ReportProvider<T>` and `ReportConsumer<T>` (PSU template as structural reference)
- [ ] `timestamp.hpp` (port PSU `getTimestamp()`)
- [ ] Verify builds with existing CMake structure (C++17 target)

### Phase 2: Command State Machine (~3-4 days, reduced from ~5-7)
- [ ] `CommandStateMachine` (clean-room from PSU transition table — ICD-proven)
- [ ] `CommandProviderSession<Cmd,Ack,Sts,Exec>` with dispose-on-destructor
- [ ] `CommandProvider<>` with `IncomingCommandBehavior`, session map, async dispatch
- [ ] `CommandConsumer<>` with writer, reader hooks
- [ ] `DestinationReaderFilter` (port from PSU for per-source command filtering)
- [ ] Unit tests (state machine transitions — no DDS required)

### Phase 3: Code Generation & Pre-wired Services (~2 days)
- [ ] `tools/generate_services.py` for C++ (reads IDL catalog, emits `services/*.hpp`)
- [ ] Generate all 7 domains (CO, EO, MM, MO, SA, SEM, SO)
- [ ] Verify topic name and type alignment with Python SDK

### Phase 4: Autopilot Example Migration (~2 days)
- [ ] `AutopilotComponent` : `BaseComponent` with same 18 services as Python
- [ ] CLI entry point (`main.cpp`) mirroring `run_autopilot.py`
- [ ] Validate interop: Python autopilot ↔ C++ autopilot over DDS (use JHU autopilot as crosscheck)

### Phase 5: Cleanup (~1 day)
- [ ] Remove `cpp/xml-app-framework/`
- [ ] Rename `cpp/sdk/` → `cpp/` (or keep as sub-project)
- [ ] Update top-level CMakeLists.txt
- [ ] Update README

---

## 9. Build Requirements

- **CMake ≥ 3.14** (FetchContent for dependencies)
- **C++17** (required for `std::optional`, `if constexpr`, structured bindings — matches PSU reference)
- **RTI Connext DDS 7.5+** (AsyncWaitSet, QosProvider extensions, Modern C++ API)
- Links against existing `umaa_types` target (IDL-generated types)
- **No external dependencies** (no boost, no log4cpp — stdlib + RTI only)

---

## 10. Testing Strategy

| Layer | Description | Reference |
|-------|-------------|-----------|
| Compile tests | Template instantiation for every generated service typedef | — |
| Unit tests | `CommandStateMachine` state transitions (no DDS) | PSU has these already |
| Integration | Create `DDSContext`, instantiate services, write/read one sample | — |
| Interop | Python provider ↔ C++ consumer and vice versa | JHU autopilot as comparison |

---

## 11. Python SDK Feature Parity Checklist

| Feature | Python | C++ v1 Target |
|---------|--------|---------------|
| Report provider (write + dispose) | ✅ | ✅ |
| Report consumer (async read + hook) | ✅ | ✅ |
| Command provider (state machine sessions) | ✅ | ✅ (PSU state machine) |
| Command consumer (send + hooks) | ✅ | ✅ |
| Incoming command policy (cancel/queue/reject) | ❌ (one-at-a-time only) | ✅ (from PSU) |
| Pre-wired services (all domains) | ✅ (auto-generated) | ✅ (auto-generated) |
| QoS via AssignerQoS topic_filter | ✅ | ✅ |
| Source GUID auto-generation | ✅ | ✅ |
| Graceful shutdown (dispose, signal) | ✅ | ✅ |
| Component abstraction | ✅ | ✅ |
| Validation / field ranges | ✅ | ❌ (deferred to v2) |
| Content-filtered readers (per-source) | ✅ | ✅ (PSU has `DestinationReaderFilter`) |
| Timestamp helper | ✅ | ✅ (PSU `getTimestamp()`) |
| Observer/notification pattern | ❌ | ✅ (from PSU `Subject<T>`) |

---

## 12. Open Questions (Reduced)

1. ~~**C++ standard**~~ → **Resolved: C++17** (PSU uses it, matches Connext 7.x)
2. **Header-only vs compiled lib**: Templates are header-only; `DDSContext` + `CommandStateMachine` compiled into `libumaa_sdk.a`
3. **Shared AsyncWaitSet threading model**: Use configurable thread pool size (CLI `--threads`, default 4)?
4. ~~**Service name registry**~~ → **Yes** (both PSU and JHU use it for logging/debug)

---

## 13. Risk Assessment (Updated with Reference Code)

| Phase | Original Risk | Updated Risk | Reason |
|-------|--------------|--------------|--------|
| Phase 1: Core Infrastructure | Low-Medium | **Low** | Direct port from RTI wrappers + JHU `BaseComponent` |
| Phase 2: Command State Machine | Medium-High | **Medium-Low** | PSU `CommandStateMachine` + `CommandProviderSession` exist and are tested |
| Phase 3: Code Generation | Low | **Low** | Same approach as Python generator |
| Phase 4: Autopilot Example | Low | **Low** | JHU autopilot is a direct reference for wiring |
| Phase 5: Cleanup | Trivial | **Trivial** | File deletion |

**Overall estimate: ~1-2 weeks** (down from 2-3) due to PSU state machine being adoptable.
