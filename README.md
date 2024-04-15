# UMAA CASE+CODE

This repo is intended to hold helper scripts/example applications  
to assist in development when using Connext along with the UMAA standard. 

## UMAA Application examples

These example applications simulate a few components using types and services 
from the public UMAA 5.2.1 standard. The intention here was to minimize application 
code and highlight the ease of access to the writers/readers and their usage.

Note: These components are purely for reference purposes(Not defined by UMAA as they 
are not public yet).

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
Note: Will take ~ 15 minutes as it is compiling all the idl types into a shared library.


### Run

#### anchor_controller (Modern CPP)
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
This is intended to be used as a reference when developing with Connext and UMAA types.

It uses compiled data types and listeners to read data.

Note: The commands don't follow the UMAA command state pattern 
as that is outside the scope of this example.

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  | UMAA::EO::AnchorStatus::AnchorReport |
|  | UMAA::EO::AnchorControl::AnchorCommandStatus |
| UMAA::EO::AnchorControl::AnchorCommand |  |

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

#### autonomy (Modern CPP)
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

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

#### nav_data (Python)
--------------------------------------------------------------------------------
##### Options: 
```
  -h, --help            show this help message and exit
  -f FILE, --file FILE  XML Config file
```

##### Example:
```sh
python ./python/nav_data.py -f ./resources/umaa_components.xml
```

##### Overview:
This will just write an arbitrary value to the `speedThroughWater` value.

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  |  UMAA::SA::SpeedStatus::SpeedReport |

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

#### gui (Python)
--------------------------------------------------------------------------------
##### Options:
```
  -h, --help            show this help message and exit
  -c COMMAND, --command COMMAND
                        Anchor command
  -f FILE, --file FILE  XML Config file
```

Command Values:
- LOWER: 0
- RAISE: 1
- STOP: 2

##### Example for "Raise":

```sh
python python/gui.py -c 1
```

##### Overview:
This can be used to send a command to the anchor controller to "raise"/"lower".

##### Topics:
| Subscribers | Publishers|
| ------------| ------------|
|  |  UMAA::EO::AnchorControl::AnchorCommand |

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

## SCRIPTS

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

**Note: Ensure a pre-processor is in your PATH environment variable.**  
The default is `cpp`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.

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

**Note: Ensure a pre-processor is in your PATH environment variable.**  
The default is `cp.exe`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.


#### Usage

##### Generate in place:

```sh
scripts/convert_umaa_xml.bat
```
- Convert idl files recursively through all sub folders
- Place xml file in same location as idl file.
