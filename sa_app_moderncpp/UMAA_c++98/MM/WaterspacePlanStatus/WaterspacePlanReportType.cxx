

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanReportType.idl 
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

#include "WaterspacePlanReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "WaterspacePlanReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeTYPENAME = "UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_zones_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[5]=
    {

        {
            (char *)"waterspacePlanName",/* Member name */
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
            (char *)"zones",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }, 
        {
            (char *)"waterspacePlanID",/* Member name */
            {
                4,/* Representation ID */
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

    static DDS_TypeCode UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType*/

    if (is_initialized) {
        return &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_zones_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_PlanningZoneType_get_typecode();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_zones_sequence._data._sampleAccessInfo = UMAA_MM_BaseType_PlanningZoneType_get_sample_seq_access_info();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_zones_sequence;
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc._data._sampleAccessInfo =
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_sample_access_info();
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc._data._typePlugin =
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_type_plugin_info();    

    return &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_tc;
}

#define TSeq UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq
#define T UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waterspacePlanName - (char *)sample);

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zones - (char *)sample);

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waterspacePlanID - (char *)sample);

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_member_value_pointer;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_typePlugin = 
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
        UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* sample)
{
    return UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_w_params(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType *sample,
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

    if (allocParams->allocate_memory) {
        sample->waterspacePlanName = DDS_String_alloc((1023L));
        if (sample->waterspacePlanName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->waterspacePlanName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->waterspacePlanName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->waterspacePlanName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->waterspacePlanName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->waterspacePlanName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!UMAA_MM_BaseType_PlanningZoneTypeSeq_initialize(&sample->zones )){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_PlanningZoneTypeSeq_set_element_allocation_params(&sample->zones ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_PlanningZoneTypeSeq_set_absolute_maximum(&sample->zones , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_PlanningZoneTypeSeq_set_maximum(
            &sample->zones
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_MM_BaseType_PlanningZoneTypeSeq_set_length(&sample->zones, 0)){
            return RTI_FALSE;
        }    
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->source,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeStamp,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->waterspacePlanID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_ex(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_return(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* sample)
{
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* sample)
{  
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_ex(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_params(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->waterspacePlanName != NULL) {
        DDS_String_free(sample->waterspacePlanName);
        sample->waterspacePlanName=NULL;

    }
    RTIOsapiUtility_unusedReturnValue(UMAA_MM_BaseType_PlanningZoneTypeSeq_set_element_deallocation_params(
        &sample->zones,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_MM_BaseType_PlanningZoneTypeSeq_finalize(
            &sample->zones),
            DDS_Boolean);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->waterspacePlanID,
        deallocParams);

}

void UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_optional_members(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* sample, RTIBool deletePointers)
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
        length = UMAA_MM_BaseType_PlanningZoneTypeSeq_get_length(
            &sample->zones);

        for (i = 0; i < length; i++) {
            UMAA_MM_BaseType_PlanningZoneType_finalize_optional_members(
                UMAA_MM_BaseType_PlanningZoneTypeSeq_get_reference(
                    &sample->zones, i), deallocParams->delete_pointers);
        }
    }  
}

RTIBool UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_copy(
    UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* dst,
    const UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->waterspacePlanName
            ,
            src->waterspacePlanName, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_PlanningZoneTypeSeq_copy(
            &dst->zones ,
            &src->zones )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeStamp,
            (const UMAA_Common_Measurement_DateTime*)&src->timeStamp)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->waterspacePlanID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->waterspacePlanID)) {
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
* Configure and implement 'UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType' sequence class.
*/
#define T UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType
#define TSeq UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportTypeSeq

#define T_initialize_w_params UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_finalize_w_params
#define T_copy       UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_WaterspacePlanStatus_WaterspacePlanReportType_get_typecode();
        }

    } 
}
#endif
