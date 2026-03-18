"""Shared pytest fixtures for rtiumaapy DDS integration tests.

Every test gets a fresh ``DDSContext`` on the default domain ID with
a unique GUID-based DomainParticipant partition for isolation.
Fixtures handle teardown so leaked DDS entities never pollute other tests.
"""

import asyncio
import uuid
from pathlib import Path
from typing import AsyncGenerator

import pytest
import pytest_asyncio
import rti.connextdds as dds
import rti.types as idltypes

import rti.asyncio as rti_asyncio

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

    # Allow time for partition change to propagate through discovery
    await asyncio.sleep(0.5)

    try:
        yield ctx
    finally:
        await ctx.shutdown()
        # Close the rti.asyncio default dispatcher so its cached loop
        # reference doesn't bleed into the next test's fresh event loop.
        # Without this, take_async() on subsequent tests silently hangs
        # because the singleton WaitSetAsyncDispatcher is bound to the
        # now-closed loop from this test.
        await rti_asyncio.close()


# ── Async utilities ───────────────────────────────────────────────────────


async def wait_for_match(
    writer: dds.DataWriter,
    min_count: int = 1,
    timeout: float = 5.0,
) -> None:
    """Block until *writer* has at least *min_count* matched subscriptions.

    BEST_EFFORT data is silently dropped if published before the reader
    has matched, so tests must call this before writing.
    """
    deadline = asyncio.get_running_loop().time() + timeout
    while writer.publication_matched_status.current_count < min_count:
        if asyncio.get_running_loop().time() >= deadline:
            raise TimeoutError(
                f"Writer did not match {min_count} subscription(s) "
                f"within {timeout}s"
            )
        await asyncio.sleep(0.02)


# ── Helpers ───────────────────────────────────────────────────────────────
# Re-usable tiny IDL-style types used by multiple tests.


@idltypes.struct(member_annotations={"id": [idltypes.key]})
class SimpleReport:
    """Minimal keyed type for integration tests (PR 2)."""
    id: idltypes.int32 = 0
    value: idltypes.float64 = 0.0


@idltypes.struct(member_annotations={"source": [idltypes.key]})
class FakeReportType:
    """Keyed type with a ``source`` field, mimicking real UMAA report types.

    Used by ReportProvider/Consumer tests (PR 3).
    """
    source: idltypes.int32 = 0
    temperature: idltypes.float64 = 0.0
