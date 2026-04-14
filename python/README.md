# RTI UMAA Python SDK

A Python framework for building UMAA-compliant unmanned maritime systems on RTI Connext DDS.

**Full documentation:** [rticommunity.github.io/rticonnextdds-usecases-umaa](https://rticommunity.github.io/rticonnextdds-usecases-umaa/)

---

## Quick Start

### 1. Install

```bash
cd python/
pip install -e .
```

> Requires Python ≥ 3.8 and an [RTI Connext license](https://www.rti.com/free-trial).

### 2. Run the Autopilot Example

```bash
cd examples/autopilot/
./start_autopilot.sh
```

### 3. Publish a Report (5 lines)

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

---

## Documentation

Guides, API reference, and tutorials are on the docs site:

**[rticommunity.github.io/rticonnextdds-usecases-umaa](https://rticommunity.github.io/rticonnextdds-usecases-umaa/)**

To build docs locally:

```bash
pip install ".[docs]"
sphinx-build -b html docs docs/_build/html
```

---

## Contact

For questions or issues, email **services_community@rti.com**.

## License

See [LICENSE](../LICENSE) for details.
