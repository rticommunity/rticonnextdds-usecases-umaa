CommandProvider
===============

.. automodule:: rtiumaapy.command_provider
   :no-members:

.. autoclass:: rtiumaapy.command_provider.CommandProvider
   :members:
   :undoc-members: False
   :show-inheritance:

State Machine
-------------

The ``CommandProvider`` drives the ICD command state machine automatically.
Subclasses only implement hooks — they never publish status directly.

.. code-block:: text

   ┌──────────┐    ┌───────────┐    ┌───────────┐    ┌───────────┐
   │  ISSUED  │───►│ COMMANDED │───►│ EXECUTING │───►│ COMPLETED │
   └──────────┘    └───────────┘    └───────────┘    └───────────┘
        │               │               │
        ▼               ▼               ▼
   ┌──────────┐    ┌──────────┐    ┌──────────┐
   │  FAILED  │    │  FAILED  │    │  FAILED  │
   └──────────┘    └──────────┘    └──────────┘
        │               │               │
        ▼               ▼               ▼
   ┌───────────────────────────────────────────┐
   │              CANCELED (dispose)            │
   └───────────────────────────────────────────┘


Hooks
-----

Override these async methods to implement domain behavior:

.. list-table::
   :header-rows: 1

   * - Hook
     - When Called
     - Required
   * - ``validate_command(command)``
     - After ISSUED, returns ``(bool, reason)``
     - No (default: field validation)
   * - ``on_commanded(session)``
     - After COMMANDED published
     - No
   * - ``on_executing(session)``
     - After EXECUTING published — **do work here**
     - **Yes**
   * - ``on_complete(session)``
     - After COMPLETED published
     - No
   * - ``on_failed(session, exception)``
     - After FAILED published
     - No
   * - ``on_terminal(session)``
     - Always called (finally block)
     - No
   * - ``on_updated(session, prev, new)``
     - Command update during EXECUTING
     - No


Example
-------

.. code-block:: python

   from rtiumaapy.services.mo import GlobalVectorControlProvider
   from rtiumaapy.command_provider_session import CommandProviderSession

   class MyVectorProvider(GlobalVectorControlProvider):
       def __init__(self, ctx, *, source_id):
           super().__init__(ctx, source_id=source_id)

       async def on_executing(self, session: CommandProviderSession):
           cmd = session.command
           print(f"Heading: {cmd.direction}, Speed: {cmd.speed}")
           # Return normally → COMPLETED
           # Raise CommandHookError → FAILED

       async def on_complete(self, session):
           print("Command completed successfully")


Signaling Failures
------------------

Raise ``CommandHookError`` from any hook to fail the command:

.. code-block:: python

   from rtiumaapy import CommandHookError
   from rtiumaapy.command_provider_session import CommandReasonEnum

   async def on_executing(self, session):
       raise CommandHookError(
           reason_enum=CommandReasonEnum.RESOURCE_FAILED,
           message="Hardware not responding",
       )

The framework validates the reason against the ICD's per-state allowed reasons (D51) and transitions to FAILED.
