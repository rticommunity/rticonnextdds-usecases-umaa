Pre-Wired Service Library
=========================

The SDK includes **350 pre-wired service classes** that set all DDS topic names and IDL types automatically. You subclass them and override hooks — no manual type/topic wiring needed.

Import Pattern
--------------

.. code-block:: python

   # From domain subpackage
   from rtiumaapy.services.mo import GlobalVectorControlProvider
   from rtiumaapy.services.sa import GlobalPoseReportConsumer
   from rtiumaapy.services.so import HealthReportProvider

   # From top-level (re-exports all domains)
   from rtiumaapy.services import GlobalVectorControlProvider


Naming Convention
-----------------

Every service follows the pattern ``{ServiceName}{Role}``:

- **Command services**: ``{Name}Control{Provider|Consumer}``
- **Report services**: ``{Name}Report{Provider|Consumer}``

Examples:

- ``GlobalVectorControlProvider`` — serves GlobalVector commands
- ``GlobalVectorControlConsumer`` — sends GlobalVector commands
- ``HealthReportProvider`` — publishes health reports
- ``HealthReportConsumer`` — subscribes to health reports


Constructor Patterns
--------------------

**Command Providers** require ``ctx`` and ``source_id``:

.. code-block:: python

   provider = GlobalVectorControlProvider(ctx, source_id=my_identity)

**Command Consumers** require ``ctx`` only (destination set at send time, or passed in constructor):

.. code-block:: python

   consumer = GlobalVectorControlConsumer(ctx)

**Report Providers** require ``ctx``, ``service_name``, and ``key_holder``:

.. code-block:: python

   key_holder = HealthReportType()
   key_holder.source = my_identity
   provider = HealthReportProvider(ctx, "HealthReport", key_holder)

**Report Consumers** require ``ctx`` only:

.. code-block:: python

   consumer = GlobalPoseReportConsumer(ctx)


Domain Catalog
--------------

Common Operations (CO) — 42 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Communication channel management, message filtering.

.. code-block:: python

   from rtiumaapy.services.co import (
       CommsChannelPowerConfigProvider,
       CommsChannelPowerConfigConsumer,
       CommsChannelReportProvider,
       CommsChannelReportConsumer,
       CommsChannelSpecsReportProvider,
       CommsChannelSpecsReportConsumer,
       # ... 36 more
   )


Engineering Operations (EO) — 58 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Platform hardware: anchors, ballast, engine, fuel, propulsion, UV platform specs.

.. code-block:: python

   from rtiumaapy.services.eo import (
       EngineControlProvider,
       EngineControlConsumer,
       EngineReportProvider,
       EngineReportConsumer,
       UVPlatformSpecsReportProvider,
       UVPlatformCapabilitiesReportProvider,
       # ... 52 more
   )


Mission Management (MM) — 70 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Missions, objectives, routes, constraints, conditionals, waveforms.

.. code-block:: python

   from rtiumaapy.services.mm import (
       ActiveConstraintsControlProvider,
       ConditionalAddControlConsumer,
       MissionPlanConstraintAddControlConsumer,
       ObjectiveExecutorReportConsumer,
       # ... 66 more
   )


Maritime Operations (MO) — 18 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Vehicle motion control: global vector, hover, waypoint, drift, primitive driver.

.. code-block:: python

   from rtiumaapy.services.mo import (
       GlobalVectorControlProvider,
       GlobalVectorControlConsumer,
       GlobalHoverControlProvider,
       GlobalHoverControlConsumer,
       PrimitiveDriverControlProvider,
       PrimitiveDriverControlConsumer,
       GlobalWaypointControlProvider,
       GlobalWaypointControlConsumer,
       FreeFloatControlProvider,
       FreeFloatControlConsumer,
       GlobalDriftControlProvider,
       GlobalDriftControlConsumer,
       # ... 6 more
   )


Situational Awareness (SA) — 66 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Sensors, contacts, environment: GPS, pose, speed, velocity, wind, water current.

.. code-block:: python

   from rtiumaapy.services.sa import (
       GlobalPoseReportProvider,
       GlobalPoseReportConsumer,
       SpeedReportProvider,
       SpeedReportConsumer,
       VelocityReportProvider,
       VelocityReportConsumer,
       WindReportProvider,
       WindReportConsumer,
       # ... 58 more
   )


Sensors (SEM) — 26 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Sensor management: calibration, configuration, power.

.. code-block:: python

   from rtiumaapy.services.sem import (
       SensorCalibrationControlProvider,
       SensorCalibrationControlConsumer,
       SensorConfigReportProvider,
       SensorConfigReportConsumer,
       # ... 22 more
   )


System Operations (SO) — 70 classes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Health, logging, power, storage, time, watchdog.

.. code-block:: python

   from rtiumaapy.services.so import (
       HealthReportProvider,
       HealthReportConsumer,
       LogReportProvider,
       LogReportConsumer,
       PowerReportProvider,
       PowerReportConsumer,
       # ... 64 more
   )
