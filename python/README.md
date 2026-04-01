# RTI UMAA Python SDK

A Python framework for building UMAA-compliant unmanned maritime systems on RTI Connext DDS.

---

 **[Python SDK Documentation](https://rtidgreenberg.github.io/rti_umaa_py_docs/)**



## Quick Start

### 1. Get an RTI License

Request a free evaluation license at <https://www.rti.com/free-trial>. RTI will auto-respond with your license file.

Place the license file where Connext can find it (e.g. `$HOME/rti_license.dat` or set `RTI_LICENSE_FILE`).

### 2. Install RTI Connext Python

```bash
pip install rti.connext
```

> Requires Python ≥ 3.8. The `rti.connext` package is available on PyPI.

### 3. Install the SDK

```bash
cd python/
pip install -e .
```

### 4. Run the Example

```bash
cd examples/autopilot/
python run_autopilot.py
```

The autopilot component starts 18 UMAA services and runs until you press `Ctrl+C`.

---

## Documentation

- [Getting Started](docs/getting-started.md) — environment setup, first component
- [Building a Component](docs/building-a-component.md) — step-by-step tutorial
- [QoS Configuration](docs/qos-configuration.md) — AssignerQoS, topic filter rules, profiles
- [Vendor Interoperability](docs/vendor-interoperability.md) — DDS-XTYPES compliance, Cyclone DDS interop
- [Troubleshooting](docs/troubleshooting.md) — common issues and solutions
- [Changelog](docs/changelog.md)


To build the docs locally:

```bash
pip install ".[docs]"
sphinx-build -b html docs docs/_build/html
```

---

## Contact

For questions or issues, email **services_community@rti.com**.

---

## Architecture Documentation

Detailed design docs are in [architecture/](architecture/):

| Document | Description |
|----------|-------------|
| [System Architecture](architecture/system-architecture.md) | Design principles, threading model, tiered overview |
| [Implementation Plan](architecture/implementation-plan.md) | 9-PR staged plan with acceptance criteria |
| [DDSContext](architecture/dds-context.md) | DDS lifecycle, entity factories, QoS resolution |
| [Command Services](architecture/command-services.md) | Tier 0 command pattern — 7 hooks, CFT, disposal |
| [Report Services](architecture/report-services.md) | Tier 1 report pattern |
| [Large Set Services](architecture/large-set-services.md) | Tier 2 set-valued reports with CRUD |
| [Large List Services](architecture/large-list-services.md) | Tier 3 ordered list reports |
| [Composite Services](architecture/composite-services.md) | Tier 4 one-off classes |
| [Services Catalog](architecture/services-catalog.md) | Complete 350 service inventory |
| [Error Handling](architecture/error-handling.md) | 4-layer exception strategy |

---

## C++ SDK References

Two C++ reference implementations inform this SDK's design:

| SDK | Organization | DDS Middleware |
|-----|-------------|---------------|
| **PSU/ARL** | Penn State Applied Research Lab | RTI Connext DDS |
| **JHU/APL** | Johns Hopkins Applied Physics Lab | Eclipse Cyclone DDS |

`rtiumaapy` uses the same DDS middleware as PSU/ARL but replaces the poll-based `cycle()` model with Python's cooperative `asyncio` event loop via `rti.asyncio`.

---

## License

See [LICENSE](../LICENSE) for details.
