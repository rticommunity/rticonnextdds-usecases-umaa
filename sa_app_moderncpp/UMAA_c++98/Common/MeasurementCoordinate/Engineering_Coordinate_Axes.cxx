

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Engineering_Coordinate_Axes.idl 
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

#include "Engineering_Coordinate_Axes.h"

#ifndef NDDS_STANDALONE_TYPE
#include "Engineering_Coordinate_AxesPlugin.h"
#endif

#include <new>

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_DateTime_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_DateTime_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::DateTime", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_DateTime */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_DateTime_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_DateTime_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_DateTime_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_DateTime_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_DateTime_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_DateTimeSeq
#define T UMAA_Common_MeasurementCoordinate_DateTime
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DateTime_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_DateTime_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_DateTimeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_DateTimeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_DateTime_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DateTime_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_DateTime_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_DateTime_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_DateTime_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_DateTime);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_DateTime_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_DateTime_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_DateTime_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_DateTime_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_DateTime_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_DateTime_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize(
    UMAA_Common_MeasurementCoordinate_DateTime* sample)
{
    return UMAA_Common_MeasurementCoordinate_DateTime_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_DateTime_initialize_ex(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_DateTime_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_DateTime* sample)
{
    UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_DateTime_finalize(
    UMAA_Common_MeasurementCoordinate_DateTime* sample)
{  
    UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_DateTime_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_DateTime* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_DateTime_copy(
    UMAA_Common_MeasurementCoordinate_DateTime* dst,
    const UMAA_Common_MeasurementCoordinate_DateTime* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_DateTime' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_DateTime
#define TSeq UMAA_Common_MeasurementCoordinate_DateTimeSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_DateTime_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_DateTime_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Down_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_Down_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::Down", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_Down */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_Down_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._minValue._u.double_value = -50000LL;
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._annotations._maxValue._u.double_value = 50000ULL;

    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_Down_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_Down_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_Down_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_Down_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_DownSeq
#define T UMAA_Common_MeasurementCoordinate_Down
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Down_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Down_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_DownSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_DownSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_Down_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Down_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_Down_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_Down_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_Down_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_Down);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_Down_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Down_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Down_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_Down_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_Down_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_Down_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_Down_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize(
    UMAA_Common_MeasurementCoordinate_Down* sample)
{
    return UMAA_Common_MeasurementCoordinate_Down_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Down *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_Down_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Down *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_Down_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_Down_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Down* sample)
{
    UMAA_Common_MeasurementCoordinate_Down_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_Down_finalize(
    UMAA_Common_MeasurementCoordinate_Down* sample)
{  
    UMAA_Common_MeasurementCoordinate_Down_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_Down_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Down *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_Down_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_Down_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Down *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_Down_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Down* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_Down_copy(
    UMAA_Common_MeasurementCoordinate_Down* dst,
    const UMAA_Common_MeasurementCoordinate_Down* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_Down' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_Down
#define TSeq UMAA_Common_MeasurementCoordinate_DownSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_Down_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_Down_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_Down_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_DownSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::DownSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_DownSpeed */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_DownSpeed_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_DownSpeed_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_DownSpeed_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_DownSpeedSeq
#define T UMAA_Common_MeasurementCoordinate_DownSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DownSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_DownSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_DownSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_DownSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_DownSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_DownSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_DownSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_DownSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_DownSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_DownSpeed_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_DownSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_DownSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_DownSpeed_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_DownSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_DownSpeed* sample)
{
    return UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_DownSpeed* sample)
{
    UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_DownSpeed* sample)
{  
    UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_DownSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_DownSpeed_copy(
    UMAA_Common_MeasurementCoordinate_DownSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_DownSpeed* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_DownSpeed' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_DownSpeed
#define TSeq UMAA_Common_MeasurementCoordinate_DownSpeedSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_DownSpeed_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_EastSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::EastSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_EastSpeed */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_EastSpeed_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_EastSpeed_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_EastSpeed_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_EastSpeedSeq
#define T UMAA_Common_MeasurementCoordinate_EastSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EastSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_EastSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_EastSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_EastSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_EastSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EastSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_EastSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_EastSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_EastSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_EastSpeed_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_EastSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_EastSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_EastSpeed_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_EastSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_EastSpeed* sample)
{
    return UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_EastSpeed* sample)
{
    UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_EastSpeed* sample)
{  
    UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_EastSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_EastSpeed_copy(
    UMAA_Common_MeasurementCoordinate_EastSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_EastSpeed* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_EastSpeed' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_EastSpeed
#define TSeq UMAA_Common_MeasurementCoordinate_EastSpeedSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_EastSpeed_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Forward_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_Forward_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::Forward", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_Forward */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_Forward_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_Forward_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_Forward_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_Forward_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_Forward_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_ForwardSeq
#define T UMAA_Common_MeasurementCoordinate_Forward
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Forward_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Forward_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_ForwardSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_ForwardSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_Forward_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Forward_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_Forward_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_Forward_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_Forward_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_Forward);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_Forward_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Forward_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Forward_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_Forward_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_Forward_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_Forward_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_Forward_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize(
    UMAA_Common_MeasurementCoordinate_Forward* sample)
{
    return UMAA_Common_MeasurementCoordinate_Forward_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Forward *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_Forward_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Forward *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_Forward_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_Forward_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Forward* sample)
{
    UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_Forward_finalize(
    UMAA_Common_MeasurementCoordinate_Forward* sample)
{  
    UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Forward *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Forward *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_Forward_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Forward* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_Forward_copy(
    UMAA_Common_MeasurementCoordinate_Forward* dst,
    const UMAA_Common_MeasurementCoordinate_Forward* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_Forward' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_Forward
#define TSeq UMAA_Common_MeasurementCoordinate_ForwardSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_Forward_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_Forward_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::ForwardSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_ForwardSpeed */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_ForwardSpeedSeq
#define T UMAA_Common_MeasurementCoordinate_ForwardSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_ForwardSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_ForwardSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_ForwardSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_ForwardSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_ForwardSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* sample)
{
    return UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* sample)
{
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* sample)
{  
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_ForwardSpeed_copy(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_ForwardSpeed* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_ForwardSpeed' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_ForwardSpeed
#define TSeq UMAA_Common_MeasurementCoordinate_ForwardSpeedSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_ForwardSpeed_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_NorthSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::NorthSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_NorthSpeed */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_NorthSpeed_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_NorthSpeed_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_NorthSpeedSeq
#define T UMAA_Common_MeasurementCoordinate_NorthSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_NorthSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_NorthSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_NorthSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_NorthSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_NorthSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_NorthSpeed_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_NorthSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_NorthSpeed_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_NorthSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* sample)
{
    return UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* sample)
{
    UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* sample)
{  
    UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_NorthSpeed_copy(
    UMAA_Common_MeasurementCoordinate_NorthSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_NorthSpeed* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_NorthSpeed' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_NorthSpeed
#define TSeq UMAA_Common_MeasurementCoordinate_NorthSpeedSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_NorthSpeed_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_RadarHeight_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::RadarHeight", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_RadarHeight */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_RadarHeight_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_RadarHeight_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_RadarHeight_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_RadarHeightSeq
#define T UMAA_Common_MeasurementCoordinate_RadarHeight
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RadarHeight_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_RadarHeight_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_RadarHeightSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_RadarHeightSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_RadarHeight_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RadarHeight_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_RadarHeight_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_RadarHeight_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_RadarHeight);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_RadarHeight_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_RadarHeight_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_RadarHeight_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_RadarHeight_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_RadarHeight_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize(
    UMAA_Common_MeasurementCoordinate_RadarHeight* sample)
{
    return UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_RadarHeight* sample)
{
    UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize(
    UMAA_Common_MeasurementCoordinate_RadarHeight* sample)
{  
    UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_RadarHeight* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_RadarHeight_copy(
    UMAA_Common_MeasurementCoordinate_RadarHeight* dst,
    const UMAA_Common_MeasurementCoordinate_RadarHeight* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_RadarHeight' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_RadarHeight
#define TSeq UMAA_Common_MeasurementCoordinate_RadarHeightSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_RadarHeight_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_Right_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_Right_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::Right", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_Right */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_Right_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._minValue._u.double_value = -20000000LL;
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._annotations._maxValue._u.double_value = 20000000ULL;

    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_Right_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_Right_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_Right_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_Right_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_RightSeq
#define T UMAA_Common_MeasurementCoordinate_Right
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Right_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Right_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_RightSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_RightSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_Right_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_Right_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_Right_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_Right_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_Right_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_Right);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_Right_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_Right_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_Right_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_Right_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_Right_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_Right_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_Right_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize(
    UMAA_Common_MeasurementCoordinate_Right* sample)
{
    return UMAA_Common_MeasurementCoordinate_Right_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_Right *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_Right_initialize_ex(
    UMAA_Common_MeasurementCoordinate_Right *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_Right_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_Right_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_Right* sample)
{
    UMAA_Common_MeasurementCoordinate_Right_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_Right_finalize(
    UMAA_Common_MeasurementCoordinate_Right* sample)
{  
    UMAA_Common_MeasurementCoordinate_Right_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_Right_finalize_ex(
    UMAA_Common_MeasurementCoordinate_Right *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_Right_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_Right_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_Right *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_Right_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_Right* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_Right_copy(
    UMAA_Common_MeasurementCoordinate_Right* dst,
    const UMAA_Common_MeasurementCoordinate_Right* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_Right' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_Right
#define TSeq UMAA_Common_MeasurementCoordinate_RightSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_Right_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_Right_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_Right_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_RightSpeed_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::RightSpeed", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_RightSpeed */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_RightSpeed_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_RightSpeed_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_RightSpeed_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_RightSpeedSeq
#define T UMAA_Common_MeasurementCoordinate_RightSpeed
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RightSpeed_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_RightSpeed_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_RightSpeedSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_RightSpeedSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_RightSpeed_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_RightSpeed_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_RightSpeed_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_RightSpeed_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_RightSpeed);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_RightSpeed_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_RightSpeed_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_RightSpeed_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_RightSpeed_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_RightSpeed_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize(
    UMAA_Common_MeasurementCoordinate_RightSpeed* sample)
{
    return UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_ex(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_RightSpeed* sample)
{
    UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize(
    UMAA_Common_MeasurementCoordinate_RightSpeed* sample)
{  
    UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_RightSpeed* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_RightSpeed_copy(
    UMAA_Common_MeasurementCoordinate_RightSpeed* dst,
    const UMAA_Common_MeasurementCoordinate_RightSpeed* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_RightSpeed' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_RightSpeed
#define TSeq UMAA_Common_MeasurementCoordinate_RightSpeedSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_RightSpeed_copy

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
