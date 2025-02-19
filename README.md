# UMAA Starter Kit

A starting point for developing to the UMAA standard with Connext.
- [Overview](#overview)
- [UMAA Standard](#umaa-standard)
- [Types](#types)
- [Components](#components)
- [Examples](#examples)
- [CMAKE modules](#cmake-modules)
- [Recording Service](#recording-service)

## Overview
This Starter Kit provides an entry point to developing with UMAA.  
It highlights usage of a few UMAA defined Components to simulate  
interaction between the different interfaces. 

It showcases Connext's ability to easily instantiate UMAA components  
using either the Modern C++ or the Python APIs and manage the configuration of  
both systems with a centralized configuration store.

It features the following:
- XML App Creation used with the following API's
  - Python API
  - Modern C++ with Compiled Types
- CMAKE file using `rticonnextdds-cmake-utils` modules for code generation of large type sets
- Recommended best practices for assigning QOS to topics

## UMAA Standard
### High level overview
Latest Version: 6.0 Distro A
[Download from AUVSI](https://www.auvsi.org/unmanned-maritime-autonomy-architecture)

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
    - This starter kit provides an xml definition of the Autopilot and USVNAV component  
      DDS entities based on our interpretation of the v1.0 Component Definitions release. 
    - There are currently ~40 components defined by UMAA of which 9 are Distro A.  
      (`resources/components/UMAA Component Definitions v1.0.pdf`)
    
*NOTE:  
The application level requirements (i.e Flow Control/Large Collections/Generic-Specified types)  
are outside of the current scope of this middleware reference starter kit.  
Some application layer development would be required on top of the middleware infrastructure to   
be compliant with the UMAA standard.*

## Types
UMAA defines ~ 600 data types. This is what is used to determine the "structure" of the data being transported.  
With Connext, we use RTI Code Generator `rtiddsgen` ([manual](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/code_generator/users_manual/code_generator/users_manual/UsersManual_Title.htm)) to generate code per the API being used.  
This code assists with construction and serialization/deserialization of these data structures.

### C++11 types
For the C++11 API, we generate helper headers and classes for all of the UMAA types  
and then compile them into a single shared library.

This makes it more convenient to link your source code against when developing.   
You can see a reference CMAKE file example in `examples/Cmakelists.txt` [CMAKE modules](#cmake-modules)

In this example we generate all the Type support code into the `build` folder and  
then use that code to create a shared lib. 

### Python types
With Python, `rtiddsgen` converts the types into Python modules that we can then reference in our Python scripts.  
For Python types there is a bug in RTIDDSGEN that doesn't resolve the include modules  
paths correctly. (CODEGENII-2112)

The workaround is to export all the modules to a single folder and then we can add them to the `PYTHONPATH`.  
You can find the Python types have been pre-generated and added to the `datamodel/umaa/python_flat` folder for this example.

### XML types
XML types are used for the following use cases:
- Importing types into Cameo/Simulink
- Referencing types in Admin Console when type propagation is disabled
- Referencing types in Routing Service or Recording service when type propagation is disabled

We can use `rtiddsgen` along with the `-convertToXML` flag to convert our IDL files to XML. 

With Connext 7.3 there is a `-r` recursive flag that can be used to iterate through the subfolders and convert as necessary. ([rtiddsgen enable recursion](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/code_generator/users_manual/code_generator/users_manual/GeneratingCode.htm#Chapter_4_Generating_Example_Code:~:text=4.1.4.3%20Enabling%20Recursion))

For this example we have provided these XML types in `datamodel/umaa/xml_flat` for your convenience. 

These XML types have had all of their includes "flattenned" to point to the same  
directory. This allows for use cases where we want to decouple the XML includes from  
needing to be relative to the CWD.

## Components
These reference applications simulate a few components using types and services  
from the public UMAA 6 standard. The intention here was to minimize application  
code and highlight the ease of access to the writers/readers and their usage.  

There are currently ~ 40 components defined by UMAA of which 9 are Distro A.  
(`resources/components/UMAA Component Definitions v1.0.pdf`)

By inspecting the `start_component.sh` script we can see how components can be  
instantiated from Modern C++ or Python apps using the same DDS configuration files. 

It takes advantage of Connext's XML-Based Application Creation framework  
to define and manage all of the messaging entities with XML files.

This lends itself well to the common use case of simulation/test apps in Python  
correlating with deployed apps in Modern C++.

## Examples 
### Prerequisites
Reference the Connext Getting Started guides to complete the below: 
- Linux-based OS or WSL.
- Connext 7.3.0 Host/Target install
- Python API setup

### Tested compatibility
- Ubuntu 20.04
- Connext 6.1.2(C++11)/Connext 7.3.0(C++11,Python)

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
*NOTE: Will take ~ 15 minutes as it is compiling all the IDL types into a shared library*

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### AutoPilot Component (Modern CPP)
--------------------------------------------------------------------------------
##### Options:

```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
.start_component autopilot 1
```

##### Overview:
This reference application provides XML definition for all the entites in 
the UMAA `AutoPilot` component and showcases accessing those entities to read/write data using features
such as listeners and AsyncWaitset.

*NOTE: The commands don't implement the UMAA command state pattern("Flow Control") as  
that is outside the current scope of this middleware example.*

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### USVNAV Component (Python)
--------------------------------------------------------------------------------

##### Options:
```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
./start_component.sh usvnav 1
```

##### Overview:
This reference application provides XML definition for all the entites in 
the UMAA `USVNav` component and showcases accessing those entities to read/write data 

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Logging Component (Python)
--------------------------------------------------------------------------------

##### Options:
```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
./start_component.sh logging 1
```

##### Overview:
This reference application provides XML definition for all the entites in 
the UMAA `Logging` component and showcases accessing those entities to read/write data 

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Global Vector Commands
--------------------------------------------------------------------------------
##### Options: 
```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
./start_component.sh globalvectorcmd
```

##### Overview:
This script publishes messages of the `GlobalVectorCommandType` to reference
reception into the AsynWaitset of the `AutoPilot` component.

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
## CMAKE modules
This repo pulls in a git submodule from [rticonnextdds-cmake-utils](https://github.com/rticommunity/rticonnextdds-cmake-utils).  
The `rticonnextdds-cmake-utils` repo provides convenient CMAKE utils to find Connext, call `rtiddsgen` and pass in IDL files as an argument. 
Use /examples/CMakeLists.txt as a reference for creating a shared library for your UMAA IDL set. 

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
## Recording Service
Connext includes a recording service that can capture selected DDS traffic and store in a SQLite database to allow for 
playback/conversion at a later date. [Recording Service Manual(7.3)](https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/manuals/connext_dds_professional/services/recording_service/index.html)

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

##### Start Recording in "Debug" mode:

```sh
<PATH_TO_CONNEXT_INSTALL>/bin/rtirecordingservice -cfgName debug -cfgFile <PATH_TO_FILE>/umaa_record.xml
```
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
