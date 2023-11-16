

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl 
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

#include "Measurements.h"

#ifndef NDDS_STANDALONE_TYPE
#include "MeasurementsPlugin.h"
#endif

#include <new>

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_AngleAcceleration_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_AngleAcceleration_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::AngleAcceleration", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_AngleAcceleration */

    if (is_initialized) {
        return &UMAA_Common_Measurement_AngleAcceleration_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_AngleAcceleration_get_sample_access_info();
    UMAA_Common_Measurement_AngleAcceleration_g_tc._data._typePlugin =
    UMAA_Common_Measurement_AngleAcceleration_get_type_plugin_info();    

    return &UMAA_Common_Measurement_AngleAcceleration_g_tc;
}

#define TSeq UMAA_Common_Measurement_AngleAccelerationSeq
#define T UMAA_Common_Measurement_AngleAcceleration
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleAcceleration_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AngleAcceleration_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_AngleAccelerationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_AngleAccelerationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_AngleAcceleration_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleAcceleration_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_AngleAcceleration_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_AngleAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_AngleAcceleration_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_AngleAcceleration);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_AngleAcceleration_get_member_value_pointer;

    UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AngleAcceleration_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_AngleAcceleration_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_AngleAcceleration_g_typePlugin = 
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
        UMAA_Common_Measurement_AngleAcceleration_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_AngleAcceleration_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_AngleAcceleration_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize(
    UMAA_Common_Measurement_AngleAcceleration* sample)
{
    return UMAA_Common_Measurement_AngleAcceleration_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize_w_params(
    UMAA_Common_Measurement_AngleAcceleration *sample,
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
RTIBool UMAA_Common_Measurement_AngleAcceleration_initialize_ex(
    UMAA_Common_Measurement_AngleAcceleration *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_AngleAcceleration_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_AngleAcceleration_finalize_w_return(
    UMAA_Common_Measurement_AngleAcceleration* sample)
{
    UMAA_Common_Measurement_AngleAcceleration_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_AngleAcceleration_finalize(
    UMAA_Common_Measurement_AngleAcceleration* sample)
{  
    UMAA_Common_Measurement_AngleAcceleration_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_AngleAcceleration_finalize_ex(
    UMAA_Common_Measurement_AngleAcceleration *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_AngleAcceleration_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_AngleAcceleration_finalize_w_params(
    UMAA_Common_Measurement_AngleAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_AngleAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_AngleAcceleration* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_AngleAcceleration_copy(
    UMAA_Common_Measurement_AngleAcceleration* dst,
    const UMAA_Common_Measurement_AngleAcceleration* src)
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
* Configure and implement 'UMAA_Common_Measurement_AngleAcceleration' sequence class.
*/
#define T UMAA_Common_Measurement_AngleAcceleration
#define TSeq UMAA_Common_Measurement_AngleAccelerationSeq

#define T_initialize_w_params UMAA_Common_Measurement_AngleAcceleration_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_AngleAcceleration_finalize_w_params
#define T_copy       UMAA_Common_Measurement_AngleAcceleration_copy

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
DDS_TypeCode * UMAA_Common_Measurement_AnglePosition_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_AnglePosition_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::AnglePosition", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_AnglePosition */

    if (is_initialized) {
        return &UMAA_Common_Measurement_AnglePosition_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_AnglePosition_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AnglePosition_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_AnglePosition_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_AnglePosition_get_sample_access_info();
    UMAA_Common_Measurement_AnglePosition_g_tc._data._typePlugin =
    UMAA_Common_Measurement_AnglePosition_get_type_plugin_info();    

    return &UMAA_Common_Measurement_AnglePosition_g_tc;
}

#define TSeq UMAA_Common_Measurement_AnglePositionSeq
#define T UMAA_Common_Measurement_AnglePosition
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AnglePosition_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AnglePosition_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_AnglePositionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_AnglePositionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_AnglePosition_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AnglePosition_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_AnglePosition_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_AnglePosition_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_AnglePosition_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_AnglePosition);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_AnglePosition_get_member_value_pointer;

    UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AnglePosition_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_AnglePosition_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_AnglePosition_g_typePlugin = 
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
        UMAA_Common_Measurement_AnglePosition_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_AnglePosition_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_AnglePosition_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_AnglePosition_initialize(
    UMAA_Common_Measurement_AnglePosition* sample)
{
    return UMAA_Common_Measurement_AnglePosition_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_AnglePosition_initialize_w_params(
    UMAA_Common_Measurement_AnglePosition *sample,
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
RTIBool UMAA_Common_Measurement_AnglePosition_initialize_ex(
    UMAA_Common_Measurement_AnglePosition *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_AnglePosition_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_AnglePosition_finalize_w_return(
    UMAA_Common_Measurement_AnglePosition* sample)
{
    UMAA_Common_Measurement_AnglePosition_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_AnglePosition_finalize(
    UMAA_Common_Measurement_AnglePosition* sample)
{  
    UMAA_Common_Measurement_AnglePosition_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_AnglePosition_finalize_ex(
    UMAA_Common_Measurement_AnglePosition *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_AnglePosition_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_AnglePosition_finalize_w_params(
    UMAA_Common_Measurement_AnglePosition *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_AnglePosition_finalize_optional_members(
    UMAA_Common_Measurement_AnglePosition* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_AnglePosition_copy(
    UMAA_Common_Measurement_AnglePosition* dst,
    const UMAA_Common_Measurement_AnglePosition* src)
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
* Configure and implement 'UMAA_Common_Measurement_AnglePosition' sequence class.
*/
#define T UMAA_Common_Measurement_AnglePosition
#define TSeq UMAA_Common_Measurement_AnglePositionSeq

#define T_initialize_w_params UMAA_Common_Measurement_AnglePosition_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_AnglePosition_finalize_w_params
#define T_copy       UMAA_Common_Measurement_AnglePosition_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Charge_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Charge_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Charge", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Charge */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Charge_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Charge_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Charge_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Charge_g_tc._data._annotations._maxValue._u.double_value = 3600000ULL;

    UMAA_Common_Measurement_Charge_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Charge_get_sample_access_info();
    UMAA_Common_Measurement_Charge_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Charge_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Charge_g_tc;
}

#define TSeq UMAA_Common_Measurement_ChargeSeq
#define T UMAA_Common_Measurement_Charge
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Charge_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Charge_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_ChargeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_ChargeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Charge_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Charge_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Charge_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Charge_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Charge_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Charge_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Charge_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Charge_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Charge);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Charge_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Charge_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Charge_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Charge_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Charge_get_member_value_pointer;

    UMAA_Common_Measurement_Charge_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Charge_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Charge_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Charge_g_typePlugin = 
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
        UMAA_Common_Measurement_Charge_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Charge_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Charge_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Charge_initialize(
    UMAA_Common_Measurement_Charge* sample)
{
    return UMAA_Common_Measurement_Charge_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Charge_initialize_w_params(
    UMAA_Common_Measurement_Charge *sample,
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
RTIBool UMAA_Common_Measurement_Charge_initialize_ex(
    UMAA_Common_Measurement_Charge *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Charge_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Charge_finalize_w_return(
    UMAA_Common_Measurement_Charge* sample)
{
    UMAA_Common_Measurement_Charge_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Charge_finalize(
    UMAA_Common_Measurement_Charge* sample)
{  
    UMAA_Common_Measurement_Charge_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Charge_finalize_ex(
    UMAA_Common_Measurement_Charge *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Charge_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Charge_finalize_w_params(
    UMAA_Common_Measurement_Charge *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Charge_finalize_optional_members(
    UMAA_Common_Measurement_Charge* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Charge_copy(
    UMAA_Common_Measurement_Charge* dst,
    const UMAA_Common_Measurement_Charge* src)
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
* Configure and implement 'UMAA_Common_Measurement_Charge' sequence class.
*/
#define T UMAA_Common_Measurement_Charge
#define TSeq UMAA_Common_Measurement_ChargeSeq

#define T_initialize_w_params UMAA_Common_Measurement_Charge_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Charge_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Charge_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Conductivity_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Conductivity_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Conductivity", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Conductivity */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Conductivity_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Conductivity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Conductivity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Conductivity_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Conductivity_get_sample_access_info();
    UMAA_Common_Measurement_Conductivity_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Conductivity_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Conductivity_g_tc;
}

#define TSeq UMAA_Common_Measurement_ConductivitySeq
#define T UMAA_Common_Measurement_Conductivity
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Conductivity_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Conductivity_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_ConductivitySeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_ConductivitySeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Conductivity_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Conductivity_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Conductivity_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Conductivity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Conductivity_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Conductivity);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Conductivity_get_member_value_pointer;

    UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Conductivity_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Conductivity_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Conductivity_g_typePlugin = 
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
        UMAA_Common_Measurement_Conductivity_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Conductivity_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Conductivity_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Conductivity_initialize(
    UMAA_Common_Measurement_Conductivity* sample)
{
    return UMAA_Common_Measurement_Conductivity_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Conductivity_initialize_w_params(
    UMAA_Common_Measurement_Conductivity *sample,
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
RTIBool UMAA_Common_Measurement_Conductivity_initialize_ex(
    UMAA_Common_Measurement_Conductivity *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Conductivity_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Conductivity_finalize_w_return(
    UMAA_Common_Measurement_Conductivity* sample)
{
    UMAA_Common_Measurement_Conductivity_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Conductivity_finalize(
    UMAA_Common_Measurement_Conductivity* sample)
{  
    UMAA_Common_Measurement_Conductivity_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Conductivity_finalize_ex(
    UMAA_Common_Measurement_Conductivity *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Conductivity_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Conductivity_finalize_w_params(
    UMAA_Common_Measurement_Conductivity *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Conductivity_finalize_optional_members(
    UMAA_Common_Measurement_Conductivity* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Conductivity_copy(
    UMAA_Common_Measurement_Conductivity* dst,
    const UMAA_Common_Measurement_Conductivity* src)
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
* Configure and implement 'UMAA_Common_Measurement_Conductivity' sequence class.
*/
#define T UMAA_Common_Measurement_Conductivity
#define TSeq UMAA_Common_Measurement_ConductivitySeq

#define T_initialize_w_params UMAA_Common_Measurement_Conductivity_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Conductivity_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Conductivity_copy

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
DDS_TypeCode * UMAA_Common_Measurement_DataTransferRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_DataTransferRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::DataTransferRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_DataTransferRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_DataTransferRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_DataTransferRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_DataTransferRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_DataTransferRate_get_sample_access_info();
    UMAA_Common_Measurement_DataTransferRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_DataTransferRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_DataTransferRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_DataTransferRateSeq
#define T UMAA_Common_Measurement_DataTransferRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DataTransferRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DataTransferRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DataTransferRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DataTransferRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_DataTransferRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DataTransferRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_DataTransferRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_DataTransferRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_DataTransferRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_DataTransferRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_DataTransferRate_get_member_value_pointer;

    UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DataTransferRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_DataTransferRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_DataTransferRate_g_typePlugin = 
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
        UMAA_Common_Measurement_DataTransferRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_DataTransferRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_DataTransferRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_DataTransferRate_initialize(
    UMAA_Common_Measurement_DataTransferRate* sample)
{
    return UMAA_Common_Measurement_DataTransferRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_DataTransferRate_initialize_w_params(
    UMAA_Common_Measurement_DataTransferRate *sample,
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
RTIBool UMAA_Common_Measurement_DataTransferRate_initialize_ex(
    UMAA_Common_Measurement_DataTransferRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_DataTransferRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_DataTransferRate_finalize_w_return(
    UMAA_Common_Measurement_DataTransferRate* sample)
{
    UMAA_Common_Measurement_DataTransferRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_DataTransferRate_finalize(
    UMAA_Common_Measurement_DataTransferRate* sample)
{  
    UMAA_Common_Measurement_DataTransferRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_DataTransferRate_finalize_ex(
    UMAA_Common_Measurement_DataTransferRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_DataTransferRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_DataTransferRate_finalize_w_params(
    UMAA_Common_Measurement_DataTransferRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_DataTransferRate_finalize_optional_members(
    UMAA_Common_Measurement_DataTransferRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_DataTransferRate_copy(
    UMAA_Common_Measurement_DataTransferRate* dst,
    const UMAA_Common_Measurement_DataTransferRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_DataTransferRate' sequence class.
*/
#define T UMAA_Common_Measurement_DataTransferRate
#define TSeq UMAA_Common_Measurement_DataTransferRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_DataTransferRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_DataTransferRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_DataTransferRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Distance_ASF_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Distance_ASF_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Distance_ASF", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Distance_ASF */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Distance_ASF_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Distance_ASF_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_Common_Measurement_Distance_ASF_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Distance_ASF_get_sample_access_info();
    UMAA_Common_Measurement_Distance_ASF_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Distance_ASF_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Distance_ASF_g_tc;
}

#define TSeq UMAA_Common_Measurement_Distance_ASFSeq
#define T UMAA_Common_Measurement_Distance_ASF
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_ASF_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_ASF_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Distance_ASFSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Distance_ASFSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Distance_ASF_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_ASF_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Distance_ASF_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Distance_ASF_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Distance_ASF_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Distance_ASF);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Distance_ASF_get_member_value_pointer;

    UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_ASF_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_ASF_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Distance_ASF_g_typePlugin = 
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
        UMAA_Common_Measurement_Distance_ASF_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Distance_ASF_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Distance_ASF_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Distance_ASF_initialize(
    UMAA_Common_Measurement_Distance_ASF* sample)
{
    return UMAA_Common_Measurement_Distance_ASF_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Distance_ASF_initialize_w_params(
    UMAA_Common_Measurement_Distance_ASF *sample,
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
RTIBool UMAA_Common_Measurement_Distance_ASF_initialize_ex(
    UMAA_Common_Measurement_Distance_ASF *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Distance_ASF_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Distance_ASF_finalize_w_return(
    UMAA_Common_Measurement_Distance_ASF* sample)
{
    UMAA_Common_Measurement_Distance_ASF_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Distance_ASF_finalize(
    UMAA_Common_Measurement_Distance_ASF* sample)
{  
    UMAA_Common_Measurement_Distance_ASF_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Distance_ASF_finalize_ex(
    UMAA_Common_Measurement_Distance_ASF *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Distance_ASF_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Distance_ASF_finalize_w_params(
    UMAA_Common_Measurement_Distance_ASF *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Distance_ASF_finalize_optional_members(
    UMAA_Common_Measurement_Distance_ASF* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Distance_ASF_copy(
    UMAA_Common_Measurement_Distance_ASF* dst,
    const UMAA_Common_Measurement_Distance_ASF* src)
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
* Configure and implement 'UMAA_Common_Measurement_Distance_ASF' sequence class.
*/
#define T UMAA_Common_Measurement_Distance_ASF
#define TSeq UMAA_Common_Measurement_Distance_ASFSeq

#define T_initialize_w_params UMAA_Common_Measurement_Distance_ASF_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Distance_ASF_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Distance_ASF_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Distance_BSL_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Distance_BSL_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Distance_BSL", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Distance_BSL */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Distance_BSL_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Distance_BSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._annotations._maxValue._u.double_value = 10000ULL;

    UMAA_Common_Measurement_Distance_BSL_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Distance_BSL_get_sample_access_info();
    UMAA_Common_Measurement_Distance_BSL_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Distance_BSL_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Distance_BSL_g_tc;
}

#define TSeq UMAA_Common_Measurement_Distance_BSLSeq
#define T UMAA_Common_Measurement_Distance_BSL
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_BSL_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_BSL_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Distance_BSLSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Distance_BSLSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Distance_BSL_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_BSL_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Distance_BSL_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Distance_BSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Distance_BSL_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Distance_BSL);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Distance_BSL_get_member_value_pointer;

    UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_BSL_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_BSL_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Distance_BSL_g_typePlugin = 
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
        UMAA_Common_Measurement_Distance_BSL_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Distance_BSL_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Distance_BSL_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Distance_BSL_initialize(
    UMAA_Common_Measurement_Distance_BSL* sample)
{
    return UMAA_Common_Measurement_Distance_BSL_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Distance_BSL_initialize_w_params(
    UMAA_Common_Measurement_Distance_BSL *sample,
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
RTIBool UMAA_Common_Measurement_Distance_BSL_initialize_ex(
    UMAA_Common_Measurement_Distance_BSL *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Distance_BSL_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Distance_BSL_finalize_w_return(
    UMAA_Common_Measurement_Distance_BSL* sample)
{
    UMAA_Common_Measurement_Distance_BSL_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Distance_BSL_finalize(
    UMAA_Common_Measurement_Distance_BSL* sample)
{  
    UMAA_Common_Measurement_Distance_BSL_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Distance_BSL_finalize_ex(
    UMAA_Common_Measurement_Distance_BSL *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Distance_BSL_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Distance_BSL_finalize_w_params(
    UMAA_Common_Measurement_Distance_BSL *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Distance_BSL_finalize_optional_members(
    UMAA_Common_Measurement_Distance_BSL* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Distance_BSL_copy(
    UMAA_Common_Measurement_Distance_BSL* dst,
    const UMAA_Common_Measurement_Distance_BSL* src)
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
* Configure and implement 'UMAA_Common_Measurement_Distance_BSL' sequence class.
*/
#define T UMAA_Common_Measurement_Distance_BSL
#define TSeq UMAA_Common_Measurement_Distance_BSLSeq

#define T_initialize_w_params UMAA_Common_Measurement_Distance_BSL_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Distance_BSL_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Distance_BSL_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Effort_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Effort_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Effort", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Effort */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Effort_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Effort_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Effort_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Effort_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Effort_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Effort_get_sample_access_info();
    UMAA_Common_Measurement_Effort_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Effort_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Effort_g_tc;
}

#define TSeq UMAA_Common_Measurement_EffortSeq
#define T UMAA_Common_Measurement_Effort
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Effort_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Effort_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_EffortSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_EffortSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Effort_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Effort_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Effort_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Effort_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Effort_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Effort_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Effort_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Effort_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Effort);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Effort_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Effort_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Effort_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Effort_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Effort_get_member_value_pointer;

    UMAA_Common_Measurement_Effort_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Effort_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Effort_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Effort_g_typePlugin = 
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
        UMAA_Common_Measurement_Effort_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Effort_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Effort_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Effort_initialize(
    UMAA_Common_Measurement_Effort* sample)
{
    return UMAA_Common_Measurement_Effort_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Effort_initialize_w_params(
    UMAA_Common_Measurement_Effort *sample,
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
RTIBool UMAA_Common_Measurement_Effort_initialize_ex(
    UMAA_Common_Measurement_Effort *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Effort_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Effort_finalize_w_return(
    UMAA_Common_Measurement_Effort* sample)
{
    UMAA_Common_Measurement_Effort_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Effort_finalize(
    UMAA_Common_Measurement_Effort* sample)
{  
    UMAA_Common_Measurement_Effort_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Effort_finalize_ex(
    UMAA_Common_Measurement_Effort *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Effort_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Effort_finalize_w_params(
    UMAA_Common_Measurement_Effort *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Effort_finalize_optional_members(
    UMAA_Common_Measurement_Effort* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Effort_copy(
    UMAA_Common_Measurement_Effort* dst,
    const UMAA_Common_Measurement_Effort* src)
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
* Configure and implement 'UMAA_Common_Measurement_Effort' sequence class.
*/
#define T UMAA_Common_Measurement_Effort
#define TSeq UMAA_Common_Measurement_EffortSeq

#define T_initialize_w_params UMAA_Common_Measurement_Effort_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Effort_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Effort_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Energy_Percent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Energy_Percent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Energy_Percent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Energy_Percent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Energy_Percent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Energy_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Energy_Percent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Energy_Percent_get_sample_access_info();
    UMAA_Common_Measurement_Energy_Percent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Energy_Percent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Energy_Percent_g_tc;
}

#define TSeq UMAA_Common_Measurement_Energy_PercentSeq
#define T UMAA_Common_Measurement_Energy_Percent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Energy_Percent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Energy_Percent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Energy_PercentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Energy_PercentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Energy_Percent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Energy_Percent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Energy_Percent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Energy_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Energy_Percent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Energy_Percent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Energy_Percent_get_member_value_pointer;

    UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Energy_Percent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Energy_Percent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Energy_Percent_g_typePlugin = 
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
        UMAA_Common_Measurement_Energy_Percent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Energy_Percent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Energy_Percent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Energy_Percent_initialize(
    UMAA_Common_Measurement_Energy_Percent* sample)
{
    return UMAA_Common_Measurement_Energy_Percent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Energy_Percent_initialize_w_params(
    UMAA_Common_Measurement_Energy_Percent *sample,
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
RTIBool UMAA_Common_Measurement_Energy_Percent_initialize_ex(
    UMAA_Common_Measurement_Energy_Percent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Energy_Percent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Energy_Percent_finalize_w_return(
    UMAA_Common_Measurement_Energy_Percent* sample)
{
    UMAA_Common_Measurement_Energy_Percent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Energy_Percent_finalize(
    UMAA_Common_Measurement_Energy_Percent* sample)
{  
    UMAA_Common_Measurement_Energy_Percent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Energy_Percent_finalize_ex(
    UMAA_Common_Measurement_Energy_Percent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Energy_Percent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Energy_Percent_finalize_w_params(
    UMAA_Common_Measurement_Energy_Percent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Energy_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Energy_Percent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Energy_Percent_copy(
    UMAA_Common_Measurement_Energy_Percent* dst,
    const UMAA_Common_Measurement_Energy_Percent* src)
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
* Configure and implement 'UMAA_Common_Measurement_Energy_Percent' sequence class.
*/
#define T UMAA_Common_Measurement_Energy_Percent
#define TSeq UMAA_Common_Measurement_Energy_PercentSeq

#define T_initialize_w_params UMAA_Common_Measurement_Energy_Percent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Energy_Percent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Energy_Percent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_FrameRateFPS_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_FrameRateFPS_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::FrameRateFPS", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_FrameRateFPS */

    if (is_initialized) {
        return &UMAA_Common_Measurement_FrameRateFPS_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_FrameRateFPS_get_sample_access_info();
    UMAA_Common_Measurement_FrameRateFPS_g_tc._data._typePlugin =
    UMAA_Common_Measurement_FrameRateFPS_get_type_plugin_info();    

    return &UMAA_Common_Measurement_FrameRateFPS_g_tc;
}

#define TSeq UMAA_Common_Measurement_FrameRateFPSSeq
#define T UMAA_Common_Measurement_FrameRateFPS
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrameRateFPS_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FrameRateFPS_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_FrameRateFPSSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_FrameRateFPSSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_FrameRateFPS_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrameRateFPS_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_FrameRateFPS_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_FrameRateFPS_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_FrameRateFPS_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_FrameRateFPS);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_FrameRateFPS_get_member_value_pointer;

    UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FrameRateFPS_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_FrameRateFPS_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_FrameRateFPS_g_typePlugin = 
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
        UMAA_Common_Measurement_FrameRateFPS_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_FrameRateFPS_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_FrameRateFPS_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize(
    UMAA_Common_Measurement_FrameRateFPS* sample)
{
    return UMAA_Common_Measurement_FrameRateFPS_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize_w_params(
    UMAA_Common_Measurement_FrameRateFPS *sample,
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
RTIBool UMAA_Common_Measurement_FrameRateFPS_initialize_ex(
    UMAA_Common_Measurement_FrameRateFPS *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_FrameRateFPS_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_FrameRateFPS_finalize_w_return(
    UMAA_Common_Measurement_FrameRateFPS* sample)
{
    UMAA_Common_Measurement_FrameRateFPS_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_FrameRateFPS_finalize(
    UMAA_Common_Measurement_FrameRateFPS* sample)
{  
    UMAA_Common_Measurement_FrameRateFPS_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_FrameRateFPS_finalize_ex(
    UMAA_Common_Measurement_FrameRateFPS *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_FrameRateFPS_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_FrameRateFPS_finalize_w_params(
    UMAA_Common_Measurement_FrameRateFPS *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_FrameRateFPS_finalize_optional_members(
    UMAA_Common_Measurement_FrameRateFPS* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_FrameRateFPS_copy(
    UMAA_Common_Measurement_FrameRateFPS* dst,
    const UMAA_Common_Measurement_FrameRateFPS* src)
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
* Configure and implement 'UMAA_Common_Measurement_FrameRateFPS' sequence class.
*/
#define T UMAA_Common_Measurement_FrameRateFPS
#define TSeq UMAA_Common_Measurement_FrameRateFPSSeq

#define T_initialize_w_params UMAA_Common_Measurement_FrameRateFPS_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_FrameRateFPS_finalize_w_params
#define T_copy       UMAA_Common_Measurement_FrameRateFPS_copy

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
DDS_TypeCode * UMAA_Common_Measurement_FrequencyRPM_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_FrequencyRPM_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::FrequencyRPM", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_FrequencyRPM */

    if (is_initialized) {
        return &UMAA_Common_Measurement_FrequencyRPM_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._minValue._u.double_value = -100000LL;
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_FrequencyRPM_get_sample_access_info();
    UMAA_Common_Measurement_FrequencyRPM_g_tc._data._typePlugin =
    UMAA_Common_Measurement_FrequencyRPM_get_type_plugin_info();    

    return &UMAA_Common_Measurement_FrequencyRPM_g_tc;
}

#define TSeq UMAA_Common_Measurement_FrequencyRPMSeq
#define T UMAA_Common_Measurement_FrequencyRPM
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrequencyRPM_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FrequencyRPM_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_FrequencyRPMSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_FrequencyRPMSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_FrequencyRPM_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FrequencyRPM_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_FrequencyRPM_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_FrequencyRPM_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_FrequencyRPM_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_FrequencyRPM);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_FrequencyRPM_get_member_value_pointer;

    UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FrequencyRPM_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_FrequencyRPM_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_FrequencyRPM_g_typePlugin = 
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
        UMAA_Common_Measurement_FrequencyRPM_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_FrequencyRPM_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_FrequencyRPM_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize(
    UMAA_Common_Measurement_FrequencyRPM* sample)
{
    return UMAA_Common_Measurement_FrequencyRPM_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize_w_params(
    UMAA_Common_Measurement_FrequencyRPM *sample,
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
RTIBool UMAA_Common_Measurement_FrequencyRPM_initialize_ex(
    UMAA_Common_Measurement_FrequencyRPM *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_FrequencyRPM_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_FrequencyRPM_finalize_w_return(
    UMAA_Common_Measurement_FrequencyRPM* sample)
{
    UMAA_Common_Measurement_FrequencyRPM_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_FrequencyRPM_finalize(
    UMAA_Common_Measurement_FrequencyRPM* sample)
{  
    UMAA_Common_Measurement_FrequencyRPM_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_FrequencyRPM_finalize_ex(
    UMAA_Common_Measurement_FrequencyRPM *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_FrequencyRPM_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_FrequencyRPM_finalize_w_params(
    UMAA_Common_Measurement_FrequencyRPM *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_FrequencyRPM_finalize_optional_members(
    UMAA_Common_Measurement_FrequencyRPM* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_FrequencyRPM_copy(
    UMAA_Common_Measurement_FrequencyRPM* dst,
    const UMAA_Common_Measurement_FrequencyRPM* src)
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
* Configure and implement 'UMAA_Common_Measurement_FrequencyRPM' sequence class.
*/
#define T UMAA_Common_Measurement_FrequencyRPM
#define TSeq UMAA_Common_Measurement_FrequencyRPMSeq

#define T_initialize_w_params UMAA_Common_Measurement_FrequencyRPM_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_FrequencyRPM_finalize_w_params
#define T_copy       UMAA_Common_Measurement_FrequencyRPM_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Heading_CurrentDirection_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Heading_CurrentDirection_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Heading_CurrentDirection", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Heading_CurrentDirection */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Heading_CurrentDirection_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Heading_CurrentDirection_get_sample_access_info();
    UMAA_Common_Measurement_Heading_CurrentDirection_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Heading_CurrentDirection_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Heading_CurrentDirection_g_tc;
}

#define TSeq UMAA_Common_Measurement_Heading_CurrentDirectionSeq
#define T UMAA_Common_Measurement_Heading_CurrentDirection
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_CurrentDirection_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_CurrentDirection_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Heading_CurrentDirectionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Heading_CurrentDirectionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Heading_CurrentDirection_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_CurrentDirection_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Heading_CurrentDirection_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Heading_CurrentDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Heading_CurrentDirection_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Heading_CurrentDirection);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Heading_CurrentDirection_get_member_value_pointer;

    UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_CurrentDirection_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_CurrentDirection_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Heading_CurrentDirection_g_typePlugin = 
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
        UMAA_Common_Measurement_Heading_CurrentDirection_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Heading_CurrentDirection_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize(
    UMAA_Common_Measurement_Heading_CurrentDirection* sample)
{
    return UMAA_Common_Measurement_Heading_CurrentDirection_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize_w_params(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,
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
RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_initialize_ex(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Heading_CurrentDirection_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_return(
    UMAA_Common_Measurement_Heading_CurrentDirection* sample)
{
    UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Heading_CurrentDirection_finalize(
    UMAA_Common_Measurement_Heading_CurrentDirection* sample)
{  
    UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Heading_CurrentDirection_finalize_optional_members(
    UMAA_Common_Measurement_Heading_CurrentDirection* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Heading_CurrentDirection_copy(
    UMAA_Common_Measurement_Heading_CurrentDirection* dst,
    const UMAA_Common_Measurement_Heading_CurrentDirection* src)
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
* Configure and implement 'UMAA_Common_Measurement_Heading_CurrentDirection' sequence class.
*/
#define T UMAA_Common_Measurement_Heading_CurrentDirection
#define TSeq UMAA_Common_Measurement_Heading_CurrentDirectionSeq

#define T_initialize_w_params UMAA_Common_Measurement_Heading_CurrentDirection_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Heading_CurrentDirection_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Heading_MagneticNorth_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Heading_MagneticNorth_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Heading_MagneticNorth", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Heading_MagneticNorth */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Heading_MagneticNorth_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Heading_MagneticNorth_get_sample_access_info();
    UMAA_Common_Measurement_Heading_MagneticNorth_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Heading_MagneticNorth_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Heading_MagneticNorth_g_tc;
}

#define TSeq UMAA_Common_Measurement_Heading_MagneticNorthSeq
#define T UMAA_Common_Measurement_Heading_MagneticNorth
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_MagneticNorth_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_MagneticNorth_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Heading_MagneticNorthSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Heading_MagneticNorthSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Heading_MagneticNorth_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_MagneticNorth_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Heading_MagneticNorth_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Heading_MagneticNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Heading_MagneticNorth_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Heading_MagneticNorth);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Heading_MagneticNorth_get_member_value_pointer;

    UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_MagneticNorth_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_MagneticNorth_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Heading_MagneticNorth_g_typePlugin = 
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
        UMAA_Common_Measurement_Heading_MagneticNorth_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Heading_MagneticNorth_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize(
    UMAA_Common_Measurement_Heading_MagneticNorth* sample)
{
    return UMAA_Common_Measurement_Heading_MagneticNorth_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize_w_params(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,
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
RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_initialize_ex(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Heading_MagneticNorth_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_return(
    UMAA_Common_Measurement_Heading_MagneticNorth* sample)
{
    UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Heading_MagneticNorth_finalize(
    UMAA_Common_Measurement_Heading_MagneticNorth* sample)
{  
    UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Heading_MagneticNorth_finalize_optional_members(
    UMAA_Common_Measurement_Heading_MagneticNorth* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Heading_MagneticNorth_copy(
    UMAA_Common_Measurement_Heading_MagneticNorth* dst,
    const UMAA_Common_Measurement_Heading_MagneticNorth* src)
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
* Configure and implement 'UMAA_Common_Measurement_Heading_MagneticNorth' sequence class.
*/
#define T UMAA_Common_Measurement_Heading_MagneticNorth
#define TSeq UMAA_Common_Measurement_Heading_MagneticNorthSeq

#define T_initialize_w_params UMAA_Common_Measurement_Heading_MagneticNorth_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Heading_MagneticNorth_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Heading_WindDirection_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Heading_WindDirection_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Heading_WindDirection", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Heading_WindDirection */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Heading_WindDirection_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Heading_WindDirection_get_sample_access_info();
    UMAA_Common_Measurement_Heading_WindDirection_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Heading_WindDirection_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Heading_WindDirection_g_tc;
}

#define TSeq UMAA_Common_Measurement_Heading_WindDirectionSeq
#define T UMAA_Common_Measurement_Heading_WindDirection
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_WindDirection_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_WindDirection_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Heading_WindDirectionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Heading_WindDirectionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Heading_WindDirection_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_WindDirection_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Heading_WindDirection_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Heading_WindDirection_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Heading_WindDirection_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Heading_WindDirection);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Heading_WindDirection_get_member_value_pointer;

    UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_WindDirection_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_WindDirection_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Heading_WindDirection_g_typePlugin = 
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
        UMAA_Common_Measurement_Heading_WindDirection_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Heading_WindDirection_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Heading_WindDirection_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize(
    UMAA_Common_Measurement_Heading_WindDirection* sample)
{
    return UMAA_Common_Measurement_Heading_WindDirection_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize_w_params(
    UMAA_Common_Measurement_Heading_WindDirection *sample,
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
RTIBool UMAA_Common_Measurement_Heading_WindDirection_initialize_ex(
    UMAA_Common_Measurement_Heading_WindDirection *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Heading_WindDirection_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Heading_WindDirection_finalize_w_return(
    UMAA_Common_Measurement_Heading_WindDirection* sample)
{
    UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Heading_WindDirection_finalize(
    UMAA_Common_Measurement_Heading_WindDirection* sample)
{  
    UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(
    UMAA_Common_Measurement_Heading_WindDirection *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params(
    UMAA_Common_Measurement_Heading_WindDirection *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Heading_WindDirection_finalize_optional_members(
    UMAA_Common_Measurement_Heading_WindDirection* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Heading_WindDirection_copy(
    UMAA_Common_Measurement_Heading_WindDirection* dst,
    const UMAA_Common_Measurement_Heading_WindDirection* src)
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
* Configure and implement 'UMAA_Common_Measurement_Heading_WindDirection' sequence class.
*/
#define T UMAA_Common_Measurement_Heading_WindDirection
#define TSeq UMAA_Common_Measurement_Heading_WindDirectionSeq

#define T_initialize_w_params UMAA_Common_Measurement_Heading_WindDirection_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Heading_WindDirection_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Mass_MetricTon_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Mass_MetricTon_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Mass_MetricTon", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Mass_MetricTon */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Mass_MetricTon_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Mass_MetricTon_get_sample_access_info();
    UMAA_Common_Measurement_Mass_MetricTon_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Mass_MetricTon_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Mass_MetricTon_g_tc;
}

#define TSeq UMAA_Common_Measurement_Mass_MetricTonSeq
#define T UMAA_Common_Measurement_Mass_MetricTon
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_MetricTon_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Mass_MetricTon_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Mass_MetricTonSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Mass_MetricTonSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Mass_MetricTon_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_MetricTon_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Mass_MetricTon_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Mass_MetricTon_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Mass_MetricTon_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Mass_MetricTon);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Mass_MetricTon_get_member_value_pointer;

    UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Mass_MetricTon_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Mass_MetricTon_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Mass_MetricTon_g_typePlugin = 
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
        UMAA_Common_Measurement_Mass_MetricTon_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Mass_MetricTon_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Mass_MetricTon_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize(
    UMAA_Common_Measurement_Mass_MetricTon* sample)
{
    return UMAA_Common_Measurement_Mass_MetricTon_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize_w_params(
    UMAA_Common_Measurement_Mass_MetricTon *sample,
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
RTIBool UMAA_Common_Measurement_Mass_MetricTon_initialize_ex(
    UMAA_Common_Measurement_Mass_MetricTon *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Mass_MetricTon_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Mass_MetricTon_finalize_w_return(
    UMAA_Common_Measurement_Mass_MetricTon* sample)
{
    UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Mass_MetricTon_finalize(
    UMAA_Common_Measurement_Mass_MetricTon* sample)
{  
    UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(
    UMAA_Common_Measurement_Mass_MetricTon *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params(
    UMAA_Common_Measurement_Mass_MetricTon *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Mass_MetricTon_finalize_optional_members(
    UMAA_Common_Measurement_Mass_MetricTon* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Mass_MetricTon_copy(
    UMAA_Common_Measurement_Mass_MetricTon* dst,
    const UMAA_Common_Measurement_Mass_MetricTon* src)
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
* Configure and implement 'UMAA_Common_Measurement_Mass_MetricTon' sequence class.
*/
#define T UMAA_Common_Measurement_Mass_MetricTon
#define TSeq UMAA_Common_Measurement_Mass_MetricTonSeq

#define T_initialize_w_params UMAA_Common_Measurement_Mass_MetricTon_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Mass_MetricTon_copy

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
DDS_TypeCode * UMAA_Common_Measurement_MassFlowRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_MassFlowRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::MassFlowRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_MassFlowRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_MassFlowRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_MassFlowRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_MassFlowRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_MassFlowRate_get_sample_access_info();
    UMAA_Common_Measurement_MassFlowRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_MassFlowRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_MassFlowRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_MassFlowRateSeq
#define T UMAA_Common_Measurement_MassFlowRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MassFlowRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_MassFlowRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_MassFlowRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_MassFlowRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_MassFlowRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MassFlowRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_MassFlowRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_MassFlowRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_MassFlowRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_MassFlowRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_MassFlowRate_get_member_value_pointer;

    UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_MassFlowRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_MassFlowRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_MassFlowRate_g_typePlugin = 
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
        UMAA_Common_Measurement_MassFlowRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_MassFlowRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_MassFlowRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_MassFlowRate_initialize(
    UMAA_Common_Measurement_MassFlowRate* sample)
{
    return UMAA_Common_Measurement_MassFlowRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_MassFlowRate_initialize_w_params(
    UMAA_Common_Measurement_MassFlowRate *sample,
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
RTIBool UMAA_Common_Measurement_MassFlowRate_initialize_ex(
    UMAA_Common_Measurement_MassFlowRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_MassFlowRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_MassFlowRate_finalize_w_return(
    UMAA_Common_Measurement_MassFlowRate* sample)
{
    UMAA_Common_Measurement_MassFlowRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_MassFlowRate_finalize(
    UMAA_Common_Measurement_MassFlowRate* sample)
{  
    UMAA_Common_Measurement_MassFlowRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_MassFlowRate_finalize_ex(
    UMAA_Common_Measurement_MassFlowRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_MassFlowRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_MassFlowRate_finalize_w_params(
    UMAA_Common_Measurement_MassFlowRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_MassFlowRate_finalize_optional_members(
    UMAA_Common_Measurement_MassFlowRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_MassFlowRate_copy(
    UMAA_Common_Measurement_MassFlowRate* dst,
    const UMAA_Common_Measurement_MassFlowRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_MassFlowRate' sequence class.
*/
#define T UMAA_Common_Measurement_MassFlowRate
#define TSeq UMAA_Common_Measurement_MassFlowRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_MassFlowRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_MassFlowRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_MassFlowRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_OrientationQuaternion_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_OrientationQuaternion_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::OrientationQuaternion", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_OrientationQuaternion */

    if (is_initialized) {
        return &UMAA_Common_Measurement_OrientationQuaternion_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_OrientationQuaternion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_OrientationQuaternion_g_tc._data._typeCode =  (RTICdrTypeCode *)BasicTypes_Quaternion_get_typecode();

    /* Initialize the values for member annotations. */

    UMAA_Common_Measurement_OrientationQuaternion_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_OrientationQuaternion_get_sample_access_info();
    UMAA_Common_Measurement_OrientationQuaternion_g_tc._data._typePlugin =
    UMAA_Common_Measurement_OrientationQuaternion_get_type_plugin_info();    

    return &UMAA_Common_Measurement_OrientationQuaternion_g_tc;
}

#define TSeq UMAA_Common_Measurement_OrientationQuaternionSeq
#define T UMAA_Common_Measurement_OrientationQuaternion
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_OrientationQuaternion_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_OrientationQuaternion_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_OrientationQuaternionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_OrientationQuaternionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_OrientationQuaternion_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_OrientationQuaternion_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_OrientationQuaternion_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_OrientationQuaternion_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_OrientationQuaternion_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_OrientationQuaternion);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_OrientationQuaternion_get_member_value_pointer;

    UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_OrientationQuaternion_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_OrientationQuaternion_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_OrientationQuaternion_g_typePlugin = 
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
        UMAA_Common_Measurement_OrientationQuaternion_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_OrientationQuaternion_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_OrientationQuaternion_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize(
    UMAA_Common_Measurement_OrientationQuaternion* sample)
{
    return UMAA_Common_Measurement_OrientationQuaternion_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize_w_params(
    UMAA_Common_Measurement_OrientationQuaternion *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!BasicTypes_Quaternion_initialize_w_params(
        sample,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_OrientationQuaternion_initialize_ex(
    UMAA_Common_Measurement_OrientationQuaternion *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_OrientationQuaternion_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_OrientationQuaternion_finalize_w_return(
    UMAA_Common_Measurement_OrientationQuaternion* sample)
{
    UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_OrientationQuaternion_finalize(
    UMAA_Common_Measurement_OrientationQuaternion* sample)
{  
    UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(
    UMAA_Common_Measurement_OrientationQuaternion *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params(
    UMAA_Common_Measurement_OrientationQuaternion *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    BasicTypes_Quaternion_finalize_w_params(
        sample,
        deallocParams);

}

void UMAA_Common_Measurement_OrientationQuaternion_finalize_optional_members(
    UMAA_Common_Measurement_OrientationQuaternion* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_OrientationQuaternion_copy(
    UMAA_Common_Measurement_OrientationQuaternion* dst,
    const UMAA_Common_Measurement_OrientationQuaternion* src)
{
    try {

        if (!BasicTypes_Quaternion_copy(
            dst,
            (const BasicTypes_Quaternion*)src)) {
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
* Configure and implement 'UMAA_Common_Measurement_OrientationQuaternion' sequence class.
*/
#define T UMAA_Common_Measurement_OrientationQuaternion
#define TSeq UMAA_Common_Measurement_OrientationQuaternionSeq

#define T_initialize_w_params UMAA_Common_Measurement_OrientationQuaternion_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params
#define T_copy       UMAA_Common_Measurement_OrientationQuaternion_copy

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
DDS_TypeCode * UMAA_Common_Measurement_PositiveCount_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_PositiveCount_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::PositiveCount", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_PositiveCount */

    if (is_initialized) {
        return &UMAA_Common_Measurement_PositiveCount_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_PositiveCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PositiveCount_g_tc._data._annotations._maxValue._u.double_value = 2147483647ULL;

    UMAA_Common_Measurement_PositiveCount_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_PositiveCount_get_sample_access_info();
    UMAA_Common_Measurement_PositiveCount_g_tc._data._typePlugin =
    UMAA_Common_Measurement_PositiveCount_get_type_plugin_info();    

    return &UMAA_Common_Measurement_PositiveCount_g_tc;
}

#define TSeq UMAA_Common_Measurement_PositiveCountSeq
#define T UMAA_Common_Measurement_PositiveCount
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PositiveCount_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PositiveCount_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PositiveCountSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PositiveCountSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_PositiveCount_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PositiveCount_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_PositiveCount_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_PositiveCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_PositiveCount_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_PositiveCount);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_PositiveCount_get_member_value_pointer;

    UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PositiveCount_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_PositiveCount_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_PositiveCount_g_typePlugin = 
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
        UMAA_Common_Measurement_PositiveCount_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_PositiveCount_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_PositiveCount_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_PositiveCount_initialize(
    UMAA_Common_Measurement_PositiveCount* sample)
{
    return UMAA_Common_Measurement_PositiveCount_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_PositiveCount_initialize_w_params(
    UMAA_Common_Measurement_PositiveCount *sample,
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
RTIBool UMAA_Common_Measurement_PositiveCount_initialize_ex(
    UMAA_Common_Measurement_PositiveCount *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_PositiveCount_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_PositiveCount_finalize_w_return(
    UMAA_Common_Measurement_PositiveCount* sample)
{
    UMAA_Common_Measurement_PositiveCount_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_PositiveCount_finalize(
    UMAA_Common_Measurement_PositiveCount* sample)
{  
    UMAA_Common_Measurement_PositiveCount_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_PositiveCount_finalize_ex(
    UMAA_Common_Measurement_PositiveCount *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_PositiveCount_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_PositiveCount_finalize_w_params(
    UMAA_Common_Measurement_PositiveCount *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_PositiveCount_finalize_optional_members(
    UMAA_Common_Measurement_PositiveCount* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_PositiveCount_copy(
    UMAA_Common_Measurement_PositiveCount* dst,
    const UMAA_Common_Measurement_PositiveCount* src)
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
* Configure and implement 'UMAA_Common_Measurement_PositiveCount' sequence class.
*/
#define T UMAA_Common_Measurement_PositiveCount
#define TSeq UMAA_Common_Measurement_PositiveCountSeq

#define T_initialize_w_params UMAA_Common_Measurement_PositiveCount_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_PositiveCount_finalize_w_params
#define T_copy       UMAA_Common_Measurement_PositiveCount_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Power_Percent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Power_Percent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Power_Percent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Power_Percent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Power_Percent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Power_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Power_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Power_Percent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Power_Percent_get_sample_access_info();
    UMAA_Common_Measurement_Power_Percent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Power_Percent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Power_Percent_g_tc;
}

#define TSeq UMAA_Common_Measurement_Power_PercentSeq
#define T UMAA_Common_Measurement_Power_Percent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Power_Percent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Power_Percent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Power_PercentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Power_PercentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Power_Percent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Power_Percent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Power_Percent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Power_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Power_Percent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Power_Percent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Power_Percent_get_member_value_pointer;

    UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Power_Percent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Power_Percent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Power_Percent_g_typePlugin = 
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
        UMAA_Common_Measurement_Power_Percent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Power_Percent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Power_Percent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Power_Percent_initialize(
    UMAA_Common_Measurement_Power_Percent* sample)
{
    return UMAA_Common_Measurement_Power_Percent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Power_Percent_initialize_w_params(
    UMAA_Common_Measurement_Power_Percent *sample,
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
RTIBool UMAA_Common_Measurement_Power_Percent_initialize_ex(
    UMAA_Common_Measurement_Power_Percent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Power_Percent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Power_Percent_finalize_w_return(
    UMAA_Common_Measurement_Power_Percent* sample)
{
    UMAA_Common_Measurement_Power_Percent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Power_Percent_finalize(
    UMAA_Common_Measurement_Power_Percent* sample)
{  
    UMAA_Common_Measurement_Power_Percent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Power_Percent_finalize_ex(
    UMAA_Common_Measurement_Power_Percent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Power_Percent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Power_Percent_finalize_w_params(
    UMAA_Common_Measurement_Power_Percent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Power_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Power_Percent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Power_Percent_copy(
    UMAA_Common_Measurement_Power_Percent* dst,
    const UMAA_Common_Measurement_Power_Percent* src)
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
* Configure and implement 'UMAA_Common_Measurement_Power_Percent' sequence class.
*/
#define T UMAA_Common_Measurement_Power_Percent
#define TSeq UMAA_Common_Measurement_Power_PercentSeq

#define T_initialize_w_params UMAA_Common_Measurement_Power_Percent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Power_Percent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Power_Percent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Pressure_Percent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Pressure_Percent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Pressure_Percent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Pressure_Percent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Pressure_Percent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._annotations._maxValue._u.double_value = 200ULL;

    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Pressure_Percent_get_sample_access_info();
    UMAA_Common_Measurement_Pressure_Percent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Pressure_Percent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Pressure_Percent_g_tc;
}

#define TSeq UMAA_Common_Measurement_Pressure_PercentSeq
#define T UMAA_Common_Measurement_Pressure_Percent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_Percent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pressure_Percent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Pressure_PercentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Pressure_PercentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Pressure_Percent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_Percent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Pressure_Percent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Pressure_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Pressure_Percent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Pressure_Percent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Pressure_Percent_get_member_value_pointer;

    UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pressure_Percent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Pressure_Percent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Pressure_Percent_g_typePlugin = 
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
        UMAA_Common_Measurement_Pressure_Percent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Pressure_Percent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Pressure_Percent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize(
    UMAA_Common_Measurement_Pressure_Percent* sample)
{
    return UMAA_Common_Measurement_Pressure_Percent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize_w_params(
    UMAA_Common_Measurement_Pressure_Percent *sample,
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
RTIBool UMAA_Common_Measurement_Pressure_Percent_initialize_ex(
    UMAA_Common_Measurement_Pressure_Percent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Pressure_Percent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Pressure_Percent_finalize_w_return(
    UMAA_Common_Measurement_Pressure_Percent* sample)
{
    UMAA_Common_Measurement_Pressure_Percent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Pressure_Percent_finalize(
    UMAA_Common_Measurement_Pressure_Percent* sample)
{  
    UMAA_Common_Measurement_Pressure_Percent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Pressure_Percent_finalize_ex(
    UMAA_Common_Measurement_Pressure_Percent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Pressure_Percent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Pressure_Percent_finalize_w_params(
    UMAA_Common_Measurement_Pressure_Percent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Pressure_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Pressure_Percent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Pressure_Percent_copy(
    UMAA_Common_Measurement_Pressure_Percent* dst,
    const UMAA_Common_Measurement_Pressure_Percent* src)
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
* Configure and implement 'UMAA_Common_Measurement_Pressure_Percent' sequence class.
*/
#define T UMAA_Common_Measurement_Pressure_Percent
#define TSeq UMAA_Common_Measurement_Pressure_PercentSeq

#define T_initialize_w_params UMAA_Common_Measurement_Pressure_Percent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Pressure_Percent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Pressure_Percent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Salinity_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Salinity_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Salinity", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Salinity */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Salinity_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Salinity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Salinity_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Salinity_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Salinity_get_sample_access_info();
    UMAA_Common_Measurement_Salinity_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Salinity_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Salinity_g_tc;
}

#define TSeq UMAA_Common_Measurement_SalinitySeq
#define T UMAA_Common_Measurement_Salinity
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Salinity_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Salinity_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_SalinitySeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_SalinitySeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Salinity_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Salinity_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Salinity_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Salinity_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Salinity_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Salinity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Salinity_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Salinity);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Salinity_get_member_value_pointer;

    UMAA_Common_Measurement_Salinity_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Salinity_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Salinity_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Salinity_g_typePlugin = 
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
        UMAA_Common_Measurement_Salinity_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Salinity_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Salinity_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Salinity_initialize(
    UMAA_Common_Measurement_Salinity* sample)
{
    return UMAA_Common_Measurement_Salinity_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Salinity_initialize_w_params(
    UMAA_Common_Measurement_Salinity *sample,
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
RTIBool UMAA_Common_Measurement_Salinity_initialize_ex(
    UMAA_Common_Measurement_Salinity *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Salinity_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Salinity_finalize_w_return(
    UMAA_Common_Measurement_Salinity* sample)
{
    UMAA_Common_Measurement_Salinity_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Salinity_finalize(
    UMAA_Common_Measurement_Salinity* sample)
{  
    UMAA_Common_Measurement_Salinity_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Salinity_finalize_ex(
    UMAA_Common_Measurement_Salinity *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Salinity_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Salinity_finalize_w_params(
    UMAA_Common_Measurement_Salinity *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Salinity_finalize_optional_members(
    UMAA_Common_Measurement_Salinity* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Salinity_copy(
    UMAA_Common_Measurement_Salinity* dst,
    const UMAA_Common_Measurement_Salinity* src)
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
* Configure and implement 'UMAA_Common_Measurement_Salinity' sequence class.
*/
#define T UMAA_Common_Measurement_Salinity
#define TSeq UMAA_Common_Measurement_SalinitySeq

#define T_initialize_w_params UMAA_Common_Measurement_Salinity_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Salinity_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Salinity_copy

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
DDS_TypeCode * UMAA_Common_Measurement_SidesCount_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_SidesCount_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::SidesCount", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_SidesCount */

    if (is_initialized) {
        return &UMAA_Common_Measurement_SidesCount_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_SidesCount_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._minValue._u.long_value = 0L;
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_SidesCount_g_tc._data._annotations._maxValue._u.long_value = 255L;

    UMAA_Common_Measurement_SidesCount_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_SidesCount_get_sample_access_info();
    UMAA_Common_Measurement_SidesCount_g_tc._data._typePlugin =
    UMAA_Common_Measurement_SidesCount_get_type_plugin_info();    

    return &UMAA_Common_Measurement_SidesCount_g_tc;
}

#define TSeq UMAA_Common_Measurement_SidesCountSeq
#define T UMAA_Common_Measurement_SidesCount
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_SidesCount_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_SidesCount_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_SidesCountSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_SidesCountSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_SidesCount_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_SidesCount_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_SidesCount_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_SidesCount_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_SidesCount_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_SidesCount);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_SidesCount_get_member_value_pointer;

    UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_SidesCount_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_SidesCount_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_SidesCount_g_typePlugin = 
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
        UMAA_Common_Measurement_SidesCount_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_SidesCount_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_SidesCount_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_SidesCount_initialize(
    UMAA_Common_Measurement_SidesCount* sample)
{
    return UMAA_Common_Measurement_SidesCount_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_SidesCount_initialize_w_params(
    UMAA_Common_Measurement_SidesCount *sample,
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
RTIBool UMAA_Common_Measurement_SidesCount_initialize_ex(
    UMAA_Common_Measurement_SidesCount *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_SidesCount_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_SidesCount_finalize_w_return(
    UMAA_Common_Measurement_SidesCount* sample)
{
    UMAA_Common_Measurement_SidesCount_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_SidesCount_finalize(
    UMAA_Common_Measurement_SidesCount* sample)
{  
    UMAA_Common_Measurement_SidesCount_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_SidesCount_finalize_ex(
    UMAA_Common_Measurement_SidesCount *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_SidesCount_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_SidesCount_finalize_w_params(
    UMAA_Common_Measurement_SidesCount *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_SidesCount_finalize_optional_members(
    UMAA_Common_Measurement_SidesCount* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_SidesCount_copy(
    UMAA_Common_Measurement_SidesCount* dst,
    const UMAA_Common_Measurement_SidesCount* src)
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
* Configure and implement 'UMAA_Common_Measurement_SidesCount' sequence class.
*/
#define T UMAA_Common_Measurement_SidesCount
#define TSeq UMAA_Common_Measurement_SidesCountSeq

#define T_initialize_w_params UMAA_Common_Measurement_SidesCount_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_SidesCount_finalize_w_params
#define T_copy       UMAA_Common_Measurement_SidesCount_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Speed_BSL_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Speed_BSL_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Speed_BSL", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Speed_BSL */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Speed_BSL_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Speed_BSL_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Speed_BSL_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Speed_BSL_get_sample_access_info();
    UMAA_Common_Measurement_Speed_BSL_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Speed_BSL_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Speed_BSL_g_tc;
}

#define TSeq UMAA_Common_Measurement_Speed_BSLSeq
#define T UMAA_Common_Measurement_Speed_BSL
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_BSL_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_BSL_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Speed_BSLSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Speed_BSLSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Speed_BSL_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_BSL_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Speed_BSL_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Speed_BSL_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Speed_BSL_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Speed_BSL);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Speed_BSL_get_member_value_pointer;

    UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_BSL_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_BSL_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Speed_BSL_g_typePlugin = 
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
        UMAA_Common_Measurement_Speed_BSL_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Speed_BSL_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Speed_BSL_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Speed_BSL_initialize(
    UMAA_Common_Measurement_Speed_BSL* sample)
{
    return UMAA_Common_Measurement_Speed_BSL_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Speed_BSL_initialize_w_params(
    UMAA_Common_Measurement_Speed_BSL *sample,
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
RTIBool UMAA_Common_Measurement_Speed_BSL_initialize_ex(
    UMAA_Common_Measurement_Speed_BSL *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Speed_BSL_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Speed_BSL_finalize_w_return(
    UMAA_Common_Measurement_Speed_BSL* sample)
{
    UMAA_Common_Measurement_Speed_BSL_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Speed_BSL_finalize(
    UMAA_Common_Measurement_Speed_BSL* sample)
{  
    UMAA_Common_Measurement_Speed_BSL_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Speed_BSL_finalize_ex(
    UMAA_Common_Measurement_Speed_BSL *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Speed_BSL_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Speed_BSL_finalize_w_params(
    UMAA_Common_Measurement_Speed_BSL *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Speed_BSL_finalize_optional_members(
    UMAA_Common_Measurement_Speed_BSL* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Speed_BSL_copy(
    UMAA_Common_Measurement_Speed_BSL* dst,
    const UMAA_Common_Measurement_Speed_BSL* src)
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
* Configure and implement 'UMAA_Common_Measurement_Speed_BSL' sequence class.
*/
#define T UMAA_Common_Measurement_Speed_BSL
#define TSeq UMAA_Common_Measurement_Speed_BSLSeq

#define T_initialize_w_params UMAA_Common_Measurement_Speed_BSL_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Speed_BSL_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Speed_BSL_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Speed_LocalWaterMass_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Speed_LocalWaterMass", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Speed_LocalWaterMass */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._annotations._maxValue._u.double_value = 299792458ULL;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Speed_LocalWaterMass_get_sample_access_info();
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Speed_LocalWaterMass_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Speed_LocalWaterMass_g_tc;
}

#define TSeq UMAA_Common_Measurement_Speed_LocalWaterMassSeq
#define T UMAA_Common_Measurement_Speed_LocalWaterMass
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_LocalWaterMass_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_LocalWaterMass_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Speed_LocalWaterMassSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Speed_LocalWaterMassSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Speed_LocalWaterMass_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_LocalWaterMass_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Speed_LocalWaterMass_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Speed_LocalWaterMass_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Speed_LocalWaterMass);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Speed_LocalWaterMass_get_member_value_pointer;

    UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_LocalWaterMass_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_LocalWaterMass_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Speed_LocalWaterMass_g_typePlugin = 
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
        UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Speed_LocalWaterMass_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize(
    UMAA_Common_Measurement_Speed_LocalWaterMass* sample)
{
    return UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_w_params(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
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
RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_ex(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_return(
    UMAA_Common_Measurement_Speed_LocalWaterMass* sample)
{
    UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize(
    UMAA_Common_Measurement_Speed_LocalWaterMass* sample)
{  
    UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_optional_members(
    UMAA_Common_Measurement_Speed_LocalWaterMass* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Speed_LocalWaterMass_copy(
    UMAA_Common_Measurement_Speed_LocalWaterMass* dst,
    const UMAA_Common_Measurement_Speed_LocalWaterMass* src)
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
* Configure and implement 'UMAA_Common_Measurement_Speed_LocalWaterMass' sequence class.
*/
#define T UMAA_Common_Measurement_Speed_LocalWaterMass
#define TSeq UMAA_Common_Measurement_Speed_LocalWaterMassSeq

#define T_initialize_w_params UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Speed_LocalWaterMass_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Volume_CubicMeter_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Volume_CubicMeter_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Volume_CubicMeter", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Volume_CubicMeter */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Volume_CubicMeter_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Volume_CubicMeter_get_sample_access_info();
    UMAA_Common_Measurement_Volume_CubicMeter_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Volume_CubicMeter_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Volume_CubicMeter_g_tc;
}

#define TSeq UMAA_Common_Measurement_Volume_CubicMeterSeq
#define T UMAA_Common_Measurement_Volume_CubicMeter
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_CubicMeter_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Volume_CubicMeter_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Volume_CubicMeterSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Volume_CubicMeterSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Volume_CubicMeter_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_CubicMeter_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Volume_CubicMeter_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Volume_CubicMeter_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Volume_CubicMeter_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Volume_CubicMeter);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Volume_CubicMeter_get_member_value_pointer;

    UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Volume_CubicMeter_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Volume_CubicMeter_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Volume_CubicMeter_g_typePlugin = 
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
        UMAA_Common_Measurement_Volume_CubicMeter_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Volume_CubicMeter_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize(
    UMAA_Common_Measurement_Volume_CubicMeter* sample)
{
    return UMAA_Common_Measurement_Volume_CubicMeter_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize_w_params(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,
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
RTIBool UMAA_Common_Measurement_Volume_CubicMeter_initialize_ex(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Volume_CubicMeter_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_return(
    UMAA_Common_Measurement_Volume_CubicMeter* sample)
{
    UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Volume_CubicMeter_finalize(
    UMAA_Common_Measurement_Volume_CubicMeter* sample)
{  
    UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Volume_CubicMeter_finalize_optional_members(
    UMAA_Common_Measurement_Volume_CubicMeter* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Volume_CubicMeter_copy(
    UMAA_Common_Measurement_Volume_CubicMeter* dst,
    const UMAA_Common_Measurement_Volume_CubicMeter* src)
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
* Configure and implement 'UMAA_Common_Measurement_Volume_CubicMeter' sequence class.
*/
#define T UMAA_Common_Measurement_Volume_CubicMeter
#define TSeq UMAA_Common_Measurement_Volume_CubicMeterSeq

#define T_initialize_w_params UMAA_Common_Measurement_Volume_CubicMeter_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Volume_CubicMeter_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Volume_Percent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Volume_Percent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Volume_Percent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Volume_Percent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Volume_Percent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Volume_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Volume_Percent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Volume_Percent_get_sample_access_info();
    UMAA_Common_Measurement_Volume_Percent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Volume_Percent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Volume_Percent_g_tc;
}

#define TSeq UMAA_Common_Measurement_Volume_PercentSeq
#define T UMAA_Common_Measurement_Volume_Percent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_Percent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Volume_Percent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Volume_PercentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Volume_PercentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Volume_Percent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Volume_Percent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Volume_Percent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Volume_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Volume_Percent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Volume_Percent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Volume_Percent_get_member_value_pointer;

    UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Volume_Percent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Volume_Percent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Volume_Percent_g_typePlugin = 
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
        UMAA_Common_Measurement_Volume_Percent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Volume_Percent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Volume_Percent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Volume_Percent_initialize(
    UMAA_Common_Measurement_Volume_Percent* sample)
{
    return UMAA_Common_Measurement_Volume_Percent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Volume_Percent_initialize_w_params(
    UMAA_Common_Measurement_Volume_Percent *sample,
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
RTIBool UMAA_Common_Measurement_Volume_Percent_initialize_ex(
    UMAA_Common_Measurement_Volume_Percent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Volume_Percent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Volume_Percent_finalize_w_return(
    UMAA_Common_Measurement_Volume_Percent* sample)
{
    UMAA_Common_Measurement_Volume_Percent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Volume_Percent_finalize(
    UMAA_Common_Measurement_Volume_Percent* sample)
{  
    UMAA_Common_Measurement_Volume_Percent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Volume_Percent_finalize_ex(
    UMAA_Common_Measurement_Volume_Percent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Volume_Percent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Volume_Percent_finalize_w_params(
    UMAA_Common_Measurement_Volume_Percent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Volume_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Volume_Percent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Volume_Percent_copy(
    UMAA_Common_Measurement_Volume_Percent* dst,
    const UMAA_Common_Measurement_Volume_Percent* src)
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
* Configure and implement 'UMAA_Common_Measurement_Volume_Percent' sequence class.
*/
#define T UMAA_Common_Measurement_Volume_Percent
#define TSeq UMAA_Common_Measurement_Volume_PercentSeq

#define T_initialize_w_params UMAA_Common_Measurement_Volume_Percent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Volume_Percent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Volume_Percent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_VolumetricFlowRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_VolumetricFlowRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::VolumetricFlowRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_VolumetricFlowRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_VolumetricFlowRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_VolumetricFlowRate_get_sample_access_info();
    UMAA_Common_Measurement_VolumetricFlowRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_VolumetricFlowRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_VolumetricFlowRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_VolumetricFlowRateSeq
#define T UMAA_Common_Measurement_VolumetricFlowRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_VolumetricFlowRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_VolumetricFlowRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_VolumetricFlowRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_VolumetricFlowRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_VolumetricFlowRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_VolumetricFlowRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_VolumetricFlowRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_VolumetricFlowRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_VolumetricFlowRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_VolumetricFlowRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_VolumetricFlowRate_get_member_value_pointer;

    UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_VolumetricFlowRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_VolumetricFlowRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_VolumetricFlowRate_g_typePlugin = 
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
        UMAA_Common_Measurement_VolumetricFlowRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_VolumetricFlowRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize(
    UMAA_Common_Measurement_VolumetricFlowRate* sample)
{
    return UMAA_Common_Measurement_VolumetricFlowRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize_w_params(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,
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
RTIBool UMAA_Common_Measurement_VolumetricFlowRate_initialize_ex(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_VolumetricFlowRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_return(
    UMAA_Common_Measurement_VolumetricFlowRate* sample)
{
    UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_VolumetricFlowRate_finalize(
    UMAA_Common_Measurement_VolumetricFlowRate* sample)
{  
    UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_VolumetricFlowRate_finalize_optional_members(
    UMAA_Common_Measurement_VolumetricFlowRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_VolumetricFlowRate_copy(
    UMAA_Common_Measurement_VolumetricFlowRate* dst,
    const UMAA_Common_Measurement_VolumetricFlowRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_VolumetricFlowRate' sequence class.
*/
#define T UMAA_Common_Measurement_VolumetricFlowRate
#define TSeq UMAA_Common_Measurement_VolumetricFlowRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_VolumetricFlowRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_VolumetricFlowRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_AccelerationScalar_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_AccelerationScalar_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::AccelerationScalar", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_AccelerationScalar */

    if (is_initialized) {
        return &UMAA_Common_Measurement_AccelerationScalar_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._minValue._u.double_value = -1310.68;
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._annotations._maxValue._u.double_value = 1310.68;

    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_AccelerationScalar_get_sample_access_info();
    UMAA_Common_Measurement_AccelerationScalar_g_tc._data._typePlugin =
    UMAA_Common_Measurement_AccelerationScalar_get_type_plugin_info();    

    return &UMAA_Common_Measurement_AccelerationScalar_g_tc;
}

#define TSeq UMAA_Common_Measurement_AccelerationScalarSeq
#define T UMAA_Common_Measurement_AccelerationScalar
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AccelerationScalar_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AccelerationScalar_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_AccelerationScalarSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_AccelerationScalarSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_AccelerationScalar_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AccelerationScalar_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_AccelerationScalar_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_AccelerationScalar_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_AccelerationScalar_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_AccelerationScalar);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_AccelerationScalar_get_member_value_pointer;

    UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AccelerationScalar_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_AccelerationScalar_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_AccelerationScalar_g_typePlugin = 
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
        UMAA_Common_Measurement_AccelerationScalar_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_AccelerationScalar_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_AccelerationScalar_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize(
    UMAA_Common_Measurement_AccelerationScalar* sample)
{
    return UMAA_Common_Measurement_AccelerationScalar_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize_w_params(
    UMAA_Common_Measurement_AccelerationScalar *sample,
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
RTIBool UMAA_Common_Measurement_AccelerationScalar_initialize_ex(
    UMAA_Common_Measurement_AccelerationScalar *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_AccelerationScalar_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_AccelerationScalar_finalize_w_return(
    UMAA_Common_Measurement_AccelerationScalar* sample)
{
    UMAA_Common_Measurement_AccelerationScalar_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_AccelerationScalar_finalize(
    UMAA_Common_Measurement_AccelerationScalar* sample)
{  
    UMAA_Common_Measurement_AccelerationScalar_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_AccelerationScalar_finalize_ex(
    UMAA_Common_Measurement_AccelerationScalar *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_AccelerationScalar_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_AccelerationScalar_finalize_w_params(
    UMAA_Common_Measurement_AccelerationScalar *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_AccelerationScalar_finalize_optional_members(
    UMAA_Common_Measurement_AccelerationScalar* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_AccelerationScalar_copy(
    UMAA_Common_Measurement_AccelerationScalar* dst,
    const UMAA_Common_Measurement_AccelerationScalar* src)
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
* Configure and implement 'UMAA_Common_Measurement_AccelerationScalar' sequence class.
*/
#define T UMAA_Common_Measurement_AccelerationScalar
#define TSeq UMAA_Common_Measurement_AccelerationScalarSeq

#define T_initialize_w_params UMAA_Common_Measurement_AccelerationScalar_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_AccelerationScalar_finalize_w_params
#define T_copy       UMAA_Common_Measurement_AccelerationScalar_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Angle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Angle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Angle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Angle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Angle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Angle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Angle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Angle_get_sample_access_info();
    UMAA_Common_Measurement_Angle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Angle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Angle_g_tc;
}

#define TSeq UMAA_Common_Measurement_AngleSeq
#define T UMAA_Common_Measurement_Angle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Angle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Angle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_AngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_AngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Angle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Angle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Angle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Angle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Angle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Angle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Angle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Angle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Angle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Angle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Angle_get_member_value_pointer;

    UMAA_Common_Measurement_Angle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Angle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Angle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Angle_g_typePlugin = 
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
        UMAA_Common_Measurement_Angle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Angle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Angle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Angle_initialize(
    UMAA_Common_Measurement_Angle* sample)
{
    return UMAA_Common_Measurement_Angle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Angle_initialize_w_params(
    UMAA_Common_Measurement_Angle *sample,
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
RTIBool UMAA_Common_Measurement_Angle_initialize_ex(
    UMAA_Common_Measurement_Angle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Angle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Angle_finalize_w_return(
    UMAA_Common_Measurement_Angle* sample)
{
    UMAA_Common_Measurement_Angle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Angle_finalize(
    UMAA_Common_Measurement_Angle* sample)
{  
    UMAA_Common_Measurement_Angle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Angle_finalize_ex(
    UMAA_Common_Measurement_Angle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Angle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Angle_finalize_w_params(
    UMAA_Common_Measurement_Angle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Angle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Angle_copy(
    UMAA_Common_Measurement_Angle* dst,
    const UMAA_Common_Measurement_Angle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Angle' sequence class.
*/
#define T UMAA_Common_Measurement_Angle
#define TSeq UMAA_Common_Measurement_AngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Angle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Angle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Angle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_AngleRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_AngleRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::AngleRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_AngleRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_AngleRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_AngleRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._minValue._u.double_value = -62.831;
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_AngleRate_g_tc._data._annotations._maxValue._u.double_value = 62.831;

    UMAA_Common_Measurement_AngleRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_AngleRate_get_sample_access_info();
    UMAA_Common_Measurement_AngleRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_AngleRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_AngleRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_AngleRateSeq
#define T UMAA_Common_Measurement_AngleRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AngleRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_AngleRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_AngleRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_AngleRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_AngleRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_AngleRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_AngleRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_AngleRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_AngleRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_AngleRate_get_member_value_pointer;

    UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_AngleRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_AngleRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_AngleRate_g_typePlugin = 
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
        UMAA_Common_Measurement_AngleRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_AngleRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_AngleRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_AngleRate_initialize(
    UMAA_Common_Measurement_AngleRate* sample)
{
    return UMAA_Common_Measurement_AngleRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_AngleRate_initialize_w_params(
    UMAA_Common_Measurement_AngleRate *sample,
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
RTIBool UMAA_Common_Measurement_AngleRate_initialize_ex(
    UMAA_Common_Measurement_AngleRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_AngleRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_AngleRate_finalize_w_return(
    UMAA_Common_Measurement_AngleRate* sample)
{
    UMAA_Common_Measurement_AngleRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_AngleRate_finalize(
    UMAA_Common_Measurement_AngleRate* sample)
{  
    UMAA_Common_Measurement_AngleRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_AngleRate_finalize_ex(
    UMAA_Common_Measurement_AngleRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_AngleRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_AngleRate_finalize_w_params(
    UMAA_Common_Measurement_AngleRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_AngleRate_finalize_optional_members(
    UMAA_Common_Measurement_AngleRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_AngleRate_copy(
    UMAA_Common_Measurement_AngleRate* dst,
    const UMAA_Common_Measurement_AngleRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_AngleRate' sequence class.
*/
#define T UMAA_Common_Measurement_AngleRate
#define TSeq UMAA_Common_Measurement_AngleRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_AngleRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_AngleRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_AngleRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Azimuth_TrueNorth_PosAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_sample_access_info();
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_tc;
}

#define TSeq UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngleSeq
#define T UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_member_value_pointer;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_typePlugin = 
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
        UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* sample)
{
    return UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_w_params(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
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
RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_ex(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_return(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* sample)
{
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* sample)
{  
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_optional_members(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_copy(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* dst,
    const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle' sequence class.
*/
#define T UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle
#define TSeq UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_BarometricPressure_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_BarometricPressure_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::BarometricPressure", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_BarometricPressure */

    if (is_initialized) {
        return &UMAA_Common_Measurement_BarometricPressure_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_BarometricPressure_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_BarometricPressure_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_BarometricPressure_get_sample_access_info();
    UMAA_Common_Measurement_BarometricPressure_g_tc._data._typePlugin =
    UMAA_Common_Measurement_BarometricPressure_get_type_plugin_info();    

    return &UMAA_Common_Measurement_BarometricPressure_g_tc;
}

#define TSeq UMAA_Common_Measurement_BarometricPressureSeq
#define T UMAA_Common_Measurement_BarometricPressure
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BarometricPressure_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_BarometricPressure_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_BarometricPressureSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_BarometricPressureSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_BarometricPressure_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_BarometricPressure_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_BarometricPressure_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_BarometricPressure_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_BarometricPressure_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_BarometricPressure);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_BarometricPressure_get_member_value_pointer;

    UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_BarometricPressure_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_BarometricPressure_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_BarometricPressure_g_typePlugin = 
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
        UMAA_Common_Measurement_BarometricPressure_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_BarometricPressure_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_BarometricPressure_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_BarometricPressure_initialize(
    UMAA_Common_Measurement_BarometricPressure* sample)
{
    return UMAA_Common_Measurement_BarometricPressure_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_BarometricPressure_initialize_w_params(
    UMAA_Common_Measurement_BarometricPressure *sample,
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
RTIBool UMAA_Common_Measurement_BarometricPressure_initialize_ex(
    UMAA_Common_Measurement_BarometricPressure *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_BarometricPressure_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_BarometricPressure_finalize_w_return(
    UMAA_Common_Measurement_BarometricPressure* sample)
{
    UMAA_Common_Measurement_BarometricPressure_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_BarometricPressure_finalize(
    UMAA_Common_Measurement_BarometricPressure* sample)
{  
    UMAA_Common_Measurement_BarometricPressure_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_BarometricPressure_finalize_ex(
    UMAA_Common_Measurement_BarometricPressure *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_BarometricPressure_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_BarometricPressure_finalize_w_params(
    UMAA_Common_Measurement_BarometricPressure *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_BarometricPressure_finalize_optional_members(
    UMAA_Common_Measurement_BarometricPressure* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_BarometricPressure_copy(
    UMAA_Common_Measurement_BarometricPressure* dst,
    const UMAA_Common_Measurement_BarometricPressure* src)
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
* Configure and implement 'UMAA_Common_Measurement_BarometricPressure' sequence class.
*/
#define T UMAA_Common_Measurement_BarometricPressure
#define TSeq UMAA_Common_Measurement_BarometricPressureSeq

#define T_initialize_w_params UMAA_Common_Measurement_BarometricPressure_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_BarometricPressure_finalize_w_params
#define T_copy       UMAA_Common_Measurement_BarometricPressure_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CommsRate_BitsPerSecond", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CommsRate_BitsPerSecond */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_sample_access_info();
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_tc;
}

#define TSeq UMAA_Common_Measurement_CommsRate_BitsPerSecondSeq
#define T UMAA_Common_Measurement_CommsRate_BitsPerSecond
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CommsRate_BitsPerSecondSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CommsRate_BitsPerSecondSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CommsRate_BitsPerSecond);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_member_value_pointer;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CommsRate_BitsPerSecond_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_typePlugin = 
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
        UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CommsRate_BitsPerSecond_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* sample)
{
    return UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_w_params(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
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
RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_ex(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_return(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* sample)
{
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* sample)
{  
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_optional_members(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CommsRate_BitsPerSecond_copy(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond* dst,
    const UMAA_Common_Measurement_CommsRate_BitsPerSecond* src)
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
* Configure and implement 'UMAA_Common_Measurement_CommsRate_BitsPerSecond' sequence class.
*/
#define T UMAA_Common_Measurement_CommsRate_BitsPerSecond
#define TSeq UMAA_Common_Measurement_CommsRate_BitsPerSecondSeq

#define T_initialize_w_params UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CommsRate_BitsPerSecond_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CommsRate_MegabitsPerSecond", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CommsRate_MegabitsPerSecond */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._annotations._maxValue._u.double_value = 1125000ULL;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_sample_access_info();
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_tc;
}

#define TSeq UMAA_Common_Measurement_CommsRate_MegabitsPerSecondSeq
#define T UMAA_Common_Measurement_CommsRate_MegabitsPerSecond
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CommsRate_MegabitsPerSecondSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CommsRate_MegabitsPerSecondSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CommsRate_MegabitsPerSecond);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_member_value_pointer;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_typePlugin = 
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
        UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* sample)
{
    return UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_w_params(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
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
RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_ex(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_return(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* sample)
{
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* sample)
{  
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_optional_members(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_copy(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* dst,
    const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond* src)
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
* Configure and implement 'UMAA_Common_Measurement_CommsRate_MegabitsPerSecond' sequence class.
*/
#define T UMAA_Common_Measurement_CommsRate_MegabitsPerSecond
#define TSeq UMAA_Common_Measurement_CommsRate_MegabitsPerSecondSeq

#define T_initialize_w_params UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_copy

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
DDS_TypeCode * UMAA_Common_Measurement_ContinuousSize_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_ContinuousSize_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::ContinuousSize", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_ContinuousSize */

    if (is_initialized) {
        return &UMAA_Common_Measurement_ContinuousSize_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_ContinuousSize_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._annotations._maxValue._u.double_value = 32767ULL;

    UMAA_Common_Measurement_ContinuousSize_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_ContinuousSize_get_sample_access_info();
    UMAA_Common_Measurement_ContinuousSize_g_tc._data._typePlugin =
    UMAA_Common_Measurement_ContinuousSize_get_type_plugin_info();    

    return &UMAA_Common_Measurement_ContinuousSize_g_tc;
}

#define TSeq UMAA_Common_Measurement_ContinuousSizeSeq
#define T UMAA_Common_Measurement_ContinuousSize
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ContinuousSize_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_ContinuousSize_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_ContinuousSizeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_ContinuousSizeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_ContinuousSize_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ContinuousSize_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_ContinuousSize_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_ContinuousSize_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_ContinuousSize_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_ContinuousSize);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_ContinuousSize_get_member_value_pointer;

    UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_ContinuousSize_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_ContinuousSize_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_ContinuousSize_g_typePlugin = 
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
        UMAA_Common_Measurement_ContinuousSize_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_ContinuousSize_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_ContinuousSize_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_ContinuousSize_initialize(
    UMAA_Common_Measurement_ContinuousSize* sample)
{
    return UMAA_Common_Measurement_ContinuousSize_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_ContinuousSize_initialize_w_params(
    UMAA_Common_Measurement_ContinuousSize *sample,
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
RTIBool UMAA_Common_Measurement_ContinuousSize_initialize_ex(
    UMAA_Common_Measurement_ContinuousSize *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_ContinuousSize_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_ContinuousSize_finalize_w_return(
    UMAA_Common_Measurement_ContinuousSize* sample)
{
    UMAA_Common_Measurement_ContinuousSize_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_ContinuousSize_finalize(
    UMAA_Common_Measurement_ContinuousSize* sample)
{  
    UMAA_Common_Measurement_ContinuousSize_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_ContinuousSize_finalize_ex(
    UMAA_Common_Measurement_ContinuousSize *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_ContinuousSize_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_ContinuousSize_finalize_w_params(
    UMAA_Common_Measurement_ContinuousSize *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_ContinuousSize_finalize_optional_members(
    UMAA_Common_Measurement_ContinuousSize* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_ContinuousSize_copy(
    UMAA_Common_Measurement_ContinuousSize* dst,
    const UMAA_Common_Measurement_ContinuousSize* src)
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
* Configure and implement 'UMAA_Common_Measurement_ContinuousSize' sequence class.
*/
#define T UMAA_Common_Measurement_ContinuousSize
#define TSeq UMAA_Common_Measurement_ContinuousSizeSeq

#define T_initialize_w_params UMAA_Common_Measurement_ContinuousSize_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_ContinuousSize_finalize_w_params
#define T_copy       UMAA_Common_Measurement_ContinuousSize_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Count_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Count_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Count", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Count */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Count_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Count_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Count_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Count_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Count_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_Count_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Count_g_tc._data._annotations._minValue._u.long_value = -2147483648L;
    UMAA_Common_Measurement_Count_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Count_g_tc._data._annotations._maxValue._u.long_value = 2147483647L;

    UMAA_Common_Measurement_Count_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Count_get_sample_access_info();
    UMAA_Common_Measurement_Count_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Count_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Count_g_tc;
}

#define TSeq UMAA_Common_Measurement_CountSeq
#define T UMAA_Common_Measurement_Count
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Count_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Count_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CountSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CountSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Count_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Count_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Count_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Count_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Count_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Count_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Count_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Count_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Count);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Count_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Count_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Count_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Count_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Count_get_member_value_pointer;

    UMAA_Common_Measurement_Count_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Count_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Count_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Count_g_typePlugin = 
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
        UMAA_Common_Measurement_Count_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Count_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Count_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Count_initialize(
    UMAA_Common_Measurement_Count* sample)
{
    return UMAA_Common_Measurement_Count_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Count_initialize_w_params(
    UMAA_Common_Measurement_Count *sample,
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
RTIBool UMAA_Common_Measurement_Count_initialize_ex(
    UMAA_Common_Measurement_Count *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Count_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Count_finalize_w_return(
    UMAA_Common_Measurement_Count* sample)
{
    UMAA_Common_Measurement_Count_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Count_finalize(
    UMAA_Common_Measurement_Count* sample)
{  
    UMAA_Common_Measurement_Count_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Count_finalize_ex(
    UMAA_Common_Measurement_Count *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Count_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Count_finalize_w_params(
    UMAA_Common_Measurement_Count *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Count_finalize_optional_members(
    UMAA_Common_Measurement_Count* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Count_copy(
    UMAA_Common_Measurement_Count* dst,
    const UMAA_Common_Measurement_Count* src)
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
* Configure and implement 'UMAA_Common_Measurement_Count' sequence class.
*/
#define T UMAA_Common_Measurement_Count
#define TSeq UMAA_Common_Measurement_CountSeq

#define T_initialize_w_params UMAA_Common_Measurement_Count_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Count_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Count_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Course_TrueNorth_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Course_TrueNorth_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Course_TrueNorth", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Course_TrueNorth */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Course_TrueNorth_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Course_TrueNorth_get_sample_access_info();
    UMAA_Common_Measurement_Course_TrueNorth_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Course_TrueNorth_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Course_TrueNorth_g_tc;
}

#define TSeq UMAA_Common_Measurement_Course_TrueNorthSeq
#define T UMAA_Common_Measurement_Course_TrueNorth
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Course_TrueNorth_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Course_TrueNorth_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Course_TrueNorthSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Course_TrueNorthSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Course_TrueNorth_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Course_TrueNorth_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Course_TrueNorth_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Course_TrueNorth_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Course_TrueNorth_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Course_TrueNorth);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Course_TrueNorth_get_member_value_pointer;

    UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Course_TrueNorth_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Course_TrueNorth_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Course_TrueNorth_g_typePlugin = 
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
        UMAA_Common_Measurement_Course_TrueNorth_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Course_TrueNorth_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Course_TrueNorth_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize(
    UMAA_Common_Measurement_Course_TrueNorth* sample)
{
    return UMAA_Common_Measurement_Course_TrueNorth_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize_w_params(
    UMAA_Common_Measurement_Course_TrueNorth *sample,
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
RTIBool UMAA_Common_Measurement_Course_TrueNorth_initialize_ex(
    UMAA_Common_Measurement_Course_TrueNorth *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Course_TrueNorth_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Course_TrueNorth_finalize_w_return(
    UMAA_Common_Measurement_Course_TrueNorth* sample)
{
    UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Course_TrueNorth_finalize(
    UMAA_Common_Measurement_Course_TrueNorth* sample)
{  
    UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(
    UMAA_Common_Measurement_Course_TrueNorth *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params(
    UMAA_Common_Measurement_Course_TrueNorth *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Course_TrueNorth_finalize_optional_members(
    UMAA_Common_Measurement_Course_TrueNorth* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Course_TrueNorth_copy(
    UMAA_Common_Measurement_Course_TrueNorth* dst,
    const UMAA_Common_Measurement_Course_TrueNorth* src)
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
* Configure and implement 'UMAA_Common_Measurement_Course_TrueNorth' sequence class.
*/
#define T UMAA_Common_Measurement_Course_TrueNorth
#define TSeq UMAA_Common_Measurement_Course_TrueNorthSeq

#define T_initialize_w_params UMAA_Common_Measurement_Course_TrueNorth_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Course_TrueNorth_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CovarOrientation_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CovarOrientation_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CovarOrientation", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CovarOrientation */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovarOrientation_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovarOrientation_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovarOrientation_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovarOrientation_get_sample_access_info();
    UMAA_Common_Measurement_CovarOrientation_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovarOrientation_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovarOrientation_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovarOrientationSeq
#define T UMAA_Common_Measurement_CovarOrientation
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarOrientation_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarOrientation_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovarOrientationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovarOrientationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovarOrientation_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarOrientation_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovarOrientation_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CovarOrientation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovarOrientation_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovarOrientation);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovarOrientation_get_member_value_pointer;

    UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarOrientation_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarOrientation_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovarOrientation_g_typePlugin = 
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
        UMAA_Common_Measurement_CovarOrientation_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovarOrientation_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovarOrientation_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovarOrientation_initialize(
    UMAA_Common_Measurement_CovarOrientation* sample)
{
    return UMAA_Common_Measurement_CovarOrientation_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovarOrientation_initialize_w_params(
    UMAA_Common_Measurement_CovarOrientation *sample,
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
RTIBool UMAA_Common_Measurement_CovarOrientation_initialize_ex(
    UMAA_Common_Measurement_CovarOrientation *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovarOrientation_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovarOrientation_finalize_w_return(
    UMAA_Common_Measurement_CovarOrientation* sample)
{
    UMAA_Common_Measurement_CovarOrientation_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovarOrientation_finalize(
    UMAA_Common_Measurement_CovarOrientation* sample)
{  
    UMAA_Common_Measurement_CovarOrientation_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovarOrientation_finalize_ex(
    UMAA_Common_Measurement_CovarOrientation *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovarOrientation_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovarOrientation_finalize_w_params(
    UMAA_Common_Measurement_CovarOrientation *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CovarOrientation_finalize_optional_members(
    UMAA_Common_Measurement_CovarOrientation* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CovarOrientation_copy(
    UMAA_Common_Measurement_CovarOrientation* dst,
    const UMAA_Common_Measurement_CovarOrientation* src)
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
* Configure and implement 'UMAA_Common_Measurement_CovarOrientation' sequence class.
*/
#define T UMAA_Common_Measurement_CovarOrientation
#define TSeq UMAA_Common_Measurement_CovarOrientationSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovarOrientation_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovarOrientation_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovarOrientation_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CovarPosPos_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CovarPosPos_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CovarPosPos", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CovarPosPos */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovarPosPos_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovarPosPos_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovarPosPos_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovarPosPos_get_sample_access_info();
    UMAA_Common_Measurement_CovarPosPos_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovarPosPos_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovarPosPos_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovarPosPosSeq
#define T UMAA_Common_Measurement_CovarPosPos
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosPos_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarPosPos_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovarPosPosSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovarPosPosSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovarPosPos_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosPos_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovarPosPos_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CovarPosPos_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovarPosPos_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovarPosPos);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovarPosPos_get_member_value_pointer;

    UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarPosPos_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarPosPos_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovarPosPos_g_typePlugin = 
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
        UMAA_Common_Measurement_CovarPosPos_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovarPosPos_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovarPosPos_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovarPosPos_initialize(
    UMAA_Common_Measurement_CovarPosPos* sample)
{
    return UMAA_Common_Measurement_CovarPosPos_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovarPosPos_initialize_w_params(
    UMAA_Common_Measurement_CovarPosPos *sample,
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
RTIBool UMAA_Common_Measurement_CovarPosPos_initialize_ex(
    UMAA_Common_Measurement_CovarPosPos *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovarPosPos_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovarPosPos_finalize_w_return(
    UMAA_Common_Measurement_CovarPosPos* sample)
{
    UMAA_Common_Measurement_CovarPosPos_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovarPosPos_finalize(
    UMAA_Common_Measurement_CovarPosPos* sample)
{  
    UMAA_Common_Measurement_CovarPosPos_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovarPosPos_finalize_ex(
    UMAA_Common_Measurement_CovarPosPos *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovarPosPos_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovarPosPos_finalize_w_params(
    UMAA_Common_Measurement_CovarPosPos *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CovarPosPos_finalize_optional_members(
    UMAA_Common_Measurement_CovarPosPos* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CovarPosPos_copy(
    UMAA_Common_Measurement_CovarPosPos* dst,
    const UMAA_Common_Measurement_CovarPosPos* src)
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
* Configure and implement 'UMAA_Common_Measurement_CovarPosPos' sequence class.
*/
#define T UMAA_Common_Measurement_CovarPosPos
#define TSeq UMAA_Common_Measurement_CovarPosPosSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovarPosPos_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovarPosPos_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovarPosPos_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CovarPosVel_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CovarPosVel_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CovarPosVel", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CovarPosVel */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovarPosVel_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovarPosVel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovarPosVel_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovarPosVel_get_sample_access_info();
    UMAA_Common_Measurement_CovarPosVel_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovarPosVel_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovarPosVel_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovarPosVelSeq
#define T UMAA_Common_Measurement_CovarPosVel
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosVel_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarPosVel_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovarPosVelSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovarPosVelSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovarPosVel_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarPosVel_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovarPosVel_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CovarPosVel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovarPosVel_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovarPosVel);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovarPosVel_get_member_value_pointer;

    UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarPosVel_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarPosVel_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovarPosVel_g_typePlugin = 
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
        UMAA_Common_Measurement_CovarPosVel_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovarPosVel_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovarPosVel_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovarPosVel_initialize(
    UMAA_Common_Measurement_CovarPosVel* sample)
{
    return UMAA_Common_Measurement_CovarPosVel_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovarPosVel_initialize_w_params(
    UMAA_Common_Measurement_CovarPosVel *sample,
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
RTIBool UMAA_Common_Measurement_CovarPosVel_initialize_ex(
    UMAA_Common_Measurement_CovarPosVel *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovarPosVel_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovarPosVel_finalize_w_return(
    UMAA_Common_Measurement_CovarPosVel* sample)
{
    UMAA_Common_Measurement_CovarPosVel_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovarPosVel_finalize(
    UMAA_Common_Measurement_CovarPosVel* sample)
{  
    UMAA_Common_Measurement_CovarPosVel_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovarPosVel_finalize_ex(
    UMAA_Common_Measurement_CovarPosVel *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovarPosVel_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovarPosVel_finalize_w_params(
    UMAA_Common_Measurement_CovarPosVel *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CovarPosVel_finalize_optional_members(
    UMAA_Common_Measurement_CovarPosVel* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CovarPosVel_copy(
    UMAA_Common_Measurement_CovarPosVel* dst,
    const UMAA_Common_Measurement_CovarPosVel* src)
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
* Configure and implement 'UMAA_Common_Measurement_CovarPosVel' sequence class.
*/
#define T UMAA_Common_Measurement_CovarPosVel
#define TSeq UMAA_Common_Measurement_CovarPosVelSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovarPosVel_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovarPosVel_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovarPosVel_copy

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
DDS_TypeCode * UMAA_Common_Measurement_CovarVelVel_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_CovarVelVel_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::CovarVelVel", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_CovarVelVel */

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovarVelVel_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovarVelVel_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovarVelVel_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovarVelVel_get_sample_access_info();
    UMAA_Common_Measurement_CovarVelVel_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovarVelVel_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovarVelVel_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovarVelVelSeq
#define T UMAA_Common_Measurement_CovarVelVel
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarVelVel_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarVelVel_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovarVelVelSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovarVelVelSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovarVelVel_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarVelVel_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovarVelVel_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_CovarVelVel_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovarVelVel_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovarVelVel);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovarVelVel_get_member_value_pointer;

    UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarVelVel_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarVelVel_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovarVelVel_g_typePlugin = 
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
        UMAA_Common_Measurement_CovarVelVel_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovarVelVel_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovarVelVel_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovarVelVel_initialize(
    UMAA_Common_Measurement_CovarVelVel* sample)
{
    return UMAA_Common_Measurement_CovarVelVel_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovarVelVel_initialize_w_params(
    UMAA_Common_Measurement_CovarVelVel *sample,
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
RTIBool UMAA_Common_Measurement_CovarVelVel_initialize_ex(
    UMAA_Common_Measurement_CovarVelVel *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovarVelVel_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovarVelVel_finalize_w_return(
    UMAA_Common_Measurement_CovarVelVel* sample)
{
    UMAA_Common_Measurement_CovarVelVel_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovarVelVel_finalize(
    UMAA_Common_Measurement_CovarVelVel* sample)
{  
    UMAA_Common_Measurement_CovarVelVel_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovarVelVel_finalize_ex(
    UMAA_Common_Measurement_CovarVelVel *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovarVelVel_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovarVelVel_finalize_w_params(
    UMAA_Common_Measurement_CovarVelVel *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_CovarVelVel_finalize_optional_members(
    UMAA_Common_Measurement_CovarVelVel* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_CovarVelVel_copy(
    UMAA_Common_Measurement_CovarVelVel* dst,
    const UMAA_Common_Measurement_CovarVelVel* src)
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
* Configure and implement 'UMAA_Common_Measurement_CovarVelVel' sequence class.
*/
#define T UMAA_Common_Measurement_CovarVelVel
#define TSeq UMAA_Common_Measurement_CovarVelVelSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovarVelVel_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovarVelVel_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovarVelVel_copy

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
DDS_TypeCode * UMAA_Common_Measurement_DateTimeSeconds_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_DateTimeSeconds_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::DateTimeSeconds", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_DateTimeSeconds */

    if (is_initialized) {
        return &UMAA_Common_Measurement_DateTimeSeconds_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_DateTimeSeconds_get_sample_access_info();
    UMAA_Common_Measurement_DateTimeSeconds_g_tc._data._typePlugin =
    UMAA_Common_Measurement_DateTimeSeconds_get_type_plugin_info();    

    return &UMAA_Common_Measurement_DateTimeSeconds_g_tc;
}

#define TSeq UMAA_Common_Measurement_DateTimeSecondsSeq
#define T UMAA_Common_Measurement_DateTimeSeconds
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeSeconds_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTimeSeconds_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DateTimeSecondsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DateTimeSecondsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_DateTimeSeconds_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeSeconds_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_DateTimeSeconds_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_DateTimeSeconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_DateTimeSeconds_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_DateTimeSeconds);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_DateTimeSeconds_get_member_value_pointer;

    UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTimeSeconds_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTimeSeconds_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_DateTimeSeconds_g_typePlugin = 
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
        UMAA_Common_Measurement_DateTimeSeconds_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_DateTimeSeconds_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_DateTimeSeconds_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize(
    UMAA_Common_Measurement_DateTimeSeconds* sample)
{
    return UMAA_Common_Measurement_DateTimeSeconds_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize_w_params(
    UMAA_Common_Measurement_DateTimeSeconds *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0ll;

    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_DateTimeSeconds_initialize_ex(
    UMAA_Common_Measurement_DateTimeSeconds *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_DateTimeSeconds_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_DateTimeSeconds_finalize_w_return(
    UMAA_Common_Measurement_DateTimeSeconds* sample)
{
    UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_DateTimeSeconds_finalize(
    UMAA_Common_Measurement_DateTimeSeconds* sample)
{  
    UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(
    UMAA_Common_Measurement_DateTimeSeconds *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params(
    UMAA_Common_Measurement_DateTimeSeconds *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_DateTimeSeconds_finalize_optional_members(
    UMAA_Common_Measurement_DateTimeSeconds* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_DateTimeSeconds_copy(
    UMAA_Common_Measurement_DateTimeSeconds* dst,
    const UMAA_Common_Measurement_DateTimeSeconds* src)
{
    try {

        if (!RTICdrType_copyLongLong (
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
* Configure and implement 'UMAA_Common_Measurement_DateTimeSeconds' sequence class.
*/
#define T UMAA_Common_Measurement_DateTimeSeconds
#define TSeq UMAA_Common_Measurement_DateTimeSecondsSeq

#define T_initialize_w_params UMAA_Common_Measurement_DateTimeSeconds_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params
#define T_copy       UMAA_Common_Measurement_DateTimeSeconds_copy

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
DDS_TypeCode * UMAA_Common_Measurement_DateTimeNanoseconds_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_DateTimeNanoseconds_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::DateTimeNanoseconds", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_DateTimeNanoseconds */

    if (is_initialized) {
        return &UMAA_Common_Measurement_DateTimeNanoseconds_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._minValue._u.long_value = 0L;
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._annotations._maxValue._u.long_value = 999999999L;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_DateTimeNanoseconds_get_sample_access_info();
    UMAA_Common_Measurement_DateTimeNanoseconds_g_tc._data._typePlugin =
    UMAA_Common_Measurement_DateTimeNanoseconds_get_type_plugin_info();    

    return &UMAA_Common_Measurement_DateTimeNanoseconds_g_tc;
}

#define TSeq UMAA_Common_Measurement_DateTimeNanosecondsSeq
#define T UMAA_Common_Measurement_DateTimeNanoseconds
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeNanoseconds_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTimeNanoseconds_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DateTimeNanosecondsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DateTimeNanosecondsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_DateTimeNanoseconds_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTimeNanoseconds_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_DateTimeNanoseconds_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_DateTimeNanoseconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_DateTimeNanoseconds_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_DateTimeNanoseconds);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_DateTimeNanoseconds_get_member_value_pointer;

    UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTimeNanoseconds_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTimeNanoseconds_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_DateTimeNanoseconds_g_typePlugin = 
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
        UMAA_Common_Measurement_DateTimeNanoseconds_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_DateTimeNanoseconds_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize(
    UMAA_Common_Measurement_DateTimeNanoseconds* sample)
{
    return UMAA_Common_Measurement_DateTimeNanoseconds_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize_w_params(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,
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
RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_initialize_ex(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_DateTimeNanoseconds_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_return(
    UMAA_Common_Measurement_DateTimeNanoseconds* sample)
{
    UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_DateTimeNanoseconds_finalize(
    UMAA_Common_Measurement_DateTimeNanoseconds* sample)
{  
    UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_DateTimeNanoseconds_finalize_optional_members(
    UMAA_Common_Measurement_DateTimeNanoseconds* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_DateTimeNanoseconds_copy(
    UMAA_Common_Measurement_DateTimeNanoseconds* dst,
    const UMAA_Common_Measurement_DateTimeNanoseconds* src)
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
* Configure and implement 'UMAA_Common_Measurement_DateTimeNanoseconds' sequence class.
*/
#define T UMAA_Common_Measurement_DateTimeNanoseconds
#define TSeq UMAA_Common_Measurement_DateTimeNanosecondsSeq

#define T_initialize_w_params UMAA_Common_Measurement_DateTimeNanoseconds_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params
#define T_copy       UMAA_Common_Measurement_DateTimeNanoseconds_copy

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
const char *UMAA_Common_Measurement_DateTimeTYPENAME = "UMAA::Common::Measurement::DateTime";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_DateTime_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Measurement_DateTime_g_tc_members[2]=
    {

        {
            (char *)"seconds",/* Member name */
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
            (char *)"nanoseconds",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_Common_Measurement_DateTime_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Measurement::DateTime", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_Common_Measurement_DateTime_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Measurement_DateTime*/

    if (is_initialized) {
        return &UMAA_Common_Measurement_DateTime_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_DateTime_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_DateTime_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTimeSeconds_get_typecode();
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTimeNanoseconds_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._minValue._u.long_value = 0L;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_DateTime_g_tc_members[1]._annotations._maxValue._u.long_value = 999999999L;

    UMAA_Common_Measurement_DateTime_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_DateTime_get_sample_access_info();
    UMAA_Common_Measurement_DateTime_g_tc._data._typePlugin =
    UMAA_Common_Measurement_DateTime_get_type_plugin_info();    

    return &UMAA_Common_Measurement_DateTime_g_tc;
}

#define TSeq UMAA_Common_Measurement_DateTimeSeq
#define T UMAA_Common_Measurement_DateTime
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTime_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTime_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DateTimeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DateTimeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_DateTime_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_DateTime_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_Common_Measurement_DateTime *sample;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_DateTime_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_DateTime_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTime_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_Common_Measurement_DateTime);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_Common_Measurement_DateTime_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->seconds - (char *)sample);

    UMAA_Common_Measurement_DateTime_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->nanoseconds - (char *)sample);

    UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_DateTime_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_DateTime);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_DateTime_get_member_value_pointer;

    UMAA_Common_Measurement_DateTime_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_DateTime_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_DateTime_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_DateTime_g_typePlugin = 
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
        UMAA_Common_Measurement_DateTime_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_DateTime_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_DateTime_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_DateTime_initialize(
    UMAA_Common_Measurement_DateTime* sample)
{
    return UMAA_Common_Measurement_DateTime_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_DateTime_initialize_w_params(
    UMAA_Common_Measurement_DateTime *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->seconds = 0ll;

    sample->nanoseconds = 0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_DateTime_initialize_ex(
    UMAA_Common_Measurement_DateTime *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_DateTime_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_DateTime_finalize_w_return(
    UMAA_Common_Measurement_DateTime* sample)
{
    UMAA_Common_Measurement_DateTime_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_DateTime_finalize(
    UMAA_Common_Measurement_DateTime* sample)
{  
    UMAA_Common_Measurement_DateTime_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_DateTime_finalize_ex(
    UMAA_Common_Measurement_DateTime *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_DateTime_finalize_w_params(
    UMAA_Common_Measurement_DateTime *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_DateTime_finalize_optional_members(
    UMAA_Common_Measurement_DateTime* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_DateTime_copy(
    UMAA_Common_Measurement_DateTime* dst,
    const UMAA_Common_Measurement_DateTime* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLongLong (
            &dst->seconds, 
            &src->seconds)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->nanoseconds, 
            &src->nanoseconds)) { 
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
* Configure and implement 'UMAA_Common_Measurement_DateTime' sequence class.
*/
#define T UMAA_Common_Measurement_DateTime
#define TSeq UMAA_Common_Measurement_DateTimeSeq

#define T_initialize_w_params UMAA_Common_Measurement_DateTime_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_DateTime_finalize_w_params
#define T_copy       UMAA_Common_Measurement_DateTime_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Density_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Density_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Density", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Density */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Density_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Density_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Density_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Density_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Density_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Density_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Density_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Density_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Density_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Density_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Density_get_sample_access_info();
    UMAA_Common_Measurement_Density_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Density_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Density_g_tc;
}

#define TSeq UMAA_Common_Measurement_DensitySeq
#define T UMAA_Common_Measurement_Density
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Density_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Density_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DensitySeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DensitySeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Density_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Density_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Density_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Density_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Density_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Density_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Density_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Density_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Density);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Density_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Density_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Density_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Density_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Density_get_member_value_pointer;

    UMAA_Common_Measurement_Density_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Density_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Density_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Density_g_typePlugin = 
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
        UMAA_Common_Measurement_Density_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Density_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Density_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Density_initialize(
    UMAA_Common_Measurement_Density* sample)
{
    return UMAA_Common_Measurement_Density_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Density_initialize_w_params(
    UMAA_Common_Measurement_Density *sample,
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
RTIBool UMAA_Common_Measurement_Density_initialize_ex(
    UMAA_Common_Measurement_Density *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Density_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Density_finalize_w_return(
    UMAA_Common_Measurement_Density* sample)
{
    UMAA_Common_Measurement_Density_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Density_finalize(
    UMAA_Common_Measurement_Density* sample)
{  
    UMAA_Common_Measurement_Density_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Density_finalize_ex(
    UMAA_Common_Measurement_Density *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Density_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Density_finalize_w_params(
    UMAA_Common_Measurement_Density *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Density_finalize_optional_members(
    UMAA_Common_Measurement_Density* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Density_copy(
    UMAA_Common_Measurement_Density* dst,
    const UMAA_Common_Measurement_Density* src)
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
* Configure and implement 'UMAA_Common_Measurement_Density' sequence class.
*/
#define T UMAA_Common_Measurement_Density
#define TSeq UMAA_Common_Measurement_DensitySeq

#define T_initialize_w_params UMAA_Common_Measurement_Density_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Density_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Density_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Distance_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Distance_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Distance", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Distance */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Distance_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Distance_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Distance_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_Common_Measurement_Distance_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Distance_get_sample_access_info();
    UMAA_Common_Measurement_Distance_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Distance_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Distance_g_tc;
}

#define TSeq UMAA_Common_Measurement_DistanceSeq
#define T UMAA_Common_Measurement_Distance
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_DistanceSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_DistanceSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Distance_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Distance_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Distance_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Distance_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Distance_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Distance);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Distance_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Distance_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Distance_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Distance_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Distance_get_member_value_pointer;

    UMAA_Common_Measurement_Distance_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Distance_g_typePlugin = 
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
        UMAA_Common_Measurement_Distance_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Distance_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Distance_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Distance_initialize(
    UMAA_Common_Measurement_Distance* sample)
{
    return UMAA_Common_Measurement_Distance_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Distance_initialize_w_params(
    UMAA_Common_Measurement_Distance *sample,
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
RTIBool UMAA_Common_Measurement_Distance_initialize_ex(
    UMAA_Common_Measurement_Distance *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Distance_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Distance_finalize_w_return(
    UMAA_Common_Measurement_Distance* sample)
{
    UMAA_Common_Measurement_Distance_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Distance_finalize(
    UMAA_Common_Measurement_Distance* sample)
{  
    UMAA_Common_Measurement_Distance_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Distance_finalize_ex(
    UMAA_Common_Measurement_Distance *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Distance_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Distance_finalize_w_params(
    UMAA_Common_Measurement_Distance *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Distance_finalize_optional_members(
    UMAA_Common_Measurement_Distance* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Distance_copy(
    UMAA_Common_Measurement_Distance* dst,
    const UMAA_Common_Measurement_Distance* src)
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
* Configure and implement 'UMAA_Common_Measurement_Distance' sequence class.
*/
#define T UMAA_Common_Measurement_Distance
#define TSeq UMAA_Common_Measurement_DistanceSeq

#define T_initialize_w_params UMAA_Common_Measurement_Distance_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Distance_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Distance_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Distance_Precise_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Distance_Precise_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Distance_Precise", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Distance_Precise */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Distance_Precise_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Distance_Precise_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_Common_Measurement_Distance_Precise_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Distance_Precise_get_sample_access_info();
    UMAA_Common_Measurement_Distance_Precise_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Distance_Precise_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Distance_Precise_g_tc;
}

#define TSeq UMAA_Common_Measurement_Distance_PreciseSeq
#define T UMAA_Common_Measurement_Distance_Precise
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_Precise_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_Precise_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Distance_PreciseSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Distance_PreciseSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Distance_Precise_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Distance_Precise_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Distance_Precise_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Distance_Precise_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Distance_Precise_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Distance_Precise);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Distance_Precise_get_member_value_pointer;

    UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Distance_Precise_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Distance_Precise_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Distance_Precise_g_typePlugin = 
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
        UMAA_Common_Measurement_Distance_Precise_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Distance_Precise_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Distance_Precise_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Distance_Precise_initialize(
    UMAA_Common_Measurement_Distance_Precise* sample)
{
    return UMAA_Common_Measurement_Distance_Precise_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Distance_Precise_initialize_w_params(
    UMAA_Common_Measurement_Distance_Precise *sample,
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
RTIBool UMAA_Common_Measurement_Distance_Precise_initialize_ex(
    UMAA_Common_Measurement_Distance_Precise *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Distance_Precise_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Distance_Precise_finalize_w_return(
    UMAA_Common_Measurement_Distance_Precise* sample)
{
    UMAA_Common_Measurement_Distance_Precise_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Distance_Precise_finalize(
    UMAA_Common_Measurement_Distance_Precise* sample)
{  
    UMAA_Common_Measurement_Distance_Precise_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Distance_Precise_finalize_ex(
    UMAA_Common_Measurement_Distance_Precise *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Distance_Precise_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Distance_Precise_finalize_w_params(
    UMAA_Common_Measurement_Distance_Precise *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Distance_Precise_finalize_optional_members(
    UMAA_Common_Measurement_Distance_Precise* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Distance_Precise_copy(
    UMAA_Common_Measurement_Distance_Precise* dst,
    const UMAA_Common_Measurement_Distance_Precise* src)
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
* Configure and implement 'UMAA_Common_Measurement_Distance_Precise' sequence class.
*/
#define T UMAA_Common_Measurement_Distance_Precise
#define TSeq UMAA_Common_Measurement_Distance_PreciseSeq

#define T_initialize_w_params UMAA_Common_Measurement_Distance_Precise_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Distance_Precise_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Distance_Precise_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Duration_Hours_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Duration_Hours_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Duration_Hours", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Duration_Hours */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Duration_Hours_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Duration_Hours_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._annotations._maxValue._u.double_value = 10505ULL;

    UMAA_Common_Measurement_Duration_Hours_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Duration_Hours_get_sample_access_info();
    UMAA_Common_Measurement_Duration_Hours_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Duration_Hours_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Duration_Hours_g_tc;
}

#define TSeq UMAA_Common_Measurement_Duration_HoursSeq
#define T UMAA_Common_Measurement_Duration_Hours
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Hours_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Duration_Hours_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Duration_HoursSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Duration_HoursSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Duration_Hours_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Hours_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Duration_Hours_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Duration_Hours_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Duration_Hours_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Duration_Hours);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Duration_Hours_get_member_value_pointer;

    UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Duration_Hours_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Duration_Hours_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Duration_Hours_g_typePlugin = 
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
        UMAA_Common_Measurement_Duration_Hours_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Duration_Hours_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Duration_Hours_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Duration_Hours_initialize(
    UMAA_Common_Measurement_Duration_Hours* sample)
{
    return UMAA_Common_Measurement_Duration_Hours_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Duration_Hours_initialize_w_params(
    UMAA_Common_Measurement_Duration_Hours *sample,
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
RTIBool UMAA_Common_Measurement_Duration_Hours_initialize_ex(
    UMAA_Common_Measurement_Duration_Hours *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Duration_Hours_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Duration_Hours_finalize_w_return(
    UMAA_Common_Measurement_Duration_Hours* sample)
{
    UMAA_Common_Measurement_Duration_Hours_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Duration_Hours_finalize(
    UMAA_Common_Measurement_Duration_Hours* sample)
{  
    UMAA_Common_Measurement_Duration_Hours_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Duration_Hours_finalize_ex(
    UMAA_Common_Measurement_Duration_Hours *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Duration_Hours_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Duration_Hours_finalize_w_params(
    UMAA_Common_Measurement_Duration_Hours *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Duration_Hours_finalize_optional_members(
    UMAA_Common_Measurement_Duration_Hours* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Duration_Hours_copy(
    UMAA_Common_Measurement_Duration_Hours* dst,
    const UMAA_Common_Measurement_Duration_Hours* src)
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
* Configure and implement 'UMAA_Common_Measurement_Duration_Hours' sequence class.
*/
#define T UMAA_Common_Measurement_Duration_Hours
#define TSeq UMAA_Common_Measurement_Duration_HoursSeq

#define T_initialize_w_params UMAA_Common_Measurement_Duration_Hours_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Duration_Hours_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Duration_Hours_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Duration_Seconds_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Duration_Seconds_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Duration_Seconds", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Duration_Seconds */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Duration_Seconds_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._annotations._maxValue._u.double_value = 37817280ULL;

    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Duration_Seconds_get_sample_access_info();
    UMAA_Common_Measurement_Duration_Seconds_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Duration_Seconds_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Duration_Seconds_g_tc;
}

#define TSeq UMAA_Common_Measurement_Duration_SecondsSeq
#define T UMAA_Common_Measurement_Duration_Seconds
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Seconds_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Duration_Seconds_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Duration_SecondsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Duration_SecondsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Duration_Seconds_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Duration_Seconds_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Duration_Seconds_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Duration_Seconds_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Duration_Seconds_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Duration_Seconds);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Duration_Seconds_get_member_value_pointer;

    UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Duration_Seconds_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Duration_Seconds_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Duration_Seconds_g_typePlugin = 
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
        UMAA_Common_Measurement_Duration_Seconds_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Duration_Seconds_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Duration_Seconds_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize(
    UMAA_Common_Measurement_Duration_Seconds* sample)
{
    return UMAA_Common_Measurement_Duration_Seconds_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize_w_params(
    UMAA_Common_Measurement_Duration_Seconds *sample,
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
RTIBool UMAA_Common_Measurement_Duration_Seconds_initialize_ex(
    UMAA_Common_Measurement_Duration_Seconds *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Duration_Seconds_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Duration_Seconds_finalize_w_return(
    UMAA_Common_Measurement_Duration_Seconds* sample)
{
    UMAA_Common_Measurement_Duration_Seconds_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Duration_Seconds_finalize(
    UMAA_Common_Measurement_Duration_Seconds* sample)
{  
    UMAA_Common_Measurement_Duration_Seconds_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Duration_Seconds_finalize_ex(
    UMAA_Common_Measurement_Duration_Seconds *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Duration_Seconds_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Duration_Seconds_finalize_w_params(
    UMAA_Common_Measurement_Duration_Seconds *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Duration_Seconds_finalize_optional_members(
    UMAA_Common_Measurement_Duration_Seconds* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Duration_Seconds_copy(
    UMAA_Common_Measurement_Duration_Seconds* dst,
    const UMAA_Common_Measurement_Duration_Seconds* src)
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
* Configure and implement 'UMAA_Common_Measurement_Duration_Seconds' sequence class.
*/
#define T UMAA_Common_Measurement_Duration_Seconds
#define TSeq UMAA_Common_Measurement_Duration_SecondsSeq

#define T_initialize_w_params UMAA_Common_Measurement_Duration_Seconds_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Duration_Seconds_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Duration_Seconds_copy

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
DDS_TypeCode * UMAA_Common_Measurement_ElectricalPower_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_ElectricalPower_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::ElectricalPower", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_ElectricalPower */

    if (is_initialized) {
        return &UMAA_Common_Measurement_ElectricalPower_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_ElectricalPower_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

    UMAA_Common_Measurement_ElectricalPower_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_ElectricalPower_get_sample_access_info();
    UMAA_Common_Measurement_ElectricalPower_g_tc._data._typePlugin =
    UMAA_Common_Measurement_ElectricalPower_get_type_plugin_info();    

    return &UMAA_Common_Measurement_ElectricalPower_g_tc;
}

#define TSeq UMAA_Common_Measurement_ElectricalPowerSeq
#define T UMAA_Common_Measurement_ElectricalPower
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElectricalPower_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_ElectricalPower_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_ElectricalPowerSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_ElectricalPowerSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_ElectricalPower_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElectricalPower_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_ElectricalPower_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_ElectricalPower_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_ElectricalPower_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_ElectricalPower);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_ElectricalPower_get_member_value_pointer;

    UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_ElectricalPower_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_ElectricalPower_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_ElectricalPower_g_typePlugin = 
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
        UMAA_Common_Measurement_ElectricalPower_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_ElectricalPower_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_ElectricalPower_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_ElectricalPower_initialize(
    UMAA_Common_Measurement_ElectricalPower* sample)
{
    return UMAA_Common_Measurement_ElectricalPower_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_ElectricalPower_initialize_w_params(
    UMAA_Common_Measurement_ElectricalPower *sample,
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
RTIBool UMAA_Common_Measurement_ElectricalPower_initialize_ex(
    UMAA_Common_Measurement_ElectricalPower *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_ElectricalPower_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_ElectricalPower_finalize_w_return(
    UMAA_Common_Measurement_ElectricalPower* sample)
{
    UMAA_Common_Measurement_ElectricalPower_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_ElectricalPower_finalize(
    UMAA_Common_Measurement_ElectricalPower* sample)
{  
    UMAA_Common_Measurement_ElectricalPower_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_ElectricalPower_finalize_ex(
    UMAA_Common_Measurement_ElectricalPower *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_ElectricalPower_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_ElectricalPower_finalize_w_params(
    UMAA_Common_Measurement_ElectricalPower *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_ElectricalPower_finalize_optional_members(
    UMAA_Common_Measurement_ElectricalPower* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_ElectricalPower_copy(
    UMAA_Common_Measurement_ElectricalPower* dst,
    const UMAA_Common_Measurement_ElectricalPower* src)
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
* Configure and implement 'UMAA_Common_Measurement_ElectricalPower' sequence class.
*/
#define T UMAA_Common_Measurement_ElectricalPower
#define TSeq UMAA_Common_Measurement_ElectricalPowerSeq

#define T_initialize_w_params UMAA_Common_Measurement_ElectricalPower_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_ElectricalPower_finalize_w_params
#define T_copy       UMAA_Common_Measurement_ElectricalPower_copy

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
DDS_TypeCode * UMAA_Common_Measurement_EngineSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_EngineSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::EngineSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_EngineSpeed */

    if (is_initialized) {
        return &UMAA_Common_Measurement_EngineSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_EngineSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._minValue._u.double_value = -100000LL;
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

    UMAA_Common_Measurement_EngineSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_EngineSpeed_get_sample_access_info();
    UMAA_Common_Measurement_EngineSpeed_g_tc._data._typePlugin =
    UMAA_Common_Measurement_EngineSpeed_get_type_plugin_info();    

    return &UMAA_Common_Measurement_EngineSpeed_g_tc;
}

#define TSeq UMAA_Common_Measurement_EngineSpeedSeq
#define T UMAA_Common_Measurement_EngineSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_EngineSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_EngineSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_EngineSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_EngineSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_EngineSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_EngineSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_EngineSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_EngineSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_EngineSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_EngineSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_EngineSpeed_get_member_value_pointer;

    UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_EngineSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_EngineSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_EngineSpeed_g_typePlugin = 
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
        UMAA_Common_Measurement_EngineSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_EngineSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_EngineSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_EngineSpeed_initialize(
    UMAA_Common_Measurement_EngineSpeed* sample)
{
    return UMAA_Common_Measurement_EngineSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_EngineSpeed_initialize_w_params(
    UMAA_Common_Measurement_EngineSpeed *sample,
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
RTIBool UMAA_Common_Measurement_EngineSpeed_initialize_ex(
    UMAA_Common_Measurement_EngineSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_EngineSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_EngineSpeed_finalize_w_return(
    UMAA_Common_Measurement_EngineSpeed* sample)
{
    UMAA_Common_Measurement_EngineSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_EngineSpeed_finalize(
    UMAA_Common_Measurement_EngineSpeed* sample)
{  
    UMAA_Common_Measurement_EngineSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_EngineSpeed_finalize_ex(
    UMAA_Common_Measurement_EngineSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_EngineSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_EngineSpeed_finalize_w_params(
    UMAA_Common_Measurement_EngineSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_EngineSpeed_finalize_optional_members(
    UMAA_Common_Measurement_EngineSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_EngineSpeed_copy(
    UMAA_Common_Measurement_EngineSpeed* dst,
    const UMAA_Common_Measurement_EngineSpeed* src)
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
* Configure and implement 'UMAA_Common_Measurement_EngineSpeed' sequence class.
*/
#define T UMAA_Common_Measurement_EngineSpeed
#define TSeq UMAA_Common_Measurement_EngineSpeedSeq

#define T_initialize_w_params UMAA_Common_Measurement_EngineSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_EngineSpeed_finalize_w_params
#define T_copy       UMAA_Common_Measurement_EngineSpeed_copy

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
DDS_TypeCode * UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::FieldOfView_LineOfSightFocalPlane", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane */

    if (is_initialized) {
        return &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_sample_access_info();
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc._data._typePlugin =
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_type_plugin_info();    

    return &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_tc;
}

#define TSeq UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlaneSeq
#define T UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlaneSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlaneSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_member_value_pointer;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_typePlugin = 
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
        UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* sample)
{
    return UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_w_params(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
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
RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_ex(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_return(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* sample)
{
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* sample)
{  
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_optional_members(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_copy(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* dst,
    const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane* src)
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
* Configure and implement 'UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane' sequence class.
*/
#define T UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane
#define TSeq UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlaneSeq

#define T_initialize_w_params UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params
#define T_copy       UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_copy

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
DDS_TypeCode * UMAA_Common_Measurement_FocusValue_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_FocusValue_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::FocusValue", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_FocusValue */

    if (is_initialized) {
        return &UMAA_Common_Measurement_FocusValue_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_FocusValue_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_FocusValue_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_FocusValue_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_FocusValue_get_sample_access_info();
    UMAA_Common_Measurement_FocusValue_g_tc._data._typePlugin =
    UMAA_Common_Measurement_FocusValue_get_type_plugin_info();    

    return &UMAA_Common_Measurement_FocusValue_g_tc;
}

#define TSeq UMAA_Common_Measurement_FocusValueSeq
#define T UMAA_Common_Measurement_FocusValue
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FocusValue_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FocusValue_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_FocusValueSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_FocusValueSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_FocusValue_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_FocusValue_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_FocusValue_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_FocusValue_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_FocusValue_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_FocusValue);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_FocusValue_get_member_value_pointer;

    UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_FocusValue_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_FocusValue_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_FocusValue_g_typePlugin = 
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
        UMAA_Common_Measurement_FocusValue_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_FocusValue_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_FocusValue_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_FocusValue_initialize(
    UMAA_Common_Measurement_FocusValue* sample)
{
    return UMAA_Common_Measurement_FocusValue_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_FocusValue_initialize_w_params(
    UMAA_Common_Measurement_FocusValue *sample,
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
RTIBool UMAA_Common_Measurement_FocusValue_initialize_ex(
    UMAA_Common_Measurement_FocusValue *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_FocusValue_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_FocusValue_finalize_w_return(
    UMAA_Common_Measurement_FocusValue* sample)
{
    UMAA_Common_Measurement_FocusValue_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_FocusValue_finalize(
    UMAA_Common_Measurement_FocusValue* sample)
{  
    UMAA_Common_Measurement_FocusValue_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_FocusValue_finalize_ex(
    UMAA_Common_Measurement_FocusValue *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_FocusValue_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_FocusValue_finalize_w_params(
    UMAA_Common_Measurement_FocusValue *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_FocusValue_finalize_optional_members(
    UMAA_Common_Measurement_FocusValue* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_FocusValue_copy(
    UMAA_Common_Measurement_FocusValue* dst,
    const UMAA_Common_Measurement_FocusValue* src)
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
* Configure and implement 'UMAA_Common_Measurement_FocusValue' sequence class.
*/
#define T UMAA_Common_Measurement_FocusValue
#define TSeq UMAA_Common_Measurement_FocusValueSeq

#define T_initialize_w_params UMAA_Common_Measurement_FocusValue_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_FocusValue_finalize_w_params
#define T_copy       UMAA_Common_Measurement_FocusValue_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Force_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Force_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Force", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Force */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Force_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Force_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Force_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Force_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Force_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Force_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Force_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Force_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Force_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

    UMAA_Common_Measurement_Force_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Force_get_sample_access_info();
    UMAA_Common_Measurement_Force_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Force_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Force_g_tc;
}

#define TSeq UMAA_Common_Measurement_ForceSeq
#define T UMAA_Common_Measurement_Force
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Force_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Force_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_ForceSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_ForceSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Force_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Force_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Force_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Force_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Force_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Force_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Force_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Force_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Force);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Force_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Force_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Force_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Force_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Force_get_member_value_pointer;

    UMAA_Common_Measurement_Force_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Force_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Force_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Force_g_typePlugin = 
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
        UMAA_Common_Measurement_Force_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Force_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Force_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Force_initialize(
    UMAA_Common_Measurement_Force* sample)
{
    return UMAA_Common_Measurement_Force_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Force_initialize_w_params(
    UMAA_Common_Measurement_Force *sample,
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
RTIBool UMAA_Common_Measurement_Force_initialize_ex(
    UMAA_Common_Measurement_Force *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Force_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Force_finalize_w_return(
    UMAA_Common_Measurement_Force* sample)
{
    UMAA_Common_Measurement_Force_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Force_finalize(
    UMAA_Common_Measurement_Force* sample)
{  
    UMAA_Common_Measurement_Force_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Force_finalize_ex(
    UMAA_Common_Measurement_Force *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Force_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Force_finalize_w_params(
    UMAA_Common_Measurement_Force *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Force_finalize_optional_members(
    UMAA_Common_Measurement_Force* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Force_copy(
    UMAA_Common_Measurement_Force* dst,
    const UMAA_Common_Measurement_Force* src)
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
* Configure and implement 'UMAA_Common_Measurement_Force' sequence class.
*/
#define T UMAA_Common_Measurement_Force
#define TSeq UMAA_Common_Measurement_ForceSeq

#define T_initialize_w_params UMAA_Common_Measurement_Force_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Force_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Force_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Frequency_Hertz_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Frequency_Hertz_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Frequency_Hertz", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Frequency_Hertz */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Frequency_Hertz_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._minValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._annotations._maxValue._u.double_value = 10000000000ULL;

    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Frequency_Hertz_get_sample_access_info();
    UMAA_Common_Measurement_Frequency_Hertz_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Frequency_Hertz_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Frequency_Hertz_g_tc;
}

#define TSeq UMAA_Common_Measurement_Frequency_HertzSeq
#define T UMAA_Common_Measurement_Frequency_Hertz
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Frequency_Hertz_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Frequency_Hertz_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Frequency_HertzSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Frequency_HertzSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Frequency_Hertz_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Frequency_Hertz_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Frequency_Hertz_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Frequency_Hertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Frequency_Hertz_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Frequency_Hertz);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Frequency_Hertz_get_member_value_pointer;

    UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Frequency_Hertz_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Frequency_Hertz_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Frequency_Hertz_g_typePlugin = 
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
        UMAA_Common_Measurement_Frequency_Hertz_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Frequency_Hertz_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Frequency_Hertz_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize(
    UMAA_Common_Measurement_Frequency_Hertz* sample)
{
    return UMAA_Common_Measurement_Frequency_Hertz_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize_w_params(
    UMAA_Common_Measurement_Frequency_Hertz *sample,
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
RTIBool UMAA_Common_Measurement_Frequency_Hertz_initialize_ex(
    UMAA_Common_Measurement_Frequency_Hertz *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Frequency_Hertz_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Frequency_Hertz_finalize_w_return(
    UMAA_Common_Measurement_Frequency_Hertz* sample)
{
    UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Frequency_Hertz_finalize(
    UMAA_Common_Measurement_Frequency_Hertz* sample)
{  
    UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(
    UMAA_Common_Measurement_Frequency_Hertz *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params(
    UMAA_Common_Measurement_Frequency_Hertz *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Frequency_Hertz_finalize_optional_members(
    UMAA_Common_Measurement_Frequency_Hertz* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Frequency_Hertz_copy(
    UMAA_Common_Measurement_Frequency_Hertz* dst,
    const UMAA_Common_Measurement_Frequency_Hertz* src)
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
* Configure and implement 'UMAA_Common_Measurement_Frequency_Hertz' sequence class.
*/
#define T UMAA_Common_Measurement_Frequency_Hertz
#define TSeq UMAA_Common_Measurement_Frequency_HertzSeq

#define T_initialize_w_params UMAA_Common_Measurement_Frequency_Hertz_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Frequency_Hertz_copy

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
DDS_TypeCode * UMAA_Common_Measurement_GroundSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_GroundSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::GroundSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_GroundSpeed */

    if (is_initialized) {
        return &UMAA_Common_Measurement_GroundSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_GroundSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._annotations._maxValue._u.double_value = 200ULL;

    UMAA_Common_Measurement_GroundSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_GroundSpeed_get_sample_access_info();
    UMAA_Common_Measurement_GroundSpeed_g_tc._data._typePlugin =
    UMAA_Common_Measurement_GroundSpeed_get_type_plugin_info();    

    return &UMAA_Common_Measurement_GroundSpeed_g_tc;
}

#define TSeq UMAA_Common_Measurement_GroundSpeedSeq
#define T UMAA_Common_Measurement_GroundSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GroundSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_GroundSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_GroundSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_GroundSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_GroundSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_GroundSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_GroundSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_GroundSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_GroundSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_GroundSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_GroundSpeed_get_member_value_pointer;

    UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_GroundSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_GroundSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_GroundSpeed_g_typePlugin = 
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
        UMAA_Common_Measurement_GroundSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_GroundSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_GroundSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_GroundSpeed_initialize(
    UMAA_Common_Measurement_GroundSpeed* sample)
{
    return UMAA_Common_Measurement_GroundSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_GroundSpeed_initialize_w_params(
    UMAA_Common_Measurement_GroundSpeed *sample,
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
RTIBool UMAA_Common_Measurement_GroundSpeed_initialize_ex(
    UMAA_Common_Measurement_GroundSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_GroundSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_GroundSpeed_finalize_w_return(
    UMAA_Common_Measurement_GroundSpeed* sample)
{
    UMAA_Common_Measurement_GroundSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_GroundSpeed_finalize(
    UMAA_Common_Measurement_GroundSpeed* sample)
{  
    UMAA_Common_Measurement_GroundSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_GroundSpeed_finalize_ex(
    UMAA_Common_Measurement_GroundSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_GroundSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_GroundSpeed_finalize_w_params(
    UMAA_Common_Measurement_GroundSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_GroundSpeed_finalize_optional_members(
    UMAA_Common_Measurement_GroundSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_GroundSpeed_copy(
    UMAA_Common_Measurement_GroundSpeed* dst,
    const UMAA_Common_Measurement_GroundSpeed* src)
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
* Configure and implement 'UMAA_Common_Measurement_GroundSpeed' sequence class.
*/
#define T UMAA_Common_Measurement_GroundSpeed
#define TSeq UMAA_Common_Measurement_GroundSpeedSeq

#define T_initialize_w_params UMAA_Common_Measurement_GroundSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_GroundSpeed_finalize_w_params
#define T_copy       UMAA_Common_Measurement_GroundSpeed_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Heading_TrueNorth_Angle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Heading_TrueNorth_Angle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_sample_access_info();
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_tc;
}

#define TSeq UMAA_Common_Measurement_Heading_TrueNorth_AngleSeq
#define T UMAA_Common_Measurement_Heading_TrueNorth_Angle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Heading_TrueNorth_AngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Heading_TrueNorth_AngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Heading_TrueNorth_Angle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_member_value_pointer;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_typePlugin = 
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
        UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Heading_TrueNorth_Angle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* sample)
{
    return UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_w_params(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
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
RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_ex(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_return(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* sample)
{
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* sample)
{  
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Heading_TrueNorth_Angle_copy(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle* dst,
    const UMAA_Common_Measurement_Heading_TrueNorth_Angle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Heading_TrueNorth_Angle' sequence class.
*/
#define T UMAA_Common_Measurement_Heading_TrueNorth_Angle
#define TSeq UMAA_Common_Measurement_Heading_TrueNorth_AngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Heading_TrueNorth_Angle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_IndicatedAirspeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_IndicatedAirspeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::IndicatedAirspeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_IndicatedAirspeed */

    if (is_initialized) {
        return &UMAA_Common_Measurement_IndicatedAirspeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_IndicatedAirspeed_get_sample_access_info();
    UMAA_Common_Measurement_IndicatedAirspeed_g_tc._data._typePlugin =
    UMAA_Common_Measurement_IndicatedAirspeed_get_type_plugin_info();    

    return &UMAA_Common_Measurement_IndicatedAirspeed_g_tc;
}

#define TSeq UMAA_Common_Measurement_IndicatedAirspeedSeq
#define T UMAA_Common_Measurement_IndicatedAirspeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IndicatedAirspeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_IndicatedAirspeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_IndicatedAirspeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_IndicatedAirspeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_IndicatedAirspeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IndicatedAirspeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_IndicatedAirspeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_IndicatedAirspeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_IndicatedAirspeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_IndicatedAirspeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_IndicatedAirspeed_get_member_value_pointer;

    UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_IndicatedAirspeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_IndicatedAirspeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_IndicatedAirspeed_g_typePlugin = 
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
        UMAA_Common_Measurement_IndicatedAirspeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_IndicatedAirspeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize(
    UMAA_Common_Measurement_IndicatedAirspeed* sample)
{
    return UMAA_Common_Measurement_IndicatedAirspeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize_w_params(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,
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
RTIBool UMAA_Common_Measurement_IndicatedAirspeed_initialize_ex(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_IndicatedAirspeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_return(
    UMAA_Common_Measurement_IndicatedAirspeed* sample)
{
    UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_IndicatedAirspeed_finalize(
    UMAA_Common_Measurement_IndicatedAirspeed* sample)
{  
    UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_IndicatedAirspeed_finalize_optional_members(
    UMAA_Common_Measurement_IndicatedAirspeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_IndicatedAirspeed_copy(
    UMAA_Common_Measurement_IndicatedAirspeed* dst,
    const UMAA_Common_Measurement_IndicatedAirspeed* src)
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
* Configure and implement 'UMAA_Common_Measurement_IndicatedAirspeed' sequence class.
*/
#define T UMAA_Common_Measurement_IndicatedAirspeed
#define TSeq UMAA_Common_Measurement_IndicatedAirspeedSeq

#define T_initialize_w_params UMAA_Common_Measurement_IndicatedAirspeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params
#define T_copy       UMAA_Common_Measurement_IndicatedAirspeed_copy

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
DDS_TypeCode * UMAA_Common_Measurement_IPPort_Counting_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_IPPort_Counting_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::IPPort_Counting", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_IPPort_Counting */

    if (is_initialized) {
        return &UMAA_Common_Measurement_IPPort_Counting_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_IPPort_Counting_get_sample_access_info();
    UMAA_Common_Measurement_IPPort_Counting_g_tc._data._typePlugin =
    UMAA_Common_Measurement_IPPort_Counting_get_type_plugin_info();    

    return &UMAA_Common_Measurement_IPPort_Counting_g_tc;
}

#define TSeq UMAA_Common_Measurement_IPPort_CountingSeq
#define T UMAA_Common_Measurement_IPPort_Counting
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IPPort_Counting_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_IPPort_Counting_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_IPPort_CountingSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_IPPort_CountingSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_IPPort_Counting_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_IPPort_Counting_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_IPPort_Counting_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_IPPort_Counting_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_IPPort_Counting_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_IPPort_Counting);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_IPPort_Counting_get_member_value_pointer;

    UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_IPPort_Counting_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_IPPort_Counting_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_IPPort_Counting_g_typePlugin = 
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
        UMAA_Common_Measurement_IPPort_Counting_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_IPPort_Counting_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_IPPort_Counting_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize(
    UMAA_Common_Measurement_IPPort_Counting* sample)
{
    return UMAA_Common_Measurement_IPPort_Counting_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize_w_params(
    UMAA_Common_Measurement_IPPort_Counting *sample,
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
RTIBool UMAA_Common_Measurement_IPPort_Counting_initialize_ex(
    UMAA_Common_Measurement_IPPort_Counting *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_IPPort_Counting_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_IPPort_Counting_finalize_w_return(
    UMAA_Common_Measurement_IPPort_Counting* sample)
{
    UMAA_Common_Measurement_IPPort_Counting_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_IPPort_Counting_finalize(
    UMAA_Common_Measurement_IPPort_Counting* sample)
{  
    UMAA_Common_Measurement_IPPort_Counting_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_IPPort_Counting_finalize_ex(
    UMAA_Common_Measurement_IPPort_Counting *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_IPPort_Counting_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_IPPort_Counting_finalize_w_params(
    UMAA_Common_Measurement_IPPort_Counting *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_IPPort_Counting_finalize_optional_members(
    UMAA_Common_Measurement_IPPort_Counting* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_IPPort_Counting_copy(
    UMAA_Common_Measurement_IPPort_Counting* dst,
    const UMAA_Common_Measurement_IPPort_Counting* src)
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
* Configure and implement 'UMAA_Common_Measurement_IPPort_Counting' sequence class.
*/
#define T UMAA_Common_Measurement_IPPort_Counting
#define TSeq UMAA_Common_Measurement_IPPort_CountingSeq

#define T_initialize_w_params UMAA_Common_Measurement_IPPort_Counting_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_IPPort_Counting_finalize_w_params
#define T_copy       UMAA_Common_Measurement_IPPort_Counting_copy

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
DDS_TypeCode * UMAA_Common_Measurement_MagneticVariation_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_MagneticVariation_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::MagneticVariation", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_MagneticVariation */

    if (is_initialized) {
        return &UMAA_Common_Measurement_MagneticVariation_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_MagneticVariation_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_MagneticVariation_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_MagneticVariation_get_sample_access_info();
    UMAA_Common_Measurement_MagneticVariation_g_tc._data._typePlugin =
    UMAA_Common_Measurement_MagneticVariation_get_type_plugin_info();    

    return &UMAA_Common_Measurement_MagneticVariation_g_tc;
}

#define TSeq UMAA_Common_Measurement_MagneticVariationSeq
#define T UMAA_Common_Measurement_MagneticVariation
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MagneticVariation_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_MagneticVariation_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_MagneticVariationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_MagneticVariationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_MagneticVariation_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_MagneticVariation_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_MagneticVariation_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_MagneticVariation_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_MagneticVariation_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_MagneticVariation);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_MagneticVariation_get_member_value_pointer;

    UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_MagneticVariation_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_MagneticVariation_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_MagneticVariation_g_typePlugin = 
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
        UMAA_Common_Measurement_MagneticVariation_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_MagneticVariation_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_MagneticVariation_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_MagneticVariation_initialize(
    UMAA_Common_Measurement_MagneticVariation* sample)
{
    return UMAA_Common_Measurement_MagneticVariation_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_MagneticVariation_initialize_w_params(
    UMAA_Common_Measurement_MagneticVariation *sample,
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
RTIBool UMAA_Common_Measurement_MagneticVariation_initialize_ex(
    UMAA_Common_Measurement_MagneticVariation *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_MagneticVariation_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_MagneticVariation_finalize_w_return(
    UMAA_Common_Measurement_MagneticVariation* sample)
{
    UMAA_Common_Measurement_MagneticVariation_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_MagneticVariation_finalize(
    UMAA_Common_Measurement_MagneticVariation* sample)
{  
    UMAA_Common_Measurement_MagneticVariation_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_MagneticVariation_finalize_ex(
    UMAA_Common_Measurement_MagneticVariation *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_MagneticVariation_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_MagneticVariation_finalize_w_params(
    UMAA_Common_Measurement_MagneticVariation *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_MagneticVariation_finalize_optional_members(
    UMAA_Common_Measurement_MagneticVariation* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_MagneticVariation_copy(
    UMAA_Common_Measurement_MagneticVariation* dst,
    const UMAA_Common_Measurement_MagneticVariation* src)
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
* Configure and implement 'UMAA_Common_Measurement_MagneticVariation' sequence class.
*/
#define T UMAA_Common_Measurement_MagneticVariation
#define TSeq UMAA_Common_Measurement_MagneticVariationSeq

#define T_initialize_w_params UMAA_Common_Measurement_MagneticVariation_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_MagneticVariation_finalize_w_params
#define T_copy       UMAA_Common_Measurement_MagneticVariation_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Mass_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Mass_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Mass", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Mass */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Mass_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Mass_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Mass_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Mass_g_tc._data._annotations._maxValue._u.double_value = 100000000ULL;

    UMAA_Common_Measurement_Mass_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Mass_get_sample_access_info();
    UMAA_Common_Measurement_Mass_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Mass_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Mass_g_tc;
}

#define TSeq UMAA_Common_Measurement_MassSeq
#define T UMAA_Common_Measurement_Mass
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Mass_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_MassSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_MassSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Mass_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Mass_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Mass_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Mass_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Mass_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Mass_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Mass_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Mass_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Mass);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Mass_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Mass_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Mass_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Mass_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Mass_get_member_value_pointer;

    UMAA_Common_Measurement_Mass_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Mass_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Mass_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Mass_g_typePlugin = 
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
        UMAA_Common_Measurement_Mass_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Mass_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Mass_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Mass_initialize(
    UMAA_Common_Measurement_Mass* sample)
{
    return UMAA_Common_Measurement_Mass_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Mass_initialize_w_params(
    UMAA_Common_Measurement_Mass *sample,
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
RTIBool UMAA_Common_Measurement_Mass_initialize_ex(
    UMAA_Common_Measurement_Mass *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Mass_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Mass_finalize_w_return(
    UMAA_Common_Measurement_Mass* sample)
{
    UMAA_Common_Measurement_Mass_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Mass_finalize(
    UMAA_Common_Measurement_Mass* sample)
{  
    UMAA_Common_Measurement_Mass_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Mass_finalize_ex(
    UMAA_Common_Measurement_Mass *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Mass_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Mass_finalize_w_params(
    UMAA_Common_Measurement_Mass *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Mass_finalize_optional_members(
    UMAA_Common_Measurement_Mass* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Mass_copy(
    UMAA_Common_Measurement_Mass* dst,
    const UMAA_Common_Measurement_Mass* src)
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
* Configure and implement 'UMAA_Common_Measurement_Mass' sequence class.
*/
#define T UMAA_Common_Measurement_Mass
#define TSeq UMAA_Common_Measurement_MassSeq

#define T_initialize_w_params UMAA_Common_Measurement_Mass_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Mass_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Mass_copy

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
DDS_TypeCode * UMAA_Common_Measurement_NumericGUID_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_NumericGUID_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,16L, NULL,NULL);

    static DDS_TypeCode UMAA_Common_Measurement_NumericGUID_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::NumericGUID", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_NumericGUID */

    if (is_initialized) {
        return &UMAA_Common_Measurement_NumericGUID_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_NumericGUID_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_NumericGUID_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet_w_new;
    UMAA_Common_Measurement_NumericGUID_g_tc._data._typeCode =  (RTICdrTypeCode *)& UMAA_Common_Measurement_NumericGUID_g_tc_array;

    /* Initialize the values for member annotations. */

    UMAA_Common_Measurement_NumericGUID_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_NumericGUID_get_sample_access_info();
    UMAA_Common_Measurement_NumericGUID_g_tc._data._typePlugin =
    UMAA_Common_Measurement_NumericGUID_get_type_plugin_info();    

    return &UMAA_Common_Measurement_NumericGUID_g_tc;
}

#define ALIAS_OF_ARRAY

#define TSeq UMAA_Common_Measurement_NumericGUIDSeq
#define T UMAA_Common_Measurement_NumericGUID
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

#undef ALIAS_OF_ARRAY

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_NumericGUID_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_NumericGUIDSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_NumericGUIDSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_NumericGUID_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_NumericGUID_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_NumericGUID_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_NumericGUID_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_NumericGUID_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_NumericGUID);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_NumericGUID_get_member_value_pointer;

    UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_NumericGUID_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_NumericGUID_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_NumericGUID_g_typePlugin = 
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
        UMAA_Common_Measurement_NumericGUID_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_NumericGUID_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_NumericGUID_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_NumericGUID_initialize(
    UMAA_Common_Measurement_NumericGUID* sample)
{
    return UMAA_Common_Measurement_NumericGUID_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_NumericGUID_initialize_w_params(
    UMAA_Common_Measurement_NumericGUID *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    RTICdrType_initArrayUnsafe((*sample),
    (16L),
    RTI_CDR_OCTET_SIZE);
    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_NumericGUID_initialize_ex(
    UMAA_Common_Measurement_NumericGUID *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_NumericGUID_finalize_w_return(
    UMAA_Common_Measurement_NumericGUID* sample)
{
    UMAA_Common_Measurement_NumericGUID_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_NumericGUID_finalize(
    UMAA_Common_Measurement_NumericGUID* sample)
{  
    UMAA_Common_Measurement_NumericGUID_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_NumericGUID_finalize_ex(
    UMAA_Common_Measurement_NumericGUID *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_NumericGUID_finalize_w_params(
    UMAA_Common_Measurement_NumericGUID *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_NumericGUID_finalize_optional_members(
    UMAA_Common_Measurement_NumericGUID* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_NumericGUID_copy(
    UMAA_Common_Measurement_NumericGUID* dst,
    const UMAA_Common_Measurement_NumericGUID* src)
{
    try {

        if (!RTICdrType_copyArray(
            (*dst),
            (*src),
            (16L),
            RTI_CDR_OCTET_SIZE)) {
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
* Configure and implement 'UMAA_Common_Measurement_NumericGUID' sequence class.
*/
#define T UMAA_Common_Measurement_NumericGUID
#define TSeq UMAA_Common_Measurement_NumericGUIDSeq

#define T_initialize_w_params UMAA_Common_Measurement_NumericGUID_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_NumericGUID_finalize_w_params
#define T_copy       UMAA_Common_Measurement_NumericGUID_copy

#define T_no_get  
#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_no_get  

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_Order_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Order_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Order", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Order */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Order_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Order_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Order_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Order_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Order_g_tc._data._annotations._defaultValue._u.long_value = 0;
    UMAA_Common_Measurement_Order_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Order_g_tc._data._annotations._minValue._u.long_value = 0L;
    UMAA_Common_Measurement_Order_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_Common_Measurement_Order_g_tc._data._annotations._maxValue._u.long_value = 2147483647L;

    UMAA_Common_Measurement_Order_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Order_get_sample_access_info();
    UMAA_Common_Measurement_Order_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Order_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Order_g_tc;
}

#define TSeq UMAA_Common_Measurement_OrderSeq
#define T UMAA_Common_Measurement_Order
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Order_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Order_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_OrderSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_OrderSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Order_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Order_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Order_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Order_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Order_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Order_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Order_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Order_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Order);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Order_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Order_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Order_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Order_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Order_get_member_value_pointer;

    UMAA_Common_Measurement_Order_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Order_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Order_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Order_g_typePlugin = 
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
        UMAA_Common_Measurement_Order_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Order_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Order_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Order_initialize(
    UMAA_Common_Measurement_Order* sample)
{
    return UMAA_Common_Measurement_Order_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Order_initialize_w_params(
    UMAA_Common_Measurement_Order *sample,
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
RTIBool UMAA_Common_Measurement_Order_initialize_ex(
    UMAA_Common_Measurement_Order *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Order_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Order_finalize_w_return(
    UMAA_Common_Measurement_Order* sample)
{
    UMAA_Common_Measurement_Order_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Order_finalize(
    UMAA_Common_Measurement_Order* sample)
{  
    UMAA_Common_Measurement_Order_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Order_finalize_ex(
    UMAA_Common_Measurement_Order *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Order_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Order_finalize_w_params(
    UMAA_Common_Measurement_Order *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Order_finalize_optional_members(
    UMAA_Common_Measurement_Order* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Order_copy(
    UMAA_Common_Measurement_Order* dst,
    const UMAA_Common_Measurement_Order* src)
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
* Configure and implement 'UMAA_Common_Measurement_Order' sequence class.
*/
#define T UMAA_Common_Measurement_Order
#define TSeq UMAA_Common_Measurement_OrderSeq

#define T_initialize_w_params UMAA_Common_Measurement_Order_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Order_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Order_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Percent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Percent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Percent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Percent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Percent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Percent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Percent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Percent_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Percent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Percent_get_sample_access_info();
    UMAA_Common_Measurement_Percent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Percent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Percent_g_tc;
}

#define TSeq UMAA_Common_Measurement_PercentSeq
#define T UMAA_Common_Measurement_Percent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Percent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Percent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PercentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PercentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Percent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Percent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Percent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Percent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Percent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Percent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Percent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Percent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Percent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Percent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Percent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Percent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Percent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Percent_get_member_value_pointer;

    UMAA_Common_Measurement_Percent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Percent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Percent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Percent_g_typePlugin = 
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
        UMAA_Common_Measurement_Percent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Percent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Percent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Percent_initialize(
    UMAA_Common_Measurement_Percent* sample)
{
    return UMAA_Common_Measurement_Percent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Percent_initialize_w_params(
    UMAA_Common_Measurement_Percent *sample,
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
RTIBool UMAA_Common_Measurement_Percent_initialize_ex(
    UMAA_Common_Measurement_Percent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Percent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Percent_finalize_w_return(
    UMAA_Common_Measurement_Percent* sample)
{
    UMAA_Common_Measurement_Percent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Percent_finalize(
    UMAA_Common_Measurement_Percent* sample)
{  
    UMAA_Common_Measurement_Percent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Percent_finalize_ex(
    UMAA_Common_Measurement_Percent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Percent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Percent_finalize_w_params(
    UMAA_Common_Measurement_Percent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Percent_finalize_optional_members(
    UMAA_Common_Measurement_Percent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Percent_copy(
    UMAA_Common_Measurement_Percent* dst,
    const UMAA_Common_Measurement_Percent* src)
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
* Configure and implement 'UMAA_Common_Measurement_Percent' sequence class.
*/
#define T UMAA_Common_Measurement_Percent
#define TSeq UMAA_Common_Measurement_PercentSeq

#define T_initialize_w_params UMAA_Common_Measurement_Percent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Percent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Percent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Pitch_HalfAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Pitch_HalfAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Pitch_HalfAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Pitch_HalfAngle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Pitch_HalfAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Pitch_HalfAngle_get_sample_access_info();
    UMAA_Common_Measurement_Pitch_HalfAngle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Pitch_HalfAngle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Pitch_HalfAngle_g_tc;
}

#define TSeq UMAA_Common_Measurement_Pitch_HalfAngleSeq
#define T UMAA_Common_Measurement_Pitch_HalfAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pitch_HalfAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pitch_HalfAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Pitch_HalfAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Pitch_HalfAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Pitch_HalfAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pitch_HalfAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Pitch_HalfAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Pitch_HalfAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Pitch_HalfAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Pitch_HalfAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Pitch_HalfAngle_get_member_value_pointer;

    UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pitch_HalfAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Pitch_HalfAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Pitch_HalfAngle_g_typePlugin = 
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
        UMAA_Common_Measurement_Pitch_HalfAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Pitch_HalfAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize(
    UMAA_Common_Measurement_Pitch_HalfAngle* sample)
{
    return UMAA_Common_Measurement_Pitch_HalfAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize_w_params(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,
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
RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_initialize_ex(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Pitch_HalfAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_return(
    UMAA_Common_Measurement_Pitch_HalfAngle* sample)
{
    UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Pitch_HalfAngle_finalize(
    UMAA_Common_Measurement_Pitch_HalfAngle* sample)
{  
    UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Pitch_HalfAngle_finalize_optional_members(
    UMAA_Common_Measurement_Pitch_HalfAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Pitch_HalfAngle_copy(
    UMAA_Common_Measurement_Pitch_HalfAngle* dst,
    const UMAA_Common_Measurement_Pitch_HalfAngle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Pitch_HalfAngle' sequence class.
*/
#define T UMAA_Common_Measurement_Pitch_HalfAngle
#define TSeq UMAA_Common_Measurement_Pitch_HalfAngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Pitch_HalfAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Pitch_HalfAngle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_PitchAcceleration_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_PitchAcceleration_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::PitchAcceleration", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_PitchAcceleration */

    if (is_initialized) {
        return &UMAA_Common_Measurement_PitchAcceleration_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_PitchAcceleration_get_sample_access_info();
    UMAA_Common_Measurement_PitchAcceleration_g_tc._data._typePlugin =
    UMAA_Common_Measurement_PitchAcceleration_get_type_plugin_info();    

    return &UMAA_Common_Measurement_PitchAcceleration_g_tc;
}

#define TSeq UMAA_Common_Measurement_PitchAccelerationSeq
#define T UMAA_Common_Measurement_PitchAcceleration
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchAcceleration_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PitchAcceleration_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PitchAccelerationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PitchAccelerationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_PitchAcceleration_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchAcceleration_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_PitchAcceleration_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_PitchAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_PitchAcceleration_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_PitchAcceleration);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_PitchAcceleration_get_member_value_pointer;

    UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PitchAcceleration_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_PitchAcceleration_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_PitchAcceleration_g_typePlugin = 
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
        UMAA_Common_Measurement_PitchAcceleration_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_PitchAcceleration_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_PitchAcceleration_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize(
    UMAA_Common_Measurement_PitchAcceleration* sample)
{
    return UMAA_Common_Measurement_PitchAcceleration_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize_w_params(
    UMAA_Common_Measurement_PitchAcceleration *sample,
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
RTIBool UMAA_Common_Measurement_PitchAcceleration_initialize_ex(
    UMAA_Common_Measurement_PitchAcceleration *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_PitchAcceleration_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_PitchAcceleration_finalize_w_return(
    UMAA_Common_Measurement_PitchAcceleration* sample)
{
    UMAA_Common_Measurement_PitchAcceleration_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_PitchAcceleration_finalize(
    UMAA_Common_Measurement_PitchAcceleration* sample)
{  
    UMAA_Common_Measurement_PitchAcceleration_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_PitchAcceleration_finalize_ex(
    UMAA_Common_Measurement_PitchAcceleration *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_PitchAcceleration_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_PitchAcceleration_finalize_w_params(
    UMAA_Common_Measurement_PitchAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_PitchAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_PitchAcceleration* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_PitchAcceleration_copy(
    UMAA_Common_Measurement_PitchAcceleration* dst,
    const UMAA_Common_Measurement_PitchAcceleration* src)
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
* Configure and implement 'UMAA_Common_Measurement_PitchAcceleration' sequence class.
*/
#define T UMAA_Common_Measurement_PitchAcceleration
#define TSeq UMAA_Common_Measurement_PitchAccelerationSeq

#define T_initialize_w_params UMAA_Common_Measurement_PitchAcceleration_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_PitchAcceleration_finalize_w_params
#define T_copy       UMAA_Common_Measurement_PitchAcceleration_copy

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
DDS_TypeCode * UMAA_Common_Measurement_PitchRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_PitchRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::PitchRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_PitchRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_PitchRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_PitchRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PitchRate_g_tc._data._annotations._maxValue._u.double_value = 32.767;

    UMAA_Common_Measurement_PitchRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_PitchRate_get_sample_access_info();
    UMAA_Common_Measurement_PitchRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_PitchRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_PitchRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_PitchRateSeq
#define T UMAA_Common_Measurement_PitchRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PitchRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PitchRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PitchRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_PitchRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PitchRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_PitchRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_PitchRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_PitchRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_PitchRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_PitchRate_get_member_value_pointer;

    UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PitchRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_PitchRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_PitchRate_g_typePlugin = 
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
        UMAA_Common_Measurement_PitchRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_PitchRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_PitchRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_PitchRate_initialize(
    UMAA_Common_Measurement_PitchRate* sample)
{
    return UMAA_Common_Measurement_PitchRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_PitchRate_initialize_w_params(
    UMAA_Common_Measurement_PitchRate *sample,
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
RTIBool UMAA_Common_Measurement_PitchRate_initialize_ex(
    UMAA_Common_Measurement_PitchRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_PitchRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_PitchRate_finalize_w_return(
    UMAA_Common_Measurement_PitchRate* sample)
{
    UMAA_Common_Measurement_PitchRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_PitchRate_finalize(
    UMAA_Common_Measurement_PitchRate* sample)
{  
    UMAA_Common_Measurement_PitchRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_PitchRate_finalize_ex(
    UMAA_Common_Measurement_PitchRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_PitchRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_PitchRate_finalize_w_params(
    UMAA_Common_Measurement_PitchRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_PitchRate_finalize_optional_members(
    UMAA_Common_Measurement_PitchRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_PitchRate_copy(
    UMAA_Common_Measurement_PitchRate* dst,
    const UMAA_Common_Measurement_PitchRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_PitchRate' sequence class.
*/
#define T UMAA_Common_Measurement_PitchRate
#define TSeq UMAA_Common_Measurement_PitchRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_PitchRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_PitchRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_PitchRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_PowerBusCurrent_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_PowerBusCurrent_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::PowerBusCurrent", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_PowerBusCurrent */

    if (is_initialized) {
        return &UMAA_Common_Measurement_PowerBusCurrent_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._minValue._u.double_value = -100000LL;
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_PowerBusCurrent_get_sample_access_info();
    UMAA_Common_Measurement_PowerBusCurrent_g_tc._data._typePlugin =
    UMAA_Common_Measurement_PowerBusCurrent_get_type_plugin_info();    

    return &UMAA_Common_Measurement_PowerBusCurrent_g_tc;
}

#define TSeq UMAA_Common_Measurement_PowerBusCurrentSeq
#define T UMAA_Common_Measurement_PowerBusCurrent
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusCurrent_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PowerBusCurrent_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PowerBusCurrentSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PowerBusCurrentSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_PowerBusCurrent_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusCurrent_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_PowerBusCurrent_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_PowerBusCurrent_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_PowerBusCurrent_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_PowerBusCurrent);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_PowerBusCurrent_get_member_value_pointer;

    UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PowerBusCurrent_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_PowerBusCurrent_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_PowerBusCurrent_g_typePlugin = 
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
        UMAA_Common_Measurement_PowerBusCurrent_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_PowerBusCurrent_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_PowerBusCurrent_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize(
    UMAA_Common_Measurement_PowerBusCurrent* sample)
{
    return UMAA_Common_Measurement_PowerBusCurrent_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize_w_params(
    UMAA_Common_Measurement_PowerBusCurrent *sample,
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
RTIBool UMAA_Common_Measurement_PowerBusCurrent_initialize_ex(
    UMAA_Common_Measurement_PowerBusCurrent *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_PowerBusCurrent_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_PowerBusCurrent_finalize_w_return(
    UMAA_Common_Measurement_PowerBusCurrent* sample)
{
    UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_PowerBusCurrent_finalize(
    UMAA_Common_Measurement_PowerBusCurrent* sample)
{  
    UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(
    UMAA_Common_Measurement_PowerBusCurrent *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params(
    UMAA_Common_Measurement_PowerBusCurrent *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_PowerBusCurrent_finalize_optional_members(
    UMAA_Common_Measurement_PowerBusCurrent* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_PowerBusCurrent_copy(
    UMAA_Common_Measurement_PowerBusCurrent* dst,
    const UMAA_Common_Measurement_PowerBusCurrent* src)
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
* Configure and implement 'UMAA_Common_Measurement_PowerBusCurrent' sequence class.
*/
#define T UMAA_Common_Measurement_PowerBusCurrent
#define TSeq UMAA_Common_Measurement_PowerBusCurrentSeq

#define T_initialize_w_params UMAA_Common_Measurement_PowerBusCurrent_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params
#define T_copy       UMAA_Common_Measurement_PowerBusCurrent_copy

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
DDS_TypeCode * UMAA_Common_Measurement_PowerBusVoltage_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_PowerBusVoltage_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::PowerBusVoltage", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_PowerBusVoltage */

    if (is_initialized) {
        return &UMAA_Common_Measurement_PowerBusVoltage_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._minValue._u.double_value = -100000LL;
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._annotations._maxValue._u.double_value = 100000ULL;

    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_PowerBusVoltage_get_sample_access_info();
    UMAA_Common_Measurement_PowerBusVoltage_g_tc._data._typePlugin =
    UMAA_Common_Measurement_PowerBusVoltage_get_type_plugin_info();    

    return &UMAA_Common_Measurement_PowerBusVoltage_g_tc;
}

#define TSeq UMAA_Common_Measurement_PowerBusVoltageSeq
#define T UMAA_Common_Measurement_PowerBusVoltage
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusVoltage_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PowerBusVoltage_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_PowerBusVoltageSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_PowerBusVoltageSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_PowerBusVoltage_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_PowerBusVoltage_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_PowerBusVoltage_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_PowerBusVoltage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_PowerBusVoltage_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_PowerBusVoltage);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_PowerBusVoltage_get_member_value_pointer;

    UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_PowerBusVoltage_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_PowerBusVoltage_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_PowerBusVoltage_g_typePlugin = 
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
        UMAA_Common_Measurement_PowerBusVoltage_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_PowerBusVoltage_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_PowerBusVoltage_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize(
    UMAA_Common_Measurement_PowerBusVoltage* sample)
{
    return UMAA_Common_Measurement_PowerBusVoltage_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize_w_params(
    UMAA_Common_Measurement_PowerBusVoltage *sample,
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
RTIBool UMAA_Common_Measurement_PowerBusVoltage_initialize_ex(
    UMAA_Common_Measurement_PowerBusVoltage *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_PowerBusVoltage_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_PowerBusVoltage_finalize_w_return(
    UMAA_Common_Measurement_PowerBusVoltage* sample)
{
    UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_PowerBusVoltage_finalize(
    UMAA_Common_Measurement_PowerBusVoltage* sample)
{  
    UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(
    UMAA_Common_Measurement_PowerBusVoltage *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params(
    UMAA_Common_Measurement_PowerBusVoltage *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_PowerBusVoltage_finalize_optional_members(
    UMAA_Common_Measurement_PowerBusVoltage* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_PowerBusVoltage_copy(
    UMAA_Common_Measurement_PowerBusVoltage* dst,
    const UMAA_Common_Measurement_PowerBusVoltage* src)
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
* Configure and implement 'UMAA_Common_Measurement_PowerBusVoltage' sequence class.
*/
#define T UMAA_Common_Measurement_PowerBusVoltage
#define TSeq UMAA_Common_Measurement_PowerBusVoltageSeq

#define T_initialize_w_params UMAA_Common_Measurement_PowerBusVoltage_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params
#define T_copy       UMAA_Common_Measurement_PowerBusVoltage_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Pressure_KiloPascals_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Pressure_KiloPascals_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Pressure_KiloPascals", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Pressure_KiloPascals */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Pressure_KiloPascals_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._annotations._maxValue._u.double_value = 51200ULL;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Pressure_KiloPascals_get_sample_access_info();
    UMAA_Common_Measurement_Pressure_KiloPascals_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Pressure_KiloPascals_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Pressure_KiloPascals_g_tc;
}

#define TSeq UMAA_Common_Measurement_Pressure_KiloPascalsSeq
#define T UMAA_Common_Measurement_Pressure_KiloPascals
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_KiloPascals_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pressure_KiloPascals_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Pressure_KiloPascalsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Pressure_KiloPascalsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Pressure_KiloPascals_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Pressure_KiloPascals_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Pressure_KiloPascals_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Pressure_KiloPascals_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Pressure_KiloPascals_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Pressure_KiloPascals);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Pressure_KiloPascals_get_member_value_pointer;

    UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Pressure_KiloPascals_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Pressure_KiloPascals_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Pressure_KiloPascals_g_typePlugin = 
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
        UMAA_Common_Measurement_Pressure_KiloPascals_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Pressure_KiloPascals_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize(
    UMAA_Common_Measurement_Pressure_KiloPascals* sample)
{
    return UMAA_Common_Measurement_Pressure_KiloPascals_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize_w_params(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,
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
RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_initialize_ex(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Pressure_KiloPascals_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_return(
    UMAA_Common_Measurement_Pressure_KiloPascals* sample)
{
    UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Pressure_KiloPascals_finalize(
    UMAA_Common_Measurement_Pressure_KiloPascals* sample)
{  
    UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Pressure_KiloPascals_finalize_optional_members(
    UMAA_Common_Measurement_Pressure_KiloPascals* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Pressure_KiloPascals_copy(
    UMAA_Common_Measurement_Pressure_KiloPascals* dst,
    const UMAA_Common_Measurement_Pressure_KiloPascals* src)
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
* Configure and implement 'UMAA_Common_Measurement_Pressure_KiloPascals' sequence class.
*/
#define T UMAA_Common_Measurement_Pressure_KiloPascals
#define TSeq UMAA_Common_Measurement_Pressure_KiloPascalsSeq

#define T_initialize_w_params UMAA_Common_Measurement_Pressure_KiloPascals_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Pressure_KiloPascals_copy

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
DDS_TypeCode * UMAA_Common_Measurement_RadioFrequency_Hertz_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::RadioFrequency_Hertz", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_RadioFrequency_Hertz */

    if (is_initialized) {
        return &UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._minValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._annotations._maxValue._u.double_value = 10000000000ULL;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_RadioFrequency_Hertz_get_sample_access_info();
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc._data._typePlugin =
    UMAA_Common_Measurement_RadioFrequency_Hertz_get_type_plugin_info();    

    return &UMAA_Common_Measurement_RadioFrequency_Hertz_g_tc;
}

#define TSeq UMAA_Common_Measurement_RadioFrequency_HertzSeq
#define T UMAA_Common_Measurement_RadioFrequency_Hertz
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RadioFrequency_Hertz_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RadioFrequency_Hertz_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_RadioFrequency_HertzSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_RadioFrequency_HertzSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_RadioFrequency_Hertz_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RadioFrequency_Hertz_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_RadioFrequency_Hertz_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_RadioFrequency_Hertz_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_RadioFrequency_Hertz);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_RadioFrequency_Hertz_get_member_value_pointer;

    UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RadioFrequency_Hertz_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_RadioFrequency_Hertz_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_RadioFrequency_Hertz_g_typePlugin = 
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
        UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_RadioFrequency_Hertz_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize(
    UMAA_Common_Measurement_RadioFrequency_Hertz* sample)
{
    return UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_w_params(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
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
RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_ex(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_return(
    UMAA_Common_Measurement_RadioFrequency_Hertz* sample)
{
    UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize(
    UMAA_Common_Measurement_RadioFrequency_Hertz* sample)
{  
    UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_optional_members(
    UMAA_Common_Measurement_RadioFrequency_Hertz* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_RadioFrequency_Hertz_copy(
    UMAA_Common_Measurement_RadioFrequency_Hertz* dst,
    const UMAA_Common_Measurement_RadioFrequency_Hertz* src)
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
* Configure and implement 'UMAA_Common_Measurement_RadioFrequency_Hertz' sequence class.
*/
#define T UMAA_Common_Measurement_RadioFrequency_Hertz
#define TSeq UMAA_Common_Measurement_RadioFrequency_HertzSeq

#define T_initialize_w_params UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params
#define T_copy       UMAA_Common_Measurement_RadioFrequency_Hertz_copy

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
DDS_TypeCode * UMAA_Common_Measurement_RelativeAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_RelativeAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::RelativeAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_RelativeAngle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_RelativeAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_RelativeAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_RelativeAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_RelativeAngle_get_sample_access_info();
    UMAA_Common_Measurement_RelativeAngle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_RelativeAngle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_RelativeAngle_g_tc;
}

#define TSeq UMAA_Common_Measurement_RelativeAngleSeq
#define T UMAA_Common_Measurement_RelativeAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RelativeAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_RelativeAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_RelativeAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_RelativeAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_RelativeAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_RelativeAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_RelativeAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_RelativeAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_RelativeAngle_get_member_value_pointer;

    UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RelativeAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_RelativeAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_RelativeAngle_g_typePlugin = 
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
        UMAA_Common_Measurement_RelativeAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_RelativeAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_RelativeAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_RelativeAngle_initialize(
    UMAA_Common_Measurement_RelativeAngle* sample)
{
    return UMAA_Common_Measurement_RelativeAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_RelativeAngle_initialize_w_params(
    UMAA_Common_Measurement_RelativeAngle *sample,
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
RTIBool UMAA_Common_Measurement_RelativeAngle_initialize_ex(
    UMAA_Common_Measurement_RelativeAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_RelativeAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_RelativeAngle_finalize_w_return(
    UMAA_Common_Measurement_RelativeAngle* sample)
{
    UMAA_Common_Measurement_RelativeAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_RelativeAngle_finalize(
    UMAA_Common_Measurement_RelativeAngle* sample)
{  
    UMAA_Common_Measurement_RelativeAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_RelativeAngle_finalize_ex(
    UMAA_Common_Measurement_RelativeAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_RelativeAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_RelativeAngle_finalize_w_params(
    UMAA_Common_Measurement_RelativeAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_RelativeAngle_finalize_optional_members(
    UMAA_Common_Measurement_RelativeAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_RelativeAngle_copy(
    UMAA_Common_Measurement_RelativeAngle* dst,
    const UMAA_Common_Measurement_RelativeAngle* src)
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
* Configure and implement 'UMAA_Common_Measurement_RelativeAngle' sequence class.
*/
#define T UMAA_Common_Measurement_RelativeAngle
#define TSeq UMAA_Common_Measurement_RelativeAngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_RelativeAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_RelativeAngle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_RelativeAngle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_RelativeHumidity_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_RelativeHumidity_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::RelativeHumidity", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_RelativeHumidity */

    if (is_initialized) {
        return &UMAA_Common_Measurement_RelativeHumidity_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_RelativeHumidity_get_sample_access_info();
    UMAA_Common_Measurement_RelativeHumidity_g_tc._data._typePlugin =
    UMAA_Common_Measurement_RelativeHumidity_get_type_plugin_info();    

    return &UMAA_Common_Measurement_RelativeHumidity_g_tc;
}

#define TSeq UMAA_Common_Measurement_RelativeHumiditySeq
#define T UMAA_Common_Measurement_RelativeHumidity
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeHumidity_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RelativeHumidity_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_RelativeHumiditySeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_RelativeHumiditySeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_RelativeHumidity_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RelativeHumidity_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_RelativeHumidity_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_RelativeHumidity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_RelativeHumidity_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_RelativeHumidity);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_RelativeHumidity_get_member_value_pointer;

    UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RelativeHumidity_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_RelativeHumidity_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_RelativeHumidity_g_typePlugin = 
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
        UMAA_Common_Measurement_RelativeHumidity_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_RelativeHumidity_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_RelativeHumidity_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize(
    UMAA_Common_Measurement_RelativeHumidity* sample)
{
    return UMAA_Common_Measurement_RelativeHumidity_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize_w_params(
    UMAA_Common_Measurement_RelativeHumidity *sample,
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
RTIBool UMAA_Common_Measurement_RelativeHumidity_initialize_ex(
    UMAA_Common_Measurement_RelativeHumidity *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_RelativeHumidity_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_RelativeHumidity_finalize_w_return(
    UMAA_Common_Measurement_RelativeHumidity* sample)
{
    UMAA_Common_Measurement_RelativeHumidity_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_RelativeHumidity_finalize(
    UMAA_Common_Measurement_RelativeHumidity* sample)
{  
    UMAA_Common_Measurement_RelativeHumidity_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_RelativeHumidity_finalize_ex(
    UMAA_Common_Measurement_RelativeHumidity *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_RelativeHumidity_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_RelativeHumidity_finalize_w_params(
    UMAA_Common_Measurement_RelativeHumidity *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_RelativeHumidity_finalize_optional_members(
    UMAA_Common_Measurement_RelativeHumidity* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_RelativeHumidity_copy(
    UMAA_Common_Measurement_RelativeHumidity* dst,
    const UMAA_Common_Measurement_RelativeHumidity* src)
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
* Configure and implement 'UMAA_Common_Measurement_RelativeHumidity' sequence class.
*/
#define T UMAA_Common_Measurement_RelativeHumidity
#define TSeq UMAA_Common_Measurement_RelativeHumiditySeq

#define T_initialize_w_params UMAA_Common_Measurement_RelativeHumidity_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_RelativeHumidity_finalize_w_params
#define T_copy       UMAA_Common_Measurement_RelativeHumidity_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Roll_Angle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Roll_Angle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Roll_Angle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Roll_Angle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Roll_Angle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Roll_Angle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Roll_Angle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Roll_Angle_get_sample_access_info();
    UMAA_Common_Measurement_Roll_Angle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Roll_Angle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Roll_Angle_g_tc;
}

#define TSeq UMAA_Common_Measurement_Roll_AngleSeq
#define T UMAA_Common_Measurement_Roll_Angle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Roll_Angle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Roll_Angle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Roll_AngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Roll_AngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Roll_Angle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Roll_Angle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Roll_Angle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Roll_Angle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Roll_Angle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Roll_Angle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Roll_Angle_get_member_value_pointer;

    UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Roll_Angle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Roll_Angle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Roll_Angle_g_typePlugin = 
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
        UMAA_Common_Measurement_Roll_Angle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Roll_Angle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Roll_Angle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Roll_Angle_initialize(
    UMAA_Common_Measurement_Roll_Angle* sample)
{
    return UMAA_Common_Measurement_Roll_Angle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Roll_Angle_initialize_w_params(
    UMAA_Common_Measurement_Roll_Angle *sample,
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
RTIBool UMAA_Common_Measurement_Roll_Angle_initialize_ex(
    UMAA_Common_Measurement_Roll_Angle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Roll_Angle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Roll_Angle_finalize_w_return(
    UMAA_Common_Measurement_Roll_Angle* sample)
{
    UMAA_Common_Measurement_Roll_Angle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Roll_Angle_finalize(
    UMAA_Common_Measurement_Roll_Angle* sample)
{  
    UMAA_Common_Measurement_Roll_Angle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Roll_Angle_finalize_ex(
    UMAA_Common_Measurement_Roll_Angle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Roll_Angle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Roll_Angle_finalize_w_params(
    UMAA_Common_Measurement_Roll_Angle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Roll_Angle_finalize_optional_members(
    UMAA_Common_Measurement_Roll_Angle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Roll_Angle_copy(
    UMAA_Common_Measurement_Roll_Angle* dst,
    const UMAA_Common_Measurement_Roll_Angle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Roll_Angle' sequence class.
*/
#define T UMAA_Common_Measurement_Roll_Angle
#define TSeq UMAA_Common_Measurement_Roll_AngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Roll_Angle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Roll_Angle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Roll_Angle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_RollAcceleration_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_RollAcceleration_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::RollAcceleration", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_RollAcceleration */

    if (is_initialized) {
        return &UMAA_Common_Measurement_RollAcceleration_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_RollAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_RollAcceleration_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_RollAcceleration_get_sample_access_info();
    UMAA_Common_Measurement_RollAcceleration_g_tc._data._typePlugin =
    UMAA_Common_Measurement_RollAcceleration_get_type_plugin_info();    

    return &UMAA_Common_Measurement_RollAcceleration_g_tc;
}

#define TSeq UMAA_Common_Measurement_RollAccelerationSeq
#define T UMAA_Common_Measurement_RollAcceleration
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollAcceleration_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RollAcceleration_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_RollAccelerationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_RollAccelerationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_RollAcceleration_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollAcceleration_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_RollAcceleration_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_RollAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_RollAcceleration_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_RollAcceleration);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_RollAcceleration_get_member_value_pointer;

    UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RollAcceleration_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_RollAcceleration_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_RollAcceleration_g_typePlugin = 
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
        UMAA_Common_Measurement_RollAcceleration_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_RollAcceleration_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_RollAcceleration_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_RollAcceleration_initialize(
    UMAA_Common_Measurement_RollAcceleration* sample)
{
    return UMAA_Common_Measurement_RollAcceleration_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_RollAcceleration_initialize_w_params(
    UMAA_Common_Measurement_RollAcceleration *sample,
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
RTIBool UMAA_Common_Measurement_RollAcceleration_initialize_ex(
    UMAA_Common_Measurement_RollAcceleration *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_RollAcceleration_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_RollAcceleration_finalize_w_return(
    UMAA_Common_Measurement_RollAcceleration* sample)
{
    UMAA_Common_Measurement_RollAcceleration_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_RollAcceleration_finalize(
    UMAA_Common_Measurement_RollAcceleration* sample)
{  
    UMAA_Common_Measurement_RollAcceleration_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_RollAcceleration_finalize_ex(
    UMAA_Common_Measurement_RollAcceleration *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_RollAcceleration_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_RollAcceleration_finalize_w_params(
    UMAA_Common_Measurement_RollAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_RollAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_RollAcceleration* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_RollAcceleration_copy(
    UMAA_Common_Measurement_RollAcceleration* dst,
    const UMAA_Common_Measurement_RollAcceleration* src)
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
* Configure and implement 'UMAA_Common_Measurement_RollAcceleration' sequence class.
*/
#define T UMAA_Common_Measurement_RollAcceleration
#define TSeq UMAA_Common_Measurement_RollAccelerationSeq

#define T_initialize_w_params UMAA_Common_Measurement_RollAcceleration_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_RollAcceleration_finalize_w_params
#define T_copy       UMAA_Common_Measurement_RollAcceleration_copy

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
DDS_TypeCode * UMAA_Common_Measurement_RollRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_RollRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::RollRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_RollRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_RollRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_RollRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_RollRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_RollRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_RollRate_get_sample_access_info();
    UMAA_Common_Measurement_RollRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_RollRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_RollRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_RollRateSeq
#define T UMAA_Common_Measurement_RollRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RollRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_RollRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_RollRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_RollRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_RollRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_RollRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_RollRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RollRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_RollRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_RollRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_RollRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_RollRate_get_member_value_pointer;

    UMAA_Common_Measurement_RollRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_RollRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_RollRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_RollRate_g_typePlugin = 
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
        UMAA_Common_Measurement_RollRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_RollRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_RollRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_RollRate_initialize(
    UMAA_Common_Measurement_RollRate* sample)
{
    return UMAA_Common_Measurement_RollRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_RollRate_initialize_w_params(
    UMAA_Common_Measurement_RollRate *sample,
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
RTIBool UMAA_Common_Measurement_RollRate_initialize_ex(
    UMAA_Common_Measurement_RollRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_RollRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_RollRate_finalize_w_return(
    UMAA_Common_Measurement_RollRate* sample)
{
    UMAA_Common_Measurement_RollRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_RollRate_finalize(
    UMAA_Common_Measurement_RollRate* sample)
{  
    UMAA_Common_Measurement_RollRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_RollRate_finalize_ex(
    UMAA_Common_Measurement_RollRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_RollRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_RollRate_finalize_w_params(
    UMAA_Common_Measurement_RollRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_RollRate_finalize_optional_members(
    UMAA_Common_Measurement_RollRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_RollRate_copy(
    UMAA_Common_Measurement_RollRate* dst,
    const UMAA_Common_Measurement_RollRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_RollRate' sequence class.
*/
#define T UMAA_Common_Measurement_RollRate
#define TSeq UMAA_Common_Measurement_RollRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_RollRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_RollRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_RollRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Size_Numeral_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Size_Numeral_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Size_Numeral", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Size_Numeral */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Size_Numeral_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Size_Numeral_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Size_Numeral_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Size_Numeral_get_sample_access_info();
    UMAA_Common_Measurement_Size_Numeral_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Size_Numeral_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Size_Numeral_g_tc;
}

#define TSeq UMAA_Common_Measurement_Size_NumeralSeq
#define T UMAA_Common_Measurement_Size_Numeral
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Size_Numeral_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Size_Numeral_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Size_NumeralSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Size_NumeralSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Size_Numeral_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Size_Numeral_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Size_Numeral_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Size_Numeral_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Size_Numeral_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Size_Numeral);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Size_Numeral_get_member_value_pointer;

    UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Size_Numeral_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Size_Numeral_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Size_Numeral_g_typePlugin = 
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
        UMAA_Common_Measurement_Size_Numeral_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Size_Numeral_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Size_Numeral_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Size_Numeral_initialize(
    UMAA_Common_Measurement_Size_Numeral* sample)
{
    return UMAA_Common_Measurement_Size_Numeral_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Size_Numeral_initialize_w_params(
    UMAA_Common_Measurement_Size_Numeral *sample,
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
RTIBool UMAA_Common_Measurement_Size_Numeral_initialize_ex(
    UMAA_Common_Measurement_Size_Numeral *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Size_Numeral_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Size_Numeral_finalize_w_return(
    UMAA_Common_Measurement_Size_Numeral* sample)
{
    UMAA_Common_Measurement_Size_Numeral_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Size_Numeral_finalize(
    UMAA_Common_Measurement_Size_Numeral* sample)
{  
    UMAA_Common_Measurement_Size_Numeral_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Size_Numeral_finalize_ex(
    UMAA_Common_Measurement_Size_Numeral *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Size_Numeral_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Size_Numeral_finalize_w_params(
    UMAA_Common_Measurement_Size_Numeral *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Size_Numeral_finalize_optional_members(
    UMAA_Common_Measurement_Size_Numeral* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Size_Numeral_copy(
    UMAA_Common_Measurement_Size_Numeral* dst,
    const UMAA_Common_Measurement_Size_Numeral* src)
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
* Configure and implement 'UMAA_Common_Measurement_Size_Numeral' sequence class.
*/
#define T UMAA_Common_Measurement_Size_Numeral
#define TSeq UMAA_Common_Measurement_Size_NumeralSeq

#define T_initialize_w_params UMAA_Common_Measurement_Size_Numeral_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Size_Numeral_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Size_Numeral_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Speed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Speed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Speed", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Speed */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Speed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Speed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Speed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Speed_g_tc._data._annotations._maxValue._u.double_value = 299792458ULL;

    UMAA_Common_Measurement_Speed_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Speed_get_sample_access_info();
    UMAA_Common_Measurement_Speed_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Speed_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Speed_g_tc;
}

#define TSeq UMAA_Common_Measurement_SpeedSeq
#define T UMAA_Common_Measurement_Speed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_SpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_SpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Speed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Speed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Speed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Speed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Speed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Speed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Speed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Speed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Speed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Speed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Speed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Speed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Speed_get_member_value_pointer;

    UMAA_Common_Measurement_Speed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Speed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Speed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Speed_g_typePlugin = 
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
        UMAA_Common_Measurement_Speed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Speed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Speed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Speed_initialize(
    UMAA_Common_Measurement_Speed* sample)
{
    return UMAA_Common_Measurement_Speed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Speed_initialize_w_params(
    UMAA_Common_Measurement_Speed *sample,
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
RTIBool UMAA_Common_Measurement_Speed_initialize_ex(
    UMAA_Common_Measurement_Speed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Speed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Speed_finalize_w_return(
    UMAA_Common_Measurement_Speed* sample)
{
    UMAA_Common_Measurement_Speed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Speed_finalize(
    UMAA_Common_Measurement_Speed* sample)
{  
    UMAA_Common_Measurement_Speed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Speed_finalize_ex(
    UMAA_Common_Measurement_Speed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Speed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Speed_finalize_w_params(
    UMAA_Common_Measurement_Speed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Speed_finalize_optional_members(
    UMAA_Common_Measurement_Speed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Speed_copy(
    UMAA_Common_Measurement_Speed* dst,
    const UMAA_Common_Measurement_Speed* src)
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
* Configure and implement 'UMAA_Common_Measurement_Speed' sequence class.
*/
#define T UMAA_Common_Measurement_Speed
#define TSeq UMAA_Common_Measurement_SpeedSeq

#define T_initialize_w_params UMAA_Common_Measurement_Speed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Speed_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Speed_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Temperature_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Temperature_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Temperature", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Temperature */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Temperature_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Temperature_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._minValue._u.double_value = -273LL;
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Temperature_g_tc._data._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_Common_Measurement_Temperature_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Temperature_get_sample_access_info();
    UMAA_Common_Measurement_Temperature_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Temperature_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Temperature_g_tc;
}

#define TSeq UMAA_Common_Measurement_TemperatureSeq
#define T UMAA_Common_Measurement_Temperature
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Temperature_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Temperature_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_TemperatureSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_TemperatureSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Temperature_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Temperature_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Temperature_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Temperature_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Temperature_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Temperature_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Temperature_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Temperature);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Temperature_get_member_value_pointer;

    UMAA_Common_Measurement_Temperature_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Temperature_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Temperature_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Temperature_g_typePlugin = 
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
        UMAA_Common_Measurement_Temperature_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Temperature_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Temperature_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Temperature_initialize(
    UMAA_Common_Measurement_Temperature* sample)
{
    return UMAA_Common_Measurement_Temperature_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Temperature_initialize_w_params(
    UMAA_Common_Measurement_Temperature *sample,
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
RTIBool UMAA_Common_Measurement_Temperature_initialize_ex(
    UMAA_Common_Measurement_Temperature *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Temperature_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Temperature_finalize_w_return(
    UMAA_Common_Measurement_Temperature* sample)
{
    UMAA_Common_Measurement_Temperature_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Temperature_finalize(
    UMAA_Common_Measurement_Temperature* sample)
{  
    UMAA_Common_Measurement_Temperature_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Temperature_finalize_ex(
    UMAA_Common_Measurement_Temperature *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Temperature_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Temperature_finalize_w_params(
    UMAA_Common_Measurement_Temperature *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Temperature_finalize_optional_members(
    UMAA_Common_Measurement_Temperature* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Temperature_copy(
    UMAA_Common_Measurement_Temperature* dst,
    const UMAA_Common_Measurement_Temperature* src)
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
* Configure and implement 'UMAA_Common_Measurement_Temperature' sequence class.
*/
#define T UMAA_Common_Measurement_Temperature
#define TSeq UMAA_Common_Measurement_TemperatureSeq

#define T_initialize_w_params UMAA_Common_Measurement_Temperature_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Temperature_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Temperature_copy

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
DDS_TypeCode * UMAA_Common_Measurement_TurnRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_TurnRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::TurnRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_TurnRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_TurnRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_TurnRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._minValue._u.double_value = 0ULL;
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_TurnRate_g_tc._data._annotations._maxValue._u.double_value = 32.767;

    UMAA_Common_Measurement_TurnRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_TurnRate_get_sample_access_info();
    UMAA_Common_Measurement_TurnRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_TurnRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_TurnRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_TurnRateSeq
#define T UMAA_Common_Measurement_TurnRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_TurnRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_TurnRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_TurnRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_TurnRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_TurnRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_TurnRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_TurnRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_TurnRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_TurnRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_TurnRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_TurnRate_get_member_value_pointer;

    UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_TurnRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_TurnRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_TurnRate_g_typePlugin = 
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
        UMAA_Common_Measurement_TurnRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_TurnRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_TurnRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_TurnRate_initialize(
    UMAA_Common_Measurement_TurnRate* sample)
{
    return UMAA_Common_Measurement_TurnRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_TurnRate_initialize_w_params(
    UMAA_Common_Measurement_TurnRate *sample,
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
RTIBool UMAA_Common_Measurement_TurnRate_initialize_ex(
    UMAA_Common_Measurement_TurnRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_TurnRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_TurnRate_finalize_w_return(
    UMAA_Common_Measurement_TurnRate* sample)
{
    UMAA_Common_Measurement_TurnRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_TurnRate_finalize(
    UMAA_Common_Measurement_TurnRate* sample)
{  
    UMAA_Common_Measurement_TurnRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_TurnRate_finalize_ex(
    UMAA_Common_Measurement_TurnRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_TurnRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_TurnRate_finalize_w_params(
    UMAA_Common_Measurement_TurnRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_TurnRate_finalize_optional_members(
    UMAA_Common_Measurement_TurnRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_TurnRate_copy(
    UMAA_Common_Measurement_TurnRate* dst,
    const UMAA_Common_Measurement_TurnRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_TurnRate' sequence class.
*/
#define T UMAA_Common_Measurement_TurnRate
#define TSeq UMAA_Common_Measurement_TurnRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_TurnRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_TurnRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_TurnRate_copy

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
DDS_TypeCode * UMAA_Common_Measurement_Yaw_PosAngle_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Yaw_PosAngle_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::Yaw_PosAngle", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_Yaw_PosAngle */

    if (is_initialized) {
        return &UMAA_Common_Measurement_Yaw_PosAngle_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Yaw_PosAngle_get_sample_access_info();
    UMAA_Common_Measurement_Yaw_PosAngle_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Yaw_PosAngle_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Yaw_PosAngle_g_tc;
}

#define TSeq UMAA_Common_Measurement_Yaw_PosAngleSeq
#define T UMAA_Common_Measurement_Yaw_PosAngle
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Yaw_PosAngle_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Yaw_PosAngle_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Yaw_PosAngleSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Yaw_PosAngleSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Yaw_PosAngle_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Yaw_PosAngle_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Yaw_PosAngle_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_Yaw_PosAngle_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Yaw_PosAngle_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Yaw_PosAngle);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Yaw_PosAngle_get_member_value_pointer;

    UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Yaw_PosAngle_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Yaw_PosAngle_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Yaw_PosAngle_g_typePlugin = 
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
        UMAA_Common_Measurement_Yaw_PosAngle_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Yaw_PosAngle_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize(
    UMAA_Common_Measurement_Yaw_PosAngle* sample)
{
    return UMAA_Common_Measurement_Yaw_PosAngle_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize_w_params(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,
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
RTIBool UMAA_Common_Measurement_Yaw_PosAngle_initialize_ex(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Yaw_PosAngle_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_return(
    UMAA_Common_Measurement_Yaw_PosAngle* sample)
{
    UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Yaw_PosAngle_finalize(
    UMAA_Common_Measurement_Yaw_PosAngle* sample)
{  
    UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_Yaw_PosAngle_finalize_optional_members(
    UMAA_Common_Measurement_Yaw_PosAngle* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Yaw_PosAngle_copy(
    UMAA_Common_Measurement_Yaw_PosAngle* dst,
    const UMAA_Common_Measurement_Yaw_PosAngle* src)
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
* Configure and implement 'UMAA_Common_Measurement_Yaw_PosAngle' sequence class.
*/
#define T UMAA_Common_Measurement_Yaw_PosAngle
#define TSeq UMAA_Common_Measurement_Yaw_PosAngleSeq

#define T_initialize_w_params UMAA_Common_Measurement_Yaw_PosAngle_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Yaw_PosAngle_copy

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
DDS_TypeCode * UMAA_Common_Measurement_YawAcceleration_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_YawAcceleration_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::YawAcceleration", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_YawAcceleration */

    if (is_initialized) {
        return &UMAA_Common_Measurement_YawAcceleration_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_YawAcceleration_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_YawAcceleration_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_YawAcceleration_get_sample_access_info();
    UMAA_Common_Measurement_YawAcceleration_g_tc._data._typePlugin =
    UMAA_Common_Measurement_YawAcceleration_get_type_plugin_info();    

    return &UMAA_Common_Measurement_YawAcceleration_g_tc;
}

#define TSeq UMAA_Common_Measurement_YawAccelerationSeq
#define T UMAA_Common_Measurement_YawAcceleration
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawAcceleration_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_YawAcceleration_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_YawAccelerationSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_YawAccelerationSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_YawAcceleration_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawAcceleration_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_YawAcceleration_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_YawAcceleration_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_YawAcceleration_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_YawAcceleration);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_YawAcceleration_get_member_value_pointer;

    UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_YawAcceleration_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_YawAcceleration_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_YawAcceleration_g_typePlugin = 
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
        UMAA_Common_Measurement_YawAcceleration_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_YawAcceleration_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_YawAcceleration_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_YawAcceleration_initialize(
    UMAA_Common_Measurement_YawAcceleration* sample)
{
    return UMAA_Common_Measurement_YawAcceleration_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_YawAcceleration_initialize_w_params(
    UMAA_Common_Measurement_YawAcceleration *sample,
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
RTIBool UMAA_Common_Measurement_YawAcceleration_initialize_ex(
    UMAA_Common_Measurement_YawAcceleration *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_YawAcceleration_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_YawAcceleration_finalize_w_return(
    UMAA_Common_Measurement_YawAcceleration* sample)
{
    UMAA_Common_Measurement_YawAcceleration_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_YawAcceleration_finalize(
    UMAA_Common_Measurement_YawAcceleration* sample)
{  
    UMAA_Common_Measurement_YawAcceleration_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_YawAcceleration_finalize_ex(
    UMAA_Common_Measurement_YawAcceleration *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_YawAcceleration_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_YawAcceleration_finalize_w_params(
    UMAA_Common_Measurement_YawAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_YawAcceleration_finalize_optional_members(
    UMAA_Common_Measurement_YawAcceleration* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_YawAcceleration_copy(
    UMAA_Common_Measurement_YawAcceleration* dst,
    const UMAA_Common_Measurement_YawAcceleration* src)
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
* Configure and implement 'UMAA_Common_Measurement_YawAcceleration' sequence class.
*/
#define T UMAA_Common_Measurement_YawAcceleration
#define TSeq UMAA_Common_Measurement_YawAccelerationSeq

#define T_initialize_w_params UMAA_Common_Measurement_YawAcceleration_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_YawAcceleration_finalize_w_params
#define T_copy       UMAA_Common_Measurement_YawAcceleration_copy

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
DDS_TypeCode * UMAA_Common_Measurement_YawRate_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_YawRate_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::Measurement::YawRate", /* Name */
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
        }}; /* Type code for  UMAA_Common_Measurement_YawRate */

    if (is_initialized) {
        return &UMAA_Common_Measurement_YawRate_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_YawRate_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_YawRate_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_YawRate_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_YawRate_get_sample_access_info();
    UMAA_Common_Measurement_YawRate_g_tc._data._typePlugin =
    UMAA_Common_Measurement_YawRate_get_type_plugin_info();    

    return &UMAA_Common_Measurement_YawRate_g_tc;
}

#define TSeq UMAA_Common_Measurement_YawRateSeq
#define T UMAA_Common_Measurement_YawRate
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawRate_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_YawRate_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_YawRateSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_YawRateSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_YawRate_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_YawRate_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_YawRate_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_YawRate_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_YawRate_g_sampleAccessInfo;
    }

    UMAA_Common_Measurement_YawRate_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_YawRate_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_YawRate);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_YawRate_get_member_value_pointer;

    UMAA_Common_Measurement_YawRate_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_YawRate_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_YawRate_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_YawRate_g_typePlugin = 
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
        UMAA_Common_Measurement_YawRate_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_YawRate_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_YawRate_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_YawRate_initialize(
    UMAA_Common_Measurement_YawRate* sample)
{
    return UMAA_Common_Measurement_YawRate_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_YawRate_initialize_w_params(
    UMAA_Common_Measurement_YawRate *sample,
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
RTIBool UMAA_Common_Measurement_YawRate_initialize_ex(
    UMAA_Common_Measurement_YawRate *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_YawRate_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_YawRate_finalize_w_return(
    UMAA_Common_Measurement_YawRate* sample)
{
    UMAA_Common_Measurement_YawRate_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_YawRate_finalize(
    UMAA_Common_Measurement_YawRate* sample)
{  
    UMAA_Common_Measurement_YawRate_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_YawRate_finalize_ex(
    UMAA_Common_Measurement_YawRate *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_YawRate_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_YawRate_finalize_w_params(
    UMAA_Common_Measurement_YawRate *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_Measurement_YawRate_finalize_optional_members(
    UMAA_Common_Measurement_YawRate* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_YawRate_copy(
    UMAA_Common_Measurement_YawRate* dst,
    const UMAA_Common_Measurement_YawRate* src)
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
* Configure and implement 'UMAA_Common_Measurement_YawRate' sequence class.
*/
#define T UMAA_Common_Measurement_YawRate
#define TSeq UMAA_Common_Measurement_YawRateSeq

#define T_initialize_w_params UMAA_Common_Measurement_YawRate_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_YawRate_finalize_w_params
#define T_copy       UMAA_Common_Measurement_YawRate_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_Common_Measurement_DateTime>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_Common_Measurement_DateTime_get_typecode();
        }

    } 
}
#endif
