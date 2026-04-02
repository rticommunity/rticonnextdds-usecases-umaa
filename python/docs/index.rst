RTI UMAA Python SDK
===================

.. image:: https://img.shields.io/badge/version-0.1.0-blue
   :alt: Version 0.1.0

**Service template framework for building UMAA-compliant unmanned maritime systems on RTI Connext DDS.**

``rtiumaapy`` provides reusable service template classes for the Unmanned Maritime Autonomy Architecture (UMAA).

Instead of hand-wiring DDS readers, writers, and state machines for every UMAA service, developers subclass
pre-built templates, override async hooks, and let the SDK handle QoS, lifecycle, and protocol compliance.

Key facts:

- **350 pre-wired services** across 7 UMAA domains — ready to subclass
- **Zero-config QoS** — profiles assigned automatically via ``topic_filter`` rules
- **Event-driven** — all services use ``rti.asyncio`` with ``take_async()``
- **Single-threaded cooperative model** — no locks, no thread safety concerns

----

.. toctree::
   :maxdepth: 2
   :caption: User Guide

   getting-started
   building-a-component
   qos-configuration
   vendor-interoperability
   troubleshooting

.. toctree::
   :maxdepth: 2
   :caption: API Reference

   api/dds-context
   api/base-service
   api/base-component
   api/command-provider
   api/command-consumer
   api/command-session
   api/report-provider
   api/report-consumer
   api/errors
   api/utilities
   api/services-library

.. toctree::
   :maxdepth: 1
   :caption: Project

   changelog


Indices
-------

* :ref:`genindex`
* :ref:`search`
