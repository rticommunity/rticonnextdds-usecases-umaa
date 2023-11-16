

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypes_846145968_h
#define ConstrainedTypes_846145968_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioSeq, UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_copy(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* dst,
    const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_PrimitiveConstrained_CovarAngleAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_CovarAngleAngleSeq, UMAA_Common_PrimitiveConstrained_CovarAngleAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_copy(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* dst,
    const UMAA_Common_PrimitiveConstrained_CovarAngleAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_PrimitiveConstrained_CovarDisAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_CovarDisAngleSeq, UMAA_Common_PrimitiveConstrained_CovarDisAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_copy(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_PrimitiveConstrained_CovarDisDis ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarDisDis_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_CovarDisDisSeq, UMAA_Common_PrimitiveConstrained_CovarDisDis);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_copy(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisDis* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_PrimitiveConstrained_Left ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_Left_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_Left_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_Left_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_Left_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_LeftSeq, UMAA_Common_PrimitiveConstrained_Left);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize(
    UMAA_Common_PrimitiveConstrained_Left* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize_ex(
    UMAA_Common_PrimitiveConstrained_Left* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_Left* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_Left_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_Left* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_Left_finalize(
    UMAA_Common_PrimitiveConstrained_Left* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_Left_finalize_ex(
    UMAA_Common_PrimitiveConstrained_Left* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_Left_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_Left* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_Left_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_Left* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_Left_copy(
    UMAA_Common_PrimitiveConstrained_Left* dst,
    const UMAA_Common_PrimitiveConstrained_Left* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   UMAA_Common_PrimitiveConstrained_MMSI ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_MMSI_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_MMSI_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_MMSI_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_MMSI_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_MMSISeq, UMAA_Common_PrimitiveConstrained_MMSI);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize(
    UMAA_Common_PrimitiveConstrained_MMSI* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize_ex(
    UMAA_Common_PrimitiveConstrained_MMSI* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_MMSI* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_MMSI* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_MMSI_finalize(
    UMAA_Common_PrimitiveConstrained_MMSI* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(
    UMAA_Common_PrimitiveConstrained_MMSI* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_MMSI* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_MMSI_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_MMSI* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_copy(
    UMAA_Common_PrimitiveConstrained_MMSI* dst,
    const UMAA_Common_PrimitiveConstrained_MMSI* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_PrimitiveConstrained_NanosecondsCount ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_NanosecondsCountSeq, UMAA_Common_PrimitiveConstrained_NanosecondsCount);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_copy(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsCount* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_PrimitiveConstrained_NanosecondsDrift ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_NanosecondsDriftSeq, UMAA_Common_PrimitiveConstrained_NanosecondsDrift);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_copy(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsDrift* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   UMAA_Common_PrimitiveConstrained_StringLongDescription ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_StringLongDescription_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_StringLongDescriptionSeq, UMAA_Common_PrimitiveConstrained_StringLongDescription);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_ex(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_copy(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* dst,
    const UMAA_Common_PrimitiveConstrained_StringLongDescription* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   UMAA_Common_PrimitiveConstrained_StringShortDescription ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_StringShortDescriptionSeq, UMAA_Common_PrimitiveConstrained_StringShortDescription);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_ex(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_copy(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* dst,
    const UMAA_Common_PrimitiveConstrained_StringShortDescription* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Char *   UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierSeq, UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_ex(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_copy(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* dst,
    const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* src);

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

#endif /* ConstrainedTypes */

