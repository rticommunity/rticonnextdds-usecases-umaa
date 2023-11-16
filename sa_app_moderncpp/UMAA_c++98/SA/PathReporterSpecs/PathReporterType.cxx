

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterType.idl 
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

#include "PathReporterType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "PathReporterTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_PathReporterSpecs_PathReporterTypeTYPENAME = "UMAA::SA::PathReporterSpecs::PathReporterType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_PathReporterSpecs_PathReporterType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[6]=
    {

        {
            (char *)"maxDistance",/* Member name */
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
            (char *)"maxPoints",/* Member name */
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
            (char *)"maxTgtResolution",/* Member name */
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
            (char *)"maxTime",/* Member name */
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
            (char *)"minTgtResolution",/* Member name */
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
            (char *)"pathType",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SA_PathReporterSpecs_PathReporterType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::PathReporterSpecs::PathReporterType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_PathReporterSpecs_PathReporterType*/

    if (is_initialized) {
        return &UMAA_SA_PathReporterSpecs_PathReporterType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[3]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc._data._sampleAccessInfo =
    UMAA_SA_PathReporterSpecs_PathReporterType_get_sample_access_info();
    UMAA_SA_PathReporterSpecs_PathReporterType_g_tc._data._typePlugin =
    UMAA_SA_PathReporterSpecs_PathReporterType_get_type_plugin_info();    

    return &UMAA_SA_PathReporterSpecs_PathReporterType_g_tc;
}

#define TSeq UMAA_SA_PathReporterSpecs_PathReporterTypeSeq
#define T UMAA_SA_PathReporterSpecs_PathReporterType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_PathReporterSpecs_PathReporterType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_PathReporterSpecs_PathReporterTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_PathReporterSpecs_PathReporterTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_PathReporterSpecs_PathReporterType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_PathReporterSpecs_PathReporterType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_PathReporterSpecs_PathReporterType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxDistance - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxPoints - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxTgtResolution - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxTime - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minTgtResolution - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pathType - (char *)sample);

    UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_PathReporterSpecs_PathReporterType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_PathReporterSpecs_PathReporterType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_PathReporterSpecs_PathReporterType_get_member_value_pointer;

    UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_PathReporterSpecs_PathReporterType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_PathReporterSpecs_PathReporterType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_PathReporterSpecs_PathReporterType_g_typePlugin = 
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
        UMAA_SA_PathReporterSpecs_PathReporterType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_PathReporterSpecs_PathReporterType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize(
    UMAA_SA_PathReporterSpecs_PathReporterType* sample)
{
    return UMAA_SA_PathReporterSpecs_PathReporterType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->maxDistance = 0.0;

    sample->maxPoints = 0;

    sample->maxTgtResolution = 0.0;

    sample->maxTime = 0.0;

    sample->minTgtResolution = 0.0;

    sample->pathType = UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType_HISTORIAL_GLOBAL;
    return RTI_TRUE;
}
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_PathReporterSpecs_PathReporterType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_return(
    UMAA_SA_PathReporterSpecs_PathReporterType* sample)
{
    UMAA_SA_PathReporterSpecs_PathReporterType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_PathReporterSpecs_PathReporterType_finalize(
    UMAA_SA_PathReporterSpecs_PathReporterType* sample)
{  
    UMAA_SA_PathReporterSpecs_PathReporterType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType_finalize_w_params(
        &sample->pathType,
        deallocParams);

}

void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_optional_members(
    UMAA_SA_PathReporterSpecs_PathReporterType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_copy(
    UMAA_SA_PathReporterSpecs_PathReporterType* dst,
    const UMAA_SA_PathReporterSpecs_PathReporterType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyDouble (
            &dst->maxDistance, 
            &src->maxDistance)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->maxPoints, 
            &src->maxPoints)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxTgtResolution, 
            &src->maxTgtResolution)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxTime, 
            &src->maxTime)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->minTgtResolution, 
            &src->minTgtResolution)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType_copy(
            &dst->pathType,
            (const UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType*)&src->pathType)) {
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
* Configure and implement 'UMAA_SA_PathReporterSpecs_PathReporterType' sequence class.
*/
#define T UMAA_SA_PathReporterSpecs_PathReporterType
#define TSeq UMAA_SA_PathReporterSpecs_PathReporterTypeSeq

#define T_initialize_w_params UMAA_SA_PathReporterSpecs_PathReporterType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_params
#define T_copy       UMAA_SA_PathReporterSpecs_PathReporterType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_PathReporterSpecs_PathReporterType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_PathReporterSpecs_PathReporterType_get_typecode();
        }

    } 
}
#endif
