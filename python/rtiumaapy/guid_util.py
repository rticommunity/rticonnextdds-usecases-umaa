"""GUID generation and conversion for UMAA NumericGUID (octet[16]) fields."""

from __future__ import annotations

import uuid

# Sentinel: all-zero GUID used as a "null" / unset value
NIL: bytes = b"\x00" * 16


class GUIDUtil:
    """GUID generation and conversion for NumericGUID (octet[16]) fields.

    UMAA identifier fields (``sessionID``, ``source.id``, ``destination.id``,
    ``setID``, etc.) are all ``NumericGUID`` — ``typedef octet NumericGUID[16]``
    — raw 16-byte arrays.  This class provides generation, conversion, and hex
    formatting for CFT filter expressions.
    """

    @staticmethod
    def generate() -> bytes:
        """Generate a random 128-bit GUID as 16 raw bytes.

        Uses ``uuid.uuid4()`` (cryptographic random) under the hood.
        """
        return uuid.uuid4().bytes

    @staticmethod
    def to_hex(guid: bytes) -> str:
        """Convert 16 raw bytes to space-separated hex for ``&hex()`` CFT filters.

        Example::

            >>> GUIDUtil.to_hex(b'\\x55\\x0e\\x84\\x00' + b'\\x00' * 12)
            '55 0e 84 00 00 00 00 00 00 00 00 00 00 00 00 00'
        """
        if len(guid) != 16:
            raise ValueError(f"GUID must be exactly 16 bytes, got {len(guid)}")
        return " ".join(f"{b:02x}" for b in guid)

    @staticmethod
    def to_string(guid: bytes) -> str:
        """Convert 16 raw bytes to a human-readable UUID string.

        Example::

            >>> GUIDUtil.to_string(bytes.fromhex('550e8400e29b41d4a716446655440000'))
            '550e8400-e29b-41d4-a716-446655440000'
        """
        if len(guid) != 16:
            raise ValueError(f"GUID must be exactly 16 bytes, got {len(guid)}")
        return str(uuid.UUID(bytes=guid))

    @staticmethod
    def from_string(s: str) -> bytes:
        """Convert a UUID string to 16 raw bytes.

        Example::

            >>> GUIDUtil.from_string('550e8400-e29b-41d4-a716-446655440000')
            b'U\\x0e\\x84\\x00\\xe2\\x9bA\\xd4\\xa7\\x16DfUD\\x00\\x00'
        """
        return uuid.UUID(s).bytes
