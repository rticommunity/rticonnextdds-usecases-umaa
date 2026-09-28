# Connext Container Validation

The repository provides Docker environments for Connext 7.3 and 7.7. Both
use host networking and mount the repository read-only at `/workspace`; the
shared build cache is writable at `/build-cache`.

## Images

The launch wrapper builds repository-local images; they are not published to a
container registry.

| Connext version | Local image tag | Dockerfile | Compose definition |
| --- | --- | --- | --- |
| 7.3.0 | `umaa-connext:7.3.0` | [connext-7.3/Dockerfile](connext-7.3/Dockerfile) | [docker-compose.connext-7.3.yml](docker-compose.connext-7.3.yml) |
| 7.7.0 | `umaa-connext:7.7.0` | [connext-7.7/Dockerfile](connext-7.7/Dockerfile) | [docker-compose.connext-7.7.yml](docker-compose.connext-7.7.yml) |

## Verified Compatibility

Both container environments have been verified with the following checks:

- The full Python test suite: 1631 passing tests.
- The XML Autopilot C++ build plus Python Global Vector smoke test: five
  Python writes and at least four C++ reads.
- The repository QoS inspector, including the effective participant QoS.
- Construction and shutdown of all six discovery-only Python reference
  components.

The 7.7 environment also started all six reference components concurrently for
DDS discovery validation.

## Prerequisites

- Docker with Compose support
- An RTI Connext license file readable on the host

Set `RTI_LICENSE_HOST_PATH` to the license file when it is not located at
`$HOME/rti_license.dat`.

## Run a Command

From the repository root, use the versioned launch wrapper:

```bash
RTI_LICENSE_HOST_PATH=/path/to/rti_license.dat \
  scripts/run_connext_container.sh 7.7 bash -lc 'cd /workspace/python && "$PYTHON" -m pytest tests/ -x -q'
```

Replace `7.7` with `7.3` to validate against Connext 7.3. The wrapper builds
the corresponding image, copies the license into `.docker-shared`, and runs
the supplied command inside the container.

## C++ and Python Smoke Test

This test builds the XML Autopilot C++ application and exchanges Global Vector
commands with the Python publisher:

```bash
RTI_LICENSE_HOST_PATH=/path/to/rti_license.dat \
  scripts/run_connext_container.sh 7.7 \
  bash /workspace/tests/scripts/xml_app_smoke_test.sh
```

The smoke test is verified for both 7.3 and 7.7.