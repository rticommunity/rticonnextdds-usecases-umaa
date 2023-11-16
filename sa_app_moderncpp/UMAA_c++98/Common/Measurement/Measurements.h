

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Measurements_576961936_h
#define Measurements_576961936_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_Measurement_AngleAcceleration ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_AngleAcceleration_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_AngleAcceleration_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleAcceleration_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleAcceleration_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AngleAccelerationSeq, UMAA_Common_Measurement_AngleAcceleration);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize(
    UMAA_Common_Measurement_AngleAcceleration* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize_ex(
    UMAA_Common_Measurement_AngleAcceleration* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize_w_params(
    UMAA_Common_Measurement_AngleAcceleration* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleAcceleration_finalize_w_return(
    UMAA_Common_Measurement_AngleAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleAcceleration_finalize(
    UMAA_Common_Measurement_AngleAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleAcceleration_finalize_ex(
    UMAA_Common_Measurement_AngleAcceleration* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleAcceleration_finalize_w_params(
    UMAA_Common_Measurement_AngleAcceleration* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_AngleAcceleration* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleAcceleration_copy(
    UMAA_Common_Measurement_AngleAcceleration* dst,
    const UMAA_Common_Measurement_AngleAcceleration* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_AnglePosition ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_AnglePosition_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_AnglePosition_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AnglePosition_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AnglePosition_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AnglePositionSeq, UMAA_Common_Measurement_AnglePosition);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AnglePosition_initialize(
    UMAA_Common_Measurement_AnglePosition* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AnglePosition_initialize_ex(
    UMAA_Common_Measurement_AnglePosition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AnglePosition_initialize_w_params(
    UMAA_Common_Measurement_AnglePosition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AnglePosition_finalize_w_return(
    UMAA_Common_Measurement_AnglePosition* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AnglePosition_finalize(
    UMAA_Common_Measurement_AnglePosition* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AnglePosition_finalize_ex(
    UMAA_Common_Measurement_AnglePosition* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_AnglePosition_finalize_w_params(
    UMAA_Common_Measurement_AnglePosition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_AnglePosition_finalize_optional_members(
    UMAA_Common_Measurement_AnglePosition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AnglePosition_copy(
    UMAA_Common_Measurement_AnglePosition* dst,
    const UMAA_Common_Measurement_AnglePosition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Charge ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Charge_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Charge_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Charge_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Charge_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ChargeSeq, UMAA_Common_Measurement_Charge);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Charge_initialize(
    UMAA_Common_Measurement_Charge* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Charge_initialize_ex(
    UMAA_Common_Measurement_Charge* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Charge_initialize_w_params(
    UMAA_Common_Measurement_Charge* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Charge_finalize_w_return(
    UMAA_Common_Measurement_Charge* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Charge_finalize(
    UMAA_Common_Measurement_Charge* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Charge_finalize_ex(
    UMAA_Common_Measurement_Charge* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Charge_finalize_w_params(
    UMAA_Common_Measurement_Charge* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Charge_finalize_optional_members(
    UMAA_Common_Measurement_Charge* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Charge_copy(
    UMAA_Common_Measurement_Charge* dst,
    const UMAA_Common_Measurement_Charge* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Conductivity ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Conductivity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Conductivity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Conductivity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Conductivity_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ConductivitySeq, UMAA_Common_Measurement_Conductivity);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Conductivity_initialize(
    UMAA_Common_Measurement_Conductivity* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Conductivity_initialize_ex(
    UMAA_Common_Measurement_Conductivity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Conductivity_initialize_w_params(
    UMAA_Common_Measurement_Conductivity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Conductivity_finalize_w_return(
    UMAA_Common_Measurement_Conductivity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Conductivity_finalize(
    UMAA_Common_Measurement_Conductivity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Conductivity_finalize_ex(
    UMAA_Common_Measurement_Conductivity* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Conductivity_finalize_w_params(
    UMAA_Common_Measurement_Conductivity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Conductivity_finalize_optional_members(
    UMAA_Common_Measurement_Conductivity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Conductivity_copy(
    UMAA_Common_Measurement_Conductivity* dst,
    const UMAA_Common_Measurement_Conductivity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_DataTransferRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_DataTransferRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_DataTransferRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DataTransferRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DataTransferRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DataTransferRateSeq, UMAA_Common_Measurement_DataTransferRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DataTransferRate_initialize(
    UMAA_Common_Measurement_DataTransferRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DataTransferRate_initialize_ex(
    UMAA_Common_Measurement_DataTransferRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DataTransferRate_initialize_w_params(
    UMAA_Common_Measurement_DataTransferRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DataTransferRate_finalize_w_return(
    UMAA_Common_Measurement_DataTransferRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DataTransferRate_finalize(
    UMAA_Common_Measurement_DataTransferRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DataTransferRate_finalize_ex(
    UMAA_Common_Measurement_DataTransferRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_DataTransferRate_finalize_w_params(
    UMAA_Common_Measurement_DataTransferRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_DataTransferRate_finalize_optional_members(
    UMAA_Common_Measurement_DataTransferRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DataTransferRate_copy(
    UMAA_Common_Measurement_DataTransferRate* dst,
    const UMAA_Common_Measurement_DataTransferRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Distance_ASF ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Distance_ASF_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_ASF_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_ASF_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_ASF_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Distance_ASFSeq, UMAA_Common_Measurement_Distance_ASF);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_ASF_initialize(
    UMAA_Common_Measurement_Distance_ASF* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_ASF_initialize_ex(
    UMAA_Common_Measurement_Distance_ASF* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_ASF_initialize_w_params(
    UMAA_Common_Measurement_Distance_ASF* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_ASF_finalize_w_return(
    UMAA_Common_Measurement_Distance_ASF* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_ASF_finalize(
    UMAA_Common_Measurement_Distance_ASF* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_ASF_finalize_ex(
    UMAA_Common_Measurement_Distance_ASF* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_ASF_finalize_w_params(
    UMAA_Common_Measurement_Distance_ASF* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_ASF_finalize_optional_members(
    UMAA_Common_Measurement_Distance_ASF* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_ASF_copy(
    UMAA_Common_Measurement_Distance_ASF* dst,
    const UMAA_Common_Measurement_Distance_ASF* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Distance_BSL ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Distance_BSL_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_BSL_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_BSL_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_BSL_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Distance_BSLSeq, UMAA_Common_Measurement_Distance_BSL);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_BSL_initialize(
    UMAA_Common_Measurement_Distance_BSL* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_BSL_initialize_ex(
    UMAA_Common_Measurement_Distance_BSL* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_BSL_initialize_w_params(
    UMAA_Common_Measurement_Distance_BSL* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_BSL_finalize_w_return(
    UMAA_Common_Measurement_Distance_BSL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_BSL_finalize(
    UMAA_Common_Measurement_Distance_BSL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_BSL_finalize_ex(
    UMAA_Common_Measurement_Distance_BSL* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_BSL_finalize_w_params(
    UMAA_Common_Measurement_Distance_BSL* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_BSL_finalize_optional_members(
    UMAA_Common_Measurement_Distance_BSL* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_BSL_copy(
    UMAA_Common_Measurement_Distance_BSL* dst,
    const UMAA_Common_Measurement_Distance_BSL* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Effort ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Effort_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Effort_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Effort_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Effort_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_EffortSeq, UMAA_Common_Measurement_Effort);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Effort_initialize(
    UMAA_Common_Measurement_Effort* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Effort_initialize_ex(
    UMAA_Common_Measurement_Effort* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Effort_initialize_w_params(
    UMAA_Common_Measurement_Effort* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Effort_finalize_w_return(
    UMAA_Common_Measurement_Effort* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Effort_finalize(
    UMAA_Common_Measurement_Effort* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Effort_finalize_ex(
    UMAA_Common_Measurement_Effort* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Effort_finalize_w_params(
    UMAA_Common_Measurement_Effort* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Effort_finalize_optional_members(
    UMAA_Common_Measurement_Effort* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Effort_copy(
    UMAA_Common_Measurement_Effort* dst,
    const UMAA_Common_Measurement_Effort* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Energy_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Energy_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Energy_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Energy_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Energy_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Energy_PercentSeq, UMAA_Common_Measurement_Energy_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Energy_Percent_initialize(
    UMAA_Common_Measurement_Energy_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Energy_Percent_initialize_ex(
    UMAA_Common_Measurement_Energy_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Energy_Percent_initialize_w_params(
    UMAA_Common_Measurement_Energy_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Energy_Percent_finalize_w_return(
    UMAA_Common_Measurement_Energy_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Energy_Percent_finalize(
    UMAA_Common_Measurement_Energy_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Energy_Percent_finalize_ex(
    UMAA_Common_Measurement_Energy_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Energy_Percent_finalize_w_params(
    UMAA_Common_Measurement_Energy_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Energy_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Energy_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Energy_Percent_copy(
    UMAA_Common_Measurement_Energy_Percent* dst,
    const UMAA_Common_Measurement_Energy_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_FrameRateFPS ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_FrameRateFPS_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_FrameRateFPS_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrameRateFPS_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrameRateFPS_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_FrameRateFPSSeq, UMAA_Common_Measurement_FrameRateFPS);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize(
    UMAA_Common_Measurement_FrameRateFPS* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize_ex(
    UMAA_Common_Measurement_FrameRateFPS* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize_w_params(
    UMAA_Common_Measurement_FrameRateFPS* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrameRateFPS_finalize_w_return(
    UMAA_Common_Measurement_FrameRateFPS* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrameRateFPS_finalize(
    UMAA_Common_Measurement_FrameRateFPS* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrameRateFPS_finalize_ex(
    UMAA_Common_Measurement_FrameRateFPS* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrameRateFPS_finalize_w_params(
    UMAA_Common_Measurement_FrameRateFPS* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrameRateFPS_finalize_optional_members(
    UMAA_Common_Measurement_FrameRateFPS* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrameRateFPS_copy(
    UMAA_Common_Measurement_FrameRateFPS* dst,
    const UMAA_Common_Measurement_FrameRateFPS* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_FrequencyRPM ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_FrequencyRPM_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_FrequencyRPM_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrequencyRPM_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrequencyRPM_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_FrequencyRPMSeq, UMAA_Common_Measurement_FrequencyRPM);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize(
    UMAA_Common_Measurement_FrequencyRPM* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize_ex(
    UMAA_Common_Measurement_FrequencyRPM* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize_w_params(
    UMAA_Common_Measurement_FrequencyRPM* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrequencyRPM_finalize_w_return(
    UMAA_Common_Measurement_FrequencyRPM* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrequencyRPM_finalize(
    UMAA_Common_Measurement_FrequencyRPM* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrequencyRPM_finalize_ex(
    UMAA_Common_Measurement_FrequencyRPM* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrequencyRPM_finalize_w_params(
    UMAA_Common_Measurement_FrequencyRPM* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_FrequencyRPM_finalize_optional_members(
    UMAA_Common_Measurement_FrequencyRPM* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FrequencyRPM_copy(
    UMAA_Common_Measurement_FrequencyRPM* dst,
    const UMAA_Common_Measurement_FrequencyRPM* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Heading_CurrentDirection ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Heading_CurrentDirection_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_CurrentDirection_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_CurrentDirection_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_CurrentDirection_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Heading_CurrentDirectionSeq, UMAA_Common_Measurement_Heading_CurrentDirection);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize(
    UMAA_Common_Measurement_Heading_CurrentDirection* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize_ex(
    UMAA_Common_Measurement_Heading_CurrentDirection* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize_w_params(
    UMAA_Common_Measurement_Heading_CurrentDirection* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_return(
    UMAA_Common_Measurement_Heading_CurrentDirection* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_CurrentDirection_finalize(
    UMAA_Common_Measurement_Heading_CurrentDirection* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(
    UMAA_Common_Measurement_Heading_CurrentDirection* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params(
    UMAA_Common_Measurement_Heading_CurrentDirection* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_optional_members(
    UMAA_Common_Measurement_Heading_CurrentDirection* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_copy(
    UMAA_Common_Measurement_Heading_CurrentDirection* dst,
    const UMAA_Common_Measurement_Heading_CurrentDirection* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Heading_MagneticNorth ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Heading_MagneticNorth_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_MagneticNorth_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_MagneticNorth_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_MagneticNorth_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Heading_MagneticNorthSeq, UMAA_Common_Measurement_Heading_MagneticNorth);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize(
    UMAA_Common_Measurement_Heading_MagneticNorth* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize_ex(
    UMAA_Common_Measurement_Heading_MagneticNorth* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize_w_params(
    UMAA_Common_Measurement_Heading_MagneticNorth* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_return(
    UMAA_Common_Measurement_Heading_MagneticNorth* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_MagneticNorth_finalize(
    UMAA_Common_Measurement_Heading_MagneticNorth* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(
    UMAA_Common_Measurement_Heading_MagneticNorth* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params(
    UMAA_Common_Measurement_Heading_MagneticNorth* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_optional_members(
    UMAA_Common_Measurement_Heading_MagneticNorth* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_copy(
    UMAA_Common_Measurement_Heading_MagneticNorth* dst,
    const UMAA_Common_Measurement_Heading_MagneticNorth* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Heading_WindDirection ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Heading_WindDirection_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_WindDirection_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_WindDirection_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_WindDirection_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Heading_WindDirectionSeq, UMAA_Common_Measurement_Heading_WindDirection);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize(
    UMAA_Common_Measurement_Heading_WindDirection* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize_ex(
    UMAA_Common_Measurement_Heading_WindDirection* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize_w_params(
    UMAA_Common_Measurement_Heading_WindDirection* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_WindDirection_finalize_w_return(
    UMAA_Common_Measurement_Heading_WindDirection* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_WindDirection_finalize(
    UMAA_Common_Measurement_Heading_WindDirection* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(
    UMAA_Common_Measurement_Heading_WindDirection* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params(
    UMAA_Common_Measurement_Heading_WindDirection* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_WindDirection_finalize_optional_members(
    UMAA_Common_Measurement_Heading_WindDirection* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_WindDirection_copy(
    UMAA_Common_Measurement_Heading_WindDirection* dst,
    const UMAA_Common_Measurement_Heading_WindDirection* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Mass_MetricTon ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Mass_MetricTon_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Mass_MetricTon_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_MetricTon_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_MetricTon_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Mass_MetricTonSeq, UMAA_Common_Measurement_Mass_MetricTon);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize(
    UMAA_Common_Measurement_Mass_MetricTon* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize_ex(
    UMAA_Common_Measurement_Mass_MetricTon* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize_w_params(
    UMAA_Common_Measurement_Mass_MetricTon* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_MetricTon_finalize_w_return(
    UMAA_Common_Measurement_Mass_MetricTon* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_MetricTon_finalize(
    UMAA_Common_Measurement_Mass_MetricTon* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(
    UMAA_Common_Measurement_Mass_MetricTon* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params(
    UMAA_Common_Measurement_Mass_MetricTon* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_MetricTon_finalize_optional_members(
    UMAA_Common_Measurement_Mass_MetricTon* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_MetricTon_copy(
    UMAA_Common_Measurement_Mass_MetricTon* dst,
    const UMAA_Common_Measurement_Mass_MetricTon* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_MassFlowRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_MassFlowRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_MassFlowRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MassFlowRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MassFlowRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_MassFlowRateSeq, UMAA_Common_Measurement_MassFlowRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MassFlowRate_initialize(
    UMAA_Common_Measurement_MassFlowRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MassFlowRate_initialize_ex(
    UMAA_Common_Measurement_MassFlowRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MassFlowRate_initialize_w_params(
    UMAA_Common_Measurement_MassFlowRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MassFlowRate_finalize_w_return(
    UMAA_Common_Measurement_MassFlowRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_MassFlowRate_finalize(
    UMAA_Common_Measurement_MassFlowRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_MassFlowRate_finalize_ex(
    UMAA_Common_Measurement_MassFlowRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_MassFlowRate_finalize_w_params(
    UMAA_Common_Measurement_MassFlowRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_MassFlowRate_finalize_optional_members(
    UMAA_Common_Measurement_MassFlowRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MassFlowRate_copy(
    UMAA_Common_Measurement_MassFlowRate* dst,
    const UMAA_Common_Measurement_MassFlowRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    BasicTypes_Quaternion   UMAA_Common_Measurement_OrientationQuaternion ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_OrientationQuaternion_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_OrientationQuaternion_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_OrientationQuaternion_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_OrientationQuaternion_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_OrientationQuaternionSeq, UMAA_Common_Measurement_OrientationQuaternion);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize(
    UMAA_Common_Measurement_OrientationQuaternion* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize_ex(
    UMAA_Common_Measurement_OrientationQuaternion* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize_w_params(
    UMAA_Common_Measurement_OrientationQuaternion* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_OrientationQuaternion_finalize_w_return(
    UMAA_Common_Measurement_OrientationQuaternion* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_OrientationQuaternion_finalize(
    UMAA_Common_Measurement_OrientationQuaternion* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(
    UMAA_Common_Measurement_OrientationQuaternion* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params(
    UMAA_Common_Measurement_OrientationQuaternion* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_OrientationQuaternion_finalize_optional_members(
    UMAA_Common_Measurement_OrientationQuaternion* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_OrientationQuaternion_copy(
    UMAA_Common_Measurement_OrientationQuaternion* dst,
    const UMAA_Common_Measurement_OrientationQuaternion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_PositiveCount ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PositiveCount_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PositiveCount_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PositiveCount_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PositiveCount_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PositiveCountSeq, UMAA_Common_Measurement_PositiveCount);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PositiveCount_initialize(
    UMAA_Common_Measurement_PositiveCount* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PositiveCount_initialize_ex(
    UMAA_Common_Measurement_PositiveCount* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PositiveCount_initialize_w_params(
    UMAA_Common_Measurement_PositiveCount* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PositiveCount_finalize_w_return(
    UMAA_Common_Measurement_PositiveCount* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PositiveCount_finalize(
    UMAA_Common_Measurement_PositiveCount* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PositiveCount_finalize_ex(
    UMAA_Common_Measurement_PositiveCount* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PositiveCount_finalize_w_params(
    UMAA_Common_Measurement_PositiveCount* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PositiveCount_finalize_optional_members(
    UMAA_Common_Measurement_PositiveCount* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PositiveCount_copy(
    UMAA_Common_Measurement_PositiveCount* dst,
    const UMAA_Common_Measurement_PositiveCount* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Power_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Power_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Power_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Power_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Power_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Power_PercentSeq, UMAA_Common_Measurement_Power_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Power_Percent_initialize(
    UMAA_Common_Measurement_Power_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Power_Percent_initialize_ex(
    UMAA_Common_Measurement_Power_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Power_Percent_initialize_w_params(
    UMAA_Common_Measurement_Power_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Power_Percent_finalize_w_return(
    UMAA_Common_Measurement_Power_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Power_Percent_finalize(
    UMAA_Common_Measurement_Power_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Power_Percent_finalize_ex(
    UMAA_Common_Measurement_Power_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Power_Percent_finalize_w_params(
    UMAA_Common_Measurement_Power_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Power_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Power_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Power_Percent_copy(
    UMAA_Common_Measurement_Power_Percent* dst,
    const UMAA_Common_Measurement_Power_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Pressure_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Pressure_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Pressure_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Pressure_PercentSeq, UMAA_Common_Measurement_Pressure_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize(
    UMAA_Common_Measurement_Pressure_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize_ex(
    UMAA_Common_Measurement_Pressure_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize_w_params(
    UMAA_Common_Measurement_Pressure_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_Percent_finalize_w_return(
    UMAA_Common_Measurement_Pressure_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_Percent_finalize(
    UMAA_Common_Measurement_Pressure_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_Percent_finalize_ex(
    UMAA_Common_Measurement_Pressure_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_Percent_finalize_w_params(
    UMAA_Common_Measurement_Pressure_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Pressure_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_Percent_copy(
    UMAA_Common_Measurement_Pressure_Percent* dst,
    const UMAA_Common_Measurement_Pressure_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Salinity ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Salinity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Salinity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Salinity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Salinity_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_SalinitySeq, UMAA_Common_Measurement_Salinity);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Salinity_initialize(
    UMAA_Common_Measurement_Salinity* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Salinity_initialize_ex(
    UMAA_Common_Measurement_Salinity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Salinity_initialize_w_params(
    UMAA_Common_Measurement_Salinity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Salinity_finalize_w_return(
    UMAA_Common_Measurement_Salinity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Salinity_finalize(
    UMAA_Common_Measurement_Salinity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Salinity_finalize_ex(
    UMAA_Common_Measurement_Salinity* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Salinity_finalize_w_params(
    UMAA_Common_Measurement_Salinity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Salinity_finalize_optional_members(
    UMAA_Common_Measurement_Salinity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Salinity_copy(
    UMAA_Common_Measurement_Salinity* dst,
    const UMAA_Common_Measurement_Salinity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_SidesCount ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_SidesCount_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_SidesCount_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_SidesCount_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_SidesCount_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_SidesCountSeq, UMAA_Common_Measurement_SidesCount);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_SidesCount_initialize(
    UMAA_Common_Measurement_SidesCount* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_SidesCount_initialize_ex(
    UMAA_Common_Measurement_SidesCount* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_SidesCount_initialize_w_params(
    UMAA_Common_Measurement_SidesCount* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_SidesCount_finalize_w_return(
    UMAA_Common_Measurement_SidesCount* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_SidesCount_finalize(
    UMAA_Common_Measurement_SidesCount* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_SidesCount_finalize_ex(
    UMAA_Common_Measurement_SidesCount* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_SidesCount_finalize_w_params(
    UMAA_Common_Measurement_SidesCount* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_SidesCount_finalize_optional_members(
    UMAA_Common_Measurement_SidesCount* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_SidesCount_copy(
    UMAA_Common_Measurement_SidesCount* dst,
    const UMAA_Common_Measurement_SidesCount* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Speed_BSL ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Speed_BSL_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_BSL_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_BSL_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_BSL_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Speed_BSLSeq, UMAA_Common_Measurement_Speed_BSL);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_BSL_initialize(
    UMAA_Common_Measurement_Speed_BSL* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_BSL_initialize_ex(
    UMAA_Common_Measurement_Speed_BSL* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_BSL_initialize_w_params(
    UMAA_Common_Measurement_Speed_BSL* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_BSL_finalize_w_return(
    UMAA_Common_Measurement_Speed_BSL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_BSL_finalize(
    UMAA_Common_Measurement_Speed_BSL* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_BSL_finalize_ex(
    UMAA_Common_Measurement_Speed_BSL* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_BSL_finalize_w_params(
    UMAA_Common_Measurement_Speed_BSL* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_BSL_finalize_optional_members(
    UMAA_Common_Measurement_Speed_BSL* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_BSL_copy(
    UMAA_Common_Measurement_Speed_BSL* dst,
    const UMAA_Common_Measurement_Speed_BSL* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Speed_LocalWaterMass ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Speed_LocalWaterMass_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_LocalWaterMass_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_LocalWaterMass_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_LocalWaterMass_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Speed_LocalWaterMassSeq, UMAA_Common_Measurement_Speed_LocalWaterMass);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_ex(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_w_params(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_return(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_optional_members(
    UMAA_Common_Measurement_Speed_LocalWaterMass* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_copy(
    UMAA_Common_Measurement_Speed_LocalWaterMass* dst,
    const UMAA_Common_Measurement_Speed_LocalWaterMass* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Volume_CubicMeter ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Volume_CubicMeter_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Volume_CubicMeter_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_CubicMeter_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_CubicMeter_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Volume_CubicMeterSeq, UMAA_Common_Measurement_Volume_CubicMeter);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize(
    UMAA_Common_Measurement_Volume_CubicMeter* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize_ex(
    UMAA_Common_Measurement_Volume_CubicMeter* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize_w_params(
    UMAA_Common_Measurement_Volume_CubicMeter* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_return(
    UMAA_Common_Measurement_Volume_CubicMeter* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_CubicMeter_finalize(
    UMAA_Common_Measurement_Volume_CubicMeter* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(
    UMAA_Common_Measurement_Volume_CubicMeter* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params(
    UMAA_Common_Measurement_Volume_CubicMeter* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_CubicMeter_finalize_optional_members(
    UMAA_Common_Measurement_Volume_CubicMeter* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_copy(
    UMAA_Common_Measurement_Volume_CubicMeter* dst,
    const UMAA_Common_Measurement_Volume_CubicMeter* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Volume_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Volume_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Volume_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Volume_PercentSeq, UMAA_Common_Measurement_Volume_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_Percent_initialize(
    UMAA_Common_Measurement_Volume_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_Percent_initialize_ex(
    UMAA_Common_Measurement_Volume_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_Percent_initialize_w_params(
    UMAA_Common_Measurement_Volume_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_Percent_finalize_w_return(
    UMAA_Common_Measurement_Volume_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_Percent_finalize(
    UMAA_Common_Measurement_Volume_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_Percent_finalize_ex(
    UMAA_Common_Measurement_Volume_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_Percent_finalize_w_params(
    UMAA_Common_Measurement_Volume_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Volume_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Volume_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Volume_Percent_copy(
    UMAA_Common_Measurement_Volume_Percent* dst,
    const UMAA_Common_Measurement_Volume_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_VolumetricFlowRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_VolumetricFlowRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_VolumetricFlowRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_VolumetricFlowRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_VolumetricFlowRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_VolumetricFlowRateSeq, UMAA_Common_Measurement_VolumetricFlowRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize(
    UMAA_Common_Measurement_VolumetricFlowRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize_ex(
    UMAA_Common_Measurement_VolumetricFlowRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize_w_params(
    UMAA_Common_Measurement_VolumetricFlowRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_return(
    UMAA_Common_Measurement_VolumetricFlowRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_VolumetricFlowRate_finalize(
    UMAA_Common_Measurement_VolumetricFlowRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(
    UMAA_Common_Measurement_VolumetricFlowRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params(
    UMAA_Common_Measurement_VolumetricFlowRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_VolumetricFlowRate_finalize_optional_members(
    UMAA_Common_Measurement_VolumetricFlowRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_copy(
    UMAA_Common_Measurement_VolumetricFlowRate* dst,
    const UMAA_Common_Measurement_VolumetricFlowRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"
#include "UMAA/Common/MeasurementCoordinate/Geographic_Coordinate_Axes.h"
#include "BasicTypes/Quaternion.h"

typedef    DDS_Double   UMAA_Common_Measurement_AccelerationScalar ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_AccelerationScalar_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_AccelerationScalar_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AccelerationScalar_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AccelerationScalar_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AccelerationScalarSeq, UMAA_Common_Measurement_AccelerationScalar);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize(
    UMAA_Common_Measurement_AccelerationScalar* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize_ex(
    UMAA_Common_Measurement_AccelerationScalar* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize_w_params(
    UMAA_Common_Measurement_AccelerationScalar* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AccelerationScalar_finalize_w_return(
    UMAA_Common_Measurement_AccelerationScalar* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AccelerationScalar_finalize(
    UMAA_Common_Measurement_AccelerationScalar* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AccelerationScalar_finalize_ex(
    UMAA_Common_Measurement_AccelerationScalar* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_AccelerationScalar_finalize_w_params(
    UMAA_Common_Measurement_AccelerationScalar* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_AccelerationScalar_finalize_optional_members(
    UMAA_Common_Measurement_AccelerationScalar* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AccelerationScalar_copy(
    UMAA_Common_Measurement_AccelerationScalar* dst,
    const UMAA_Common_Measurement_AccelerationScalar* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Angle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Angle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Angle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Angle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Angle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AngleSeq, UMAA_Common_Measurement_Angle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Angle_initialize(
    UMAA_Common_Measurement_Angle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Angle_initialize_ex(
    UMAA_Common_Measurement_Angle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Angle_initialize_w_params(
    UMAA_Common_Measurement_Angle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Angle_finalize_w_return(
    UMAA_Common_Measurement_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Angle_finalize(
    UMAA_Common_Measurement_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Angle_finalize_ex(
    UMAA_Common_Measurement_Angle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Angle_finalize_w_params(
    UMAA_Common_Measurement_Angle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Angle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Angle_copy(
    UMAA_Common_Measurement_Angle* dst,
    const UMAA_Common_Measurement_Angle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_AngleRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_AngleRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_AngleRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_AngleRateSeq, UMAA_Common_Measurement_AngleRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleRate_initialize(
    UMAA_Common_Measurement_AngleRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleRate_initialize_ex(
    UMAA_Common_Measurement_AngleRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleRate_initialize_w_params(
    UMAA_Common_Measurement_AngleRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleRate_finalize_w_return(
    UMAA_Common_Measurement_AngleRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleRate_finalize(
    UMAA_Common_Measurement_AngleRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleRate_finalize_ex(
    UMAA_Common_Measurement_AngleRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleRate_finalize_w_params(
    UMAA_Common_Measurement_AngleRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_AngleRate_finalize_optional_members(
    UMAA_Common_Measurement_AngleRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_AngleRate_copy(
    UMAA_Common_Measurement_AngleRate* dst,
    const UMAA_Common_Measurement_AngleRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngleSeq, UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_ex(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_w_params(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_return(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_optional_members(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_copy(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* dst,
    const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_BarometricPressure ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_BarometricPressure_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_BarometricPressure_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BarometricPressure_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BarometricPressure_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_BarometricPressureSeq, UMAA_Common_Measurement_BarometricPressure);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BarometricPressure_initialize(
    UMAA_Common_Measurement_BarometricPressure* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BarometricPressure_initialize_ex(
    UMAA_Common_Measurement_BarometricPressure* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BarometricPressure_initialize_w_params(
    UMAA_Common_Measurement_BarometricPressure* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BarometricPressure_finalize_w_return(
    UMAA_Common_Measurement_BarometricPressure* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_BarometricPressure_finalize(
    UMAA_Common_Measurement_BarometricPressure* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_BarometricPressure_finalize_ex(
    UMAA_Common_Measurement_BarometricPressure* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_BarometricPressure_finalize_w_params(
    UMAA_Common_Measurement_BarometricPressure* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_BarometricPressure_finalize_optional_members(
    UMAA_Common_Measurement_BarometricPressure* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_BarometricPressure_copy(
    UMAA_Common_Measurement_BarometricPressure* dst,
    const UMAA_Common_Measurement_BarometricPressure* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_CommsRate_BitsPerSecond ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CommsRate_BitsPerSecondSeq, UMAA_Common_Measurement_CommsRate_BitsPerSecond);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_ex(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_w_params(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_return(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_optional_members(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_copy(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* dst,
    const UMAA_Common_Measurement_CommsRate_BitsPerSecond* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_CommsRate_MegabitsPerSecond ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CommsRate_MegabitsPerSecondSeq, UMAA_Common_Measurement_CommsRate_MegabitsPerSecond);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_ex(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_w_params(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_return(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_optional_members(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_copy(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* dst,
    const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_ContinuousSize ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_ContinuousSize_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_ContinuousSize_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ContinuousSize_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ContinuousSize_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ContinuousSizeSeq, UMAA_Common_Measurement_ContinuousSize);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ContinuousSize_initialize(
    UMAA_Common_Measurement_ContinuousSize* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ContinuousSize_initialize_ex(
    UMAA_Common_Measurement_ContinuousSize* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ContinuousSize_initialize_w_params(
    UMAA_Common_Measurement_ContinuousSize* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ContinuousSize_finalize_w_return(
    UMAA_Common_Measurement_ContinuousSize* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ContinuousSize_finalize(
    UMAA_Common_Measurement_ContinuousSize* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ContinuousSize_finalize_ex(
    UMAA_Common_Measurement_ContinuousSize* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_ContinuousSize_finalize_w_params(
    UMAA_Common_Measurement_ContinuousSize* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_ContinuousSize_finalize_optional_members(
    UMAA_Common_Measurement_ContinuousSize* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ContinuousSize_copy(
    UMAA_Common_Measurement_ContinuousSize* dst,
    const UMAA_Common_Measurement_ContinuousSize* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_Count ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Count_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Count_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Count_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Count_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CountSeq, UMAA_Common_Measurement_Count);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Count_initialize(
    UMAA_Common_Measurement_Count* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Count_initialize_ex(
    UMAA_Common_Measurement_Count* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Count_initialize_w_params(
    UMAA_Common_Measurement_Count* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Count_finalize_w_return(
    UMAA_Common_Measurement_Count* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Count_finalize(
    UMAA_Common_Measurement_Count* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Count_finalize_ex(
    UMAA_Common_Measurement_Count* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Count_finalize_w_params(
    UMAA_Common_Measurement_Count* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Count_finalize_optional_members(
    UMAA_Common_Measurement_Count* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Count_copy(
    UMAA_Common_Measurement_Count* dst,
    const UMAA_Common_Measurement_Count* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Course_TrueNorth ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Course_TrueNorth_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Course_TrueNorth_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Course_TrueNorth_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Course_TrueNorth_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Course_TrueNorthSeq, UMAA_Common_Measurement_Course_TrueNorth);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize(
    UMAA_Common_Measurement_Course_TrueNorth* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize_ex(
    UMAA_Common_Measurement_Course_TrueNorth* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize_w_params(
    UMAA_Common_Measurement_Course_TrueNorth* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Course_TrueNorth_finalize_w_return(
    UMAA_Common_Measurement_Course_TrueNorth* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Course_TrueNorth_finalize(
    UMAA_Common_Measurement_Course_TrueNorth* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(
    UMAA_Common_Measurement_Course_TrueNorth* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params(
    UMAA_Common_Measurement_Course_TrueNorth* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Course_TrueNorth_finalize_optional_members(
    UMAA_Common_Measurement_Course_TrueNorth* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Course_TrueNorth_copy(
    UMAA_Common_Measurement_Course_TrueNorth* dst,
    const UMAA_Common_Measurement_Course_TrueNorth* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_CovarOrientation ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovarOrientation_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarOrientation_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarOrientation_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarOrientation_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovarOrientationSeq, UMAA_Common_Measurement_CovarOrientation);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarOrientation_initialize(
    UMAA_Common_Measurement_CovarOrientation* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarOrientation_initialize_ex(
    UMAA_Common_Measurement_CovarOrientation* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarOrientation_initialize_w_params(
    UMAA_Common_Measurement_CovarOrientation* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarOrientation_finalize_w_return(
    UMAA_Common_Measurement_CovarOrientation* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarOrientation_finalize(
    UMAA_Common_Measurement_CovarOrientation* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarOrientation_finalize_ex(
    UMAA_Common_Measurement_CovarOrientation* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarOrientation_finalize_w_params(
    UMAA_Common_Measurement_CovarOrientation* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarOrientation_finalize_optional_members(
    UMAA_Common_Measurement_CovarOrientation* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarOrientation_copy(
    UMAA_Common_Measurement_CovarOrientation* dst,
    const UMAA_Common_Measurement_CovarOrientation* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_CovarPosPos ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovarPosPos_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarPosPos_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosPos_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosPos_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovarPosPosSeq, UMAA_Common_Measurement_CovarPosPos);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosPos_initialize(
    UMAA_Common_Measurement_CovarPosPos* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosPos_initialize_ex(
    UMAA_Common_Measurement_CovarPosPos* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosPos_initialize_w_params(
    UMAA_Common_Measurement_CovarPosPos* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosPos_finalize_w_return(
    UMAA_Common_Measurement_CovarPosPos* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosPos_finalize(
    UMAA_Common_Measurement_CovarPosPos* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosPos_finalize_ex(
    UMAA_Common_Measurement_CovarPosPos* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosPos_finalize_w_params(
    UMAA_Common_Measurement_CovarPosPos* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosPos_finalize_optional_members(
    UMAA_Common_Measurement_CovarPosPos* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosPos_copy(
    UMAA_Common_Measurement_CovarPosPos* dst,
    const UMAA_Common_Measurement_CovarPosPos* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_CovarPosVel ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovarPosVel_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarPosVel_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosVel_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosVel_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovarPosVelSeq, UMAA_Common_Measurement_CovarPosVel);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosVel_initialize(
    UMAA_Common_Measurement_CovarPosVel* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosVel_initialize_ex(
    UMAA_Common_Measurement_CovarPosVel* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosVel_initialize_w_params(
    UMAA_Common_Measurement_CovarPosVel* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosVel_finalize_w_return(
    UMAA_Common_Measurement_CovarPosVel* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosVel_finalize(
    UMAA_Common_Measurement_CovarPosVel* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosVel_finalize_ex(
    UMAA_Common_Measurement_CovarPosVel* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosVel_finalize_w_params(
    UMAA_Common_Measurement_CovarPosVel* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarPosVel_finalize_optional_members(
    UMAA_Common_Measurement_CovarPosVel* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarPosVel_copy(
    UMAA_Common_Measurement_CovarPosVel* dst,
    const UMAA_Common_Measurement_CovarPosVel* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_CovarVelVel ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_CovarVelVel_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarVelVel_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarVelVel_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarVelVel_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_CovarVelVelSeq, UMAA_Common_Measurement_CovarVelVel);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarVelVel_initialize(
    UMAA_Common_Measurement_CovarVelVel* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarVelVel_initialize_ex(
    UMAA_Common_Measurement_CovarVelVel* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarVelVel_initialize_w_params(
    UMAA_Common_Measurement_CovarVelVel* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarVelVel_finalize_w_return(
    UMAA_Common_Measurement_CovarVelVel* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarVelVel_finalize(
    UMAA_Common_Measurement_CovarVelVel* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarVelVel_finalize_ex(
    UMAA_Common_Measurement_CovarVelVel* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarVelVel_finalize_w_params(
    UMAA_Common_Measurement_CovarVelVel* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_CovarVelVel_finalize_optional_members(
    UMAA_Common_Measurement_CovarVelVel* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_CovarVelVel_copy(
    UMAA_Common_Measurement_CovarVelVel* dst,
    const UMAA_Common_Measurement_CovarVelVel* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_LongLong   UMAA_Common_Measurement_DateTimeSeconds ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_DateTimeSeconds_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTimeSeconds_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeSeconds_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeSeconds_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DateTimeSecondsSeq, UMAA_Common_Measurement_DateTimeSeconds);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize(
    UMAA_Common_Measurement_DateTimeSeconds* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize_ex(
    UMAA_Common_Measurement_DateTimeSeconds* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize_w_params(
    UMAA_Common_Measurement_DateTimeSeconds* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeSeconds_finalize_w_return(
    UMAA_Common_Measurement_DateTimeSeconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeSeconds_finalize(
    UMAA_Common_Measurement_DateTimeSeconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(
    UMAA_Common_Measurement_DateTimeSeconds* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params(
    UMAA_Common_Measurement_DateTimeSeconds* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeSeconds_finalize_optional_members(
    UMAA_Common_Measurement_DateTimeSeconds* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeSeconds_copy(
    UMAA_Common_Measurement_DateTimeSeconds* dst,
    const UMAA_Common_Measurement_DateTimeSeconds* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_DateTimeNanoseconds ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_DateTimeNanoseconds_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTimeNanoseconds_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeNanoseconds_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeNanoseconds_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DateTimeNanosecondsSeq, UMAA_Common_Measurement_DateTimeNanoseconds);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize(
    UMAA_Common_Measurement_DateTimeNanoseconds* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize_ex(
    UMAA_Common_Measurement_DateTimeNanoseconds* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize_w_params(
    UMAA_Common_Measurement_DateTimeNanoseconds* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_return(
    UMAA_Common_Measurement_DateTimeNanoseconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeNanoseconds_finalize(
    UMAA_Common_Measurement_DateTimeNanoseconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(
    UMAA_Common_Measurement_DateTimeNanoseconds* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params(
    UMAA_Common_Measurement_DateTimeNanoseconds* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_optional_members(
    UMAA_Common_Measurement_DateTimeNanoseconds* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_copy(
    UMAA_Common_Measurement_DateTimeNanoseconds* dst,
    const UMAA_Common_Measurement_DateTimeNanoseconds* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Measurement_DateTimeTYPENAME;

}

struct UMAA_Common_Measurement_DateTimeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_DateTimeTypeSupport;
class UMAA_Common_Measurement_DateTimeDataWriter;
class UMAA_Common_Measurement_DateTimeDataReader;
#endif
class UMAA_Common_Measurement_DateTime 
{
  public:
    typedef struct UMAA_Common_Measurement_DateTimeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_DateTimeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_DateTimeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_DateTimeDataReader DataReader;
    #endif

    DDS_LongLong   seconds ;
    DDS_Long   nanoseconds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_DateTime_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTime_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTime_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTime_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DateTimeSeq, UMAA_Common_Measurement_DateTime);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTime_initialize(
    UMAA_Common_Measurement_DateTime* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTime_initialize_ex(
    UMAA_Common_Measurement_DateTime* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTime_initialize_w_params(
    UMAA_Common_Measurement_DateTime* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTime_finalize_w_return(
    UMAA_Common_Measurement_DateTime* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTime_finalize(
    UMAA_Common_Measurement_DateTime* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTime_finalize_ex(
    UMAA_Common_Measurement_DateTime* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTime_finalize_w_params(
    UMAA_Common_Measurement_DateTime* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_DateTime_finalize_optional_members(
    UMAA_Common_Measurement_DateTime* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_DateTime_copy(
    UMAA_Common_Measurement_DateTime* dst,
    const UMAA_Common_Measurement_DateTime* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Density ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Density_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Density_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Density_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Density_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DensitySeq, UMAA_Common_Measurement_Density);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Density_initialize(
    UMAA_Common_Measurement_Density* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Density_initialize_ex(
    UMAA_Common_Measurement_Density* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Density_initialize_w_params(
    UMAA_Common_Measurement_Density* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Density_finalize_w_return(
    UMAA_Common_Measurement_Density* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Density_finalize(
    UMAA_Common_Measurement_Density* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Density_finalize_ex(
    UMAA_Common_Measurement_Density* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Density_finalize_w_params(
    UMAA_Common_Measurement_Density* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Density_finalize_optional_members(
    UMAA_Common_Measurement_Density* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Density_copy(
    UMAA_Common_Measurement_Density* dst,
    const UMAA_Common_Measurement_Density* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Distance ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Distance_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_DistanceSeq, UMAA_Common_Measurement_Distance);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_initialize(
    UMAA_Common_Measurement_Distance* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_initialize_ex(
    UMAA_Common_Measurement_Distance* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_initialize_w_params(
    UMAA_Common_Measurement_Distance* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_finalize_w_return(
    UMAA_Common_Measurement_Distance* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_finalize(
    UMAA_Common_Measurement_Distance* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_finalize_ex(
    UMAA_Common_Measurement_Distance* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_finalize_w_params(
    UMAA_Common_Measurement_Distance* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_finalize_optional_members(
    UMAA_Common_Measurement_Distance* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_copy(
    UMAA_Common_Measurement_Distance* dst,
    const UMAA_Common_Measurement_Distance* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Distance_Precise ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Distance_Precise_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_Precise_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_Precise_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_Precise_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Distance_PreciseSeq, UMAA_Common_Measurement_Distance_Precise);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_Precise_initialize(
    UMAA_Common_Measurement_Distance_Precise* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_Precise_initialize_ex(
    UMAA_Common_Measurement_Distance_Precise* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_Precise_initialize_w_params(
    UMAA_Common_Measurement_Distance_Precise* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_Precise_finalize_w_return(
    UMAA_Common_Measurement_Distance_Precise* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_Precise_finalize(
    UMAA_Common_Measurement_Distance_Precise* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_Precise_finalize_ex(
    UMAA_Common_Measurement_Distance_Precise* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_Precise_finalize_w_params(
    UMAA_Common_Measurement_Distance_Precise* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Distance_Precise_finalize_optional_members(
    UMAA_Common_Measurement_Distance_Precise* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Distance_Precise_copy(
    UMAA_Common_Measurement_Distance_Precise* dst,
    const UMAA_Common_Measurement_Distance_Precise* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Duration_Hours ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Duration_Hours_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Duration_Hours_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Hours_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Hours_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Duration_HoursSeq, UMAA_Common_Measurement_Duration_Hours);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Hours_initialize(
    UMAA_Common_Measurement_Duration_Hours* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Hours_initialize_ex(
    UMAA_Common_Measurement_Duration_Hours* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Hours_initialize_w_params(
    UMAA_Common_Measurement_Duration_Hours* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Hours_finalize_w_return(
    UMAA_Common_Measurement_Duration_Hours* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Hours_finalize(
    UMAA_Common_Measurement_Duration_Hours* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Hours_finalize_ex(
    UMAA_Common_Measurement_Duration_Hours* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Hours_finalize_w_params(
    UMAA_Common_Measurement_Duration_Hours* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Hours_finalize_optional_members(
    UMAA_Common_Measurement_Duration_Hours* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Hours_copy(
    UMAA_Common_Measurement_Duration_Hours* dst,
    const UMAA_Common_Measurement_Duration_Hours* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Duration_Seconds ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Duration_Seconds_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Duration_Seconds_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Seconds_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Seconds_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Duration_SecondsSeq, UMAA_Common_Measurement_Duration_Seconds);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize(
    UMAA_Common_Measurement_Duration_Seconds* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize_ex(
    UMAA_Common_Measurement_Duration_Seconds* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize_w_params(
    UMAA_Common_Measurement_Duration_Seconds* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Seconds_finalize_w_return(
    UMAA_Common_Measurement_Duration_Seconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Seconds_finalize(
    UMAA_Common_Measurement_Duration_Seconds* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Seconds_finalize_ex(
    UMAA_Common_Measurement_Duration_Seconds* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Seconds_finalize_w_params(
    UMAA_Common_Measurement_Duration_Seconds* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Duration_Seconds_finalize_optional_members(
    UMAA_Common_Measurement_Duration_Seconds* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Duration_Seconds_copy(
    UMAA_Common_Measurement_Duration_Seconds* dst,
    const UMAA_Common_Measurement_Duration_Seconds* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_ElectricalPower ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_ElectricalPower_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_ElectricalPower_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElectricalPower_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElectricalPower_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ElectricalPowerSeq, UMAA_Common_Measurement_ElectricalPower);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElectricalPower_initialize(
    UMAA_Common_Measurement_ElectricalPower* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElectricalPower_initialize_ex(
    UMAA_Common_Measurement_ElectricalPower* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElectricalPower_initialize_w_params(
    UMAA_Common_Measurement_ElectricalPower* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElectricalPower_finalize_w_return(
    UMAA_Common_Measurement_ElectricalPower* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElectricalPower_finalize(
    UMAA_Common_Measurement_ElectricalPower* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElectricalPower_finalize_ex(
    UMAA_Common_Measurement_ElectricalPower* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElectricalPower_finalize_w_params(
    UMAA_Common_Measurement_ElectricalPower* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElectricalPower_finalize_optional_members(
    UMAA_Common_Measurement_ElectricalPower* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElectricalPower_copy(
    UMAA_Common_Measurement_ElectricalPower* dst,
    const UMAA_Common_Measurement_ElectricalPower* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_EngineSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_EngineSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_EngineSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_EngineSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_EngineSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_EngineSpeedSeq, UMAA_Common_Measurement_EngineSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_EngineSpeed_initialize(
    UMAA_Common_Measurement_EngineSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_EngineSpeed_initialize_ex(
    UMAA_Common_Measurement_EngineSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_EngineSpeed_initialize_w_params(
    UMAA_Common_Measurement_EngineSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_EngineSpeed_finalize_w_return(
    UMAA_Common_Measurement_EngineSpeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_EngineSpeed_finalize(
    UMAA_Common_Measurement_EngineSpeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_EngineSpeed_finalize_ex(
    UMAA_Common_Measurement_EngineSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_EngineSpeed_finalize_w_params(
    UMAA_Common_Measurement_EngineSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_EngineSpeed_finalize_optional_members(
    UMAA_Common_Measurement_EngineSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_EngineSpeed_copy(
    UMAA_Common_Measurement_EngineSpeed* dst,
    const UMAA_Common_Measurement_EngineSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlaneSeq, UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_ex(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_w_params(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_return(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_optional_members(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_copy(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* dst,
    const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_FocusValue ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_FocusValue_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_FocusValue_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FocusValue_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FocusValue_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_FocusValueSeq, UMAA_Common_Measurement_FocusValue);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FocusValue_initialize(
    UMAA_Common_Measurement_FocusValue* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FocusValue_initialize_ex(
    UMAA_Common_Measurement_FocusValue* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FocusValue_initialize_w_params(
    UMAA_Common_Measurement_FocusValue* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FocusValue_finalize_w_return(
    UMAA_Common_Measurement_FocusValue* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FocusValue_finalize(
    UMAA_Common_Measurement_FocusValue* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_FocusValue_finalize_ex(
    UMAA_Common_Measurement_FocusValue* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_FocusValue_finalize_w_params(
    UMAA_Common_Measurement_FocusValue* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_FocusValue_finalize_optional_members(
    UMAA_Common_Measurement_FocusValue* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_FocusValue_copy(
    UMAA_Common_Measurement_FocusValue* dst,
    const UMAA_Common_Measurement_FocusValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Force ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Force_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Force_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Force_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Force_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ForceSeq, UMAA_Common_Measurement_Force);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Force_initialize(
    UMAA_Common_Measurement_Force* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Force_initialize_ex(
    UMAA_Common_Measurement_Force* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Force_initialize_w_params(
    UMAA_Common_Measurement_Force* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Force_finalize_w_return(
    UMAA_Common_Measurement_Force* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Force_finalize(
    UMAA_Common_Measurement_Force* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Force_finalize_ex(
    UMAA_Common_Measurement_Force* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Force_finalize_w_params(
    UMAA_Common_Measurement_Force* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Force_finalize_optional_members(
    UMAA_Common_Measurement_Force* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Force_copy(
    UMAA_Common_Measurement_Force* dst,
    const UMAA_Common_Measurement_Force* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Frequency_Hertz ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Frequency_Hertz_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Frequency_Hertz_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Frequency_Hertz_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Frequency_Hertz_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Frequency_HertzSeq, UMAA_Common_Measurement_Frequency_Hertz);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize(
    UMAA_Common_Measurement_Frequency_Hertz* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize_ex(
    UMAA_Common_Measurement_Frequency_Hertz* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize_w_params(
    UMAA_Common_Measurement_Frequency_Hertz* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Frequency_Hertz_finalize_w_return(
    UMAA_Common_Measurement_Frequency_Hertz* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Frequency_Hertz_finalize(
    UMAA_Common_Measurement_Frequency_Hertz* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(
    UMAA_Common_Measurement_Frequency_Hertz* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params(
    UMAA_Common_Measurement_Frequency_Hertz* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Frequency_Hertz_finalize_optional_members(
    UMAA_Common_Measurement_Frequency_Hertz* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Frequency_Hertz_copy(
    UMAA_Common_Measurement_Frequency_Hertz* dst,
    const UMAA_Common_Measurement_Frequency_Hertz* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_GroundSpeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_GroundSpeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_GroundSpeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GroundSpeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GroundSpeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_GroundSpeedSeq, UMAA_Common_Measurement_GroundSpeed);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GroundSpeed_initialize(
    UMAA_Common_Measurement_GroundSpeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GroundSpeed_initialize_ex(
    UMAA_Common_Measurement_GroundSpeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GroundSpeed_initialize_w_params(
    UMAA_Common_Measurement_GroundSpeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GroundSpeed_finalize_w_return(
    UMAA_Common_Measurement_GroundSpeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_GroundSpeed_finalize(
    UMAA_Common_Measurement_GroundSpeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_GroundSpeed_finalize_ex(
    UMAA_Common_Measurement_GroundSpeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_GroundSpeed_finalize_w_params(
    UMAA_Common_Measurement_GroundSpeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_GroundSpeed_finalize_optional_members(
    UMAA_Common_Measurement_GroundSpeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_GroundSpeed_copy(
    UMAA_Common_Measurement_GroundSpeed* dst,
    const UMAA_Common_Measurement_GroundSpeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Heading_TrueNorth_Angle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Heading_TrueNorth_AngleSeq, UMAA_Common_Measurement_Heading_TrueNorth_Angle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_ex(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_w_params(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_return(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_copy(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* dst,
    const UMAA_Common_Measurement_Heading_TrueNorth_Angle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_IndicatedAirspeed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_IndicatedAirspeed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_IndicatedAirspeed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IndicatedAirspeed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IndicatedAirspeed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_IndicatedAirspeedSeq, UMAA_Common_Measurement_IndicatedAirspeed);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize(
    UMAA_Common_Measurement_IndicatedAirspeed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize_ex(
    UMAA_Common_Measurement_IndicatedAirspeed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize_w_params(
    UMAA_Common_Measurement_IndicatedAirspeed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_return(
    UMAA_Common_Measurement_IndicatedAirspeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_IndicatedAirspeed_finalize(
    UMAA_Common_Measurement_IndicatedAirspeed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(
    UMAA_Common_Measurement_IndicatedAirspeed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params(
    UMAA_Common_Measurement_IndicatedAirspeed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_IndicatedAirspeed_finalize_optional_members(
    UMAA_Common_Measurement_IndicatedAirspeed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_copy(
    UMAA_Common_Measurement_IndicatedAirspeed* dst,
    const UMAA_Common_Measurement_IndicatedAirspeed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_IPPort_Counting ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_IPPort_Counting_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_IPPort_Counting_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IPPort_Counting_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IPPort_Counting_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_IPPort_CountingSeq, UMAA_Common_Measurement_IPPort_Counting);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize(
    UMAA_Common_Measurement_IPPort_Counting* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize_ex(
    UMAA_Common_Measurement_IPPort_Counting* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize_w_params(
    UMAA_Common_Measurement_IPPort_Counting* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IPPort_Counting_finalize_w_return(
    UMAA_Common_Measurement_IPPort_Counting* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_IPPort_Counting_finalize(
    UMAA_Common_Measurement_IPPort_Counting* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_IPPort_Counting_finalize_ex(
    UMAA_Common_Measurement_IPPort_Counting* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_IPPort_Counting_finalize_w_params(
    UMAA_Common_Measurement_IPPort_Counting* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_IPPort_Counting_finalize_optional_members(
    UMAA_Common_Measurement_IPPort_Counting* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_IPPort_Counting_copy(
    UMAA_Common_Measurement_IPPort_Counting* dst,
    const UMAA_Common_Measurement_IPPort_Counting* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_MagneticVariation ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_MagneticVariation_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_MagneticVariation_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MagneticVariation_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MagneticVariation_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_MagneticVariationSeq, UMAA_Common_Measurement_MagneticVariation);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MagneticVariation_initialize(
    UMAA_Common_Measurement_MagneticVariation* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MagneticVariation_initialize_ex(
    UMAA_Common_Measurement_MagneticVariation* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MagneticVariation_initialize_w_params(
    UMAA_Common_Measurement_MagneticVariation* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MagneticVariation_finalize_w_return(
    UMAA_Common_Measurement_MagneticVariation* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_MagneticVariation_finalize(
    UMAA_Common_Measurement_MagneticVariation* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_MagneticVariation_finalize_ex(
    UMAA_Common_Measurement_MagneticVariation* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_MagneticVariation_finalize_w_params(
    UMAA_Common_Measurement_MagneticVariation* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_MagneticVariation_finalize_optional_members(
    UMAA_Common_Measurement_MagneticVariation* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_MagneticVariation_copy(
    UMAA_Common_Measurement_MagneticVariation* dst,
    const UMAA_Common_Measurement_MagneticVariation* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Mass ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Mass_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Mass_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_MassSeq, UMAA_Common_Measurement_Mass);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_initialize(
    UMAA_Common_Measurement_Mass* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_initialize_ex(
    UMAA_Common_Measurement_Mass* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_initialize_w_params(
    UMAA_Common_Measurement_Mass* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_finalize_w_return(
    UMAA_Common_Measurement_Mass* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_finalize(
    UMAA_Common_Measurement_Mass* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_finalize_ex(
    UMAA_Common_Measurement_Mass* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_finalize_w_params(
    UMAA_Common_Measurement_Mass* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Mass_finalize_optional_members(
    UMAA_Common_Measurement_Mass* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Mass_copy(
    UMAA_Common_Measurement_Mass* dst,
    const UMAA_Common_Measurement_Mass* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Octet   UMAA_Common_Measurement_NumericGUID [16L];
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_NumericGUID_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_NumericGUID_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_NumericGUID_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE_NO_GET(UMAA_Common_Measurement_NumericGUIDSeq, UMAA_Common_Measurement_NumericGUID);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_NumericGUID_initialize(
    UMAA_Common_Measurement_NumericGUID* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_NumericGUID_initialize_ex(
    UMAA_Common_Measurement_NumericGUID* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_NumericGUID_initialize_w_params(
    UMAA_Common_Measurement_NumericGUID* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_NumericGUID_finalize_w_return(
    UMAA_Common_Measurement_NumericGUID* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_NumericGUID_finalize(
    UMAA_Common_Measurement_NumericGUID* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_NumericGUID_finalize_ex(
    UMAA_Common_Measurement_NumericGUID* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_NumericGUID_finalize_w_params(
    UMAA_Common_Measurement_NumericGUID* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_NumericGUID_finalize_optional_members(
    UMAA_Common_Measurement_NumericGUID* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_NumericGUID_copy(
    UMAA_Common_Measurement_NumericGUID* dst,
    const UMAA_Common_Measurement_NumericGUID* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Long   UMAA_Common_Measurement_Order ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Order_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Order_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Order_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Order_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_OrderSeq, UMAA_Common_Measurement_Order);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Order_initialize(
    UMAA_Common_Measurement_Order* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Order_initialize_ex(
    UMAA_Common_Measurement_Order* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Order_initialize_w_params(
    UMAA_Common_Measurement_Order* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Order_finalize_w_return(
    UMAA_Common_Measurement_Order* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Order_finalize(
    UMAA_Common_Measurement_Order* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Order_finalize_ex(
    UMAA_Common_Measurement_Order* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Order_finalize_w_params(
    UMAA_Common_Measurement_Order* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Order_finalize_optional_members(
    UMAA_Common_Measurement_Order* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Order_copy(
    UMAA_Common_Measurement_Order* dst,
    const UMAA_Common_Measurement_Order* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Percent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Percent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Percent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Percent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Percent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PercentSeq, UMAA_Common_Measurement_Percent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Percent_initialize(
    UMAA_Common_Measurement_Percent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Percent_initialize_ex(
    UMAA_Common_Measurement_Percent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Percent_initialize_w_params(
    UMAA_Common_Measurement_Percent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Percent_finalize_w_return(
    UMAA_Common_Measurement_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Percent_finalize(
    UMAA_Common_Measurement_Percent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Percent_finalize_ex(
    UMAA_Common_Measurement_Percent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Percent_finalize_w_params(
    UMAA_Common_Measurement_Percent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Percent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Percent_copy(
    UMAA_Common_Measurement_Percent* dst,
    const UMAA_Common_Measurement_Percent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Pitch_HalfAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Pitch_HalfAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Pitch_HalfAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pitch_HalfAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pitch_HalfAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Pitch_HalfAngleSeq, UMAA_Common_Measurement_Pitch_HalfAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize(
    UMAA_Common_Measurement_Pitch_HalfAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize_ex(
    UMAA_Common_Measurement_Pitch_HalfAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize_w_params(
    UMAA_Common_Measurement_Pitch_HalfAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_return(
    UMAA_Common_Measurement_Pitch_HalfAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pitch_HalfAngle_finalize(
    UMAA_Common_Measurement_Pitch_HalfAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(
    UMAA_Common_Measurement_Pitch_HalfAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params(
    UMAA_Common_Measurement_Pitch_HalfAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_optional_members(
    UMAA_Common_Measurement_Pitch_HalfAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_copy(
    UMAA_Common_Measurement_Pitch_HalfAngle* dst,
    const UMAA_Common_Measurement_Pitch_HalfAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_PitchAcceleration ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PitchAcceleration_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PitchAcceleration_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchAcceleration_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchAcceleration_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PitchAccelerationSeq, UMAA_Common_Measurement_PitchAcceleration);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize(
    UMAA_Common_Measurement_PitchAcceleration* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize_ex(
    UMAA_Common_Measurement_PitchAcceleration* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize_w_params(
    UMAA_Common_Measurement_PitchAcceleration* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchAcceleration_finalize_w_return(
    UMAA_Common_Measurement_PitchAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchAcceleration_finalize(
    UMAA_Common_Measurement_PitchAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchAcceleration_finalize_ex(
    UMAA_Common_Measurement_PitchAcceleration* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchAcceleration_finalize_w_params(
    UMAA_Common_Measurement_PitchAcceleration* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_PitchAcceleration* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchAcceleration_copy(
    UMAA_Common_Measurement_PitchAcceleration* dst,
    const UMAA_Common_Measurement_PitchAcceleration* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_PitchRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PitchRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PitchRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PitchRateSeq, UMAA_Common_Measurement_PitchRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchRate_initialize(
    UMAA_Common_Measurement_PitchRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchRate_initialize_ex(
    UMAA_Common_Measurement_PitchRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchRate_initialize_w_params(
    UMAA_Common_Measurement_PitchRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchRate_finalize_w_return(
    UMAA_Common_Measurement_PitchRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchRate_finalize(
    UMAA_Common_Measurement_PitchRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchRate_finalize_ex(
    UMAA_Common_Measurement_PitchRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchRate_finalize_w_params(
    UMAA_Common_Measurement_PitchRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PitchRate_finalize_optional_members(
    UMAA_Common_Measurement_PitchRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PitchRate_copy(
    UMAA_Common_Measurement_PitchRate* dst,
    const UMAA_Common_Measurement_PitchRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_PowerBusCurrent ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PowerBusCurrent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PowerBusCurrent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusCurrent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusCurrent_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PowerBusCurrentSeq, UMAA_Common_Measurement_PowerBusCurrent);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize(
    UMAA_Common_Measurement_PowerBusCurrent* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize_ex(
    UMAA_Common_Measurement_PowerBusCurrent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize_w_params(
    UMAA_Common_Measurement_PowerBusCurrent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusCurrent_finalize_w_return(
    UMAA_Common_Measurement_PowerBusCurrent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusCurrent_finalize(
    UMAA_Common_Measurement_PowerBusCurrent* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(
    UMAA_Common_Measurement_PowerBusCurrent* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params(
    UMAA_Common_Measurement_PowerBusCurrent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusCurrent_finalize_optional_members(
    UMAA_Common_Measurement_PowerBusCurrent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusCurrent_copy(
    UMAA_Common_Measurement_PowerBusCurrent* dst,
    const UMAA_Common_Measurement_PowerBusCurrent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_PowerBusVoltage ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_PowerBusVoltage_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_PowerBusVoltage_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusVoltage_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusVoltage_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PowerBusVoltageSeq, UMAA_Common_Measurement_PowerBusVoltage);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize(
    UMAA_Common_Measurement_PowerBusVoltage* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize_ex(
    UMAA_Common_Measurement_PowerBusVoltage* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize_w_params(
    UMAA_Common_Measurement_PowerBusVoltage* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusVoltage_finalize_w_return(
    UMAA_Common_Measurement_PowerBusVoltage* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusVoltage_finalize(
    UMAA_Common_Measurement_PowerBusVoltage* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(
    UMAA_Common_Measurement_PowerBusVoltage* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params(
    UMAA_Common_Measurement_PowerBusVoltage* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_PowerBusVoltage_finalize_optional_members(
    UMAA_Common_Measurement_PowerBusVoltage* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_PowerBusVoltage_copy(
    UMAA_Common_Measurement_PowerBusVoltage* dst,
    const UMAA_Common_Measurement_PowerBusVoltage* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Pressure_KiloPascals ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Pressure_KiloPascals_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Pressure_KiloPascals_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_KiloPascals_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_KiloPascals_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Pressure_KiloPascalsSeq, UMAA_Common_Measurement_Pressure_KiloPascals);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize(
    UMAA_Common_Measurement_Pressure_KiloPascals* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize_ex(
    UMAA_Common_Measurement_Pressure_KiloPascals* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize_w_params(
    UMAA_Common_Measurement_Pressure_KiloPascals* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_return(
    UMAA_Common_Measurement_Pressure_KiloPascals* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_KiloPascals_finalize(
    UMAA_Common_Measurement_Pressure_KiloPascals* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(
    UMAA_Common_Measurement_Pressure_KiloPascals* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params(
    UMAA_Common_Measurement_Pressure_KiloPascals* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_optional_members(
    UMAA_Common_Measurement_Pressure_KiloPascals* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_copy(
    UMAA_Common_Measurement_Pressure_KiloPascals* dst,
    const UMAA_Common_Measurement_Pressure_KiloPascals* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_RadioFrequency_Hertz ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RadioFrequency_Hertz_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RadioFrequency_Hertz_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RadioFrequency_Hertz_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RadioFrequency_Hertz_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RadioFrequency_HertzSeq, UMAA_Common_Measurement_RadioFrequency_Hertz);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_ex(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_w_params(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_return(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_optional_members(
    UMAA_Common_Measurement_RadioFrequency_Hertz* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_copy(
    UMAA_Common_Measurement_RadioFrequency_Hertz* dst,
    const UMAA_Common_Measurement_RadioFrequency_Hertz* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_RelativeAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RelativeAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RelativeAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RelativeAngleSeq, UMAA_Common_Measurement_RelativeAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeAngle_initialize(
    UMAA_Common_Measurement_RelativeAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeAngle_initialize_ex(
    UMAA_Common_Measurement_RelativeAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeAngle_initialize_w_params(
    UMAA_Common_Measurement_RelativeAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeAngle_finalize_w_return(
    UMAA_Common_Measurement_RelativeAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeAngle_finalize(
    UMAA_Common_Measurement_RelativeAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeAngle_finalize_ex(
    UMAA_Common_Measurement_RelativeAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeAngle_finalize_w_params(
    UMAA_Common_Measurement_RelativeAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeAngle_finalize_optional_members(
    UMAA_Common_Measurement_RelativeAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeAngle_copy(
    UMAA_Common_Measurement_RelativeAngle* dst,
    const UMAA_Common_Measurement_RelativeAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_RelativeHumidity ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RelativeHumidity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RelativeHumidity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeHumidity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeHumidity_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RelativeHumiditySeq, UMAA_Common_Measurement_RelativeHumidity);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize(
    UMAA_Common_Measurement_RelativeHumidity* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize_ex(
    UMAA_Common_Measurement_RelativeHumidity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize_w_params(
    UMAA_Common_Measurement_RelativeHumidity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeHumidity_finalize_w_return(
    UMAA_Common_Measurement_RelativeHumidity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeHumidity_finalize(
    UMAA_Common_Measurement_RelativeHumidity* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeHumidity_finalize_ex(
    UMAA_Common_Measurement_RelativeHumidity* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeHumidity_finalize_w_params(
    UMAA_Common_Measurement_RelativeHumidity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RelativeHumidity_finalize_optional_members(
    UMAA_Common_Measurement_RelativeHumidity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RelativeHumidity_copy(
    UMAA_Common_Measurement_RelativeHumidity* dst,
    const UMAA_Common_Measurement_RelativeHumidity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Roll_Angle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Roll_Angle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Roll_Angle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Roll_Angle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Roll_Angle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Roll_AngleSeq, UMAA_Common_Measurement_Roll_Angle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Roll_Angle_initialize(
    UMAA_Common_Measurement_Roll_Angle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Roll_Angle_initialize_ex(
    UMAA_Common_Measurement_Roll_Angle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Roll_Angle_initialize_w_params(
    UMAA_Common_Measurement_Roll_Angle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Roll_Angle_finalize_w_return(
    UMAA_Common_Measurement_Roll_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Roll_Angle_finalize(
    UMAA_Common_Measurement_Roll_Angle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Roll_Angle_finalize_ex(
    UMAA_Common_Measurement_Roll_Angle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Roll_Angle_finalize_w_params(
    UMAA_Common_Measurement_Roll_Angle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Roll_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Roll_Angle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Roll_Angle_copy(
    UMAA_Common_Measurement_Roll_Angle* dst,
    const UMAA_Common_Measurement_Roll_Angle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_RollAcceleration ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RollAcceleration_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RollAcceleration_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollAcceleration_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollAcceleration_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RollAccelerationSeq, UMAA_Common_Measurement_RollAcceleration);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollAcceleration_initialize(
    UMAA_Common_Measurement_RollAcceleration* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollAcceleration_initialize_ex(
    UMAA_Common_Measurement_RollAcceleration* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollAcceleration_initialize_w_params(
    UMAA_Common_Measurement_RollAcceleration* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollAcceleration_finalize_w_return(
    UMAA_Common_Measurement_RollAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollAcceleration_finalize(
    UMAA_Common_Measurement_RollAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollAcceleration_finalize_ex(
    UMAA_Common_Measurement_RollAcceleration* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollAcceleration_finalize_w_params(
    UMAA_Common_Measurement_RollAcceleration* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_RollAcceleration* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollAcceleration_copy(
    UMAA_Common_Measurement_RollAcceleration* dst,
    const UMAA_Common_Measurement_RollAcceleration* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_RollRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_RollRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_RollRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_RollRateSeq, UMAA_Common_Measurement_RollRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollRate_initialize(
    UMAA_Common_Measurement_RollRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollRate_initialize_ex(
    UMAA_Common_Measurement_RollRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollRate_initialize_w_params(
    UMAA_Common_Measurement_RollRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollRate_finalize_w_return(
    UMAA_Common_Measurement_RollRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollRate_finalize(
    UMAA_Common_Measurement_RollRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollRate_finalize_ex(
    UMAA_Common_Measurement_RollRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollRate_finalize_w_params(
    UMAA_Common_Measurement_RollRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_RollRate_finalize_optional_members(
    UMAA_Common_Measurement_RollRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_RollRate_copy(
    UMAA_Common_Measurement_RollRate* dst,
    const UMAA_Common_Measurement_RollRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Size_Numeral ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Size_Numeral_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Size_Numeral_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Size_Numeral_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Size_Numeral_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Size_NumeralSeq, UMAA_Common_Measurement_Size_Numeral);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Size_Numeral_initialize(
    UMAA_Common_Measurement_Size_Numeral* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Size_Numeral_initialize_ex(
    UMAA_Common_Measurement_Size_Numeral* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Size_Numeral_initialize_w_params(
    UMAA_Common_Measurement_Size_Numeral* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Size_Numeral_finalize_w_return(
    UMAA_Common_Measurement_Size_Numeral* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Size_Numeral_finalize(
    UMAA_Common_Measurement_Size_Numeral* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Size_Numeral_finalize_ex(
    UMAA_Common_Measurement_Size_Numeral* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Size_Numeral_finalize_w_params(
    UMAA_Common_Measurement_Size_Numeral* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Size_Numeral_finalize_optional_members(
    UMAA_Common_Measurement_Size_Numeral* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Size_Numeral_copy(
    UMAA_Common_Measurement_Size_Numeral* dst,
    const UMAA_Common_Measurement_Size_Numeral* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Speed ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Speed_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_SpeedSeq, UMAA_Common_Measurement_Speed);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_initialize(
    UMAA_Common_Measurement_Speed* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_initialize_ex(
    UMAA_Common_Measurement_Speed* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_initialize_w_params(
    UMAA_Common_Measurement_Speed* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_finalize_w_return(
    UMAA_Common_Measurement_Speed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_finalize(
    UMAA_Common_Measurement_Speed* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_finalize_ex(
    UMAA_Common_Measurement_Speed* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_finalize_w_params(
    UMAA_Common_Measurement_Speed* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Speed_finalize_optional_members(
    UMAA_Common_Measurement_Speed* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Speed_copy(
    UMAA_Common_Measurement_Speed* dst,
    const UMAA_Common_Measurement_Speed* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Temperature ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Temperature_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Temperature_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Temperature_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Temperature_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_TemperatureSeq, UMAA_Common_Measurement_Temperature);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Temperature_initialize(
    UMAA_Common_Measurement_Temperature* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Temperature_initialize_ex(
    UMAA_Common_Measurement_Temperature* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Temperature_initialize_w_params(
    UMAA_Common_Measurement_Temperature* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Temperature_finalize_w_return(
    UMAA_Common_Measurement_Temperature* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Temperature_finalize(
    UMAA_Common_Measurement_Temperature* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Temperature_finalize_ex(
    UMAA_Common_Measurement_Temperature* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Temperature_finalize_w_params(
    UMAA_Common_Measurement_Temperature* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Temperature_finalize_optional_members(
    UMAA_Common_Measurement_Temperature* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Temperature_copy(
    UMAA_Common_Measurement_Temperature* dst,
    const UMAA_Common_Measurement_Temperature* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_TurnRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_TurnRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_TurnRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_TurnRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_TurnRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_TurnRateSeq, UMAA_Common_Measurement_TurnRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_TurnRate_initialize(
    UMAA_Common_Measurement_TurnRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_TurnRate_initialize_ex(
    UMAA_Common_Measurement_TurnRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_TurnRate_initialize_w_params(
    UMAA_Common_Measurement_TurnRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_TurnRate_finalize_w_return(
    UMAA_Common_Measurement_TurnRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_TurnRate_finalize(
    UMAA_Common_Measurement_TurnRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_TurnRate_finalize_ex(
    UMAA_Common_Measurement_TurnRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_TurnRate_finalize_w_params(
    UMAA_Common_Measurement_TurnRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_TurnRate_finalize_optional_members(
    UMAA_Common_Measurement_TurnRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_TurnRate_copy(
    UMAA_Common_Measurement_TurnRate* dst,
    const UMAA_Common_Measurement_TurnRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_Yaw_PosAngle ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Yaw_PosAngle_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Yaw_PosAngle_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Yaw_PosAngle_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Yaw_PosAngle_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Yaw_PosAngleSeq, UMAA_Common_Measurement_Yaw_PosAngle);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize(
    UMAA_Common_Measurement_Yaw_PosAngle* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize_ex(
    UMAA_Common_Measurement_Yaw_PosAngle* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize_w_params(
    UMAA_Common_Measurement_Yaw_PosAngle* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_return(
    UMAA_Common_Measurement_Yaw_PosAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Yaw_PosAngle_finalize(
    UMAA_Common_Measurement_Yaw_PosAngle* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(
    UMAA_Common_Measurement_Yaw_PosAngle* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params(
    UMAA_Common_Measurement_Yaw_PosAngle* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Yaw_PosAngle_finalize_optional_members(
    UMAA_Common_Measurement_Yaw_PosAngle* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_copy(
    UMAA_Common_Measurement_Yaw_PosAngle* dst,
    const UMAA_Common_Measurement_Yaw_PosAngle* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_YawAcceleration ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_YawAcceleration_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_YawAcceleration_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawAcceleration_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawAcceleration_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_YawAccelerationSeq, UMAA_Common_Measurement_YawAcceleration);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawAcceleration_initialize(
    UMAA_Common_Measurement_YawAcceleration* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawAcceleration_initialize_ex(
    UMAA_Common_Measurement_YawAcceleration* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawAcceleration_initialize_w_params(
    UMAA_Common_Measurement_YawAcceleration* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawAcceleration_finalize_w_return(
    UMAA_Common_Measurement_YawAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawAcceleration_finalize(
    UMAA_Common_Measurement_YawAcceleration* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawAcceleration_finalize_ex(
    UMAA_Common_Measurement_YawAcceleration* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawAcceleration_finalize_w_params(
    UMAA_Common_Measurement_YawAcceleration* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_YawAcceleration* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawAcceleration_copy(
    UMAA_Common_Measurement_YawAcceleration* dst,
    const UMAA_Common_Measurement_YawAcceleration* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    DDS_Double   UMAA_Common_Measurement_YawRate ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_YawRate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_YawRate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawRate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawRate_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_YawRateSeq, UMAA_Common_Measurement_YawRate);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawRate_initialize(
    UMAA_Common_Measurement_YawRate* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawRate_initialize_ex(
    UMAA_Common_Measurement_YawRate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawRate_initialize_w_params(
    UMAA_Common_Measurement_YawRate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawRate_finalize_w_return(
    UMAA_Common_Measurement_YawRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawRate_finalize(
    UMAA_Common_Measurement_YawRate* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawRate_finalize_ex(
    UMAA_Common_Measurement_YawRate* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawRate_finalize_w_params(
    UMAA_Common_Measurement_YawRate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_YawRate_finalize_optional_members(
    UMAA_Common_Measurement_YawRate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_YawRate_copy(
    UMAA_Common_Measurement_YawRate* dst,
    const UMAA_Common_Measurement_YawRate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code< UMAA_Common_Measurement_DateTime> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Measurements */

