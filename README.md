# UMAA CASE+CODE / Starter Kit

## UMAA Standard
Latest Version: 6.0 Distro A
[Download from AUVSI](https://www.auvsi.org/unmanned-maritime-autonomy-architecture)

The UMAA standard defines the following(as of 6.0):  
- Data model(>200 data types in an IDL format)
- No QOS (Exception: Large Collections- PRESENTATION)
- Required Topics(“Interfaces”) per “Service”.
- Application level:  
  - Command state machine/handshaking("Flow Control")
  - Large data set synchronization("Large Collections")
  - Type inheritance("Generic/Specified Types")
- Systems level:
  - "Components", which are a collection of "Interfaces" derived from the UMAA MBSE model. 
    - This example provides a starting point for the Autopilot and USVNAV components based
  on our interpretation of the v1.0 Component Definitions release. (Included: `examples/resources/umaa_6`)

**NOTE:  
The application level requirements (i.e Flow Control/Large Collections/Generic-Specified types) are outside of the scope of this middleware reference example.**

## Overview
The intention of this Case+Code release was to provide some ongoing reference examples focusing on the Connext infrastructure/various API’s interacting, and minimizing setup friction with some utilities.

It features the following:
- XML App Creation used with the following API's
  - Python API
  - Modern C++ with Compiled Types
- CMAKE file using `rticonnextdds-cmake-utils` modules for code generation of large type sets
- Recommended best practices for assigning QOS to topics
- XML Debug snippets
- Utilities
  - Windows: Convert recursively to XML(Connext 6.2.1 compatibility)
  - Linux: Convert recursively to XML plus flatten includes to single folder


## Components
These example applications simulate a few components using types and services 
from the public UMAA 6 standard. The intention here was to minimize application 
code and highlight the ease of access to the writers/readers and their usage.

By referencing the `start_component.sh` script we can see how components can be 
instantiated from Modern C++ or Python apps using the same DDS configuration files.

It takes advantage of Connext’s XML-Based Application Creation framework 
to define and manage all of the messaging entities with XML files.

This lends itself well to the common use case of simulation/test apps in Python 
correlating with deployed apps in Modern C++.

The Python API is fully supported in `Connext 7.3.0`

### Prerequisites
Reference the Connext Getting Started guides to complete the below: 

- Linux-based OS or WSL.
- Connext 7.3.0 Host/Target install
- Python API setup

### Tested compatibility
- Ubuntu 20.04
- Connext 6.1.2/Connext 7.3.0

### Cloning Repository

To clone the repository you will need to run `git clone` as follows to download
both the repository and its submodule dependencies:

```bash
git clone --recurse-submodule https://github.com/rticommunity/rticonnextdds-usecases-umaa.git
```

If you forget to clone the repository with `--recurse-submodule`, simply run
the following command to pull all the dependencies:

```bash
git submodule update --init --recursive
```

### Configure

```sh
cd examples/
cmake -B build -DCMAKE_BUILD_TYPE=Release
```

### Build

```sh
cmake --build ./build --config Release
```
***NOTE: Will take ~ 15 minutes as it is compiling all the IDL types into a shared library.***
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

### AutoPilot Component (Modern CPP)
--------------------------------------------------------------------------------
##### Options:
```
        arg1: component name: [autopilot, usvnav, globalvector] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
.start_component autopilot 1
```

##### Overview:
This reference example provides XML definition for all the entites in 
the AutoPilot component and showcases accessing those entities to read/write data using features
such as listeners and AsyncWaitset.

***NOTE: The commands don't implement the UMAA command state pattern("Flow Control") as  
that is outside the current scope of this middleware example.***

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### USVNAV Component (Python)
--------------------------------------------------------------------------------
##### Options:
```
        arg1: component name: [autopilot, usvnav, globalvector] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
./start_component.sh usvnav 1
```

##### Overview:
This app uses Python types to publish messages per the USVNAV component definition.

The Python modules for all the UMAA types have already been generated and placed into a single folder `/datamodel/umaa/python_flat`.

This allows us to then point the `PYTHONPATH` variable to this folder in the `start_component.sh` script.

For Python types there is a bug in RTIDDSGEN that doesn't resolve the include modules paths
correctly CODEGENII-2112.

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Global Vector Commands
--------------------------------------------------------------------------------
##### Options: 
```
        arg1: component name: [autopilot, usvnav, globalvector] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
./start_component.sh globalvector
```

##### Overview:
This script publishes messages of the `GlobalVectorCommandType` to reference
reception into the AsynWaitset of the AutoPilot component.

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

## CMAKE modules

This repo pulls in a git submodule from [rticonnextdds-cmake-utils](https://github.com/rticommunity/rticonnextdds-cmake-utils) in.  

The `rticonnextdds-cmake-utils` repo provides convenient CMAKE utils to call `rtiddsgen` and pass in IDL files as an argument. 
Use /examples/CMakeLists.txt as a reference for creating a shared library for your UMAA IDL set. 

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------


## Recording Service

Connext includes a recording service that can capture selected DDS traffic and store in a SQLite database to allow for 
playback/conversion at a later date.

[Recording Service Manual] (https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/manuals/connext_dds_professional/services/recording_service/index.html)

A reference config file has been created to cover 2 scenarios "deploy" and "debug" with some assumptions made for both.

#### Usage

- You can use the `rtisetenv*.sh` scripts located in `PATH_TO_CONNEXT_INSTALL/resource/scripts/` to put the `bin` folder into your PATH.

##### Start Recording in "Deploy" mode:

```sh
<PATH_TO_CONNEXT_INSTALL>/bin/rtirecordingservice -cfgName deploy -cfgFile <PATH_TO_FILE>/umaa_record.xml
```

##### Start Recording in "Debug" mode:

```sh
<PATH_TO_CONNEXT_INSTALL>/bin/rtirecordingservice -cfgName debug -cfgFile <PATH_TO_FILE>/umaa_record.xml
```
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------