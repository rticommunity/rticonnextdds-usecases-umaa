"""Shared pytest fixtures for rtiumaapy DDS integration tests.

Every test gets a fresh ``DDSContext`` on the default domain ID with
a unique GUID-based DomainParticipant partition for isolation.
Fixtures handle teardown so leaked DDS entities never pollute other tests.
"""

import uuid
from pathlib import Path
from typing import AsyncGenerator

import pytest
import pytest_asyncio
import rti.connextdds as dds
import rti.types as idltypes

from rtiumaapy.dds_context import DDSContext

# ── QoS file path ────────────────────────────────────────────────────────

_QOS_FILE = str(
    Path(__file__).resolve().parent.parent.parent / "qos" / "umaa_qos_lib.xml"
)

# ── Default domain ID ────────────────────────────────────────────────────

DEFAULT_DOMAIN_ID = 0


# ── Fixtures ──────────────────────────────────────────────────────────────


@pytest.fixture()
def qos_file() -> str:
    """Path to the QoS XML."""
    return _QOS_FILE


@pytest_asyncio.fixture()
async def dds_context(qos_file: str) -> AsyncGenerator[DDSContext, None]:
    """Create a ``DDSContext`` for one test and shut it down afterwards.

    Each test gets its own DomainParticipant partition (a random UUID)
    so that tests are fully isolated even when sharing the same domain ID.
    """
    ctx = DDSContext(domain_id=DEFAULT_DOMAIN_ID, qos_file=qos_file)

    # Apply a unique partition to isolate this test's discovery and data
    partition = dds.Partition([str(uuid.uuid4())])
    dp_qos = ctx.participant.qos
    dp_qos << partition
    ctx.participant.qos = dp_qos

    try:
        yield ctx
    finally:
        await ctx.shutdown()


# ── Helpers ───────────────────────────────────────────────────────────────
# Re-usable tiny IDL-style type used by multiple tests.


@idltypes.struct(member_annotations={"id": [idltypes.key]})
class SimpleReport:
    """Minimal keyed type for integration tests."""
    id: idltypes.int32 = 0
    value: idltypes.float64 = 0.0
