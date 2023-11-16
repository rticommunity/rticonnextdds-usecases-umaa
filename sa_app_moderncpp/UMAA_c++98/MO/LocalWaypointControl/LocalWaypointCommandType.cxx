

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointCommandType.idl 
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

#include "LocalWaypointCommandType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "LocalWaypointCommandTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeTYPENAME = "UMAA::MO::LocalWaypointControl::LocalWaypointCommandType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_waypoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[6]=
    {

        {
            (char *)"waypointCount",/* Member name */
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
            (char *)"waypoints",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"destination",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"sessionID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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

    static DDS_TypeCode UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MO::LocalWaypointControl::LocalWaypointCommandType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MO_LocalWaypointControl_LocalWaypointCommandType*/

    if (is_initialized) {
        return &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_MO_LocalWaypointControl_LocalWaypointType_get_typecode();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_waypoints_sequence._data._sampleAccessInfo = UMAA_MO_LocalWaypointControl_LocalWaypointType_get_sample_seq_access_info();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_waypoints_sequence;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc_members[0]._annotations._maxValue._u.long_value = 2147483647L;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc._data._sampleAccessInfo =
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_sample_access_info();
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc._data._typePlugin =
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_type_plugin_info();    

    return &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_tc;
}

#define TSeq UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq
#define T UMAA_MO_LocalWaypointControl_LocalWaypointCommandType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MO_LocalWaypointControl_LocalWaypointCommandType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointCount - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypoints - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->destination - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sessionID - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MO_LocalWaypointControl_LocalWaypointCommandType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_member_value_pointer;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_typePlugin = 
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
        UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_g_typePlugin;
}
#endif

RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* sample)
{
    return UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{
    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->waypointCount = 0;

    if (allocParams->allocate_memory) {
        if(!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_initialize(&sample->waypoints )){
            return RTI_FALSE;
        }
        if(!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_set_element_allocation_params(&sample->waypoints ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_set_absolute_maximum(&sample->waypoints , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_set_maximum(
            &sample->waypoints
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_set_length(&sample->waypoints, 0)){
            return RTI_FALSE;
        }    
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->source,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->destination,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->sessionID,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeStamp,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_return(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* sample)
{
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* sample)
{  
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_ex(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_params(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTIOsapiUtility_unusedReturnValue(UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_set_element_deallocation_params(
        &sample->waypoints,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_finalize(
            &sample->waypoints),
            DDS_Boolean);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->destination,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->sessionID,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_optional_members(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* sample, RTIBool deletePointers)
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

    {
        DDS_Long i, length;
        length = UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_get_length(
            &sample->waypoints);

        for (i = 0; i < length; i++) {
            UMAA_MO_LocalWaypointControl_LocalWaypointType_finalize_optional_members(
                UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_get_reference(
                    &sample->waypoints, i), deallocParams->delete_pointers);
        }
    }  
}

RTIBool UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_copy(
    UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* dst,
    const UMAA_MO_LocalWaypointControl_LocalWaypointCommandType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLong (
            &dst->waypointCount, 
            &src->waypointCount)) { 
            return RTI_FALSE;
        }
        if (!UMAA_MO_LocalWaypointControl_LocalWaypointTypeSeq_copy(
            &dst->waypoints ,
            &src->waypoints )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->destination,
            (const UMAA_Common_Measurement_NumericGUID*)&src->destination)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->sessionID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->sessionID)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeStamp,
            (const UMAA_Common_Measurement_DateTime*)&src->timeStamp)) {
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
* Configure and implement 'UMAA_MO_LocalWaypointControl_LocalWaypointCommandType' sequence class.
*/
#define T UMAA_MO_LocalWaypointControl_LocalWaypointCommandType
#define TSeq UMAA_MO_LocalWaypointControl_LocalWaypointCommandTypeSeq

#define T_initialize_w_params UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_initialize_w_params

#define T_finalize_w_params   UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_finalize_w_params
#define T_copy       UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MO_LocalWaypointControl_LocalWaypointCommandType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MO_LocalWaypointControl_LocalWaypointCommandType_get_typecode();
        }

    } 
}
#endif
