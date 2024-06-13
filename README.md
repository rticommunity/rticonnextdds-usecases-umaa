# UMAA CASE+CODE

## UMAA Standard
Latest Version: 6.0 Distro D(CUI controlled)  
UMAA standard referenced: 5.2.1 (Public)
[Download from AUVSI](https://www.auvsi.org/unmanned-maritime-autonomy-architecture)

The UMAA standard defines the following(as of 6.0):  
- Data model(>200 data types in an IDL format)
- No QOS (Exception: Large Collections- PRESENTATION)
- Required Topics(“Interfaces”) per “Service”.
- Application level:  
  - Command state machine/handshaking("Flow Control")
  - Large data set synchronization("Large Collections")
  - Type inheritance("Generic/Specified Types")

The UMAA standard also defines some "Components", which are a collection of "Interfaces" derived from the UMAA MBSE model. These Components are currently not for public release and are not required as of 6.0.

## Overview
The intention of this initial Case+Code release was to provide some reference examples focusing on the Connext infrastructure/various API’s interacting, and minimizing setup friction with some utilities:  
- XML App Creation used with the following API's
  - Python API
  - Modern C++ with DynamicData Types
  - Modern C++ with Compiled Types
- CMAKE file using `rticonnextdds-cmake-utils` modules for code generation of large type sets
- Recommended best practices for assigning QOS to topics
- XML Debug snippets
- Utilities
  - Windows: Convert recursively to XML for 6.2.1 compatibility
  - Linux: Convert recursively to XML plus flatten includes to single folder

The application level requirements are outside of the current scope but we hope for this to be an ongoing development as we democratize best practices/lessons learned across our various customers.

## Use Cases
1. I want to configure/manage all of my DDS entities external to the source code by just looking up entities defined in XML. This will minimize boilerplate code, provide a configuration layer, and minimize configuration conflicts. [XML App Creation](#xml-app-creation)
2. I want to develop using the Modern C++ API, Compiled Types, and XML App Creation. [Modern CPP Compiled Types](#modern-cpp-compiled-types)
3. I want to develop using the Modern C++ API, DynamicData Types, and XML App Creation. [Modern CPP DynamicData Types](#modern-cpp-dynamicdata-types)
4. I want to develop using the Python API, DynamicData Types, and XML App Creation. [Python DynamicData Types](#python-dynamicdata-types)
5. I want to filter the messages coming into my application based on the UMAA Destination ID. This can be configurable and require no compilation to change. [Content Filtered Topics](#content-filtered-topics)
6. I want to index into a subtype inside of a sequence using the Python API and DynamicData. [DynamicData indexing](#dynamicdata-indexing)
7. I want to convert my UMAA IDL files to xml and flatten the includes to a single folder, generating a composite includes file in the process.  This is so I can pull types into either System Designer or other modeling tools, use with DynamicData, or include when disabling type propagation. [XML Scripts](#xml-scripts)
8. I want to use CMAKE and `rtiddsgen` to build a shared library of UMAA types using modules created by RTI as reference. [CMAKE modules](#cmake-modules)

## XML App Creation
These example applications simulate a few components using types and services 
from the public UMAA 5.2.1 standard. The intention here was to minimize application 
code and highlight the ease of access to the writers/readers and their usage.

***NOTE:*** *These components are purely for reference purposes(UMAA defined components are not public yet).*

The resources/umaa_components.xml file contains the configurations for the behavior(QOS), 
topics, domains and types of the Connext databus.

It takes advantage of Connext’s XML-Based Application Creation framework 
to define and manage all of the messaging entities with XML files.

Customers are encouraged to reach out to the RTI Services team to assist with any  
implementation of the latest Release which is Distro D(CUI controlled).

### Prerequisites

- Linux-based OS or WSL.
- Connext 7.3.0/Python API setup for Python Scripts

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
***NOTE:*** *Will take ~ 15 minutes as it is compiling all the idl types into a shared library.*
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

### Modern CPP Compiled Types

#### anchor_controller 
--------------------------------------------------------------------------------
##### Options:
```
    -d, --domain     <int>     Domain ID this application will
                               subscribe in.
                               Default: 0
    -f, --file       <string>  XML Config file defining components
                               used to create DDS entities. 
                               Default: './resources/umaa_components.xml'
    -v, --verbosity  <int>     How much debugging output to show.
                               Range: 0-5 
                               Default: 0
```

##### Example:
```sh
./build/anchor_controller -f ./resources/umaa_components.xml
```

##### Overview:
The Anchor Controller app includes a simple state machine to manage "lowering and raising".
It uses listeners to read data and can receive commands from either the `gui.py` application or Admin Console using  
Graphical Data Publishing.
***NOTE:*** *The commands don't follow the UMAA command state pattern("Flow Control") as that is outside the scope of this example.*

###### Content Filtered Topics
By using Content Filtered Topics in tandem with XML-Application creation we are able to conveniently  
filter messages destined for a specific data reader using the `destination` GUID field.

Reference the file umaa_components.xml for the section where the  
"AnchorCommandReader" is defined. 

You will see the filter defined in XML for a "GUID" value.
```
<data_reader name="AnchorCommandReader" topic_ref="UMAA::EO::AnchorControl::AnchorCommand">
    <!-- Here we are passing the Anchor Controller "GUID" to the Content Filter Topic
        so we only get messages addressed to this GUID
    -->
    <content_filter name="src" kind="builtin.sql">
        <!-- Can optionally use an ENV variable if desired
        <expression> destination = &amp;hex($(ANCHOR_CONTROLLER_GUID)) </expression> -->
        <expression>
            destination = &amp;hex(05 05 05 05 05 05 05 05 05 05 05 05 05 05 05 05)
        </expression>
    </content_filter>
    <datareader_qos base_name="UMAAQOSLibrary::AnchorCommandQOS"/>
</data_reader>
```

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  | UMAA::EO::AnchorStatus::AnchorReport |
|  | UMAA::EO::AnchorControl::AnchorCommandStatus |
| UMAA::EO::AnchorControl::AnchorCommand |  |


[Back to Use Cases](#use-cases)
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Modern CPP DynamicData Types

#### autonomy 
--------------------------------------------------------------------------------
##### Options:
```
    -d, --domain     <int>     Domain ID this application will
                               subscribe in.
                               Default: 0
    -f, --file       <string>  XML Config file defining components
                               used to create DDS entities. 
                               Default: './resources/umaa_components.xml'
    -v, --verbosity  <int>     How much debugging output to show.
                               Range: 0-5 
                               Default: 0
```

##### Example:
```sh
./build/autonomy -f ./resources/umaa_components.xml
```

##### Overview:
The Autonomy app looks for a few different topics to have writers publishing 
for it to have "comms" to the Anchor Controller and NavData applications. 
(Namely: "AnchorReport", and "SpeedStatus")

It also looks for the "Anchor Payout" value to be 0, to indicate the Anchor is 
raised and ready for a mission.

It uses DynamicData types and a waitset to read it's data. It also uses listeners 
to pickup events from the databus such as "subscription_matched".

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
| UMAA::EO::AnchorStatus::AnchorReport |   |
| UMAA::EO::AnchorControl::AnchorCommandStatus  |  |
| UMAA::SA::SpeedStatus::SpeedReport|  |      


[Back to Use Cases](#use-cases)
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Python DynamicData Types

#### nav_data
--------------------------------------------------------------------------------
##### Options: 
```
  -h, --help            Show this help message and exit
  -s INT, --source INT  Integer used to generate a source "GUID"
  -f FILE, --file FILE  XML Config file path
```

##### Example:
```sh
python ./python/nav_data.py -f ./resources/umaa_components.xml
```

##### Overview:
This example looks up multiple writers per a specific component, generates and populates the 
`source` "GUID", and publishes arbitrary values referencing the same XML file that defines  
our system using XML App Creation.

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  |  UMAA::SA::SpeedStatus::SpeedReport |


--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

#### gui
--------------------------------------------------------------------------------
##### Options:
```
  -h, --help            Show this help message and exit
  -d INT, --dest INT    Integer used to generate a destination "GUID"
  -f FILE, --file FILE  XML Config file path
  -c INT, --command INT Anchor command enum value
```

Command Values:
- LOWER: 0
- RAISE: 1
- STOP: 2

##### Example for the "Lower" command:

```sh
python python/gui.py -c 0 -d 5
```

##### Overview:
This example generates and populates the `destination` "GUID" field and can be  
used to send a command to the anchor controller application to "raise"/"lower".

This is to be used in tandem with the content filtering on the `destination`  
field applied to the anchor controller application.

You should see the Anchor Controller app respond to these commands.  
By changing the `-d` flag value you can test alternate values and verify  
filtering of data.


##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  |  UMAA::EO::AnchorControl::AnchorCommand |


--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
#### gps
--------------------------------------------------------------------------------
##### Options:
```
  -h, --help            Show this help message and exit
  -s INT, --source INT  Integer used to generate a source "GUID"
  -f FILE, --file FILE  XML Config file path
```

##### Example:

```sh
python python/gps.py
```

##### Overview:
This application instantiates a writer from a pre-defined XML file and publishes  
arbitrary data utiliizing a generated `source` "GUID".

###### DynamicData indexing
This script features a basic example of how to index into a sequence of subtypes using the Python API  
and DynamicData types

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  |  UMAA::SEM::GPSStatus::GPSReport |


[Back to Use Cases](#use-cases)
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

## XML SCRIPTS

These scripts are meant to assist in your workflow when converting the idl
files to xml.

Tested compatibility:  
- UMAA IDL files: 6.0.1
- Ubuntu 20.04
- Windows 11
- Connext: 6.1.2, 7.3.0

### LINUX

#### Configure
- Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable.

- Set the environment variable $UMAA_TYPES to the target folder:

```sh
export UMAA_TYPES="<PATH_TO_UMAA_IDL_REPO>"
```

***NOTE:*** *Ensure a pre-processor is in your PATH environment variable.  
The default is `cpp`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.*  

#### Usage

##### Generate in place:

```sh
scripts/convert_umaa_xml.sh
```
- Convert idl files recursively through all sub folders
- Place xml file in same location as idl file.

##### Flatten to /xml folder:

```sh
scripts/convert_umaa_xml.sh flatten
```
- Convert idl files recursively through all sub folders
- Generate the xml files into an `/xml` folder relative to the `$UMAA_TYPES` directory.
- Edit include paths to remove folders (Example: "./umaa_type.idl")
________________________________________________________________________________

### WINDOWS

#### Configure

- Make sure you have followed the setup guide for your Connext installation,  
including setting the NDDSHOME variable by running the setup script.

- Set the environment variable %UMAA_TYPES% to the target folder:
```sh
SET UMAA_TYPES="<PATH_TO_UMAA_IDL_REPO>"
```

***NOTE:*** *Ensure a pre-processor is in your PATH environment variable.**  
The default is `cp.exe`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.


#### Usage

##### Generate in place:

```sh
scripts/convert_umaa_xml.bat
```
- Convert idl files recursively through all sub folders
- Place xml file in same location as idl file.

[Back to Use Cases](#use-cases)

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------


## CMAKE modules

This repo pulls in a git submodule from [rticonnextdds-cmake-utils](https://github.com/rticommunity/rticonnextdds-cmake-utils) into the /examples/resources folder.  

The `rticonnextdds-cmake-utils` repo provides convenient CMAKE utils to call `rtiddsgen` and pass in idl files as an argument. 
Use /examples/CMakeLists.txt as a reference for creating a shared library for your UMAA IDL set. 

[Back to Use Cases](#use-cases)

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------