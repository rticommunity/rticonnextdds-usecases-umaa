# Testing with the USTM Tool

USTM (UMAA System Test Monitor) is an automated tool that monitors DDS
messages to aid in compliance checking to the UMAA standard. The
[UMAA SDK](https://www.auvsi.org/advocacy/advocacy-initiatives/unmanned-maritime-autonomy-architecture/)
demonstrates USTM compliance feedback via a localhost web GUI, but USTM is
also capable of producing JUnit XML outputs as part of a CI/CD pipeline.

> **Note:** Passing USTM alone does not indicate full UMAA compliance.

For SDK v1.0.0, USTM supports the following verification for all UMAA v6.0
services:

- Topic name validation
- Type name validation
- Strict type matching
- Range-boundary validation for all UMAA types with range boundaries defined
- Ability to set custom range-boundary values for stricter testing
- UMAA command state-transition flow control
- Support for LargeList and LargeSet validation
- Component-level grouping / validation of services

## 1. Load the Docker images

```bash
docker load -i my-image.tar
```

## 2. Run the Docker containers

To run only the USTM images, comment out the other services in the
`docker-compose.yml` and bring up the remaining stack:

```bash
docker compose up
```

## 3. Enable the USTM QoS profile

In `qos/umaa_qos_lib.xml`, uncomment the USTM topic-filter lines:

```xml
<datawriter_qos topic_filter="*" base_name="USTMQoS" />
<datareader_qos topic_filter="*" base_name="USTMQoS" />
```

Then restart the autopilot (or your component).

## 4. Configure USTM to match your component

Edit `config/ustm/usersystemconfiguration.yaml` in the SDK archive to match
your component's source GUID and domain ID. The autopilot start script
(`start_autopilot.sh`) uses the GUID `5f0294efd54642e1a3fe666ace569336` and
domain `0` by default — ensure these values match the USTM configuration.

## 5. Run the examples

Start the autopilot to exercise topic name, type name, and report
publishing validation:

```bash
./python/examples/autopilot/start_autopilot.sh
```

To also validate command state-transition flow control, run the
GlobalVector consumer in a separate terminal while the autopilot is running:

```bash
./python/examples/globalvector_consumer/start_globalvector_consumer.sh -v
```

The consumer sends a command and drives the full UMAA command lifecycle
(ack → status → execution-status → terminal), which USTM monitors for
flow-control compliance.

Currently the RTI UMAA Python SDK passes USTM validation for:

- **Topic name** — all topics match the UMAA naming convention
- **Type name** — all types match the UMAA type naming convention
- **Range-boundary validation** — field values conform to UMAA-defined ranges
- **Command flow control** — GlobalVector command lifecycle transitions are correct

## 6. Verify in the USTM web UI

Open the USTM web interface at `http://localhost:81/` and confirm
that your component's topics and data appear in the dashboard.
