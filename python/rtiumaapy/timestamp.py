"""UMAA DateTimeType timestamp utilities."""

from __future__ import annotations

from dataclasses import dataclass
from datetime import datetime, timezone


@dataclass
class DateTimeFields:
    """Lightweight stand-in for the IDL ``DateTimeType`` fields.

    When the generated UMAA types are available, callers will pass the real
    ``DateTimeType`` objects directly.  This dataclass lets the utility
    functions work without a DDS import dependency in PR 1.
    """

    seconds: int = 0
    nanoseconds: int = 0


class UmaaTimestamp:
    """Conversion between UMAA ``DateTimeType`` and Python ``datetime``.

    All methods are static — no instance state required.

    The ``DateTimeType`` IDL struct carries two fields:

    * ``seconds`` — POSIX epoch seconds (int64)
    * ``nanoseconds`` — sub-second nanoseconds (uint32, 0–999 999 999)

    These helpers convert to/from Python ``datetime`` objects in UTC.
    """

    @staticmethod
    def now() -> DateTimeFields:
        """Return the current UTC time as ``DateTimeFields``.

        Microsecond precision (Python ``datetime`` limit) — nanosecond field
        is set to ``microsecond * 1000``.
        """
        dt = DateTimeFields()
        now = datetime.now(timezone.utc)
        dt.seconds = int(now.timestamp())
        dt.nanoseconds = now.microsecond * 1000
        return dt

    @staticmethod
    def from_datetime(dt: datetime) -> DateTimeFields:
        """Convert a Python ``datetime`` to ``DateTimeFields``.

        If *dt* is naive (no tzinfo), it is assumed to be UTC.
        """
        result = DateTimeFields()
        result.seconds = int(dt.timestamp())
        result.nanoseconds = dt.microsecond * 1000
        return result

    @staticmethod
    def to_datetime(ts: DateTimeFields) -> datetime:
        """Convert ``DateTimeFields`` (or any object with ``.seconds`` /
        ``.nanoseconds``) to a Python ``datetime`` in UTC.
        """
        return datetime.fromtimestamp(
            ts.seconds + ts.nanoseconds / 1e9,
            tz=timezone.utc,
        )

    @staticmethod
    def set_timestamp(sample) -> None:
        """Set ``sample.timeStamp`` to the current UTC time."""
        ts = UmaaTimestamp.now()
        sample.timeStamp.seconds = ts.seconds
        sample.timeStamp.nanoseconds = ts.nanoseconds


# Module-level convenience alias
set_timestamp = UmaaTimestamp.set_timestamp
