BaseService
===========

.. automodule:: rtiumaapy.base_service
   :no-members:

.. autoclass:: rtiumaapy.base_service.BaseService
   :members:
   :undoc-members: False
   :show-inheritance:

Usage
-----

All SDK service templates inherit from ``BaseService``. You rarely instantiate it directly — instead, you subclass ``CommandProvider``, ``ReportConsumer``, etc.

``BaseService`` provides:

- **Auto-registration** — ``__init__`` registers the service with the ``DDSContext``
- **Lifecycle** — Abstract ``close()`` enforced on every subclass
- **Event loop** — Optional ``_run()`` coroutine auto-started by ``run_until_shutdown()``

.. code-block:: python

   from rtiumaapy import BaseService, DDSContext

   class MyCustomService(BaseService):
       def __init__(self, ctx: DDSContext):
           super().__init__(ctx, "MyCustomService")

       async def _run(self):
           # Optional: event-driven processing
           while True:
               await asyncio.sleep(1.0)
               print("tick")

       async def close(self):
           print("Cleaning up")
