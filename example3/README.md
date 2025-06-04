# DynamicData Pub/Sub Example

## Use case: 
Single script for debugging/simulating/unit testing UMAA messages.

## Overview
This example uses DynamicData types to instantiate the structures and populate the member values.

This can be quite flexible/dynamic however the downside with DynamicData is the use of an ASCII string to index into the fields.

By inspecting the Python examples you should be able to see the basic mechanics of loading in XML files, setting the Topic/Type, and selecting the QoS Profile.

You can then use the DynamicData API to interact with the data structures dynamically.  
See the Python docs [here](https://community.rti.com/static/documentation/connext-dds/current/doc/api/connext_dds/api_python/types.html#dynamictype-and-dynamicdata) for further reference.


## XML types
XML types are used for the following use cases:
- Importing types into Cameo/Simulink
- Referencing types in Admin Console when type propagation is disabled
- Referencing types in Routing Service or Recording service when type propagation is disabled
- DynamicData types usage. This is a flexible alternative to compiled types.

We can use `rtiddsgen` along with the `-convertToXML` flag to convert our IDL files to XML. 

With Connext 7.3 there is a `-r` recursive flag that can be used to iterate through the subfolders and convert as necessary. ([rtiddsgen enable recursion](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/code_generator/users_manual/code_generator/users_manual/GeneratingCode.htm#Chapter_4_Generating_Example_Code:~:text=4.1.4.3%20Enabling%20Recursion))

For this example we have provided these XML types in `datamodel/umaa/xml_flat` for your convenience. 

These XML types have had all of their includes "flattenned" to point to the same  
directory. This allows for use cases where we want to decouple the XML includes from  
needing to be relative to the CWD.

## Prerequisites
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

#### UMAA Publisher
##### Example:
```sh
cd ./examples

python ./py/umaa_dynamic_pub.py --qos umaa_qos_lib::periodic_best_effort_qos --topic UMAA::EO::BallastTank::BallastPumpCommandType --domain 0
```

#### UMAA Subscriber
##### Example:

```sh
cd ./examples

python ./py/umaa_dynamic_sub.py --qos umaa_qos_lib::periodic_best_effort_qos --topic UMAA::EO::BallastTank::BallastPumpCommandType --domain 0
```

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
