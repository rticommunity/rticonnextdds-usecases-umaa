

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Engineering_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Engineering_Coordinate_Axes_1406803632_h
#define Engineering_Coordinate_Axes_1406803632_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_DateTime ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_DateTime_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_DateTime_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DateTime_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DateTime_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_DateTimeSeq, UMAA_Common_MeasurementCoordinate_DateTime);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize(
    UMAA_Common_MeasurementCoordinate_DateTime* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize_ex(
    UMAA_Common_MeasurementCoordinate_DateTime* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_DateTime* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_DateTime* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DateTime_finalize(
    UMAA_Common_MeasurementCoordinate_DateTime* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(
    UMAA_Common_MeasurementCoordinate_DateTime* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_DateTime* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DateTime_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_DateTime* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_copy(
    UMAA_Common_MeasurementCoordinate_DateTime* dst,
    const UMAA_Common_MeasurementCoordinate_DateTime* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_Down ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Down_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Down_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Down_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Down_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_DownSeq, UMAA_Common_MeasurementCoordinate_Down);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize(
    UMAA_Common_MeasurementCoordinate_Down* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Down* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Down* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Down_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Down* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Down_finalize(
    UMAA_Common_MeasurementCoordinate_Down* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Down_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Down* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Down_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Down* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Down_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Down* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Down_copy(
    UMAA_Common_MeasurementCoordinate_Down* dst,
    const UMAA_Common_MeasurementCoordinate_Down* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_DownSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_DownSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_DownSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DownSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DownSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_DownSpeedSeq, UMAA_Common_MeasurementCoordinate_DownSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_DownSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_copy(
    UMAA_Common_MeasurementCoordinate_DownSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_DownSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_EastSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_EastSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_EastSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EastSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EastSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_EastSpeedSeq, UMAA_Common_MeasurementCoordinate_EastSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_EastSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_copy(
    UMAA_Common_MeasurementCoordinate_EastSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_EastSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_Forward ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Forward_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Forward_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Forward_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Forward_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_ForwardSeq, UMAA_Common_MeasurementCoordinate_Forward);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize(
    UMAA_Common_MeasurementCoordinate_Forward* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Forward* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Forward* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Forward_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Forward* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Forward_finalize(
    UMAA_Common_MeasurementCoordinate_Forward* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Forward* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Forward* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Forward_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Forward* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Forward_copy(
    UMAA_Common_MeasurementCoordinate_Forward* dst,
    const UMAA_Common_MeasurementCoordinate_Forward* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_ForwardSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_ForwardSpeedSeq, UMAA_Common_MeasurementCoordinate_ForwardSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_copy(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_ForwardSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_NorthSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_NorthSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_NorthSpeedSeq, UMAA_Common_MeasurementCoordinate_NorthSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_copy(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_NorthSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_RadarHeight ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_RadarHeight_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_RadarHeight_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RadarHeight_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RadarHeight_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_RadarHeightSeq, UMAA_Common_MeasurementCoordinate_RadarHeight);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_RadarHeight* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_copy(
    UMAA_Common_MeasurementCoordinate_RadarHeight* dst,
    const UMAA_Common_MeasurementCoordinate_RadarHeight* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_Right ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Right_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Right_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Right_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Right_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_RightSeq, UMAA_Common_MeasurementCoordinate_Right);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize(
    UMAA_Common_MeasurementCoordinate_Right* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Right* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Right* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Right_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Right* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Right_finalize(
    UMAA_Common_MeasurementCoordinate_Right* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Right_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Right* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Right_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Right* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_Right_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Right* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_Right_copy(
    UMAA_Common_MeasurementCoordinate_Right* dst,
    const UMAA_Common_MeasurementCoordinate_Right* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_MeasurementCoordinate_RightSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_MeasurementCoordinate_RightSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_RightSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RightSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RightSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_MeasurementCoordinate_RightSpeedSeq, UMAA_Common_MeasurementCoordinate_RightSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_RightSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_copy(
    UMAA_Common_MeasurementCoordinate_RightSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_RightSpeed* src);

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

#endif /* Engineering_Coordinate_Axes */

