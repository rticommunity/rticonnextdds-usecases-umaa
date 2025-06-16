# XML Defined Component Examples
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

## Use Case
XML definition of DDS entities allows for a single point of configuration/definition  
of a DDS system. 

Applications developed in API's such as C++ or Python can have a single point of reference.

The downside is a close coupling of configs to application development  
which could add additional administrative overhead.
Recommended for large systems where there is a clear delineation between systems and software  engineering.

- Components are defined in `/resources/components`
- UMAA Domain (Topics/Types) is defined in `/resources/domain`
  NOTE: `umaa_domain_lib.xml` is inherited into the component definitions. This file contains all types/topics defined for UMAA 6.0 and can be reused for your own development if desired.  
- QoS profiles are defines in `resources/qos`

All 3 sets of XML files are consumed in the `./start_component.sh` script.

## Types
UMAA defines ~ 600 data types. This is what is used to determine the "structure" of the data being transported.  
With Connext, we use RTI Code Generator `rtiddsgen` ([manual](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/code_generator/users_manual/code_generator/users_manual/UsersManual_Title.htm)) to generate code per the API being used.  
This code assists with construction and serialization/deserialization of these data structures.

### C++11 types
For the C++11 API, we generate helper headers and classes for all of the UMAA types  
and then compile them into a single shared library.

This makes it more convenient to link your source code against when developing.   

In this example we generate all the Type support code into the `datamodel/cpp11_gen` folder and  
then use that code to create a shared lib. 

### Python types
With Python, `rtiddsgen` converts the types into Python modules that we can then reference in our Python scripts.  
For Python types there is a bug in RTIDDSGEN that doesn't resolve the include modules  
paths correctly. (CODEGENII-2112)

The workaround is to export all the modules to a single folder and then we can add them to the `PYTHONPATH`.  
You can find the Python types have been pre-generated and added to the `datamodel/umaa/python_flat` folder for this example.


## Prerequisites
Reference the Connext Getting Started guides to complete the below: 
- Linux-based OS or WSL.
- Connext 7.3.0 Host/Target install
- Python API setup
- [Setup Connext Environment Variables](https://community.rti.com/howto/configuring-environment-rtisetenv-scripts) 

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
### C++ AutoPilot
--------------------------------------------------------------------------------
##### Options:

```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd]
        arg2: Domain ID to override <components>.xml definition
```

##### Example:
```sh
cd example1
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
### Python USVNAV
--------------------------------------------------------------------------------

##### Options:
```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd]
        arg2: Domain ID to override <components>.xml definition
```

##### Example:
```sh
cd example1
./start_component.sh usvnav 1
```

##### Overview:
This reference application provides XML definition for all the entites in 
the UMAA `USVNav` component and showcases accessing those entities to read/write data 

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### Python Logging
--------------------------------------------------------------------------------

##### Options:
```
        arg1: component name: [autopilot, usvnav, logging, globalvectorcmd]
        arg2: Domain ID to override <components>.xml definition
```

##### Example:
```sh
cd example1
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
    arg1: component name: [autopilot, usvnav, logging, globalvectorcmd]
    arg2: Domain ID to override <components>.xml definition
```

##### Example:
```sh
cd example1
./start_component.sh globalvectorcmd
```

##### Overview:
This script publishes messages of the `GlobalVectorCommandType` to reference
reception into the AsyncWaitset of the `AutoPilot` component.
