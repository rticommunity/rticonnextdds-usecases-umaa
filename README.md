# UMAA Starter Kit

A starting point for developing to the UMAA standard with Connext.

- [Overview](#overview)
- [UMAA Standard](#umaa-standard)   
  Breakdown of UMAA standard from a DDS perspective
- [Examples](#examples)
  - [XML-Based Application Framework](#xml-based-application-framework)
  - [Service Template Wrappers](#service-template-wrappers)
  - [Dynamic Types Python](#dynamic-types-python)
- [UMAA Data Types](#umaa-data-types)
- [Best Practices](#best-practices)   
  Recommendations and general guidelines
- [CMAKE modules](#cmake-modules)
- [Record/Replay/Convert](#recordreplayconvert-usage-examples)

## Overview

This Starter Kit provides an entry point to developing with UMAA.  
It highlights usage of a few UMAA defined Components to simulate  
interaction between the different interfaces. 

It showcases Connext's ability to easily instantiate UMAA components  
using either the Modern C++ or the Python APIs.  
It also highlights the option to manage DDS configuration of both systems with  
a centralized xml or compose UMAA services from template classes.


## UMAA Standard
Latest Version: 6.0 Distro A
[Download from AUVSI](https://www.auvsi.org/unmanned-maritime-autonomy-architecture)

**Note:** The AUVSI UMAA website now provides a Distro A SDK that includes reference code examples designed to be used with RTI Connext. 
The UMAA SDK examples are currently considered the best path forward with regards to UMAA development.
Examples in this repo are intended as alternatives re: setting up DDS for different use cases and could be integrated into the SDK if so desired.

The UMAA standard defines the following(as of 6.0):  
- Middleware level:
  - Data model(~600 data types in an IDL format)
  - No QOS (Exception: Large Collections- PRESENTATION)
  - Topics(“Interfaces”) per “Service”.
- Application level:  
  - Command state machine/handshaking("Flow Control")
  - Large data set synchronization("Large Collections")
  - Type extension("Generalizations/Specializations")
- Systems level:
  - "Components": Collection of "Interfaces" defined in the UMAA MBSE model.
    - **Note:** This starter kit provides an xml definition of the Autopilot and USVNAV component  
      DDS entities based on our interpretation of the v1.0 Component Definitions release. 
    - There are currently ~40 components defined by UMAA of which 9 are Distro A.  
      (`examples/xml-app-framework/components/UMAA Component Definitions v1.0.pdf`)
    
*NOTE:  
The application level requirements (i.e Flow Control/Large Collections/Generic-Specified types)  
are outside of the current scope of this middleware reference starter kit.  
Some application layer development would be required on top of the middleware infrastructure to   
be compliant with the UMAA standard. See the UMAA SDK from AUVSI for details.*

## Examples

### XML-Based Application Framework
[Full Documentation](examples/xml-app-framework/README.md)

Centralized XML configuration for DDS entities, components, and QoS profiles. Ideal for large systems with separate systems engineering teams managing configuration files independently from application code.

**When to use:** You need strict separation between systems configuration and software development, or want a single source of truth for DDS infrastructure that can be shared across C++ and Python applications.

### Service Template Wrappers
[Full Documentation](examples/service-template-wrappers/README.md)

C++ template classes that compose UMAA services programmatically with AsyncWaitset support. Provides flexibility to dynamically build components at runtime.

**When to use:** You're doing rapid prototyping, need runtime flexibility to compose services, or prefer a code-centric approach over XML configuration.

### Dynamic Types Python
[Full Documentation](examples/dynamic-types-python/README.md)

Python scripts using DynamicData API for runtime type instantiation without code generation. Perfect for testing, debugging, and simulating UMAA messages.

**When to use:** You need quick debugging/testing without recompiling, want to simulate specific UMAA messages, or need flexible data inspection during development.

## UMAA Data Types
UMAA defines ~ 600 data types. This is what is used to determine the "structure" of the data being transported.  
With Connext, we use RTI Code Generator `rtiddsgen` ([manual](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/code_generator/users_manual/code_generator/users_manual/UsersManual_Title.htm)) to generate code per the API being used.  
This code assists with construction and serialization/deserialization of these data structures.

### C++11 data types
For the C++11 API, we generate helper headers and classes for all of the UMAA types  
and then compile them into a single shared library.

This makes it more convenient to link your source code against when developing.   

The build system generates all Type support code into `build/umaa_cpp11_gen` and creates a shared library (`libumaa_types.so`) in `build/datamodel/lib`. 

### Python data types
With Python, `rtiddsgen` converts the types into Python modules that we can then reference in our Python scripts.  
For Python types there is a bug in RTIDDSGEN that doesn't resolve the include modules  
paths correctly. (CODEGENII-2112)

The workaround is to export all the modules to a single folder and then we can add them to the `PYTHONPATH`.  
You can find the Python types have been pre-generated and added to the `datamodel/umaa/python_flat` folder for this example.

## Best Practices
### Increase Network Buffers
[UMAA data types](#umaa-data-types) can tend to be very large individually(compressed up to 1 KB each) and even  
more so in aggregate.    
During the automatic discovery process these are sent out to provide a definition of the  
data structure to allow for deserialization of the messages.  

On startup, this can cause local UDP buffers to get filled up and prevent the discovery sequence  
from fully completing.  

To mitigate this on Linux systems, one of the options is to [increase the UDP buffers](https://community.rti.com/howto/improve-rti-connext-dds-network-performance-linux-systems).



## CMAKE modules
This repo pulls in a git submodule from [rticonnextdds-cmake-utils](https://github.com/rticommunity/rticonnextdds-cmake-utils).  

The `rticonnextdds-cmake-utils` repo provides convenient CMAKE utils to find Connext, call `rtiddsgen` and pass in IDL files as an argument.

### Build System Architecture
**All builds must be performed from the repository root.** Standalone subfolder builds are not supported.

The build system generates UMAA type support code (~600 IDL files) into `build/umaa_cpp11_gen` and creates a shared library (`libumaa_types.so`) in `build/datamodel/lib`. Examples then link against this library.

#### Building Everything
```bash
# Source the Connext environment script
source <connext_install_dir>/resource/scripts/rtisetenv_<target>.bash
# Example: source /opt/rti_connext_dds-7.3.0/resource/scripts/rtisetenv_x64Linux4gcc7.3.0.bash

# Build all targets
mkdir -p build && cd build
cmake ..
make -j1  # Sequential build recommended due to large number of IDL targets
```

#### Building Individual Targets
You can build specific components without rebuilding everything:

```bash
cd build

# Build just the datamodel library
make umaa_types

# Build specific examples
make service_autopilot      # Service template wrappers example
make xml_app_autopilot      # XML-based framework example
```

Executables are output to:
- `build/examples/service-template-wrappers/service_autopilot`
- `build/examples/xml-app-framework/xml_app_autopilot`

**Note:** Individual IDL file targets are also available (e.g., `make LandmarkReportType.idl_datamodel`) if you need to regenerate specific types during development.

## Record/Replay/Convert usage examples
Connext includes a set of services that can capture selected DDS traffic and store in a SQLite database to allow for 
playback/conversion at a later date. 

Some reference examples have been created for the workflow of recording, replaying and converting DDS messages.

### Assets
- [Recording Service Manual(7.3)](https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/manuals/connext_dds_professional/services/recording_service/index.html)
- [Docker Container Image](https://hub.docker.com/r/rticom/recording-service)  

### Setup
- Install Connext Host per [Connext Getting Started](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/getting_started_guide/index.html) Guide  
- Clone `rticonnextdds-usecases-umaa` repo  
- Set `NDDSHOME` to your Connext Install Path.  
- Publish DDS Data on Domain ID 1 using [XML App Framework's USVNAV Component](/examples/xml-app-framework/README.md#python-usvnav)

### Record a "Deploy" scenario
This example logs a filtered subset of topics in a XCDR serialized format to a SQLite Database.   
(Recording in a serialized format is more efficient for runtime usage.)       

It also rolls over every 1GB and uses a formatted naming convention for every index.    
Domain ID: 1

```sh
cd services
./start_record.sh deploy
```

### Record a "Debug" scenario
This example logs all topics in a JSON serialized(human readable) format to a SQLite Database.  
Domain ID: 1

```sh
cd services
./start_record.sh debug
```

### Replay 

When you "replay" DDS data what you are really doing is re-publishing the   
messages that were originally logged.  

As a writer of DDS data, your QoS then needs to meet or exceed any existing readers  
within the current system.  

You can include your systems QoS with the following 2 steps:   

1. Add the QoS XML file to the -cfgFile argument (see `services/start_replay.sh`):
   ```bash
   xml="./umaa_replay.xml;../qos/umaa_qos_lib.xml"
   ```

2. Set the datawriter to use the desired QoS Profile (see `services/umaa_replay.xml`):
   ```xml
   <datawriter_qos base_name="umaa_qos_lib::topic_qos_assign" />
   ```

#### Replay XCDR data
This example replays XCDR data logged from the "Deploy" scenario.  
Domain ID: 1

```sh
cd services
./start_replay.sh xcdr
```

#### Replay JSON data
This example replays JSON data logged from the "Debug" scenario.  
Domain ID: 1

```sh
cd services
./start_replay.sh json
```

### Convert XCDR to JSON
This example converts XCDR data logged from the "Deploy" scenario to JSON.  
Domain ID: 1

```sh
cd services
./start_convert.sh xcdr_to_json
```

### Convert XCDR to CSV
This example converts XCDR data logged from the "Deploy" scenario to CSV.    
Domain ID: 1

```sh
cd services
./start_convert.sh xcdr_to_csv

```



