# Composed UMAA Service Template Classes
This example creates template classes to generate the readers/writers per UMAA Service.
This allows for an architecture where a UMAA component can be "composed" of multiple  
UMAA Services as needed.
Once a UMAA service has been created, each DDS reader/writer entity is exposed and can be used as desired.  
This example also includes usage of Connext's AsyncWaitset which provides a convenient mechanism to  
manage multithreaded Waitsets.

NOTE: When testing, use with Example1's Python scripts to simulate `USVNAV` etc.

## Use case
Composing the UMAA components from template UMAA service classes as needed allows for a combination of reusability as well as conformance to the UMAA system design.

## C++11 types
For the C++11 API, we generate helper headers and classes for all of the UMAA types  
and then compile them into a single shared library.

This makes it more convenient to link your source code against when developing.   

In this example we generate all the Type support code into the `datamodel/cpp11_gen` folder and  
then use that code to create a shared lib.  

## Prerequisites
Reference the Connext Getting Started guides to complete the below: 
- Linux-based OS or WSL.
- Connext 7.3.0 Host/Target install
- Python API setup
- [Setup Connext Environment Variables](https://community.rti.com/howto/configuring-environment-rtisetenv-scripts)  

## Tested compatibility
- Ubuntu 20.04
- Connext 6.1.2(C++11)/Connext 7.3.0(C++11,Python)

## Cloning Repository
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

## Configure
```sh
cd examples/
cmake -B build -DCMAKE_BUILD_TYPE=Release
```

## Build
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
        arg1: component name: [autopilot] \n
        arg2: Domain ID to override <components>.xml definition \n
```

##### Example:
```sh
cd examples
.start_component autopilot 1
```
