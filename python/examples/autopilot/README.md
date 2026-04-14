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
| `--source-guid` | random | 32-char hex GUID for this component |
| `--health-period` | `1.0` | Seconds between health reports |
| `-v` | off | Enable DEBUG logging |

## Run the Test Peer

In a separate terminal, send a GlobalVector command and watch health reports:

```bash
cd python/
python -m examples.autopilot.test_peer \
    --target-guid 01020304050607080910111213141516 \
    --direction 90.0 \
    --speed 3.0 \
    -v
```

The test peer:
1. Subscribes to health reports (prints every sample).
2. Waits 2 seconds for DDS discovery.
3. Sends a single GlobalVector command to the autopilot.
4. Logs ack, status, and execution-status updates.
5. Runs until Ctrl-C.

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
