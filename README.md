# UMAA CASE+CODE

Tested compatibility: Connext Pro 7.2

## Linux
Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable.

- Set the environment variable $NDDSTARGET for your platform. IE:
```sh
export NDDSTARGET=x64Linux4gcc7.3.0
```
- Ensure a pre-processor is in your PATH environment variable.
The default is `cpp`. Reference the RTI Code Generator documentation for details.

### Modern C++
Navigate to the folder `modern_cpp`

Set the environment variable $UMAA_HOME for this folder. IE:
```sh
export UMAA_HOME="PATH_TO_FOLDER"/modern_cpp
```

#### Compiling Type Objects :wrench:
Run the following script:
```sh
./scripts/build_umaa_objects_cpp11.sh
```

#### Creating XML type files :wrench:
Run the following command:
```sh
rtiddsgen -I ./ -convertToXML -inputIDL ./ -r
```

#### Build example application :wrench:
The purpose of this example is to demonstrate the use of XML Application Creation
using Compiled and DynamicData types when developing against the UMAA standard.

This example has been developed as a simple User and Provider for the SA Service.

**NOTE: Complete both previous steps for Compiled Types and XML Types before running example.**

To build, run make on the included makefile.

```sh
make -f makefile
```
#### Running the Example

Run each application in two separate command prompt windows. Run the
following commands from the example directory:

On *UNIX* systems run:

```sh
./objs/<architecture>/sa_provider
```

and on a separate terminal:
```sh
./objs/<architecture>/sa_user
```

### Traditional C++
Navigate to the folder `trad_cpp`

Set the environment variable $UMAA_HOME for this folder. IE:
```sh
export UMAA_HOME="PATH_TO_FOLDER"/trad_cpp
```

#### Compiling Type Objects :wrench:
Run the following script:
```sh
./scripts/build_umaa_objects_cpp98.sh
```
**NOTE: Enums are converted to using fully qualified names with the `-qualifiedEnumerater` flag.
Reference the RTI Code Generator documentation for details.**

#### Creating XML type files :wrench:
Run the following command:
```sh
rtiddsgen -I ./ -convertToXML -inputIDL ./ -r
```

## Windows

Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable by running the setup script.

- Ensure a pre-processor is in your PATH environment variable.
The default is `cp.exe`. Reference the RTI Code Generator documentation for details.

Set the environment variable $UMAA_HOME for the desired working folder. IE:
```sh
export UMAA_HOME="PATH_TO_FOLDER"/WINDOWS
```

#### Creating XML type files :wrench:
Run the following script:
```sh
gen_all_xml.bat
```



# INTERNAL
Folder for internal scripts to generate customer deliverables.

## NOTES
- For Distro A, modifications have been made to the Common/Measurement/Measurements.idl 
to remove some typos that caused codegen issues. This has been resolved in the latest Distro.
- The recursion flag `-r` on `rtiddsgen` has an open JIRA(CODEGENII-1991) that when generating makefiles the paths
for dependencies aren't correct. The current workaround is the scripts until that get's resolved.
If someone wants to just generate the types without using the makefiles the recursion is faster.