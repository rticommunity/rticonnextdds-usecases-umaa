# GlobalVector Consumer Example

Sends a single `GlobalVectorCommand` to a UMAA autopilot provider, then logs
every lifecycle event (ack, status, execution-status, terminal) until the
command completes or times out.

Uses `GlobalVectorControlConsumer` from the `rtiumaapy.services` library.

## Prerequisites

```bash
export RTI_LICENSE_FILE=/path/to/rti_license.dat
export UMAA_QOS_FILE=/path/to/qos/umaa_qos_lib.xml
```

## Run

Start the autopilot provider first (see the [autopilot example](../autopilot/README.md)),
then in a separate terminal:

```bash
./python/examples/globalvector_consumer/start_globalvector_consumer.sh
```

The start script creates a virtual environment (if needed), installs
dependencies, resolves the RTI license file, sets the source and destination
GUIDs, and launches the consumer.
Extra flags are forwarded to the underlying Python entry point:

```bash
./python/examples/globalvector_consumer/start_globalvector_consumer.sh --domain-id 1 -v
```

Options:

| Flag | Default | Description |
|------|---------|-------------|
| `--domain-id` | `0` | DDS domain ID |
| `--source-guid` | script default | 32-char hex GUID for this consumer |
| `--destination-guid` | script default | 32-char hex GUID of the target autopilot |
| `-v` | off | Enable DEBUG logging |

## Lifecycle

1. Creates a `DDSContext` and discovers the autopilot provider (up to 60 s).
2. Builds a `GlobalVectorCommandType` with `directionMode = HEADING`.
3. Sends the command via `consumer.send()`.
4. Logs ack, status, execution-status, and terminal callbacks.
5. Exits when the terminal status arrives or after a 30 s timeout.
