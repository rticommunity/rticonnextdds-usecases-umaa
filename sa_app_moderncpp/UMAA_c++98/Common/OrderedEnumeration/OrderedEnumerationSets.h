

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrderedEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrderedEnumerationSets_1072805935_h
#define OrderedEnumerationSets_1072805935_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"
#undef ERROR 
#undef VARIABLE_PITCH 
#undef DELETE 
#undef PLATFORM 

typedef enum UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType
{
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_OVERCAST , 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_BROKEN , 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_FEW , 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_SCATTERED , 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_CLEAR 
} UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeSeq, UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_copy(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* dst,
    const UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType
{
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_GLOSSY , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_RIPPLED , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_HIGH , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_MODERATE , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_PHENOMENAL , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_ROUGH , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_SLIGHT , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_SMOOTH , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_VERY_HIGH , 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_VERY_ROUGH 
} UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeSeq, UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_copy(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* dst,
    const UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef enum UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType
{
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_EXTREME , 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_LIGHT , 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_MODERATE , 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_SEVERE , 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_NONE 
} UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeSeq, UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_copy(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* dst,
    const UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* src);

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

#endif /* OrderedEnumerationSets */

