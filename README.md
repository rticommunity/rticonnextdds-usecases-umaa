# Example Code: UMAA with Compiled and DynamicData types using XML App Creation

The purpose of this example is to demonstrate the use of XML Application Creation
using Compiled and DynamicData types when developing against the UMAA standard.

Language: Modern C++
Tested against Connext PRO 7.1

INTERNAL: Scripts/artifacts related to preparation or deliverables
EXTERNAL: Application code to share as an example

## Building the Example :wrench:

Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable.

### Compiled types
Using rtiddsgen, convert the IDL files to typefiles, and then compile into objects.

### DynamicData types
Using rtiddsgen, convert the IDL files to typefiles to xml files.


To build this example, run make on the included makefile.

```sh
make -f makefile
```

## Running the Example

Run each application in two separate command prompt windows. Run the
following commands from the example directory:

On *UNIX* systems run:

```sh
./sa_provider
```

and on a separate terminal:
```sh
./sa_user
```

If you wish to change the Domain that the application uses, you can change this
in the application.xml file.  Modify the domain_id attribute of the domain.  In
This case the domain id is set to 10, but can be any number from 0-255.

```xml
 <domain name="domain" domain_id="10">
 ```

# NOTES
- For Distro A, modifications have been made to the Common/Measurement/Measurements.idl 
to remove some typos that caused codegen issues. This has been resolved in the latest Distro.