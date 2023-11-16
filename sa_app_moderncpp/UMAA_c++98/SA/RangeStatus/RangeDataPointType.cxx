

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeDataPointType.idl 
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

#include "RangeDataPointType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "RangeDataPointTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_RangeStatus_RangeDataPointTypeTYPENAME = "UMAA::SA::RangeStatus::RangeDataPointType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_RangeStatus_RangeDataPointType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[8]=
    {

        {
            (char *)"bearing",/* Member name */
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
            (char *)"bearingValidity",/* Member name */
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
            (char *)"dataPointCovariance",/* Member name */
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
        }, 
        {
            (char *)"inclination",/* Member name */
            {
                3,/* Representation ID */
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
            (char *)"inclinationValidity",/* Member name */
            {
                4,/* Representation ID */
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
            (char *)"range",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"rangeValidity",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"pointID",/* Member name */
            {
                7,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_SA_RangeStatus_RangeDataPointType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::RangeStatus::RangeDataPointType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_RangeStatus_RangeDataPointType*/

    if (is_initialized) {
        return &UMAA_SA_RangeStatus_RangeDataPointType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_RangeStatus_RangeDataPointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Angle_get_typecode();
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovariancePolarType_get_typecode();
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Angle_get_typecode();
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

    UMAA_SA_RangeStatus_RangeDataPointType_g_tc._data._sampleAccessInfo =
    UMAA_SA_RangeStatus_RangeDataPointType_get_sample_access_info();
    UMAA_SA_RangeStatus_RangeDataPointType_g_tc._data._typePlugin =
    UMAA_SA_RangeStatus_RangeDataPointType_get_type_plugin_info();    

    return &UMAA_SA_RangeStatus_RangeDataPointType_g_tc;
}

#define TSeq UMAA_SA_RangeStatus_RangeDataPointTypeSeq
#define T UMAA_SA_RangeStatus_RangeDataPointType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeDataPointType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_RangeStatus_RangeDataPointType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_RangeStatus_RangeDataPointTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_RangeStatus_RangeDataPointTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_RangeStatus_RangeDataPointType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_RangeStatus_RangeDataPointType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_RangeStatus_RangeDataPointType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[8] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_RangeStatus_RangeDataPointType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bearing - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bearingValidity - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->dataPointCovariance - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->inclination - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->inclinationValidity - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->range - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->rangeValidity - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pointID - (char *)sample);

    UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_RangeStatus_RangeDataPointType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_RangeStatus_RangeDataPointType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_RangeStatus_RangeDataPointType_get_member_value_pointer;

    UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_RangeStatus_RangeDataPointType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_RangeStatus_RangeDataPointType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_RangeStatus_RangeDataPointType_g_typePlugin = 
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
        UMAA_SA_RangeStatus_RangeDataPointType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_RangeStatus_RangeDataPointType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize(
    UMAA_SA_RangeStatus_RangeDataPointType* sample)
{
    return UMAA_SA_RangeStatus_RangeDataPointType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize_w_params(
    UMAA_SA_RangeStatus_RangeDataPointType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->bearing = 0.0;

    sample->bearingValidity = 0;

    if (!UMAA_Common_Measurement_CovariancePolarType_initialize_w_params(
        &sample->dataPointCovariance,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->inclination = 0.0;

    sample->inclinationValidity = 0;

    sample->range = 0.0;

    sample->rangeValidity = 0;

    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->pointID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_SA_RangeStatus_RangeDataPointType_initialize_ex(
    UMAA_SA_RangeStatus_RangeDataPointType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_RangeStatus_RangeDataPointType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_return(
    UMAA_SA_RangeStatus_RangeDataPointType* sample)
{
    UMAA_SA_RangeStatus_RangeDataPointType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_RangeStatus_RangeDataPointType_finalize(
    UMAA_SA_RangeStatus_RangeDataPointType* sample)
{  
    UMAA_SA_RangeStatus_RangeDataPointType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_RangeStatus_RangeDataPointType_finalize_ex(
    UMAA_SA_RangeStatus_RangeDataPointType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_params(
    UMAA_SA_RangeStatus_RangeDataPointType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_CovariancePolarType_finalize_w_params(
        &sample->dataPointCovariance,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->pointID,
        deallocParams);

}

void UMAA_SA_RangeStatus_RangeDataPointType_finalize_optional_members(
    UMAA_SA_RangeStatus_RangeDataPointType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SA_RangeStatus_RangeDataPointType_copy(
    UMAA_SA_RangeStatus_RangeDataPointType* dst,
    const UMAA_SA_RangeStatus_RangeDataPointType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->bearing, 
            &src->bearing)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->bearingValidity, 
            &src->bearingValidity)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_CovariancePolarType_copy(
            &dst->dataPointCovariance,
            (const UMAA_Common_Measurement_CovariancePolarType*)&src->dataPointCovariance)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->inclination, 
            &src->inclination)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->inclinationValidity, 
            &src->inclinationValidity)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->range, 
            &src->range)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->rangeValidity, 
            &src->rangeValidity)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->pointID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->pointID)) {
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
* Configure and implement 'UMAA_SA_RangeStatus_RangeDataPointType' sequence class.
*/
#define T UMAA_SA_RangeStatus_RangeDataPointType
#define TSeq UMAA_SA_RangeStatus_RangeDataPointTypeSeq

#define T_initialize_w_params UMAA_SA_RangeStatus_RangeDataPointType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_RangeStatus_RangeDataPointType_finalize_w_params
#define T_copy       UMAA_SA_RangeStatus_RangeDataPointType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_RangeStatus_RangeDataPointType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_RangeStatus_RangeDataPointType_get_typecode();
        }

    } 
}
#endif
