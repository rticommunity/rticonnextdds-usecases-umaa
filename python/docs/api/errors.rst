Errors & Result Types
=====================

.. automodule:: rtiumaapy.errors
   :members:
   :undoc-members: False
   :show-inheritance:
   :exclude-members: session_id, status, data, ok


Exception Hierarchy
-------------------

.. code-block:: text

   Exception
   ├── CommandHookError      ← Provider-side: raised in hooks to signal failure
   ├── CommandFailedError    ← Consumer-side: raised when FAILED status received
   └── AssemblyError         ← Multi-topic assembly failure (Tier 2-4, future)


CommandHookError
----------------

Raise this from any ``CommandProvider`` hook to transition the command to FAILED:

.. code-block:: python

   from rtiumaapy import CommandHookError
   from rtiumaapy.command_provider_session import CommandReasonEnum

   async def on_executing(self, session):
       if not self.hardware_ready:
           raise CommandHookError(
               reason_enum=CommandReasonEnum.RESOURCE_FAILED,
               message="Sensor hardware not responding",
           )

The framework validates the reason against the ICD's per-state allowed
failure reasons and publishes the FAILED status automatically.


CommandFailedError
------------------

Raised on the consumer side when a FAILED status is received (if using
the synchronous ``send_and_await`` pattern):

.. code-block:: python

   from rtiumaapy import CommandFailedError

   try:
       result = await consumer.send_and_await(cmd)
   except CommandFailedError as e:
       print(f"Command failed: {e.reason_enum} — {e.message}")


CommandResult
-------------

Returned by consumer-side operations on successful completion. Documented above with the module members.
