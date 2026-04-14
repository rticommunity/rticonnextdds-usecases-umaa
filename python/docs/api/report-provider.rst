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

   from rtiumaapy import DDSContext, set_timestamp
   from rtiumaapy.services.so import HealthReportProvider
   from rtiumaapy.datamodel.HealthReportType import (
       UMAA_SO_HealthReport_HealthReportType as HealthReportType,
   )

   ctx = DDSContext(domain_id=0)
   provider = HealthReportProvider(ctx)

   # Publish a sample
   sample = HealthReportType(source=ctx.source_id)
   set_timestamp(sample)
   provider.write(sample)


Instance Lifecycle
------------------

The instance handle is captured automatically on the first ``write()``.
On ``close()``, the provider disposes the instance so subscribers see
``NOT_ALIVE_DISPOSED`` (per UMAA §5.2.1.3).


Validation
----------

``write()`` automatically validates fields against UMAA IDL constraints before
publishing. Invalid fields are logged as warnings but the sample is still sent
(matching C++ reference behavior).


Using Pre-Wired Classes
-----------------------

Pre-wired report providers handle all the type/topic wiring.
Both ``ctx`` and ``service_name`` are the only parameters —
``service_name`` defaults to the class name if omitted:

.. code-block:: python

   from rtiumaapy.services.so import HealthReportProvider

   provider = HealthReportProvider(ctx)
   # topic name, type, and service_name are all pre-configured
