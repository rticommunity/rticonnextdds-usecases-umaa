# UMAA CASE+CODE

Tested compatibility: Connext Pro 7.2
UMAA Distro included:  A (For public use)

This repo is intended to hold example applications and helper scripts 
to assist in development with Connext along with UMAA compliance.

These examples are to be used as a reference only. 
Customers are encouraged to reach out to the Services team to assist with any 
implementation of the latest Distro which is CUI controlled.

XML-based app creation as a framework was chosen for the following reasons:
- Low code option with entities defined in an external xml artifact that can be 
    managed by a Systems Engineering group
- XML artifacts can be used in tandem with external tools(Cameo/Simulink)
- XML file can be used as a deliverable by the Services team when recommending
    QOS profiles per topic (Not defined in UMAA)
- Market differentiator vs Open Source

The *EXTERNAL* folder's intention is to be migrated to the public git repo.

The *INTERNAL* folder is to hold any scripts or artifacts to be used in generation
of deliverables (XML files etc.)



--------------------------------------------------------------------------------
# EXTERNAL
--------------------------------------------------------------------------------

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
**NOTE: Enums are converted to using fully qualified names with the 
    `-qualifiedEnumerater` flag.
Reference the RTI Code Generator documentation for details.**

#### Creating XML type files :wrench:
Run the following command:
```sh
rtiddsgen -I ./ -convertToXML -inputIDL ./ -r
```
--------------------------------------------------------------------------------

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

--------------------------------------------------------------------------------
# INTERNAL
--------------------------------------------------------------------------------

## NOTES
- For Distro A, modifications have been made to the Common/Measurement/Measurements.idl 
to remove some typos that caused codegen issues. This has been resolved in the latest Distro.

- The recursion flag `-r` on `rtiddsgen` has an open JIRA(CODEGENII-1991) that 
when generating makefiles the paths for dependencies aren't correct. The current 
workaround is the created scripts until that get's resolved.
If someone wants to just generate the types without using the makefiles the recursion is faster.