"""UMAA SDK exception and result types."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


class CommandHookError(Exception):
    """Raised by provider hook authors to signal a command failure.

    The framework catches this, validates the reason is legal for the
    current state (D12), and publishes FAILED status.

    Attributes:
        reason_enum: ICD ``CommandStatusReasonEnum`` value describing
            the failure category (e.g. ``VALIDATION_FAILED``).
        message: Human-readable description for logging / diagnostics.
    """

    def __init__(self, reason_enum: int = 0, message: str = "") -> None:
        self.reason_enum = reason_enum
        self.message = message
        super().__init__(f"CommandHookError({reason_enum}): {message}")


class CommandFailedError(Exception):
    """Raised on the consumer side when a FAILED status is received.

    Carries the full context from the DDS ``CommandStatusType`` sample.

    Attributes:
        session_id: The command session GUID string.
        status: Terminal status value (e.g. ``FAILED``).
        reason_enum: ICD ``CommandStatusReasonEnum`` from the provider.
        message: Human-readable reason from the provider.
    """

    def __init__(
        self,
        session_id: str = "",
        status: str = "",
        reason_enum: int = 0,
        message: str = "",
    ) -> None:
        self.session_id = session_id
        self.status = status
        self.reason_enum = reason_enum
        self.message = message
        super().__init__(
            f"Command {session_id} {status} ({reason_enum}): {message}"
        )


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
