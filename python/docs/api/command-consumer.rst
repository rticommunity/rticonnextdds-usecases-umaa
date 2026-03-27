CommandConsumer
===============

.. automodule:: rtiumaapy.command_consumer
   :no-members:

.. autoclass:: rtiumaapy.command_consumer.CommandConsumer
   :members:
   :undoc-members: False
   :show-inheritance:


Sending Commands
----------------

.. code-block:: python

   from rtiumaapy.services.mo import GlobalVectorControlConsumer
   from rtiumaapy.datamodel.GlobalVectorCommandType import (
       UMAA_MO_GlobalVectorControl_GlobalVectorCommandType as CmdType,
   )
   from rtiumaapy import set_timestamp

   consumer = GlobalVectorControlConsumer(ctx)

   # Wait for a provider to appear
   await consumer.wait_for_discovery(timeout=10.0)

   # Build and send a command
   cmd = CmdType()
   cmd.speed = 5.0
   cmd.direction = 1.57  # radians
   session_id = await consumer.send(cmd)


Hooks
-----

Override these to react to lifecycle events:

.. list-table::
   :header-rows: 1

   * - Hook
     - When Called
   * - ``on_ack(session_id, ack)``
     - Provider acknowledged the command
   * - ``on_status(session_id, status)``
     - Status update (ISSUED, COMMANDED, EXECUTING, COMPLETED, FAILED)
   * - ``on_exec_status(session_id, exec_status)``
     - Execution progress (if the service defines an exec status topic)
   * - ``on_terminal(session_id, status)``
     - Session ended (COMPLETED, FAILED, or CANCELED)


Example
-------

.. code-block:: python

   from rtiumaapy.services.mo import GlobalVectorControlConsumer

   class MyVectorConsumer(GlobalVectorControlConsumer):
       async def on_status(self, session_id, status):
           print(f"Status: {status.status}")

       async def on_exec_status(self, session_id, exec_status):
           print(f"Direction achieved: {exec_status.directionAchieved}")

       async def on_terminal(self, session_id, status):
           print(f"Command finished: {status.status if status else 'canceled'}")


Canceling
---------

.. code-block:: python

   await consumer.cancel()

Disposes the command instance, the provider detects it and transitions to CANCELED.


Updating
--------

Send a command update to the same session (the provider must be in EXECUTING state):

.. code-block:: python

   updated_cmd = CmdType()
   updated_cmd.speed = 10.0
   await consumer.send(updated_cmd, session_id=session_id)
