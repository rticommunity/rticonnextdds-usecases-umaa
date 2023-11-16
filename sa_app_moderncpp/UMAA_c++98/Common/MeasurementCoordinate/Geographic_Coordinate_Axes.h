

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Geographic_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Geographic_Coordinate_Axes_1573157812_h
#define Geographic_Coordinate_Axes_1573157812_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_EllipsoidalHeight ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_EllipsoidalHeightSeq, UMAA_Common_MeasurementCoordinate_EllipsoidalHeight);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_copy(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* dst,
    const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_GeodeticLatitude ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_GeodeticLatitudeSeq, UMAA_Common_MeasurementCoordinate_GeodeticLatitude);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_copy(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLatitude* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_GeodeticLongitude ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_GeodeticLongitudeSeq, UMAA_Common_MeasurementCoordinate_GeodeticLongitude);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_copy(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLongitude* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_MSLHeight ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_MSLHeight_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_MSLHeight_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_MSLHeight_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_MSLHeight_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_MSLHeightSeq, UMAA_Common_MeasurementCoordinate_MSLHeight);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_MSLHeight* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_copy(
    UMAA_Common_MeasurementCoordinate_MSLHeight* dst,
    const UMAA_Common_MeasurementCoordinate_MSLHeight* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
    } 
}

#endif

#endif /* Geographic_Coordinate_Axes */

