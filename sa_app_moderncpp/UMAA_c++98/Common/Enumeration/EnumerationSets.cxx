

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl 
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

#include "EnumerationSets.h"

#ifndef NDDS_STANDALONE_TYPE
#include "EnumerationSetsPlugin.h"
#endif

#include <new>

#undef ERROR

#undef VARIABLE_PITCH

#undef DELETE

#undef PLATFORM

/* ========================================================================= */
const char *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeTYPENAME = "UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc_members[3]=
    {

        {
            (char *)"AUTOMATIC",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_AUTOMATIC, 
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
            (char *)"MANUAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_MANUAL, 
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
            (char *)"SEMI_AUTOMATIC",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_SEMI_AUTOMATIC, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::AutomationEnumType::AutomationEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeSeq
#define T UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_AUTOMATIC;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_w_params(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_AUTOMATIC;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_ex(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_return(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_ex(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_params(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_copy(
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* dst,
    const UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType
#define TSeq UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType_copy

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

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_BooleanEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Enumeration_BooleanEnumType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Enumeration::BooleanEnumType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  UMAA_Common_Enumeration_BooleanEnumType */

    if (is_initialized) {
        return &UMAA_Common_Enumeration_BooleanEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._annotations._defaultValue._u.boolean_value = 0;

    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_BooleanEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_BooleanEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_BooleanEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_BooleanEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_BooleanEnumTypeSeq
#define T UMAA_Common_Enumeration_BooleanEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BooleanEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_BooleanEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_BooleanEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_BooleanEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_BooleanEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BooleanEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_BooleanEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_BooleanEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_BooleanEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_BooleanEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_BooleanEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_BooleanEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_BooleanEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_BooleanEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_BooleanEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_BooleanEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_BooleanEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize(
    UMAA_Common_Enumeration_BooleanEnumType* sample)
{
    return UMAA_Common_Enumeration_BooleanEnumType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize_w_params(
    UMAA_Common_Enumeration_BooleanEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_BooleanEnumType_initialize_ex(
    UMAA_Common_Enumeration_BooleanEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_BooleanEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_BooleanEnumType_finalize_w_return(
    UMAA_Common_Enumeration_BooleanEnumType* sample)
{
    UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_BooleanEnumType_finalize(
    UMAA_Common_Enumeration_BooleanEnumType* sample)
{  
    UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(
    UMAA_Common_Enumeration_BooleanEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params(
    UMAA_Common_Enumeration_BooleanEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_BooleanEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_BooleanEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_BooleanEnumType_copy(
    UMAA_Common_Enumeration_BooleanEnumType* dst,
    const UMAA_Common_Enumeration_BooleanEnumType* src)
{
    try {

        if (!RTICdrType_copyBoolean (
            dst, 
            src)) { 
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
* Configure and implement 'UMAA_Common_Enumeration_BooleanEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_BooleanEnumType
#define TSeq UMAA_Common_Enumeration_BooleanEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_BooleanEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_BooleanEnumType_copy

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
const char *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeTYPENAME = "UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc_members[5]=
    {

        {
            (char *)"BIT_SUSPENDED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_SUSPENDED, 
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
            (char *)"BIT_FAILED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_FAILED, 
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
            (char *)"BIT_PASSED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_PASSED, 
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
            (char *)"RUNNING_BIT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_RUNNING_BIT, 
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
            (char *)"OFF_ABORT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_OFF_ABORT, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeSeq
#define T UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_SUSPENDED;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_BIT_SUSPENDED;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_copy(
    UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* dst,
    const UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType
#define TSeq UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType_copy

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
const char *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeTYPENAME = "UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc_members[2]=
    {

        {
            (char *)"BLACK_HOT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_BLACK_HOT, 
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
            (char *)"WHITE_HOT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_WHITE_HOT, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeSeq
#define T UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_BLACK_HOT;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_w_params(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_BLACK_HOT;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_ex(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_return(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_ex(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_params(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_copy(
    UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* dst,
    const UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType
#define TSeq UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType_copy

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
const char *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeTYPENAME = "UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc_members[2]=
    {

        {
            (char *)"GREAT_CIRCLE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_GREAT_CIRCLE, 
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
            (char *)"RHUMB",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_RHUMB, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeSeq
#define T UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_GREAT_CIRCLE;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_w_params(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_GREAT_CIRCLE;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_ex(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_return(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_ex(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_params(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_copy(
    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* dst,
    const UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType
#define TSeq UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_copy

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
const char *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeTYPENAME = "UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc_members[4]=
    {

        {
            (char *)"TCP_IPV4",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV4, 
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
            (char *)"TCP_IPV6",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV6, 
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
            (char *)"UDP_IPV4",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_UDP_IPV4, 
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
            (char *)"UDP_IPV6",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_UDP_IPV6, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::NetworkProtocolEnumType::NetworkProtocolEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeSeq
#define T UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV4;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_w_params(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_TCP_IPV4;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_ex(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_return(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_ex(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_params(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_copy(
    UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* dst,
    const UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType
#define TSeq UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType_copy

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
const char *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeTYPENAME = "UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc_members[2]=
    {

        {
            (char *)"OFF",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_OFF, 
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
            (char *)"ON",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_ON, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeSeq
#define T UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_OFF;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_OFF;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_copy(
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* dst,
    const UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType
#define TSeq UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_copy

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
const char *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeTYPENAME = "UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc_members[7]=
    {

        {
            (char *)"ABORT_MISSION_LOAD_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ABORT_MISSION_LOAD_PLAN, 
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
            (char *)"ADD_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ADD_PLAN, 
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
            (char *)"DELETE_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_DELETE_PLAN, 
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
            (char *)"DOWNLOAD_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_DOWNLOAD_PLAN, 
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
            (char *)"RETRIEVE_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_RETRIEVE_PLAN, 
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
            (char *)"UPDATE_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_UPDATE_PLAN, 
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
            (char *)"UPLOAD_PLAN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_UPLOAD_PLAN, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::PlanActionEnumType::PlanActionEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeSeq
#define T UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ABORT_MISSION_LOAD_PLAN;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_ABORT_MISSION_LOAD_PLAN;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_ex(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_ex(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_copy(
    UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* dst,
    const UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType
#define TSeq UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType_copy

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
const char *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeTYPENAME = "UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc_members[4]=
    {

        {
            (char *)"POWER_OFF",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_OFF, 
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
            (char *)"POWER_ON",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_ON, 
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
            (char *)"EMERGENCY_POWER",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_EMERGENCY_POWER, 
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
            (char *)"POWER_STANDBY",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_STANDBY, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeSeq
#define T UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_OFF;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_POWER_OFF;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_copy(
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* dst,
    const UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType
#define TSeq UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType_copy

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
const char *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeTYPENAME = "UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc_members[7]=
    {

        {
            (char *)"THUNDERSTORMS",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_THUNDERSTORMS, 
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
            (char *)"FOG",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_FOG, 
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
            (char *)"HAZE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_HAZE, 
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
            (char *)"SNOW",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_SNOW, 
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
            (char *)"DRIZZLE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_DRIZZLE, 
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
            (char *)"RAIN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_RAIN, 
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
            (char *)"SHOWERS",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_SHOWERS, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::PrecipitationEnumType::PrecipitationEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq
#define T UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_THUNDERSTORMS;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_w_params(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_THUNDERSTORMS;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_ex(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_return(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_ex(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_params(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_copy(
    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* dst,
    const UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType
#define TSeq UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType_copy

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
const char *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeTYPENAME = "UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc_members[9]=
    {

        {
            (char *)"FORCED_ALLOCATION",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION, 
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
            (char *)"FORCED_ALLOCATION_W_LAUNCH_RECOVERY",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION_W_LAUNCH_RECOVERY, 
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
            (char *)"ALLOCATED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_ALLOCATED, 
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
            (char *)"ALLOCATED_W_LAUNCH_RECOVERY",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_ALLOCATED_W_LAUNCH_RECOVERY, 
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
            (char *)"AVAILABLE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_AVAILABLE, 
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
            (char *)"RELEASED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_RELEASED, 
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
            (char *)"TEMPORARILY_UNAVAILABLE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_TEMPORARILY_UNAVAILABLE, 
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
            (char *)"UNAVAILABLE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_UNAVAILABLE, 
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
            (char *)"FAULT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FAULT, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeSeq
#define T UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_w_params(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_FORCED_ALLOCATION;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_ex(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_return(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_ex(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_params(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_copy(
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* dst,
    const UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType
#define TSeq UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType_copy

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
const char *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeTYPENAME = "UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc_members[5]=
    {

        {
            (char *)"LOI_1",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_1, 
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
            (char *)"LOI_2",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_2, 
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
            (char *)"LOI_3",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_3, 
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
            (char *)"LOI_4",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_4, 
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
            (char *)"LOI_5",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_5, 
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

    static DDS_TypeCode UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Enumeration::SpecificLOIEnumType::SpecificLOIEnumType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType*/

    if (is_initialized) {
        return &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_sample_access_info();
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc._data._typePlugin =
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_type_plugin_info();    

    return &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_tc;
}

#define TSeq UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeSeq
#define T UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo;
    }

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_member_value_pointer;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_typePlugin = 
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
        UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* sample)
{

    *sample = UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_1;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_w_params(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_LOI_1;
    return RTI_TRUE;
}
RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_ex(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_return(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_ex(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_params(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_optional_members(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_copy(
    UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* dst,
    const UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType* src)
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
* Configure and implement 'UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType' sequence class.
*/
#define T UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType
#define TSeq UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypeSeq

#define T_initialize_w_params UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_finalize_w_params
#define T_copy       UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType_copy

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
