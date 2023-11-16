

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrderedEnumerationSets.idl 
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

#include "OrderedEnumerationSets.h"

#ifndef NDDS_STANDALONE_TYPE
#include "OrderedEnumerationSetsPlugin.h"
#endif

#include <new>

#undef ERROR

#undef VARIABLE_PITCH

#undef DELETE

#undef PLATFORM

/* ========================================================================= */
const char *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeTYPENAME = "UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc_members[5]=
    {

        {
            (char *)"OVERCAST",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_OVERCAST, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"BROKEN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_BROKEN, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"FEW",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_FEW, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"SCATTERED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_SCATTERED, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"CLEAR",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_CLEAR, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::OrderedEnumeration::CloudCoverEnumType::CloudCoverEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType*/

    if (is_initialized) {
        return &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_sample_access_info();
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc._data._typePlugin =
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_type_plugin_info();    

    return &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_tc;
}

#define TSeq UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeSeq
#define T UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_member_value_pointer;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_typePlugin = 
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
        UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* sample)
{

    *sample = UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_OVERCAST;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_OVERCAST;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_copy(
    UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* dst,
    const UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType' sequence class.
*/
#define T UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType
#define TSeq UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumTypeSeq

#define T_initialize_w_params UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_finalize_w_params
#define T_copy       UMAA_Common_OrderedEnumeration_CloudCoverEnumType_CloudCoverEnumType_copy

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

/* ========================================================================= */
const char *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeTYPENAME = "UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc_members[10]=
    {

        {
            (char *)"CALM_GLOSSY",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_GLOSSY, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"CALM_RIPPLED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_RIPPLED, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"HIGH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_HIGH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"MODERATE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_MODERATE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PHENOMENAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_PHENOMENAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"ROUGH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_ROUGH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"SLIGHT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_SLIGHT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"SMOOTH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_SMOOTH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"VERY_HIGH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_VERY_HIGH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"VERY_ROUGH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_VERY_ROUGH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::OrderedEnumeration::SeaStateEnumType::SeaStateEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            10, /* Number of members */
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType*/

    if (is_initialized) {
        return &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_sample_access_info();
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc._data._typePlugin =
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_type_plugin_info();    

    return &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_tc;
}

#define TSeq UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeSeq
#define T UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_member_value_pointer;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_typePlugin = 
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
        UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* sample)
{

    *sample = UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_GLOSSY;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_CALM_GLOSSY;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_copy(
    UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* dst,
    const UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType' sequence class.
*/
#define T UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType
#define TSeq UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumTypeSeq

#define T_initialize_w_params UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_finalize_w_params
#define T_copy       UMAA_Common_OrderedEnumeration_SeaStateEnumType_SeaStateEnumType_copy

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

/* ========================================================================= */
const char *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeTYPENAME = "UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc_members[5]=
    {

        {
            (char *)"EXTREME",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_EXTREME, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"LIGHT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_LIGHT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"MODERATE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_MODERATE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"SEVERE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_SEVERE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"NONE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_NONE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::OrderedEnumeration::WeatherSeverityEnumType::WeatherSeverityEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType*/

    if (is_initialized) {
        return &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_sample_access_info();
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc._data._typePlugin =
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_type_plugin_info();    

    return &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_tc;
}

#define TSeq UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeSeq
#define T UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_member_value_pointer;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_typePlugin = 
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
        UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* sample)
{

    *sample = UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_EXTREME;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_w_params(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_EXTREME;
    return RTI_TRUE;
}
RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_ex(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_return(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_ex(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_params(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_optional_members(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_copy(
    UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* dst,
    const UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType' sequence class.
*/
#define T UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType
#define TSeq UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumTypeSeq

#define T_initialize_w_params UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_finalize_w_params
#define T_copy       UMAA_Common_OrderedEnumeration_WeatherSeverityEnumType_WeatherSeverityEnumType_copy

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
    } 
}
#endif
