

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_Volume.idl 
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

#include "Polygon_Volume.h"

#ifndef NDDS_STANDALONE_TYPE
#include "Polygon_VolumePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_Common_Measurement_Polygon_VolumeTYPENAME = "UMAA::Common::Measurement::Polygon_Volume";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_Polygon_Volume_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_Common_Measurement_Polygon_Volume_g_tc_referencePoints_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_Common_Measurement_Polygon_Volume_g_tc_members[4]=
    {

        {
            (char *)"ceiling",/* Member name */
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
            (char *)"floor",/* Member name */
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
            (char *)"lineKind",/* Member name */
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
            (char *)"referencePoints",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_Common_Measurement_Polygon_Volume_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Measurement::Polygon_Volume", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            UMAA_Common_Measurement_Polygon_Volume_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Measurement_Polygon_Volume*/

    if (is_initialized) {
        return &UMAA_Common_Measurement_Polygon_Volume_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_Polygon_Volume_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_Polygon_Volume_g_tc_referencePoints_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_Common_Measurement_Polygon_Volume_g_tc_referencePoints_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_Position2D_get_sample_seq_access_info();
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_get_typecode();
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& UMAA_Common_Measurement_Polygon_Volume_g_tc_referencePoints_sequence;

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_Common_Measurement_Polygon_Volume_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_Common_Measurement_Polygon_Volume_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_Polygon_Volume_get_sample_access_info();
    UMAA_Common_Measurement_Polygon_Volume_g_tc._data._typePlugin =
    UMAA_Common_Measurement_Polygon_Volume_get_type_plugin_info();    

    return &UMAA_Common_Measurement_Polygon_Volume_g_tc;
}

#define TSeq UMAA_Common_Measurement_Polygon_VolumeSeq
#define T UMAA_Common_Measurement_Polygon_Volume
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_Volume_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Polygon_Volume_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_Polygon_VolumeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_Polygon_VolumeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_Polygon_Volume_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_Volume_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_Common_Measurement_Polygon_Volume *sample;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_Common_Measurement_Polygon_Volume);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->ceiling - (char *)sample);

    UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->floor - (char *)sample);

    UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->lineKind - (char *)sample);

    UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->referencePoints - (char *)sample);

    UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_Polygon_Volume_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_Polygon_Volume);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_Polygon_Volume_get_member_value_pointer;

    UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_Polygon_Volume_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_Polygon_Volume_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_Polygon_Volume_g_typePlugin = 
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
        UMAA_Common_Measurement_Polygon_Volume_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_Polygon_Volume_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_Polygon_Volume_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize(
    UMAA_Common_Measurement_Polygon_Volume* sample)
{
    return UMAA_Common_Measurement_Polygon_Volume_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize_w_params(
    UMAA_Common_Measurement_Polygon_Volume *sample,
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

    if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
        &sample->ceiling,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
        &sample->floor,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->lineKind = UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_GREAT_CIRCLE;
    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_Position2DSeq_initialize(&sample->referencePoints )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_Position2DSeq_set_element_allocation_params(&sample->referencePoints ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_Position2DSeq_set_absolute_maximum(&sample->referencePoints , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Position2DSeq_set_maximum(
            &sample->referencePoints
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_Position2DSeq_set_length(&sample->referencePoints, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_Polygon_Volume_initialize_ex(
    UMAA_Common_Measurement_Polygon_Volume *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_Polygon_Volume_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_Polygon_Volume_finalize_w_return(
    UMAA_Common_Measurement_Polygon_Volume* sample)
{
    UMAA_Common_Measurement_Polygon_Volume_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_Polygon_Volume_finalize(
    UMAA_Common_Measurement_Polygon_Volume* sample)
{  
    UMAA_Common_Measurement_Polygon_Volume_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_Polygon_Volume_finalize_ex(
    UMAA_Common_Measurement_Polygon_Volume *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_Polygon_Volume_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_Polygon_Volume_finalize_w_params(
    UMAA_Common_Measurement_Polygon_Volume *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
        &sample->ceiling,
        deallocParams);

    UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
        &sample->floor,
        deallocParams);

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_finalize_w_params(
        &sample->lineKind,
        deallocParams);

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_Position2DSeq_set_element_deallocation_params(
        &sample->referencePoints,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_Position2DSeq_finalize(
            &sample->referencePoints),
            DDS_Boolean);

}

void UMAA_Common_Measurement_Polygon_Volume_finalize_optional_members(
    UMAA_Common_Measurement_Polygon_Volume* sample, RTIBool deletePointers)
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

RTIBool UMAA_Common_Measurement_Polygon_Volume_copy(
    UMAA_Common_Measurement_Polygon_Volume* dst,
    const UMAA_Common_Measurement_Polygon_Volume* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_Common_Measurement_Altitude_MSL_copy(
            &dst->ceiling,
            (const UMAA_Common_Measurement_Altitude_MSL*)&src->ceiling)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_Altitude_MSL_copy(
            &dst->floor,
            (const UMAA_Common_Measurement_Altitude_MSL*)&src->floor)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType_copy(
            &dst->lineKind,
            (const UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType*)&src->lineKind)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_Position2DSeq_copy(
            &dst->referencePoints ,
            &src->referencePoints )) {
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
* Configure and implement 'UMAA_Common_Measurement_Polygon_Volume' sequence class.
*/
#define T UMAA_Common_Measurement_Polygon_Volume
#define TSeq UMAA_Common_Measurement_Polygon_VolumeSeq

#define T_initialize_w_params UMAA_Common_Measurement_Polygon_Volume_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_Polygon_Volume_finalize_w_params
#define T_copy       UMAA_Common_Measurement_Polygon_Volume_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_Common_Measurement_Polygon_Volume>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_Common_Measurement_Polygon_Volume_get_typecode();
        }

    } 
}
#endif
