"""Tests for rtiumaapy.timestamp — UmaaTimestamp and DateTimeFields."""

import time
from datetime import datetime, timezone

from rtiumaapy.timestamp import DateTimeFields, UmaaTimestamp, set_timestamp


class TestSetTimestamp:
    """UmaaTimestamp.set_timestamp() stamps a sample's timeStamp field."""

    def test_sets_seconds_and_nanoseconds(self):
        sample = DateTimeFields()  # has .seconds and .nanoseconds

        class FakeSample:
            timeStamp = sample

        fake = FakeSample()
        set_timestamp(fake)
        assert fake.timeStamp.seconds > 0
        assert 0 <= fake.timeStamp.nanoseconds < 1_000_000_000

    def test_module_level_alias_matches_class_method(self):
        assert set_timestamp is UmaaTimestamp.set_timestamp


class TestUmaaTimestampNow:
    """UmaaTimestamp.now() returns a current-time DateTimeFields."""

    def test_returns_datetime_fields(self):
        result = UmaaTimestamp.now()
        assert isinstance(result, DateTimeFields)

    def test_seconds_is_recent(self):
        before = int(time.time())
        result = UmaaTimestamp.now()
        after = int(time.time())
        assert before <= result.seconds <= after

    def test_nanoseconds_in_range(self):
        result = UmaaTimestamp.now()
        assert 0 <= result.nanoseconds < 1_000_000_000

    def test_nanoseconds_are_microsecond_aligned(self):
        """Python datetime only has microsecond precision, so ns % 1000 == 0."""
        result = UmaaTimestamp.now()
        assert result.nanoseconds % 1000 == 0

    def test_monotonic(self):
        """Two consecutive now() calls should not go backwards."""
        a = UmaaTimestamp.now()
        b = UmaaTimestamp.now()
        t_a = a.seconds * 1_000_000_000 + a.nanoseconds
        t_b = b.seconds * 1_000_000_000 + b.nanoseconds
        assert t_b >= t_a


class TestFromDatetime:
    """UmaaTimestamp.from_datetime() converts Python datetime to DateTimeFields."""

    def test_known_epoch(self):
        """Unix epoch should be seconds=0, nanoseconds=0."""
        epoch = datetime(1970, 1, 1, tzinfo=timezone.utc)
        result = UmaaTimestamp.from_datetime(epoch)
        assert result.seconds == 0
        assert result.nanoseconds == 0

    def test_known_date(self):
        dt = datetime(2025, 6, 15, 12, 0, 0, tzinfo=timezone.utc)
        result = UmaaTimestamp.from_datetime(dt)
        assert result.seconds == int(dt.timestamp())
        assert result.nanoseconds == 0

    def test_microseconds_preserved(self):
        dt = datetime(2025, 1, 1, 0, 0, 0, 123456, tzinfo=timezone.utc)
        result = UmaaTimestamp.from_datetime(dt)
        assert result.nanoseconds == 123456 * 1000


class TestToDatetime:
    """UmaaTimestamp.to_datetime() converts DateTimeFields to Python datetime."""

    def test_epoch_roundtrip(self):
        ts = DateTimeFields(seconds=0, nanoseconds=0)
        dt = UmaaTimestamp.to_datetime(ts)
        assert dt == datetime(1970, 1, 1, tzinfo=timezone.utc)

    def test_nonzero_nanoseconds(self):
        ts = DateTimeFields(seconds=1000000, nanoseconds=500_000_000)
        dt = UmaaTimestamp.to_datetime(ts)
        assert dt.microsecond == 500_000

    def test_roundtrip_now(self):
        """now() → to_datetime() → from_datetime() should be close."""
        original = UmaaTimestamp.now()
        dt = UmaaTimestamp.to_datetime(original)
        recovered = UmaaTimestamp.from_datetime(dt)
        # Allow 1 microsecond tolerance due to float precision
        diff = abs(
            (original.seconds - recovered.seconds) * 1_000_000_000
            + (original.nanoseconds - recovered.nanoseconds)
        )
        assert diff < 1000  # < 1 microsecond

    def test_utc_timezone(self):
        ts = DateTimeFields(seconds=1700000000, nanoseconds=0)
        dt = UmaaTimestamp.to_datetime(ts)
        assert dt.tzinfo == timezone.utc

    def test_roundtrip_arbitrary(self):
        """from_datetime → to_datetime should return the same datetime."""
        original = datetime(2026, 3, 11, 14, 30, 45, 123456, tzinfo=timezone.utc)
        ts = UmaaTimestamp.from_datetime(original)
        recovered = UmaaTimestamp.to_datetime(ts)
        # Compare to microsecond precision
        assert abs((recovered - original).total_seconds()) < 1e-6
