# UMAA Starter Kit

A starting point for developing to the UMAA standard with Connext.


- [Overview](#overview)  
- [UMAA Standard](#umaa-standard)   
Breakdown of UMAA standard from a DDS perspective
- [Example1: XML defined UMAA components](example1/README.md)  
  *USE CASE: Industrial grade infrastructure where you have separate Systems Engineering group to own XML files.*
- [Example2: Composed UMAA Service Template Classes](example2/README.md)  
  *USE CASE: Rapid prototyping and to maintain flexibility.*  
- [Example3: Dynamic Data Pub/Sub](example3/README.md)  
  *USE CASE: Debugging/Simulation/Testing of UMAA topic data.*
- [CMAKE modules](#cmake-modules)
- [Recording Service](#recording-service)    
Example Configuration file for Recording UMAA topics

## Overview

[Walkthrough here](https://www.rti.com/developers/case-code/umaa)

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
playback/conversion at a later date. 

A reference config file has been created to cover 2 scenarios("deploy" and "debug") with some assumptions made for both.

### Assets
- [Recording Service Manual(7.3)](https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/manuals/connext_dds_professional/services/recording_service/index.html)
- [Docker Container Image](https://hub.docker.com/r/rticom/recording-service)  

### Setup
- Install Connext Host per [Connext Getting Started](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/getting_started_guide/index.html) Guide  
- Clone `rticonnextdds-usecases-umaa` repo  
- Set `NDDSHOME` to your Connext Install Path.  

### Usage
#### Start Recording in "Deploy" mode:
```sh
cd resources/services
./start_record.sh deploy
```

#### Start Recording in "Debug" mode:
```sh
cd resources/services
./start_record.sh debug
```

