# Connext Container Validation

The repository provides Docker environments for Connext 7.3 and 7.7. Both
use host networking and mount the repository read-only at `/workspace`; the
shared build cache is writable at `/build-cache`.

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

The smoke test is supported for both 7.3 and 7.7.