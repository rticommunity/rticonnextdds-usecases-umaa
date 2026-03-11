"""UMAA SDK exception and result types."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


class UmaaCommandException(Exception):
    """Raised when a UMAA command interaction fails.

    Attributes:
        session_id: The command session UUID string.
        reason: Human-readable rejection/error reason from the provider.
        stage: Lifecycle stage where failure occurred.
            One of ``"ACK"``, ``"EXECUTING"``, ``"STATUS"``, ``"TIMEOUT"``.
    """

    def __init__(
        self,
        session_id: str = "",
        reason: str = "",
        stage: str = "",
    ) -> None:
        self.session_id = session_id
        self.reason = reason
        self.stage = stage
        if session_id:
            msg = f"Command {session_id} failed at {stage}: {reason}"
        else:
            # Allow a plain message when called with a single positional arg
            msg = reason or stage
        super().__init__(msg)


class AssemblyError(Exception):
    """Raised when multi-topic element assembly fails.

    Attributes:
        root_type: Name of the root DDS type being assembled.
        slot_name: Name of the element slot that failed.
    """

    def __init__(
        self,
        root_type: str = "",
        slot_name: str = "",
        message: str = "",
    ) -> None:
        self.root_type = root_type
        self.slot_name = slot_name
        super().__init__(
            f"Assembly failed for {root_type}.{slot_name}: {message}"
        )


@dataclass
class CommandResult:
    """Returned by ``CommandConsumerSession.run()`` on successful completion.

    Attributes:
        session_id: The command session UUID string.
        status: Final status string (e.g. ``"COMPLETED"``, ``"CANCELED"``).
        data: Optional provider-supplied result data.
    """

    session_id: str = ""
    status: str = ""
    data: Any = field(default=None, repr=False)

    @property
    def ok(self) -> bool:
        """``True`` if the command completed successfully."""
        return self.status == "COMPLETED"
