
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonStateTypeSupport_2639132_h
#define LocalRegularPolygonStateTypeSupport_2639132_h

/* Uses */
#include "LocalRegularPolygonStateType.h"

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
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionTypeSupport, 
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataWriter, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataReader, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union);
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
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
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeTypeSupport, 
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataWriter, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataReader, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType);
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* LocalRegularPolygonStateTypeSupport_2639132_h */

