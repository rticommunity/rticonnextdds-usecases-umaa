# Autopilot Example

Python implementation of the UMAA USV Autopilot component, demonstrating:

- **4 command providers**: GlobalVector (functional), GlobalHover / PrimitiveDriver / ActiveConstraints (reject all — unimplemented)
- **4 command consumers**: ConditionalAdd/Delete, MissionPlanConstraintAdd/Delete
- **4 report providers**: Health (periodic), Log (event-driven), UVPlatformSpecs, UVPlatformCapabilities (publish once)
- **6 report consumers**: GlobalPose, Speed, Velocity, WaterCurrent, Wind, Conditional (cache latest)

All 18 services use pre-wired classes from the `rtiumaapy.services` library.

## Prerequisites

```bash
export RTI_LICENSE_FILE=/path/to/rti_license.dat
export UMAA_QOS_FILE=/path/to/qos/umaa_qos_lib.xml
```

## Run the Autopilot

```bash
./python/examples/autopilot/start_autopilot.sh
```

The start script creates a virtual environment (if needed), installs
dependencies, resolves the RTI license file, sets the source GUID, and
launches the autopilot.
Extra flags are forwarded to the underlying Python entry point:

```bash
./python/examples/autopilot/start_autopilot.sh --domain-id 1 -v
```

Options:

| Flag | Default | Description |
|------|---------|-------------|
| `--domain-id` | `0` | DDS domain ID |
| `--source-guid` | random | Hex GUID (32 chars or UUID with dashes) for this component |
| `--health-period` | `1.0` | Seconds between health reports |
| `-v` | off | Enable DEBUG logging |

## Run the GlobalVector Consumer

In a separate terminal, send a GlobalVector command and watch lifecycle events:

```bash
./python/examples/globalvector_consumer/start_globalvector_consumer.sh -v
```

See the [GlobalVector Consumer README](../globalvector_consumer/README.md) for
full options. The consumer discovers the autopilot, sends a single
`GlobalVectorCommand`, logs ack/status/execution-status/terminal callbacks,
then exits.

## Architecture

```
┌────────────────────────────────────────────────────┐
│ AutopilotComponent                                 │
│                                                    │
│  Command Providers          Report Providers       │
│  ├─ GlobalVector (active)   ├─ Health (periodic)   │
│  ├─ GlobalHover  (reject)   ├─ Log (on events)     │
│  ├─ PrimitiveDriver (reject)├─ UVPlatformSpecs     │
│  └─ ActiveConstraints       └─ UVPlatformCaps      │
│                                                    │
│  Command Consumers          Report Consumers       │
│  ├─ ConditionalAdd          ├─ GlobalPose          │
│  ├─ ConditionalDelete       ├─ Speed               │
│  ├─ ConstraintAdd           ├─ Velocity            │
│  └─ ConstraintDelete        ├─ WaterCurrent        │
│                             ├─ Wind                │
│                             └─ Conditional         │
└────────────────────────────────────────────────────┘
```
