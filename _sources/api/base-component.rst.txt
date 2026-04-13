BaseComponent
=============

.. automodule:: rtiumaapy.base_component
   :no-members:

.. autoclass:: rtiumaapy.base_component.BaseComponent
   :members:
   :undoc-members: False
   :show-inheritance:

Usage
-----

A *component* groups multiple services into a cohesive UMAA application. The lifecycle is managed by ``DDSContext``:

1. ``__init__()`` — create services, register with context
2. ``on_start()`` — one-shot startup (publish announcements)
3. ``_run()`` — async coroutine for periodic work
4. ``close()`` — publish final messages, release resources

.. code-block:: python

   from rtiumaapy import DDSContext, BaseComponent

   class MyComponent(BaseComponent):
       def __init__(self, ctx: DDSContext, source_id):
           super().__init__(ctx, "MyComponent")
           # Create services here...

       async def on_start(self):
           print("Component started — publishing specs")

       async def _run(self):
           while True:
               await asyncio.sleep(1.0)

       async def close(self):
           print("Shutting down")
