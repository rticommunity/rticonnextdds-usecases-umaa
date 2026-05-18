# Copilot Instructions — UMAA Python SDK

## Python Environment

- **Always** use the pre-existing venv: `source python/.venv/bin/activate`
- The venv has `rti.connext 7.6.0` on Python 3.8. Never use the system Python (has 7.3.1).
- Run tests from inside the venv: `cd python && source .venv/bin/activate && python -m pytest tests/ -x -q`
- Before running tests or any DDS code, ensure RTI runtime variables are exported in the same shell session:
	- `export NDDSHOME=/path/to/rti_connext_dds-7.6.0`
	- `export PATH="$NDDSHOME/bin:$PATH"`
	- `export LD_LIBRARY_PATH="$NDDSHOME/lib/${RTI_ARCH:-x64Linux4gcc7.3.0}:$LD_LIBRARY_PATH"`
	- `export RTI_LICENSE_FILE="${RTI_LICENSE_FILE:-$NDDSHOME/rti_license.dat}"`
- If `NDDSHOME`/license is missing, `dds.DomainParticipant` creation can fail and tests will error before execution.
- Before running any test suite, verify the wildcard USTM QoS assignment is commented out in `qos/umaa_qos_lib.xml`:
	- `<!-- <datawriter_qos topic_filter="*" base_name="USTMQoS" /> -->`
	- `<!-- <datareader_qos topic_filter="*" base_name="USTMQoS" /> -->`
- Rationale: topic filters are first-match-wins; uncommenting the wildcard USTM lines shadows all specific QoS mappings and breaks QoS profile tests.

## Project Layout

- SDK source: `python/rtiumaapy/`
- Generated IDL types: `python/rtiumaapy/datamodel/` (596 flat modules)
- Pre-wired services: `python/rtiumaapy/services/{co,eo,mm,mo,sa,sem,so}/`
- Tests: `python/tests/`
- Examples: `python/examples/autopilot/`, `python/examples/globalvector_consumer/`
- QoS profiles: `qos/umaa_qos_lib.xml`

## Coding Conventions

- `ReportProvider` does NOT take a `key_holder` — instance handle is captured on first `write()`.
- `service_name` is optional everywhere — defaults to the class name (e.g. `HealthReportProvider`).
- Pre-wired report providers take `(ctx)` only (or `(ctx, service_name)` to override).
- Pre-wired report consumers take `(ctx)` only (or `(ctx, service_name)` to override).
- `DDSContext` auto-generates a source GUID if none provided.
- Service `close()` must NOT close DDS entities directly — let `DDSContext.shutdown()` handle cleanup.

## DDS Notes

- `dds.Topic.find()` returns a new wrapper each time — use `==` not `is`.
- Shutdown ordering: cancel tasks → service close → `rti_asyncio.close()` → `close_contained_entities` → `participant.close`.
- Benign DDS log `WriterHistoryMemoryPlugin_addSample:FAILED TO FIND` comes from dispose-without-prior-write — safe to ignore.
