# Getting Started

This guide walks you through installing `rtiumaapy`, running the autopilot example, and writing your first UMAA component.

## Prerequisites

| Requirement | Version |
|---|---|
| Python | >= 3.8 |
| RTI Connext DDS | >= 7.5.0 (with `rti.connext` Python binding) |
| OS | Linux, macOS, or Windows |

You need a valid RTI Connext DDS license and the Python binding installed. See the [RTI Connext Python API documentation](https://community.rti.com/static/documentation/connext-dds/current/doc/api/connext_dds/api_python/index.html) for installation instructions.

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

Here's the simplest possible UMAA service — publishing a health report:

```python
import asyncio
from rtiumaapy import DDSContext, GUIDUtil, ReportProvider, set_timestamp
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
    UMAA_SO_HealthReport_HealthReportTypeTopic,
    UMAA_Common_IdentifierType as IdentifierType,
    UMAA_Common_Measurement_NumericGUID as NumericGUID,
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumModule_ErrorConditionEnumType as ErrorCondition,
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumModule_ErrorCodeEnumType as ErrorCode,
)
import rti.connextdds as dds

async def main():
    ctx = DDSContext(domain_id=0)

    # Create a source identity
    guid_bytes = GUIDUtil.generate()
    source_id = IdentifierType(
        id=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
        parentID=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
    )

    # Create a keyed report provider
    key_holder = HealthReportType()
    key_holder.source = source_id
    provider = ReportProvider(
        ctx,
        "HealthReport",
        HealthReportType,
        UMAA_SO_HealthReport_HealthReportTypeTopic,
        key_holder,
    )

    # Publish a sample
    sample = HealthReportType()
    sample.source = source_id
    set_timestamp(sample)
    sample.severity = ErrorCondition.NONE
    sample.code = ErrorCode.NONE
    provider.write(sample)

    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Minimal Example — Report Subscriber

```python
import asyncio
from rtiumaapy import DDSContext, ReportConsumer
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
    UMAA_SO_HealthReport_HealthReportTypeTopic,
)

class MyHealthConsumer(ReportConsumer):
    def __init__(self, ctx):
        super().__init__(
            ctx,
            "HealthConsumer",
            HealthReportType,
            UMAA_SO_HealthReport_HealthReportTypeTopic,
        )

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
