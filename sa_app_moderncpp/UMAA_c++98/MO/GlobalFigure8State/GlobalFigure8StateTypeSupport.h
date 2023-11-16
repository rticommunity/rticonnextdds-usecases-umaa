
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalFigure8StateTypeSupport_2019986166_h
#define GlobalFigure8StateTypeSupport_2019986166_h

/* Uses */
#include "GlobalFigure8StateType.h"

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
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionTypeSupport, 
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataWriter, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataReader, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionSeq, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union);
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
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeTypeSupport, 
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataWriter, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataReader, UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeSeq, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType);
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* GlobalFigure8StateTypeSupport_2019986166_h */

