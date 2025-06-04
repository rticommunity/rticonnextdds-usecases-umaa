# UMAA Starter Kit

A starting point for developing to the UMAA standard with Connext.


- [Overview](#overview)  
  High Level Overview
- [UMAA Standard](#umaa-standard)  
  Breakdown of UMAA standard from a DDS perspective
- [Types](#types)  
  Data Model options
- [Component Examples](#component-examples)
  - [C++ Autopilot](#c-autopilot)  
  - [Python USVNAV](#python-usvnav) 
  - [Python Logging](#python-logging)
  - [Global Vector Commands](#global-vector-commands)  
    NOTE: Not a full component but used for example
- [Dynamic Pub Sub Examples](#dynamic-pub-sub-examples)  
  Generic Python utility scripts to publish/subscribe to UMAA Topics  
- [CMAKE modules](#cmake-modules)
- [Recording Service](#recording-service)  
  Example Configuration file for Recording UMAA topics

## Overview

[Walkthrough here](https://www.rti.com/developers/case-code/umaa)

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

## Examples
- [XML defined UMAA components](example1/readme.md)
  XML definition of DDS entities per UMAA component to be shared between C++/Python API
- [Composed UMAA Service Template Classes](example2/readme.md)
  Template UMAA Service classes to generate UMAA Services and compose a UMAA Component
- [Dynamic Data Pub/Sub](example3/readme.md)
  Use a single Python script to publish or subscribe to any UMAA Topic dynamically

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
