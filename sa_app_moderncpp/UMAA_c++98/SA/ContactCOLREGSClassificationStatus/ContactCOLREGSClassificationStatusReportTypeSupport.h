
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCOLREGSClassificationStatusReportTypeSupport_167947414_h
#define ContactCOLREGSClassificationStatusReportTypeSupport_167947414_h

/* Uses */
#include "ContactCOLREGSClassificationStatusReportType.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_CPP(
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeTypeSupport, 
    UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataWriter, UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeDataReader, UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportTypeSeq, UMAA_SA_ContactCOLREGSClassificationStatus_ContactCOLREGSClassificationStatusReportType);
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* ContactCOLREGSClassificationStatusReportTypeSupport_167947414_h */

