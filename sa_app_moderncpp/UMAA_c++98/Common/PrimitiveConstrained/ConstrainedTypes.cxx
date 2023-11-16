

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl 
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

#include "ConstrainedTypes.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ConstrainedTypesPlugin.h"
#endif

#include <new>

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::CarrierToNoiseDensityRatio", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioSeq
#define T UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* sample)
{
    return UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* sample)
{
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* sample)
{  
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_copy(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* dst,
    const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio* src)
{
    try {

        if (!RTICdrType_copyDouble (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio
#define TSeq UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::CovarAngleAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_CovarAngleAngle */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_CovarAngleAngleSeq
#define T UMAA_Common_PrimitiveConstrained_CovarAngleAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_CovarAngleAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_CovarAngleAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_CovarAngleAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarAngleAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_CovarAngleAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* sample)
{
    return UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* sample)
{
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* sample)
{  
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_CovarAngleAngle_copy(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle* dst,
    const UMAA_Common_PrimitiveConstrained_CovarAngleAngle* src)
{
    try {

        if (!RTICdrType_copyDouble (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_CovarAngleAngle' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_CovarAngleAngle
#define TSeq UMAA_Common_PrimitiveConstrained_CovarAngleAngleSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_CovarAngleAngle_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::CovarDisAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_CovarDisAngle */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_CovarDisAngleSeq
#define T UMAA_Common_PrimitiveConstrained_CovarDisAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_CovarDisAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_CovarDisAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_CovarDisAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarDisAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_CovarDisAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* sample)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* sample)
{
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* sample)
{  
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisAngle_copy(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle* dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisAngle* src)
{
    try {

        if (!RTICdrType_copyDouble (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_CovarDisAngle' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_CovarDisAngle
#define TSeq UMAA_Common_PrimitiveConstrained_CovarDisAngleSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_CovarDisAngle_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_CovarDisDis_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::CovarDisDis", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_CovarDisDis */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_CovarDisDis_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_CovarDisDis_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_CovarDisDisSeq
#define T UMAA_Common_PrimitiveConstrained_CovarDisDis
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisDis_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_CovarDisDisSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_CovarDisDisSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisDis_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_CovarDisDis);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_CovarDisDis_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_CovarDisDis_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_CovarDisDis_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_CovarDisDis_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* sample)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* sample)
{
    UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* sample)
{  
    UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_CovarDisDis_copy(
    UMAA_Common_PrimitiveConstrained_CovarDisDis* dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisDis* src)
{
    try {

        if (!RTICdrType_copyDouble (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_CovarDisDis' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_CovarDisDis
#define TSeq UMAA_Common_PrimitiveConstrained_CovarDisDisSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_CovarDisDis_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_Left_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_Left_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::Left", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_Left */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_Left_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_Left_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_Left_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_Left_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_Left_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_LeftSeq
#define T UMAA_Common_PrimitiveConstrained_Left
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_Left_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_Left_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_LeftSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_LeftSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_Left_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_Left_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_Left_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_Left_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_Left_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_Left);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_Left_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_Left_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_Left_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_Left_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_Left_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_Left_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_Left_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize(
    UMAA_Common_PrimitiveConstrained_Left* sample)
{
    return UMAA_Common_PrimitiveConstrained_Left_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_Left *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_Left_initialize_ex(
    UMAA_Common_PrimitiveConstrained_Left *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_Left_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_Left_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_Left* sample)
{
    UMAA_Common_PrimitiveConstrained_Left_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_Left_finalize(
    UMAA_Common_PrimitiveConstrained_Left* sample)
{  
    UMAA_Common_PrimitiveConstrained_Left_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_Left_finalize_ex(
    UMAA_Common_PrimitiveConstrained_Left *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_Left_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_Left_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_Left *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_Left_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_Left* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_Left_copy(
    UMAA_Common_PrimitiveConstrained_Left* dst,
    const UMAA_Common_PrimitiveConstrained_Left* src)
{
    try {

        if (!RTICdrType_copyDouble (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_Left' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_Left
#define TSeq UMAA_Common_PrimitiveConstrained_LeftSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_Left_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_Left_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_Left_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_MMSI_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_MMSI_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((9L));

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_MMSI_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::MMSI", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_MMSI */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_MMSI_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._typeCode =  (RTICdrTypeCode *)&UMAA_Common_PrimitiveConstrained_MMSI_g_tc_string;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_MMSI_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_MMSI_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_MMSI_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_MMSI_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_MMSISeq
#define T UMAA_Common_PrimitiveConstrained_MMSI
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_MMSI_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_MMSI_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_MMSISeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_MMSISeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_MMSI_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_MMSI_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_MMSI_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_MMSI_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_MMSI_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_MMSI);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_MMSI_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_MMSI_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_MMSI_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_MMSI_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_MMSI_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_MMSI_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize(
    UMAA_Common_PrimitiveConstrained_MMSI* sample)
{
    return UMAA_Common_PrimitiveConstrained_MMSI_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((9L));
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (9L),
                    RTI_FALSE),
                    RTIBool);
        }
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (9L),
                    RTI_FALSE),
                    RTIBool);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_MMSI_initialize_ex(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_MMSI_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_MMSI* sample)
{
    UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_MMSI_finalize(
    UMAA_Common_PrimitiveConstrained_MMSI* sample)
{  
    UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void UMAA_Common_PrimitiveConstrained_MMSI_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_MMSI* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_MMSI_copy(
    UMAA_Common_PrimitiveConstrained_MMSI* dst,
    const UMAA_Common_PrimitiveConstrained_MMSI* src)
{
    try {

        if (!RTICdrType_copyStringEx (
            &(*dst)
            ,
            (*src), 
            (9L) + 1,
            RTI_FALSE)){
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_MMSI' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_MMSI
#define TSeq UMAA_Common_PrimitiveConstrained_MMSISeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_MMSI_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_MMSI_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::NanosecondsCount", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_NanosecondsCount */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_NanosecondsCountSeq
#define T UMAA_Common_PrimitiveConstrained_NanosecondsCount
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_NanosecondsCountSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_NanosecondsCountSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_NanosecondsCount);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_NanosecondsCount_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* sample)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
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
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* sample)
{
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* sample)
{  
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsCount_copy(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount* dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsCount* src)
{
    try {

        if (!RTICdrType_copyLong (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_NanosecondsCount' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_NanosecondsCount
#define TSeq UMAA_Common_PrimitiveConstrained_NanosecondsCountSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_NanosecondsCount_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::NanosecondsDrift", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_NanosecondsDrift */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_NanosecondsDriftSeq
#define T UMAA_Common_PrimitiveConstrained_NanosecondsDrift
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_NanosecondsDriftSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_NanosecondsDriftSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_NanosecondsDrift);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_NanosecondsDrift_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* sample)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
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
RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* sample)
{
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* sample)
{  
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_NanosecondsDrift_copy(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift* dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsDrift* src)
{
    try {

        if (!RTICdrType_copyLong (
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_NanosecondsDrift' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_NanosecondsDrift
#define TSeq UMAA_Common_PrimitiveConstrained_NanosecondsDriftSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_NanosecondsDrift_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_StringLongDescription_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((4095L));

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::StringLongDescription", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_StringLongDescription */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._typeCode =  (RTICdrTypeCode *)&UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc_string;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_StringLongDescription_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_StringLongDescription_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_StringLongDescriptionSeq
#define T UMAA_Common_PrimitiveConstrained_StringLongDescription
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_StringLongDescription_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_StringLongDescriptionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_StringLongDescriptionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_StringLongDescription_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_StringLongDescription);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_StringLongDescription_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_StringLongDescription_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_StringLongDescription_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_StringLongDescription_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* sample)
{
    return UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((4095L));
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (4095L),
                    RTI_FALSE),
                    RTIBool);
        }
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (4095L),
                    RTI_FALSE),
                    RTIBool);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_ex(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* sample)
{
    UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* sample)
{  
    UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_StringLongDescription_copy(
    UMAA_Common_PrimitiveConstrained_StringLongDescription* dst,
    const UMAA_Common_PrimitiveConstrained_StringLongDescription* src)
{
    try {

        if (!RTICdrType_copyStringEx (
            &(*dst)
            ,
            (*src), 
            (4095L) + 1,
            RTI_FALSE)){
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_StringLongDescription' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_StringLongDescription
#define TSeq UMAA_Common_PrimitiveConstrained_StringLongDescriptionSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_StringLongDescription_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((1023L));

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::StringShortDescription", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_StringShortDescription */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._typeCode =  (RTICdrTypeCode *)&UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc_string;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_StringShortDescription_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_StringShortDescription_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_StringShortDescriptionSeq
#define T UMAA_Common_PrimitiveConstrained_StringShortDescription
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_StringShortDescription_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_StringShortDescriptionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_StringShortDescriptionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_StringShortDescription_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_StringShortDescription);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_StringShortDescription_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_StringShortDescription_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_StringShortDescription_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_StringShortDescription_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* sample)
{
    return UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((1023L));
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_ex(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* sample)
{
    UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* sample)
{  
    UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_StringShortDescription_copy(
    UMAA_Common_PrimitiveConstrained_StringShortDescription* dst,
    const UMAA_Common_PrimitiveConstrained_StringShortDescription* src)
{
    try {

        if (!RTICdrType_copyStringEx (
            &(*dst)
            ,
            (*src), 
            (1023L) + 1,
            RTI_FALSE)){
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_StringShortDescription' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_StringShortDescription
#define TSeq UMAA_Common_PrimitiveConstrained_StringShortDescriptionSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_StringShortDescription_copy

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
DDS_TypeCode * UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((2047L));

    static DDS_TypeCode UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier", /* Name */
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
        }}; /* Type code for  UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier */

    if (is_initialized) {
        return &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._typeCode =  (RTICdrTypeCode *)&UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc_string;

    /* Initialize the values for member annotations. */
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._sampleAccessInfo =
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_sample_access_info();
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc._data._typePlugin =
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_type_plugin_info();    

    return &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_tc;
}

#define TSeq UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierSeq
#define T UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo;
    }

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_member_value_pointer;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_typePlugin = 
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
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_g_typePlugin;
}
#endif

RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* sample)
{
    return UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_w_params(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((2047L));
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (2047L),
                    RTI_FALSE),
                    RTIBool);
        }
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &(*sample),
                    "",
                    (2047L),
                    RTI_FALSE),
                    RTIBool);
            if ((*sample) == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}
RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_ex(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_return(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* sample)
{
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* sample)
{  
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_optional_members(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_copy(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* dst,
    const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier* src)
{
    try {

        if (!RTICdrType_copyStringEx (
            &(*dst)
            ,
            (*src), 
            (2047L) + 1,
            RTI_FALSE)){
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
* Configure and implement 'UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier' sequence class.
*/
#define T UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier
#define TSeq UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierSeq

#define T_initialize_w_params UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_w_params

#define T_finalize_w_params   UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params
#define T_copy       UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_copy

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
