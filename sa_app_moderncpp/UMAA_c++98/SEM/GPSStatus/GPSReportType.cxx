

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSReportType.idl 
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

#include "GPSReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GPSReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_GPSStatus_GPSReportTypeTYPENAME = "UMAA::SEM::GPSStatus::GPSReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_GPSStatus_GPSReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_SEM_GPSStatus_GPSReportType_g_tc_satellites_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[5]=
    {

        {
            (char *)"clock",/* Member name */
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
            (char *)"numberSatellitesInView",/* Member name */
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
            (char *)"satellites",/* Member name */
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
            (char *)"source",/* Member name */
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
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_SEM_GPSStatus_GPSReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::GPSStatus::GPSReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_SEM_GPSStatus_GPSReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_GPSStatus_GPSReportType*/

    if (is_initialized) {
        return &UMAA_SEM_GPSStatus_GPSReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_GPSStatus_GPSReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_GPSStatus_GPSReportType_g_tc_satellites_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_SEM_GPSStatus_GPSSatelliteType_get_typecode();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_satellites_sequence._data._sampleAccessInfo = UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_seq_access_info();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_SEM_GPSStatus_GPSClockType_get_typecode();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& UMAA_SEM_GPSStatus_GPSReportType_g_tc_satellites_sequence;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;

    UMAA_SEM_GPSStatus_GPSReportType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_GPSStatus_GPSReportType_get_sample_access_info();
    UMAA_SEM_GPSStatus_GPSReportType_g_tc._data._typePlugin =
    UMAA_SEM_GPSStatus_GPSReportType_get_type_plugin_info();    

    return &UMAA_SEM_GPSStatus_GPSReportType_g_tc;
}

#define TSeq UMAA_SEM_GPSStatus_GPSReportTypeSeq
#define T UMAA_SEM_GPSStatus_GPSReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_GPSStatus_GPSReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_GPSStatus_GPSReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_GPSStatus_GPSReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_GPSStatus_GPSReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_GPSStatus_GPSReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->clock - (char *)sample);

    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->numberSatellitesInView - (char *)sample);

    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->satellites - (char *)sample);

    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_GPSStatus_GPSReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_GPSStatus_GPSReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_GPSStatus_GPSReportType_get_member_value_pointer;

    UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_GPSStatus_GPSReportType_g_typePlugin = 
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
        UMAA_SEM_GPSStatus_GPSReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_GPSStatus_GPSReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_GPSStatus_GPSReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize(
    UMAA_SEM_GPSStatus_GPSReportType* sample)
{
    return UMAA_SEM_GPSStatus_GPSReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSReportType *sample,
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

    if (!UMAA_SEM_GPSStatus_GPSClockType_initialize_w_params(
        &sample->clock,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->numberSatellitesInView = 0;

    if (allocParams->allocate_memory) {
        if(!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_initialize(&sample->satellites )){
            return RTI_FALSE;
        }
        if(!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_element_allocation_params(&sample->satellites ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_absolute_maximum(&sample->satellites , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_maximum(
            &sample->satellites
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_length(&sample->satellites, 0)){
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
    return RTI_TRUE;
}
RTIBool UMAA_SEM_GPSStatus_GPSReportType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_GPSStatus_GPSReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_GPSStatus_GPSReportType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSReportType* sample)
{
    UMAA_SEM_GPSStatus_GPSReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_GPSStatus_GPSReportType_finalize(
    UMAA_SEM_GPSStatus_GPSReportType* sample)
{  
    UMAA_SEM_GPSStatus_GPSReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_GPSStatus_GPSReportType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_GPSStatus_GPSReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_GPSStatus_GPSReportType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_SEM_GPSStatus_GPSClockType_finalize_w_params(
        &sample->clock,
        deallocParams);

    RTIOsapiUtility_unusedReturnValue(UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_element_deallocation_params(
        &sample->satellites,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_finalize(
            &sample->satellites),
            DDS_Boolean);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SEM_GPSStatus_GPSReportType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSReportType* sample, RTIBool deletePointers)
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

    UMAA_SEM_GPSStatus_GPSClockType_finalize_optional_members(&sample->clock, deallocParams->delete_pointers);
    {
        DDS_Long i, length;
        length = UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_get_length(
            &sample->satellites);

        for (i = 0; i < length; i++) {
            UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_optional_members(
                UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_get_reference(
                    &sample->satellites, i), deallocParams->delete_pointers);
        }
    }  
}

RTIBool UMAA_SEM_GPSStatus_GPSReportType_copy(
    UMAA_SEM_GPSStatus_GPSReportType* dst,
    const UMAA_SEM_GPSStatus_GPSReportType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_SEM_GPSStatus_GPSClockType_copy(
            &dst->clock,
            (const UMAA_SEM_GPSStatus_GPSClockType*)&src->clock)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyLong (
            &dst->numberSatellitesInView, 
            &src->numberSatellitesInView)) { 
            return RTI_FALSE;
        }
        if (!UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_copy(
            &dst->satellites ,
            &src->satellites )) {
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
* Configure and implement 'UMAA_SEM_GPSStatus_GPSReportType' sequence class.
*/
#define T UMAA_SEM_GPSStatus_GPSReportType
#define TSeq UMAA_SEM_GPSStatus_GPSReportTypeSeq

#define T_initialize_w_params UMAA_SEM_GPSStatus_GPSReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_GPSStatus_GPSReportType_finalize_w_params
#define T_copy       UMAA_SEM_GPSStatus_GPSReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_GPSStatus_GPSReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_GPSStatus_GPSReportType_get_typecode();
        }

    } 
}
#endif
