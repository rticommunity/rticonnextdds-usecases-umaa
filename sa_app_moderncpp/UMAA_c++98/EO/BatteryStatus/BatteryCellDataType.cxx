

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryCellDataType.idl 
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 

#ifndef dds_c_log_infrastructure_h
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "BatteryCellDataType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "BatteryCellDataTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_BatteryStatus_BatteryCellDataTypeTYPENAME = "UMAA::EO::BatteryStatus::BatteryCellDataType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_BatteryStatus_BatteryCellDataType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[3]=
    {

        {
            (char *)"current",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"temperature",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"voltage",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::BatteryStatus::BatteryCellDataType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_BatteryStatus_BatteryCellDataType*/

    if (is_initialized) {
        return &UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_PowerBusCurrent_get_typecode();
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_PowerBusVoltage_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._minValue._u.double_value = -273LL;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[1]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._minValue._u.double_value = -100000LL;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc_members[2]._annotations._maxValue._u.double_value = 100000ULL;

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc._data._sampleAccessInfo =
    UMAA_EO_BatteryStatus_BatteryCellDataType_get_sample_access_info();
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc._data._typePlugin =
    UMAA_EO_BatteryStatus_BatteryCellDataType_get_type_plugin_info();    

    return &UMAA_EO_BatteryStatus_BatteryCellDataType_g_tc;
}

#define TSeq UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq
#define T UMAA_EO_BatteryStatus_BatteryCellDataType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryCellDataType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_BatteryStatus_BatteryCellDataType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_BatteryStatus_BatteryCellDataType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_BatteryStatus_BatteryCellDataType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_BatteryStatus_BatteryCellDataType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_BatteryStatus_BatteryCellDataType_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_BatteryStatus_BatteryCellDataType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->current - (char *)sample);

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->temperature - (char *)sample);

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->voltage - (char *)sample);

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_BatteryStatus_BatteryCellDataType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_BatteryStatus_BatteryCellDataType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_BatteryStatus_BatteryCellDataType_get_member_value_pointer;

    UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BatteryStatus_BatteryCellDataType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_BatteryStatus_BatteryCellDataType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_BatteryStatus_BatteryCellDataType_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_BatteryStatus_BatteryCellDataType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize(
    UMAA_EO_BatteryStatus_BatteryCellDataType* sample)
{
    return UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_w_params(
    UMAA_EO_BatteryStatus_BatteryCellDataType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->current = 0.0;

    sample->temperature = 0.0;

    sample->voltage = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_ex(
    UMAA_EO_BatteryStatus_BatteryCellDataType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_return(
    UMAA_EO_BatteryStatus_BatteryCellDataType* sample)
{
    UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize(
    UMAA_EO_BatteryStatus_BatteryCellDataType* sample)
{  
    UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_ex(
    UMAA_EO_BatteryStatus_BatteryCellDataType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_params(
    UMAA_EO_BatteryStatus_BatteryCellDataType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_optional_members(
    UMAA_EO_BatteryStatus_BatteryCellDataType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool UMAA_EO_BatteryStatus_BatteryCellDataType_copy(
    UMAA_EO_BatteryStatus_BatteryCellDataType* dst,
    const UMAA_EO_BatteryStatus_BatteryCellDataType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->current, 
            &src->current)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->temperature, 
            &src->temperature)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->voltage, 
            &src->voltage)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_EO_BatteryStatus_BatteryCellDataType' sequence class.
*/
#define T UMAA_EO_BatteryStatus_BatteryCellDataType
#define TSeq UMAA_EO_BatteryStatus_BatteryCellDataTypeSeq

#define T_initialize_w_params UMAA_EO_BatteryStatus_BatteryCellDataType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_BatteryStatus_BatteryCellDataType_finalize_w_params
#define T_copy       UMAA_EO_BatteryStatus_BatteryCellDataType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code< UMAA_EO_BatteryStatus_BatteryCellDataType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_BatteryStatus_BatteryCellDataType_get_typecode();
        }

    } 
}
#endif
