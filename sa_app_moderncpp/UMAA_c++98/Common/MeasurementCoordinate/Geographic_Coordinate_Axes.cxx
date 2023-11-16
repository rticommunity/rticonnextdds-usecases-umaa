

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Geographic_Coordinate_Axes.idl 
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

#include "Geographic_Coordinate_Axes.h"

#ifndef NDDS_STANDALONE_TYPE
#include "Geographic_Coordinate_AxesPlugin.h"
#endif

#include <new>

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::EllipsoidalHeight", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_EllipsoidalHeight */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_EllipsoidalHeightSeq
#define T UMAA_Common_MeasurementCoordinate_EllipsoidalHeight
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_EllipsoidalHeightSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeightSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_EllipsoidalHeight);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* sample)
{
    return UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* sample)
{
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* sample)
{  
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_copy(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* dst,
    const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_EllipsoidalHeight' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_EllipsoidalHeight
#define TSeq UMAA_Common_MeasurementCoordinate_EllipsoidalHeightSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::GeodeticLatitude", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_GeodeticLatitude */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._minValue._u.double_value = -90.0;
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._annotations._maxValue._u.double_value = 90.0;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_GeodeticLatitudeSeq
#define T UMAA_Common_MeasurementCoordinate_GeodeticLatitude
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_GeodeticLatitudeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_GeodeticLatitudeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_GeodeticLatitude);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_GeodeticLatitude_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_GeodeticLatitude_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* sample)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* sample)
{
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* sample)
{  
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLatitude_copy(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude* dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLatitude* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_GeodeticLatitude' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_GeodeticLatitude
#define TSeq UMAA_Common_MeasurementCoordinate_GeodeticLatitudeSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_GeodeticLatitude_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::GeodeticLongitude", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_GeodeticLongitude */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._minValue._u.double_value = -180.0;
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._annotations._maxValue._u.double_value = 180.0;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_GeodeticLongitudeSeq
#define T UMAA_Common_MeasurementCoordinate_GeodeticLongitude
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_GeodeticLongitudeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_GeodeticLongitudeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_GeodeticLongitude);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_GeodeticLongitude_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_GeodeticLongitude_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* sample)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* sample)
{
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* sample)
{  
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_GeodeticLongitude_copy(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude* dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLongitude* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_GeodeticLongitude' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_GeodeticLongitude
#define TSeq UMAA_Common_MeasurementCoordinate_GeodeticLongitudeSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_GeodeticLongitude_copy

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
DDS_TypeCode * UMAA_Common_MeasurementCoordinate_MSLHeight_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"UMAA::Common::MeasurementCoordinate::MSLHeight", /* Name */
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
        }}; /* Type code for  UMAA_Common_MeasurementCoordinate_MSLHeight */

    if (is_initialized) {
        return &UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._sampleAccessInfo =
    UMAA_Common_MeasurementCoordinate_MSLHeight_get_sample_access_info();
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc._data._typePlugin =
    UMAA_Common_MeasurementCoordinate_MSLHeight_get_type_plugin_info();    

    return &UMAA_Common_MeasurementCoordinate_MSLHeight_g_tc;
}

#define TSeq UMAA_Common_MeasurementCoordinate_MSLHeightSeq
#define T UMAA_Common_MeasurementCoordinate_MSLHeight
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_MSLHeight_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_MSLHeight_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_MeasurementCoordinate_MSLHeightSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_MeasurementCoordinate_MSLHeightSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_MeasurementCoordinate_MSLHeight_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_MeasurementCoordinate_MSLHeight_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_Common_MeasurementCoordinate_MSLHeight_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo;
    }

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_MeasurementCoordinate_MSLHeight_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_MeasurementCoordinate_MSLHeight);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_MeasurementCoordinate_MSLHeight_get_member_value_pointer;

    UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_MeasurementCoordinate_MSLHeight_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_MeasurementCoordinate_MSLHeight_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_MeasurementCoordinate_MSLHeight_g_typePlugin = 
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
        UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_MeasurementCoordinate_MSLHeight_g_typePlugin;
}
#endif

RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize(
    UMAA_Common_MeasurementCoordinate_MSLHeight* sample)
{
    return UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_w_params(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
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
RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_ex(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_return(
    UMAA_Common_MeasurementCoordinate_MSLHeight* sample)
{
    UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize(
    UMAA_Common_MeasurementCoordinate_MSLHeight* sample)
{  
    UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_optional_members(
    UMAA_Common_MeasurementCoordinate_MSLHeight* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_MeasurementCoordinate_MSLHeight_copy(
    UMAA_Common_MeasurementCoordinate_MSLHeight* dst,
    const UMAA_Common_MeasurementCoordinate_MSLHeight* src)
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
* Configure and implement 'UMAA_Common_MeasurementCoordinate_MSLHeight' sequence class.
*/
#define T UMAA_Common_MeasurementCoordinate_MSLHeight
#define TSeq UMAA_Common_MeasurementCoordinate_MSLHeightSeq

#define T_initialize_w_params UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_w_params

#define T_finalize_w_params   UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params
#define T_copy       UMAA_Common_MeasurementCoordinate_MSLHeight_copy

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
