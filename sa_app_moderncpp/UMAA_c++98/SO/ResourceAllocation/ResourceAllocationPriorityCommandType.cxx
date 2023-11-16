

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityCommandType.idl 
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

#include "ResourceAllocationPriorityCommandType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ResourceAllocationPriorityCommandTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTYPENAME = "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommandType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_priorities_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[6]=
    {

        {
            (char *)"priorities",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"destination",/* Member name */
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
            (char *)"sessionID",/* Member name */
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
            (char *)"timeStamp",/* Member name */
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
            (char *)"resourceId",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommandType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType*/

    if (is_initialized) {
        return &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_priorities_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_priorities_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_priorities_sequence;
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc._data._sampleAccessInfo =
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_sample_access_info();
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc._data._typePlugin =
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_type_plugin_info();    

    return &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_tc;
}

#define TSeq UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq
#define T UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->priorities - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->destination - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sessionID - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->resourceId - (char *)sample);

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_member_value_pointer;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_typePlugin = 
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
        UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_g_typePlugin;
}
#endif

RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* sample)
{
    return UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType *sample,
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

    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->priorities )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->priorities ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->priorities , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->priorities
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->priorities, 0)){
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
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->resourceId,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* sample)
{
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* sample)
{  
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->priorities,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->priorities),
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

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->resourceId,
        deallocParams);

}

void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->priorities ,
            &src->priorities )) {
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
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->resourceId,
            (const UMAA_Common_Measurement_NumericGUID*)&src->resourceId)) {
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
* Configure and implement 'UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType' sequence class.
*/
#define T UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType
#define TSeq UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeSeq

#define T_initialize_w_params UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_initialize_w_params

#define T_finalize_w_params   UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_finalize_w_params
#define T_copy       UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType_get_typecode();
        }

    } 
}
#endif
