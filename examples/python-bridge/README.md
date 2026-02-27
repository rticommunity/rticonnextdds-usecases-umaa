# Python Bridge

## Overview

The Python Bridge subscribes to `UMAA::SA::GlobalPoseStatus::GlobalPoseReportType` on one DDS domain and republishes the exact same message on a second DDS domain. The publishing participant is created with the default XTypes compliance mask, while the subscribing participant is created after applying the **vendor compliance mask** via the `rti.connextdds.compliance` module.

This demonstrates:
- Using IDL-generated Python types (not DynamicData) for UMAA data models
- Creating two separate `DomainParticipant` instances on different domains
- Setting the XTypes vendor compliance mask with `dds.compliance.set_xtypes_mask()`
- Bridging (forwarding) received samples from one domain to another

## Architecture

```
  Domain 0 (subscriber)              Domain 1 (publisher)
 ┌──────────────────────┐          ┌──────────────────────┐
 │  External Publisher   │          │   External Subscriber │
 │  (GlobalPoseReport)   │          │   (GlobalPoseReport)  │
 └──────────┬───────────┘          └──────────▲───────────┘
            │                                  │
            ▼                                  │
 ┌──────────────────────────────────────────────────────────┐
 │                     Python Bridge                        │
 │                                                          │
 │  DataReader (domain 0)  ──►  DataWriter (domain 1)       │
 │  [vendor compliance mask]     [default mask]             │
 └──────────────────────────────────────────────────────────┘
```

1. **Publisher participant** (domain 1) is created first with the default XTypes mask.
2. `dds.compliance.set_xtypes_mask(XTypesMask.VENDOR)` is called.
3. **Subscriber participant** (domain 0) is created with the vendor compliance mask applied.
4. Every received `GlobalPoseReportType` sample is written out unchanged on the publisher side.

## Requirements

- **RTI Connext DDS 7.3.1** (minimum) — Host and Target installation
- **RTI Connext Python API 7.3.1** (minimum) — the `rti.connextdds.compliance` module was introduced in 7.3.1
- Python 3.8+
- Linux-based OS or WSL

## Setup

### 1. Install RTI Connext DDS 7.3.1

Follow the [Connext Getting Started Guide](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/getting_started_guide/index.html) to install the Connext 7.3.1 host and target packages.

### 2. Install the Python API

There are two options for installing the RTI Connext Python API (7.3.1+):

**Option A — Commercial license (local Connext installation):**

```bash
pip install rti.connext.activated -f $NDDSHOME/resource/python_api
```

**Option B — PyPI (requires a license file at runtime):**

```bash
pip install rti.connext==7.3.1
```

When using the PyPI package, a valid RTI license file (`rti_license.dat`) is required at runtime. See the [RTI installation guide](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/installation_guide/installing.html#installing-license-managed-python-or-c-packages) for details.

Verify the installation:

```bash
pip list | grep rti
# Expected:
# rti.connext               7.3.1
# rti.connext.activated     7.3.1
```

### 3. Clone the repository

```bash
git clone --recurse-submodule https://github.com/rticommunity/rticonnextdds-usecases-umaa.git
```

The pre-generated UMAA Python types are already included in `datamodel/umaa/python_flat/`. No build step is required.

## Usage

```bash
cd examples/python-bridge

python3 python_bridge.py [OPTIONS]
```

### Options

| Option | Default | Description |
|---|---|---|
| `--sub-domain` | `0` | Domain ID for the subscribing participant |
| `--pub-domain` | `1` | Domain ID for the publishing participant |
| `--qos` | `umaa_qos_lib::periodic_best_effort_qos` | QoS profile name |
| `-v`, `--verbosity` | `1` | Connext verbosity level (0=SILENT … 5=STATUS_ALL) |

### Example

Subscribe on domain 0 and republish on domain 1:

```bash
python3 python_bridge.py --sub-domain 0 --pub-domain 1
```

With increased verbosity for debugging:

```bash
python3 python_bridge.py --sub-domain 0 --pub-domain 1 -v 3
```

### Testing with the dynamic publisher

You can use the existing UMAA dynamic publisher example to send `GlobalPoseReportType` samples on domain 0:

```bash
cd examples/dynamic-types-python

python3 umaa_dynamic_pub.py \
  --qos umaa_qos_lib::periodic_best_effort_qos \
  --topic "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType" \
  --domain 0
```

The bridge will receive each sample and forward it to domain 1.

## Compliance Mask Details

The `rti.connextdds.compliance` module controls XTypes serialization behavior at a global level. The mask must be set **before** creating the `DomainParticipant` it should apply to.

The bridge prints the XTypes mask at each stage:

```
XTypes mask BEFORE publisher participant: 00000000000000000000011010001100  (default)
XTypes mask AFTER  publisher participant: 00000000000000000000011010001100  (default)
Vendor compliance XTypes mask set:        00000000000000000000000110101001  (vendor)
XTypes mask BEFORE subscriber participant: 00000000000000000000000110101001 (vendor)
XTypes mask AFTER  subscriber participant: 00000000000000000000000110101001 (vendor)
```

See the [compliance API documentation](https://community.rti.com/static/documentation/connext-dds/7.3.1/doc/api/connext_dds/api_python/rti.connextdds.html#module-rti.connextdds.compliance) for further details.
