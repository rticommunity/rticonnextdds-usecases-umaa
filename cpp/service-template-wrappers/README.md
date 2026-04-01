# Composed UMAA Service Template Classes
This example creates template classes to generate the readers/writers per UMAA Service.  

It allows for an architecture where a UMAA component can be "composed" of multiple   
UMAA Services as needed.  

> **Note:** This example only instantiates DDS entities (readers, writers, participants) and does not implement UMAA application layer requirements such as Flow Control, Large Collections, or Generalizations/Specializations. It is intended as an alternative framework approach to the official UMAA C++ SDKs released by AUVSI.

Once a UMAA service has been created, each DDS reader/writer entity is exposed and can be used as desired.  

This example also includes usage of Connext's AsyncWaitset which provides a convenient mechanism to   
manage multithreaded Waitsets.

*NOTE: When testing, use with XML App Framework's Python scripts to simulate `USVNAV` etc.*

## Use case
Composing the UMAA components from template UMAA service classes allows for a combination of   
reusability as well as conformance to the UMAA system design.

## C++11 types
For the C++11 API, we generate helper headers and classes for all of the UMAA types  
and then compile them into a single shared library.

This makes it more convenient to link your source code against when developing.   

In this example we generate all the Type support code into the `build/umaa_cpp11_gen` folder and  
then use that code to create a shared lib.  

## Setup
Reference the [Connext Getting Started](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/getting_started_guide/index.html) guides to complete the below: 
- Linux-based OS or WSL.
- Connext 7.3.0 Host/Target install
- Python API setup
- [Setup Connext Environment Variables](https://community.rti.com/howto/configuring-environment-rtisetenv-scripts)  

## Tested compatibility
- Ubuntu 20.04
- Connext 6.1.2(C++11)/Connext 7.3.0(C++11,Python)

## Build
See the [top-level README build instructions](../../README.md#build-system-architecture) for cloning, environment setup, and building.

To build just this example:
```sh
cd build
make service_autopilot
```

Executable is output to: `build/cpp/service-template-wrappers/service_autopilot`

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
### C++ AutoPilot
--------------------------------------------------------------------------------
##### Options:

```
        arg1: component name: [autopilot]
        arg2: Domain ID to override <components>.xml definition
```

##### Example:
```sh
cd cpp/service-template-wrappers
./start_component.sh autopilot 1
```
