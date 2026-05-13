# Getting Started

This guide walks you through installing `rtiumaapy`, running the autopilot example, and writing your first UMAA component.

## Prerequisites

| Requirement | Version |
|---|---|
| Python | >= 3.8 |
| RTI Connext DDS License | Free evaluation at <https://www.rti.com/free-trial> |
| OS | Linux, macOS, or Windows |

You need a valid RTI Connext DDS license file. Place it where Connext can find it (e.g. `$HOME/rti_license.dat` or set `RTI_LICENSE_FILE`). The `rti.connext` Python binding is installed automatically as a package dependency.

## Installation

### 1. Clone the repository

```bash
git clone <repo-url> rticonnextdds-usecases-umaa
cd rticonnextdds-usecases-umaa/python
```

### 2. Create a virtual environment

```bash
python3 -m venv .venv
source .venv/bin/activate   # Linux/macOS
# .venv\Scripts\activate    # Windows
```

### 3. Install the SDK in editable mode

```bash
pip install -e ".[dev]"
```

This installs `rtiumaapy` plus development dependencies (`pytest`, `pytest-asyncio`).

### 4. Set the QoS environment variable

The SDK locates the UMAA QoS XML file via the `UMAA_QOS_FILE` environment variable:

```bash
export UMAA_QOS_FILE="$(pwd)/../qos/umaa_qos_lib.xml"
```

```{tip}
Add this to your shell profile or `.env` file to avoid setting it every session.
```

## Verify installation

### 1. Run the tests

```bash
python -m pytest tests/ -v --tb=short
```

You should see over 1,600 tests passing.

### 2. Run the autopilot example

Open two terminals (each with the venv active and `UMAA_QOS_FILE` set).

**Terminal 1 — Start the autopilot**

```bash
cd examples/autopilot
./start_autopilot.sh
```

**Terminal 2 — Send a command**

```bash
cd examples/globalvector_consumer
./start_globalvector_consumer.sh
```

The start script has the autopilot's destination GUID hardcoded, so no extra
flags are needed.  You should see the full command lifecycle in both terminals:
**ISSUED → COMMANDED → EXECUTING → COMPLETED**.

## Minimal Example — Report Publisher

The SDK includes 350 pre-wired service classes so you don't need to specify
types or topics yourself.  Here's a health report publisher using
`HealthReportProvider`:

```python
import asyncio
from rtiumaapy import DDSContext, set_timestamp
from rtiumaapy.services.so import HealthReportProvider
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
)

async def main():
    ctx = DDSContext(domain_id=0)

    provider = HealthReportProvider(ctx)

    sample = HealthReportType(source=ctx.source_id)
    set_timestamp(sample)
    provider.write(sample)

    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Minimal Example — Report Subscriber

The consumer side is even simpler — subclass the pre-wired
`HealthReportConsumer` and override `on_report()`:

```python
import asyncio
from rtiumaapy import DDSContext
from rtiumaapy.services.so import HealthReportConsumer

class MyHealthConsumer(HealthReportConsumer):
    async def on_report(self, sample):
        print(f"Health: severity={sample.severity} code={sample.code}")

async def main():
    ctx = DDSContext(domain_id=0)
    consumer = MyHealthConsumer(ctx)
    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Minimal Example — Command Provider

Command providers receive commands addressed to them and drive each command
through the ICD state machine: **ISSUED → COMMANDED → EXECUTING → COMPLETED**.
Subclass a pre-wired provider and override the `on_executing()` hook to
implement your domain logic:

```python
import asyncio
import logging
from rtiumaapy import DDSContext, set_timestamp
from rtiumaapy.services.so import BITControlProvider
from rtiumaapy.command_provider_session import CommandProviderSession

logging.basicConfig(level=logging.INFO)

class MyBITProvider(BITControlProvider):
    """Simple Built-In Test provider that always succeeds."""

    async def on_commanded(self, session: CommandProviderSession):
        print(f"BIT command accepted — session {session.session_id}")

    async def on_executing(self, session: CommandProviderSession):
        print("Running built-in test...")
        await asyncio.sleep(1)  # simulate work
        print("Built-in test passed.")

    async def on_complete(self, session: CommandProviderSession):
        print("BIT command completed successfully.")

async def main():
    ctx = DDSContext(domain_id=0)
    provider = MyBITProvider(ctx, source_id=ctx.source_id)
    provider.start()
    await ctx.run_until_shutdown()

asyncio.run(main())
```

The base class handles ack publishing, status transitions, and session
management automatically — you only write the behavior.

## Command Provider with Execution Status

