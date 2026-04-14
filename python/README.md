# RTI UMAA Python SDK

A Python framework for building UMAA-compliant unmanned maritime systems on RTI Connext DDS.

**[Full documentation](https://rticommunity.github.io/rticonnextdds-usecases-umaa/)** — walkthroughs, guides, and API reference.

---

## Quick Start

### 1. Get a License

If you don't have an RTI Connext license, request a free evaluation at
<https://www.rti.com/free-trial> — RTI will auto-respond to your email with a license file.
Then point Connext to it:

```bash
export RTI_LICENSE_FILE=/path/to/rti_license.dat
```

### 2. Install

```bash
cd python/
pip install -e .
```

> Requires Python ≥ 3.8.

### 3. Run the Autopilot Example

```bash
cd examples/autopilot/
./start_autopilot.sh
```

### 4. Publish a Report (5 lines)

```python
import asyncio
from rtiumaapy import DDSContext, set_timestamp
from rtiumaapy.services.so import HealthReportProvider
from rtiumaapy.datamodel.HealthReportType import (
    UMAA_SO_HealthReport_HealthReportType as HealthReportType,
)

async def main():

    ctx = DDSContext(domain_id=0)              # 1. Create a DDS context
    provider = HealthReportProvider(ctx)       # 2. Create a pre-wired provider
    sample = HealthReportType(source=ctx.source_id)  # 3. Build a sample
    set_timestamp(sample)                      # 4. Stamp it
    provider.write(sample)                     # 5. Publish

    await ctx.run_until_shutdown()

asyncio.run(main())
```

## Contact

For questions or issues, email **services_community@rti.com**.

## Acknowledgments

Thanks to [Devon at Penn State ARL](https://github.com/dkreed747/umaapy) for
early UMAA RTI Python explorations that helped inform this project.  
The JHU APL and Penn State ARL C++ implementations
from the [UMAA SDK](https://www.auvsi.org/advocacy/advocacy-initiatives/unmanned-maritime-autonomy-architecture/)
were used as reference throughout development.

## License

See [LICENSE](../LICENSE) for details.
