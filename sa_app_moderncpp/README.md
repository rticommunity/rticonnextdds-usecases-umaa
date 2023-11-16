# UMAA CASE+CODE (UMAA 3.0.1) Modern CPP


The purpose of this example is to demonstrate the use of XML Application Creation  
using Compiled and DynamicData types when developing against the UMAA standard.  

This example has been developed as a simple User and Provider for the SA Service.  

The UMAA Type file folders(UMAA, BasicTypes) need to be in the working directory  
of the application to allow for the include paths to work.

This example includes the UMAA 3.0.1 release idl files and is intended as a reference only.

Customers are encouraged to reach out to the Services team to assist with any  
implementation of the latest Release which is Distro D(CUI controlled).  

## Linux- Modern CPP

### 1. Prepare environment

Set the $UMAA_HOME environment variable to this directory.  

Complete all the steps at the top level readme folder for the Linux environment.  

Make sure you convert the IDL files to xml as well as compile the type objects   
to c++11 using the helper scripts  

### 2. Build application :wrench:

To build, run make on the included makefile.

```sh
make -f makefile
```

### 3. Run the Example
Run each application in two separate command prompt windows.

On *UNIX* systems run:

```sh
./objs/<architecture>/sa_provider
```

and on a separate terminal:
```sh
./objs/<architecture>/sa_user
```

## NOTES
- For UMAA 3.0.1, modifications have been made to the Common/Measurement/Measurements.idl 
to remove some typos that caused codegen issues. This has been resolved in the latest Release.