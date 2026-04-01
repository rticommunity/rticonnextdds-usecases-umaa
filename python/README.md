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


To build the docs locally:

```bash
pip install ".[docs]"
sphinx-build -b html docs docs/_build/html
```

---

## Contact

For questions or issues, email **services_community@rti.com**.

---


---

## License

See [LICENSE](../LICENSE) for details.
