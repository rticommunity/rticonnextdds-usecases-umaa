

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl 
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

#include "BallastFillType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "BallastFillTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsTYPENAME = "UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc_members[2]=
    {

        {
            (char *)"LEVELTYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT, 
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
            (char *)"BALLASTMASSTYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_BALLASTMASSTYPE_SELECT, 
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

    static DDS_TypeCode UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Selectors", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors*/

    if (is_initialized) {
        return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc._data._sampleAccessInfo =
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_sample_access_info();
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc._data._typePlugin =
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_type_plugin_info();    

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_tc;
}

#define TSeq UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsSeq
#define T UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo;
    }

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_member_value_pointer;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_typePlugin = 
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
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_g_typePlugin;
}
#endif

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* sample)
{

    *sample = UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* sample, RTIBool deletePointers)
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

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_copy(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* dst,
    const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* src)
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
* Configure and implement 'UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors' sequence class.
*/
#define T UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors
#define TSeq UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsSeq

#define T_initialize_w_params UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_w_params

#define T_finalize_w_params   UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_params
#define T_copy       UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_copy

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
const char *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionTYPENAME = "UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc_members[2]=
    {

        {
            (char *)"LevelType_data",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"BallastMassType_data",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_BALLASTMASSTYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc =
    {{
            DDS_TK_UNION, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::BallastTank::BallastFillType_Specializations::BallastFillType_Union", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union*/

    if (is_initialized) {
        return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_LevelType_get_typecode();
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_BallastMassType_get_typecode();

    /* Initialize the values for member annotations. */

    /* Discriminator type code */
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_typecode();

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc._data._sampleAccessInfo =
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_sample_access_info();
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc._data._typePlugin =
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_type_plugin_info();    

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_tc;
}

#define TSeq UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq
#define T UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_d - (char *)sample);

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.LevelType_data - (char *)sample);

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.BallastMassType_data - (char *)sample);

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_member_value_pointer;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_typePlugin = 
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
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_g_typePlugin;
}
#endif

DDS_LongLong UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_getDefaultDiscriminator(void)
{
    return 0;
}

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* sample)
{
    return UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->_d = (UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors)UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_getDefaultDiscriminator();
    if (!UMAA_Common_Measurement_LevelType_initialize_w_params(
        &sample->_u.LevelType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_BallastMassType_initialize_w_params(
        &sample->_u.BallastMassType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* sample)
{
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* sample)
{  
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_LevelType_finalize_w_params(
        &sample->_u.LevelType_data,
        deallocParams);

    UMAA_Common_Measurement_BallastMassType_finalize_w_params(
        &sample->_u.BallastMassType_data,
        deallocParams);

}

void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* sample, RTIBool deletePointers)
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
        case (UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT):
            {
        } break ;
        case (UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_BALLASTMASSTYPE_SELECT):
            {
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

RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_copy(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* dst,
    const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_copy(
            &dst->_d,
            (const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors*)&src->_d)) {
            return RTI_FALSE;
        } 
        switch(src->_d) {

            case (UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT):
                {
                    if (!UMAA_Common_Measurement_LevelType_copy(
                        &dst->_u.LevelType_data,
                        (const UMAA_Common_Measurement_LevelType*)&src->_u.LevelType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_BALLASTMASSTYPE_SELECT):
                {
                    if (!UMAA_Common_Measurement_BallastMassType_copy(
                        &dst->_u.BallastMassType_data,
                        (const UMAA_Common_Measurement_BallastMassType*)&src->_u.BallastMassType_data)) {
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
* Configure and implement 'UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union' sequence class.
*/
#define T UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union
#define TSeq UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq

#define T_initialize_w_params UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_w_params

#define T_finalize_w_params   UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_params
#define T_copy       UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_copy

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
const char *UMAA_EO_BallastTank_BallastFillTypeTYPENAME = "UMAA::EO::BallastTank::BallastFillType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_BallastTank_BallastFillType_g_tc_members[1]=
    {

        {
            (char *)"BallastFillType_subtypes",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_EO_BallastTank_BallastFillType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::BallastTank::BallastFillType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            UMAA_EO_BallastTank_BallastFillType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_BallastTank_BallastFillType*/

    if (is_initialized) {
        return &UMAA_EO_BallastTank_BallastFillType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_BallastTank_BallastFillType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_BallastTank_BallastFillType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_typecode();

    /* Initialize the values for member annotations. */

    UMAA_EO_BallastTank_BallastFillType_g_tc._data._sampleAccessInfo =
    UMAA_EO_BallastTank_BallastFillType_get_sample_access_info();
    UMAA_EO_BallastTank_BallastFillType_g_tc._data._typePlugin =
    UMAA_EO_BallastTank_BallastFillType_get_type_plugin_info();    

    return &UMAA_EO_BallastTank_BallastFillType_g_tc;
}

#define TSeq UMAA_EO_BallastTank_BallastFillTypeSeq
#define T UMAA_EO_BallastTank_BallastFillType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_BallastTank_BallastFillTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_BallastTank_BallastFillTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_BallastTank_BallastFillType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_BallastTank_BallastFillType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_BallastTank_BallastFillType_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_BallastTank_BallastFillType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_BallastTank_BallastFillType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->BallastFillType_subtypes - (char *)sample);

    UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_BallastTank_BallastFillType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_BallastTank_BallastFillType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_BallastTank_BallastFillType_get_member_value_pointer;

    UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_BallastTank_BallastFillType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_BallastTank_BallastFillType_g_typePlugin = 
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
        UMAA_EO_BallastTank_BallastFillType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_BallastTank_BallastFillType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_BallastTank_BallastFillType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_BallastTank_BallastFillType_initialize(
    UMAA_EO_BallastTank_BallastFillType* sample)
{
    return UMAA_EO_BallastTank_BallastFillType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_BallastTank_BallastFillType_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_w_params(
        &sample->BallastFillType_subtypes,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_EO_BallastTank_BallastFillType_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_BallastTank_BallastFillType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_BallastTank_BallastFillType_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType* sample)
{
    UMAA_EO_BallastTank_BallastFillType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_BallastTank_BallastFillType_finalize(
    UMAA_EO_BallastTank_BallastFillType* sample)
{  
    UMAA_EO_BallastTank_BallastFillType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_BallastTank_BallastFillType_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_BallastTank_BallastFillType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_BallastTank_BallastFillType_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_params(
        &sample->BallastFillType_subtypes,
        deallocParams);

}

void UMAA_EO_BallastTank_BallastFillType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType* sample, RTIBool deletePointers)
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

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_optional_members(&sample->BallastFillType_subtypes, deallocParams->delete_pointers);
}

RTIBool UMAA_EO_BallastTank_BallastFillType_copy(
    UMAA_EO_BallastTank_BallastFillType* dst,
    const UMAA_EO_BallastTank_BallastFillType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_copy(
            &dst->BallastFillType_subtypes,
            (const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union*)&src->BallastFillType_subtypes)) {
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
* Configure and implement 'UMAA_EO_BallastTank_BallastFillType' sequence class.
*/
#define T UMAA_EO_BallastTank_BallastFillType
#define TSeq UMAA_EO_BallastTank_BallastFillTypeSeq

#define T_initialize_w_params UMAA_EO_BallastTank_BallastFillType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_BallastTank_BallastFillType_finalize_w_params
#define T_copy       UMAA_EO_BallastTank_BallastFillType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_typecode();
        }

        const RTIXCdrTypeCode * type_code< UMAA_EO_BallastTank_BallastFillType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_BallastTank_BallastFillType_get_typecode();
        }

    } 
}
#endif
