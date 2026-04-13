ReportProvider
==============

.. automodule:: rtiumaapy.report_provider
   :no-members:

.. autoclass:: rtiumaapy.report_provider.ReportProvider
   :members:
   :undoc-members: False
   :show-inheritance:


Usage
-----

A ``ReportProvider`` owns one ``DataWriter`` and publishes report samples.
On ``close()``, the keyed instance is disposed so subscribers see
``NOT_ALIVE_DISPOSED``.

.. code-block:: python

   from rtiumaapy import ReportProvider, set_timestamp
   from rtiumaapy.datamodel.HealthReportType import (
       UMAA_SO_HealthReport_HealthReportType as HealthReportType,
       UMAA_SO_HealthReport_HealthReportTypeTopic,
   )

   key_holder = HealthReportType()
   key_holder.source = my_source_id

   provider = ReportProvider(
       ctx,
       "HealthReport",
       HealthReportType,
       UMAA_SO_HealthReport_HealthReportTypeTopic,
       key_holder,
   )

   # Publish a sample
   sample = HealthReportType()
   sample.source = my_source_id
   set_timestamp(sample)
   sample.severity = ErrorCondition.NONE
   provider.write(sample)


Key Holder
----------

The ``key_holder`` parameter is a default-constructed instance with key fields
populated. It's used by ``close()`` to look up and dispose the DDS instance.
For UMAA types, the key field is typically ``source`` (an ``IdentifierType``).


Validation
----------

``write()`` automatically validates fields against UMAA IDL constraints before
publishing. Invalid fields are logged as warnings but the sample is still sent
(matching C++ reference behavior).


Using Pre-Wired Classes
-----------------------

Pre-wired report providers handle all the type/topic wiring:

.. code-block:: python

   from rtiumaapy.services.so import HealthReportProvider

   key_holder = HealthReportType()
   key_holder.source = my_source_id

   provider = HealthReportProvider(ctx, "HealthReport", key_holder)
   # topic name and type are pre-configured
