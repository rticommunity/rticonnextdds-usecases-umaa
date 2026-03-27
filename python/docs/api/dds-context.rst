DDSContext
==========

.. automodule:: rtiumaapy.dds_context
   :no-members:

.. autoclass:: rtiumaapy.dds_context.DDSContext
   :members:
   :undoc-members: False
   :show-inheritance:


Usage
-----

``DDSContext`` is the first object you create and the last one shut down.
Everything flows through it:

.. code-block:: python

   import asyncio
   from rtiumaapy import DDSContext

   async def main():
       ctx = DDSContext(domain_id=0)
       # ... create services, components ...
       await ctx.run_until_shutdown()

   asyncio.run(main())


Shutdown Order
--------------

``shutdown()`` tears down resources in a specific order to avoid segfaults
and DDS warnings:

1. Stop ``rti.asyncio`` dispatcher (no more data received)
2. Cancel all ``_run()`` tasks
3. Call ``close()`` on every service (reverse registration order)
4. ``close_contained_entities()`` on the DomainParticipant
5. Close the DomainParticipant
6. Clear the singleton reference

Services can still **write** during ``close()`` because the dispatcher
shutdown only affects the receive path.
