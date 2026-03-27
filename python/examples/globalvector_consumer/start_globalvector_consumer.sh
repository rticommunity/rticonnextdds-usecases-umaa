#!/bin/bash
# start_globalvector_consumer.sh — Send a GlobalVectorControl command to a UMAA autopilot.
#
# Usage:
#   ./start_globalvector_consumer.sh [--domain-id N] [--destination-guid HEX] [-v]
#
# Environment (optional overrides):
#   UMAA_QOS_FILE   Path to QoS XML (default: repo qos/umaa_qos_lib.xml)
#   PYTHON          Python interpreter (default: python3)

set -e

# Resolve paths relative to this script
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PYTHON_DIR="$(cd "$SCRIPT_DIR/../.." && pwd)"
REPO_DIR="$(cd "$PYTHON_DIR/.." && pwd)"
VENV_DIR="$PYTHON_DIR/.venv"
PYTHON="${PYTHON:-python3}"

# --- QoS file ---
if [ -z "$UMAA_QOS_FILE" ]; then
    export UMAA_QOS_FILE="$REPO_DIR/qos/umaa_qos_lib.xml"
fi
if [ ! -f "$UMAA_QOS_FILE" ]; then
    echo "ERROR: QoS file not found: $UMAA_QOS_FILE"
    exit 1
fi

# --- Virtual environment ---
if [ ! -d "$VENV_DIR" ]; then
    echo "Creating virtual environment at $VENV_DIR ..."
    "$PYTHON" -m venv "$VENV_DIR"
    # shellcheck disable=SC1091
    source "$VENV_DIR/bin/activate"
    echo "Installing rtiumaapy and dependencies ..."
    pip install --upgrade pip > /dev/null
    pip install -e "$PYTHON_DIR" > /dev/null
    pip install -e "$PYTHON_DIR[dev]" > /dev/null
    echo "Virtual environment ready."
else
    # shellcheck disable=SC1091
    source "$VENV_DIR/bin/activate"
fi

# --- RTI license file ---
if [ -z "$NDDSHOME" ]; then
    echo "ERROR: NDDSHOME environment variable is not set."
    exit 1
fi
if [ ! -f "$NDDSHOME/rti_license.dat" ]; then
    echo "ERROR: RTI license file not found: $NDDSHOME/rti_license.dat"
    exit 1
fi

# --- Source GUID for this consumer (matches USTM UserSystemConfiguration.yaml MissionExecutionManager) ---
SOURCE_GUID="a1b2c3d4e5f647890123456789abcdef"

# --- Destination GUID (autopilot — matches start_autopilot.sh) ---
DESTINATION_GUID="5f0294efd54642e1a3fe666ace569336"

# --- Launch ---
export PYTHONPATH="$PYTHON_DIR"
cd "$PYTHON_DIR"
echo "Starting GlobalVectorControl consumer (QoS: $UMAA_QOS_FILE) ..."
exec python -m examples.globalvector_consumer.run_globalvector_consumer \
    --source-guid "$SOURCE_GUID" \
    --destination-guid "$DESTINATION_GUID" \
    "$@"
