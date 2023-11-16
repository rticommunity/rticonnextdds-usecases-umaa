

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ZoneType.idl 
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

#include "ZoneType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ZoneTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsTYPENAME = "UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc_members[1]=
    {

        {
            (char *)"PLANNINGZONETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT, 
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

    static DDS_TypeCode UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Selectors", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_sample_access_info();
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_tc;
}

#define TSeq UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsSeq
#define T UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo;
    }

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_member_value_pointer;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_typePlugin = 
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
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* sample)
{

    *sample = UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_return(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* sample, RTIBool deletePointers)
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

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_copy(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* dst,
    const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* src)
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
* Configure and implement 'UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors' sequence class.
*/
#define T UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors
#define TSeq UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsSeq

#define T_initialize_w_params UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_copy

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
const char *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionTYPENAME = "UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc_members[1]=
    {

        {
            (char *)"PlanningZoneType_data",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc =
    {{
            DDS_TK_UNION, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ZoneType_Specializations::ZoneType_Union", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_PlanningZoneType_get_typecode();

    /* Initialize the values for member annotations. */

    /* Discriminator type code */
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_typecode();

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_sample_access_info();
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_tc;
}

#define TSeq UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq
#define T UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_d - (char *)sample);

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.PlanningZoneType_data - (char *)sample);

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_member_value_pointer;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_typePlugin = 
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
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_g_typePlugin;
}
#endif

DDS_LongLong UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_getDefaultDiscriminator(void)
{
    return 0;
}

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* sample)
{
    return UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->_d = (UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors)UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_getDefaultDiscriminator();
    if (!UMAA_MM_BaseType_PlanningZoneType_initialize_w_params(
        &sample->_u.PlanningZoneType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_return(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* sample)
{
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* sample)
{  
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_MM_BaseType_PlanningZoneType_finalize_w_params(
        &sample->_u.PlanningZoneType_data,
        deallocParams);

}

void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* sample, RTIBool deletePointers)
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

    switch(sample->_d) {
        case (UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT):
            {
                UMAA_MM_BaseType_PlanningZoneType_finalize_optional_members(&sample->_u.PlanningZoneType_data, deallocParams->delete_pointers);
        } break ;
        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
}

RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_copy(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* dst,
    const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_copy(
            &dst->_d,
            (const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors*)&src->_d)) {
            return RTI_FALSE;
        } 
        switch(src->_d) {

            case (UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_PlanningZoneType_copy(
                        &dst->_u.PlanningZoneType_data,
                        (const UMAA_MM_BaseType_PlanningZoneType*)&src->_u.PlanningZoneType_data)) {
                        return RTI_FALSE;
                } 
            } break ;

            default: 
            {
                /* 
                * Prevents compiler warnings when discriminator is an enum
                * and unionType does not specify all enumeration members.
                */ 
            }
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
* Configure and implement 'UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union' sequence class.
*/
#define T UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union
#define TSeq UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq

#define T_initialize_w_params UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_copy

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
const char *UMAA_MM_BaseType_ZoneTypeTYPENAME = "UMAA::MM::BaseType::ZoneType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ZoneType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ZoneType_g_tc_members[4]=
    {

        {
            (char *)"zone",/* Member name */
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
            (char *)"zoneKind",/* Member name */
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
            (char *)"ZoneType_subtypes",/* Member name */
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
            (char *)"zoneID",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_ZoneType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ZoneType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            UMAA_MM_BaseType_ZoneType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ZoneType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ZoneType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ZoneType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_ZoneType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Polygon_Volume_get_typecode();
    UMAA_MM_BaseType_ZoneType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_get_typecode();
    UMAA_MM_BaseType_ZoneType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_typecode();
    UMAA_MM_BaseType_ZoneType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_ZoneType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_ZoneType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_MM_BaseType_ZoneType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ZoneType_get_sample_access_info();
    UMAA_MM_BaseType_ZoneType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ZoneType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ZoneType_g_tc;
}

#define TSeq UMAA_MM_BaseType_ZoneTypeSeq
#define T UMAA_MM_BaseType_ZoneType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ZoneTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ZoneTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ZoneType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_ZoneType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ZoneType_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_ZoneType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_ZoneType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zone - (char *)sample);

    UMAA_MM_BaseType_ZoneType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoneKind - (char *)sample);

    UMAA_MM_BaseType_ZoneType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->ZoneType_subtypes - (char *)sample);

    UMAA_MM_BaseType_ZoneType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoneID - (char *)sample);

    UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ZoneType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ZoneType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ZoneType_get_member_value_pointer;

    UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ZoneType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ZoneType_g_typePlugin = 
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
        UMAA_MM_BaseType_ZoneType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ZoneType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ZoneType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_ZoneType_initialize(
    UMAA_MM_BaseType_ZoneType* sample)
{
    return UMAA_MM_BaseType_ZoneType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_ZoneType_initialize_w_params(
    UMAA_MM_BaseType_ZoneType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_Common_Measurement_Polygon_Volume_initialize_w_params(
        &sample->zone,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->zoneKind = UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_KEEP_IN;
    if (!UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_w_params(
        &sample->ZoneType_subtypes,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->zoneID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ZoneType_initialize_ex(
    UMAA_MM_BaseType_ZoneType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ZoneType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ZoneType_finalize_w_return(
    UMAA_MM_BaseType_ZoneType* sample)
{
    UMAA_MM_BaseType_ZoneType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ZoneType_finalize(
    UMAA_MM_BaseType_ZoneType* sample)
{  
    UMAA_MM_BaseType_ZoneType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_ZoneType_finalize_ex(
    UMAA_MM_BaseType_ZoneType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ZoneType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ZoneType_finalize_w_params(
    UMAA_MM_BaseType_ZoneType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_Polygon_Volume_finalize_w_params(
        &sample->zone,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_finalize_w_params(
        &sample->zoneKind,
        deallocParams);

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_params(
        &sample->ZoneType_subtypes,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->zoneID,
        deallocParams);

}

void UMAA_MM_BaseType_ZoneType_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType* sample, RTIBool deletePointers)
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

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_optional_members(&sample->ZoneType_subtypes, deallocParams->delete_pointers);
}

RTIBool UMAA_MM_BaseType_ZoneType_copy(
    UMAA_MM_BaseType_ZoneType* dst,
    const UMAA_MM_BaseType_ZoneType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_Common_Measurement_Polygon_Volume_copy(
            &dst->zone,
            (const UMAA_Common_Measurement_Polygon_Volume*)&src->zone)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_copy(
            &dst->zoneKind,
            (const UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType*)&src->zoneKind)) {
            return RTI_FALSE;
        } 
        if (!UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_copy(
            &dst->ZoneType_subtypes,
            (const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union*)&src->ZoneType_subtypes)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->zoneID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->zoneID)) {
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
* Configure and implement 'UMAA_MM_BaseType_ZoneType' sequence class.
*/
#define T UMAA_MM_BaseType_ZoneType
#define TSeq UMAA_MM_BaseType_ZoneTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_ZoneType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ZoneType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ZoneType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_typecode();
        }

        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_ZoneType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_ZoneType_get_typecode();
        }

    } 
}
#endif
