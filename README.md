# UMAA CASE+CODE

This repo is intended to hold helper scripts/example applications  
to assist in development when using Connext along with the UMAA standard. 


--------------------------------------------------------------------------------
# SCRIPTS
--------------------------------------------------------------------------------
These scripts are meant to assist in your workflow when generating xml files or  
compiling your type objects.

Tested compatibility:  
- UMAA IDL files: 3.0.1, 5.2.1
- Ubuntu 18.04
- Connext: 6.1.2, 7.2

## LINUX

### 1. Set Environment Variables
- Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable.

- Set the environment variable $NDDSTARGET for your platform. IE:
```sh
export NDDSTARGET=x64Linux4gcc7.3.0
```
- Set the environment variable $UMAA_HOME to the target folder:
```sh
export UMAA_HOME="<PATH_TO_UMAA_IDL_REPO>"
```
**Note: Ensure a pre-processor is in your PATH environment variable.**  
The default is `cpp`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.


### 2. Go to folder
```sh
cd scripts/linux
```

### 3. Create XML type files
**Note: 1-5 minutes**
Run the following command:
```sh
./convert_umaa_xml.sh
```

### 4. Compile Type Objects
**Note: 20-30 minutes**
Run the following script depending on your choice:

#### Modern CPP
```sh
./build_umaa_objects_cpp.sh c++11
```
#### Traditional CPP
```sh
./build_umaa_objects_cpp.sh c++98
```
**Note: The "-qualifiedEnumerator" flag will be added when generating code for c++98.**  
Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.
________________________________________________________________________________

## WINDOWS

### 1. Set Environment Variables

- Make sure you have followed the setup guide for your Connext installation,  
including setting the NDDSHOME variable by running the setup script.

- Set the environment variable $UMAA_HOME to the target folder:
```sh
SET UMAA_HOME="<PATH_TO_UMAA_IDL_REPO>"
```

**Note: Ensure a pre-processor is in your PATH environment variable.**  
The default is `cp.exe`. Reference the [RTI code generator](https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm) documentation for more info.


### 2. Go to folder
```sh
cd scripts\windows
```

### 3. Create XML type files :wrench:

Run the following script:
```sh
gen_all_xml.bat
```

--------------------------------------------------------------------------------
# UMAA Application examples
--------------------------------------------------------------------------------

RTI has developed some example code and xml files for the UMAA SA service as a  
guide to be used when developing against the UMAA standard using Connext.

These examples include the UMAA 3.0.1 release idl files and are intended as a reference only.

Customers are encouraged to reach out to the RTI Services team to assist with any  
implementation of the latest Release which is Distro D(CUI controlled).

XML-based app creation as a framework was chosen for the following reasons:  

- A low code option with entities defined in an external xml artifact that can be  
    managed by a Systems Engineering group  
- XML artifacts can be used in tandem with external tools(Simulink/System Designer)  
- Decouple configuration management from platform/language

Follow the readme in the desired `sa_app_*` folder for more.

--------------------------------------------------------------------------------
# UMAA Infrastructure examples
--------------------------------------------------------------------------------
## Prerequisite
1. Follow the above instructions to set up the environment, compile types, and convert  
the IDL files to XML.

2. Follow the chosen readme to setup and run an example SA Provider service.

3. Navigate to the `UMAA_HOME` directory.
**NOTE: If referencing the type files, the infrastructure service must be run from the `UMAA_HOME` directory.**

--------------------------------------------------------------------------------

## Routing Service
Complete `Prerequisite` above first.

### Use Case:
Segment the internal vehicle databus from the UMAA C2 environment.

This example routes all UMAA::SA topic messages from the vehicle domain to the UMAA domain.

This assists in scenarios where you might want to apply separate QOS  
policies(Security/Transport etc) for internal traffic vs external.

This also improves performance/discovery time by minimizing the amount of endpoints  
on the same databus.

By including the type files for the SA Service and registering them, the reference xml  
file is setup for the scenario where type objects have been disabled from discovery.

#### Run the following command: 
```
rtiroutingservice -cfgFile <PATH_TO_REPO>umaa_case_code/sa_xml/umaa_sa_routing_service.xml -cfgName bridge_vehicle_umaa_sa 
```

--------------------------------------------------------------------------------

## Recording Service
Complete `Prerequisite` above first.

### Use Case:
Record all UMAA::SA messages from the vehicle domain.

This profile is setup to record to the XCDR format. 

If desired, the file can be converted to the JSON format using the RTI converter tool.

By including the type files for the SA Service and registering them, the reference xml  
file is setup for the scenario where type objects have been disabled from discovery.

#### Run the following command: 
```
rtirecordingservice -cfgFile <PATH_TO_REPO>umaa_case_code/sa_xml/umaa_sa_recording_service.xml -cfgName record_vehicle_umaa_sa 
```

--------------------------------------------------------------------------------

## Admin Console
Complete `Prerequisite` above first.

### Use Case:
Use Admin Console to subscribe to your topics when type propagation is disabled.

1. Right click on the desired topic under the DDS "Logical View" perspective in  
the top left corner and select `subscribe`.
2. Add the desired XML type file under the `Types XML files` section.
3. Add the `UMAA_HOME` directory under the `Include Directories` section.

