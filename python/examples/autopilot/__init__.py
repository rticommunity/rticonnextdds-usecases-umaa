"""Autopilot example — Python port of the C++ UMAA USV Autopilot.

Demonstrates how to build a UMAA component using the rtiumaapy SDK:

* Command providers with validation, execution, and status hooks
* Report consumers that cache latest telemetry
* Report providers that publish periodic health/log data
* Execution status publishing during command execution
* Graceful shutdown via ``DDSContext.run_until_shutdown()``
"""
