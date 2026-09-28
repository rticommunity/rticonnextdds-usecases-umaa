"""Containerized XML application smoke tests for supported Connext releases."""

import os
import subprocess
from pathlib import Path

import pytest


REPO_ROOT = Path(__file__).resolve().parents[1]
LAUNCHER = REPO_ROOT / "scripts" / "run_connext_container.sh"
SMOKE_SCRIPT = "/workspace/tests/scripts/xml_app_smoke_test.sh"


pytestmark = pytest.mark.docker


@pytest.mark.parametrize("version", ["7.3", "7.7"])
def test_xml_app_globalvector_round_trip(version: str) -> None:
    """Build the C++ autopilot and verify its Python command round trip."""
    if os.environ.get("RUN_CONNEXT_CONTAINER_TESTS") != "1":
        pytest.skip("set RUN_CONNEXT_CONTAINER_TESTS=1 to run Docker integration tests")

    result = subprocess.run(
        [str(LAUNCHER), version, "bash", SMOKE_SCRIPT],
        cwd=REPO_ROOT,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        timeout=2700,
    )
    assert result.returncode == 0, result.stdout
    assert "GlobalVector smoke test passed: 5 writes" in result.stdout