Some command services include an execution-status topic for progress feedback.
The `GlobalVectorControlProvider` (MO domain) is a good example — it reports
whether heading and speed targets have been achieved:

```python
import asyncio
import logging
from rtiumaapy import DDSContext, set_timestamp
from rtiumaapy.services.mo import GlobalVectorControlProvider
from rtiumaapy.command_provider_session import CommandProviderSession
from rtiumaapy.datamodel.GlobalVectorExecutionStatusReportType import (
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType
    as GlobalVectorExecStatus,
)

logging.basicConfig(level=logging.INFO)

class MyGlobalVectorProvider(GlobalVectorControlProvider):
    """Heading/speed controller that publishes execution status."""

    async def on_commanded(self, session: CommandProviderSession):
        cmd = session.command
        print(f"GlobalVector COMMANDED — direction={getattr(cmd, 'direction', '?')}")

    async def on_executing(self, session: CommandProviderSession):
        cmd = session.command

        # Publish execution status showing targets achieved
        exec_status = GlobalVectorExecStatus()
        exec_status.source = self._source_id
        exec_status.sessionID = cmd.sessionID
        exec_status.directionAchieved = True
        exec_status.speedAchieved = True
        exec_status.elevationAchieved = True
        set_timestamp(exec_status)

        if self._exec_status_writer is not None:
            self._exec_status_writer.write(exec_status)

        print("GlobalVector targets achieved.")

    async def on_complete(self, session: CommandProviderSession):
        print("GlobalVector COMPLETED")

async def main():
    ctx = DDSContext(domain_id=0)
    provider = MyGlobalVectorProvider(ctx, source_id=ctx.source_id)
    provider.start()
    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Minimal Example — Command Consumer

The consumer side sends a command to a provider and reacts to lifecycle
events (ack, status transitions, execution status, terminal) via hooks.
Here's a `BITControlConsumer` that sends a BIT command and waits for
completion:

```python
import asyncio
import logging
from rtiumaapy import DDSContext
from rtiumaapy.guid_util import GUIDUtil
from rtiumaapy.services.so import BITControlConsumer
from rtiumaapy.datamodel.BITCommandType import (
    UMAA_SO_BITControl_BITCommandType as BITCommandType,
)

logging.basicConfig(level=logging.INFO)

class MyBITConsumer(BITControlConsumer):
    """BIT consumer that logs every lifecycle event."""

    def __init__(self, ctx, *, source_id, destination_id):
        super().__init__(ctx, source_id=source_id, destination_id=destination_id)
        self.done = asyncio.Event()

    async def on_ack(self, session_id, ack):
        print(f"ACK received — session={GUIDUtil.to_hex(session_id)}")

    async def on_status(self, session_id, status):
        print(f"STATUS — {status.commandStatus}")

    async def on_terminal(self, session_id, status):
        print(f"TERMINAL — {status.commandStatus if status else 'cancelled'}")
        self.done.set()

async def main():
    ctx = DDSContext(domain_id=0)

    # destination_id must match the provider's source_id
    destination_id = GUIDUtil.make_source_id("<provider-guid-hex>")

    consumer = MyBITConsumer(
        ctx, source_id=ctx.source_id, destination_id=destination_id,
    )
    consumer.start()

    # Wait for the provider to appear on the network
    await consumer.wait_for_discovery(timeout=30.0)

    # Build and send the command
    cmd = BITCommandType()
    session_id = await consumer.send(cmd)
    print(f"Command sent — session={GUIDUtil.to_hex(session_id)}")

    # Wait for the command lifecycle to finish
    await asyncio.wait_for(consumer.done.wait(), timeout=30.0)

asyncio.run(main())
```

Key points:

- `source_id` identifies this consumer; `destination_id` is the target
  provider's identity (its content filter routes on this).
- `consumer.send(cmd)` auto-stamps header fields and returns the session ID.
- `wait_for_discovery()` blocks until a matching provider is found on the
  network.
- The consumer reader loops dispatch `on_ack`, `on_status`, `on_exec_status`,
  and `on_terminal` as events arrive.

```{tip}
Run the provider example from the previous section in one terminal and this
consumer in another to see the full
ISSUED → COMMANDED → EXECUTING → COMPLETED lifecycle.

For a more complete consumer with argument parsing, execution-status tracking,
and graceful shutdown, see `examples/globalvector_consumer/run_globalvector_consumer.py`.
```

## What's Next

- {doc}`building-a-component` — Build a multi-service component from scratch
- {doc}`qos-configuration` — Understand and customize QoS profiles
- {doc}`api/command-provider` — Implement command services
- {doc}`api/services-library` — Browse the 350 pre-wired service classes
