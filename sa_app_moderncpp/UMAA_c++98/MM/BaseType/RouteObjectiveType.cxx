

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveType.idl 
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

#include "RouteObjectiveType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "RouteObjectiveTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_RouteObjectiveTypeTYPENAME = "UMAA::MM::BaseType::RouteObjectiveType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_RouteObjectiveType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_MM_BaseType_RouteObjectiveType_g_tc_waypoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[3]=
    {

        {
            (char *)"mode",/* Member name */
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
            (char *)"routeDescription",/* Member name */
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
            (char *)"waypoints",/* Member name */
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

    static DDS_TypeCode UMAA_MM_BaseType_RouteObjectiveType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::RouteObjectiveType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            UMAA_MM_BaseType_RouteObjectiveType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_RouteObjectiveType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_RouteObjectiveType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_RouteObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_RouteObjectiveType_g_tc_waypoints_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_WaypointType_get_typecode();
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_waypoints_sequence._data._sampleAccessInfo = UMAA_MM_BaseType_WaypointType_get_sample_seq_access_info();
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_get_typecode();
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_RouteObjectiveType_g_tc_waypoints_sequence;

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_BaseType_RouteObjectiveType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_MM_BaseType_RouteObjectiveType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_RouteObjectiveType_get_sample_access_info();
    UMAA_MM_BaseType_RouteObjectiveType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_RouteObjectiveType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_RouteObjectiveType_g_tc;
}

#define TSeq UMAA_MM_BaseType_RouteObjectiveTypeSeq
#define T UMAA_MM_BaseType_RouteObjectiveType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RouteObjectiveType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_RouteObjectiveType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_RouteObjectiveTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_RouteObjectiveTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_RouteObjectiveType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_RouteObjectiveType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_RouteObjectiveType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_RouteObjectiveType_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_RouteObjectiveType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_RouteObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

    UMAA_MM_BaseType_RouteObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->routeDescription - (char *)sample);

    UMAA_MM_BaseType_RouteObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypoints - (char *)sample);

    UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_RouteObjectiveType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_RouteObjectiveType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_RouteObjectiveType_get_member_value_pointer;

    UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_RouteObjectiveType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_RouteObjectiveType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_RouteObjectiveType_g_typePlugin = 
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
        UMAA_MM_BaseType_RouteObjectiveType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_RouteObjectiveType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_RouteObjectiveType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize(
    UMAA_MM_BaseType_RouteObjectiveType* sample)
{
    return UMAA_MM_BaseType_RouteObjectiveType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_RouteObjectiveType *sample,
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

    sample->mode = UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_ALTITUDE;

    if (allocParams->allocate_memory) {
        sample->routeDescription = DDS_String_alloc((1023L));
        if (sample->routeDescription != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->routeDescription,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->routeDescription == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->routeDescription != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->routeDescription,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->routeDescription == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!UMAA_MM_BaseType_WaypointTypeSeq_initialize(&sample->waypoints )){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_WaypointTypeSeq_set_element_allocation_params(&sample->waypoints ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_WaypointTypeSeq_set_absolute_maximum(&sample->waypoints , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_WaypointTypeSeq_set_maximum(
            &sample->waypoints
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_MM_BaseType_WaypointTypeSeq_set_length(&sample->waypoints, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_RouteObjectiveType_initialize_ex(
    UMAA_MM_BaseType_RouteObjectiveType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_RouteObjectiveType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_RouteObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_RouteObjectiveType* sample)
{
    UMAA_MM_BaseType_RouteObjectiveType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_RouteObjectiveType_finalize(
    UMAA_MM_BaseType_RouteObjectiveType* sample)
{  
    UMAA_MM_BaseType_RouteObjectiveType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_RouteObjectiveType_finalize_ex(
    UMAA_MM_BaseType_RouteObjectiveType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_RouteObjectiveType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_RouteObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_RouteObjectiveType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_finalize_w_params(
        &sample->mode,
        deallocParams);

    if (sample->routeDescription != NULL) {
        DDS_String_free(sample->routeDescription);
        sample->routeDescription=NULL;

    }
    RTIOsapiUtility_unusedReturnValue(UMAA_MM_BaseType_WaypointTypeSeq_set_element_deallocation_params(
        &sample->waypoints,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_MM_BaseType_WaypointTypeSeq_finalize(
            &sample->waypoints),
            DDS_Boolean);

}

void UMAA_MM_BaseType_RouteObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_RouteObjectiveType* sample, RTIBool deletePointers)
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
        length = UMAA_MM_BaseType_WaypointTypeSeq_get_length(
            &sample->waypoints);

        for (i = 0; i < length; i++) {
            UMAA_MM_BaseType_WaypointType_finalize_optional_members(
                UMAA_MM_BaseType_WaypointTypeSeq_get_reference(
                    &sample->waypoints, i), deallocParams->delete_pointers);
        }
    }  
}

RTIBool UMAA_MM_BaseType_RouteObjectiveType_copy(
    UMAA_MM_BaseType_RouteObjectiveType* dst,
    const UMAA_MM_BaseType_RouteObjectiveType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_copy(
            &dst->mode,
            (const UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType*)&src->mode)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyStringEx (
            &dst->routeDescription
            ,
            src->routeDescription, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_WaypointTypeSeq_copy(
            &dst->waypoints ,
            &src->waypoints )) {
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
* Configure and implement 'UMAA_MM_BaseType_RouteObjectiveType' sequence class.
*/
#define T UMAA_MM_BaseType_RouteObjectiveType
#define TSeq UMAA_MM_BaseType_RouteObjectiveTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_RouteObjectiveType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_RouteObjectiveType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_RouteObjectiveType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_RouteObjectiveType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_RouteObjectiveType_get_typecode();
        }

    } 
}
#endif
