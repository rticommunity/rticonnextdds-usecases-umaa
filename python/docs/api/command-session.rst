CommandProviderSession
======================

.. automodule:: rtiumaapy.command_provider_session
   :no-members:

.. autoclass:: rtiumaapy.command_provider_session.CommandProviderSession
   :members:
   :undoc-members: False
   :show-inheritance:


Overview
--------

Each ``CommandProviderSession`` is created by ``CommandProvider`` when a new
command arrives. It manages one command's lifecycle through the ICD state
machine. You interact with sessions through the provider hooks — you rarely
need to call session methods directly.


Properties
----------

.. list-table::
   :header-rows: 1

   * - Property
     - Type
     - Description
   * - ``command``
     - IDL struct
     - The current command sample
   * - ``session_id``
     - ``str``
     - The session GUID string
   * - ``current_state``
     - ``int`` (enum)
     - Current state machine state


State Transitions
-----------------

Valid transitions and their failure reasons (per ICD D51):

.. code-block:: text

   None → ISSUED
     Failure reasons: SERVICE_FAILED

   ISSUED → COMMANDED
     Failure reasons: SERVICE_FAILED, INTERRUPTED, TIMEOUT,
                      RESOURCE_FAILED, VALIDATION_FAILED

   COMMANDED → EXECUTING
     Failure reasons: SERVICE_FAILED, INTERRUPTED, TIMEOUT,
                      RESOURCE_REJECTED

   EXECUTING → COMPLETED
     Failure reasons: SERVICE_FAILED, INTERRUPTED, TIMEOUT,
                      RESOURCE_FAILED, OBJECTIVE_FAILED

   Any non-terminal → CANCELED (via dispose)


Enums
-----

.. code-block:: python

   from rtiumaapy.command_provider_session import (
       CommandStatusEnum,   # ISSUED, COMMANDED, EXECUTING, COMPLETED, FAILED, CANCELED
       CommandReasonEnum,   # SUCCEEDED, CANCELED, VALIDATION_FAILED, etc.
   )
