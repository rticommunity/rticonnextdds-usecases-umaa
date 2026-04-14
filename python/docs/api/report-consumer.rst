ReportConsumer
==============

.. automodule:: rtiumaapy.report_consumer
   :no-members:

.. autoclass:: rtiumaapy.report_consumer.ReportConsumer
   :members:
   :undoc-members: False
   :show-inheritance:


Usage
-----

A ``ReportConsumer`` subscribes to a single DDS topic and delivers incoming
samples via the ``on_report()`` hook.  Use a pre-wired consumer class —
subclass it and override ``on_report()``:

.. code-block:: python

   from rtiumaapy.services.so import HealthReportConsumer

   class MyHealthConsumer(HealthReportConsumer):
       async def on_report(self, sample):
           print(f"Health: severity={sample.severity}")

   consumer = MyHealthConsumer(ctx)


Event Loop
----------

Call ``start()`` to begin the async ``take_async()`` event loop, or let
``DDSContext.run_until_shutdown()`` start it automatically.

The loop:

1. Waits for samples via ``reader.take_async()``
2. Validates each sample against IDL constraints
3. Calls ``on_report(sample)`` for each valid sample
4. Logs exceptions from ``on_report()`` — does not stop the loop


Using Pre-Wired Classes
-----------------------

Pre-wired consumers handle all the type/topic wiring. Just subclass and override ``on_report()``:

.. code-block:: python

   from rtiumaapy.services.sa import GlobalPoseReportConsumer

   class MyPoseConsumer(GlobalPoseReportConsumer):
       async def on_report(self, sample):
           print(f"Lat: {sample.pose.geodeticLatitude}")

   consumer = MyPoseConsumer(ctx)
