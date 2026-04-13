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
import rti.connextdds as dds
from rtiumaapy import DDSContext, GUIDUtil, set_timestamp
from rtiumaapy.services.so import HealthReportProvider
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
)

async def main():
    ctx = DDSContext(domain_id=0)

    # Build a source identity from a random GUID
    guid = NumericGUID(value=dds.Uint8Seq(GUIDUtil.generate()))
    source_id = IdentifierType(id=guid, parentID=guid)

    # Create the provider — type and topic are pre-wired
    key_holder = HealthReportType()
    key_holder.source = source_id
    provider = HealthReportProvider(ctx, "HealthReport", key_holder)

    # Publish a sample
    sample = HealthReportType()
    sample.source = source_id
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

## What's Next

- {doc}`building-a-component` — Build a multi-service component from scratch
- {doc}`qos-configuration` — Understand and customize QoS profiles
- {doc}`api/command-provider` — Implement command services
- {doc}`api/services-library` — Browse the 350 pre-wired service classes
