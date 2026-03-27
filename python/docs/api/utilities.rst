Utilities
=========

GUIDUtil
--------

.. autoclass:: rtiumaapy.guid_util.GUIDUtil
   :members:
   :undoc-members: False

GUID generation and conversion for UMAA ``NumericGUID`` (``octet[16]``) fields.

.. code-block:: python

   from rtiumaapy import GUIDUtil

   # Generate a random GUID
   guid_bytes = GUIDUtil.generate()  # → 16 bytes

   # Convert to hex for CFT filter expressions
   hex_str = GUIDUtil.to_hex(guid_bytes)
   # → "55 0e 84 00 e2 9b 41 d4 a7 16 44 66 55 44 00 00"

   # Convert to human-readable UUID string
   uuid_str = GUIDUtil.to_string(guid_bytes)
   # → "550e8400-e29b-41d4-a716-446655440000"

   # Parse back from UUID string
   parsed = GUIDUtil.from_string("550e8400-e29b-41d4-a716-446655440000")


UmaaTimestamp
-------------

.. autoclass:: rtiumaapy.timestamp.UmaaTimestamp
   :members:
   :undoc-members: False

Conversion between UMAA ``DateTimeType`` and Python ``datetime``.

.. code-block:: python

   from rtiumaapy import UmaaTimestamp, set_timestamp

   # Set a sample's timestamp to now
   set_timestamp(my_sample)

   # Get current time as DateTimeFields
   ts = UmaaTimestamp.now()
   print(ts.seconds, ts.nanoseconds)

   # Convert from Python datetime
   from datetime import datetime, timezone
   dt = datetime.now(timezone.utc)
   ts = UmaaTimestamp.from_datetime(dt)

   # Convert back to datetime
   dt_back = UmaaTimestamp.to_datetime(ts)


Building Source Identities
--------------------------

UMAA services require an ``IdentifierType`` with ``id`` and ``parentID``
fields (both ``NumericGUID``). Here's the standard pattern:

.. code-block:: python

   import rti.connextdds as dds
   from rtiumaapy import GUIDUtil
   from rtiumaapy.datamodel.HealthReportType import (
       UMAA_Common_IdentifierType as IdentifierType,
       UMAA_Common_Measurement_NumericGUID as NumericGUID,
   )

   guid_bytes = GUIDUtil.generate()
   source_id = IdentifierType(
       id=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
       parentID=NumericGUID(value=dds.Uint8Seq(guid_bytes)),
   )

For command providers, this identity is used as the content filter — only
commands addressed to this ``source_id`` are delivered.
