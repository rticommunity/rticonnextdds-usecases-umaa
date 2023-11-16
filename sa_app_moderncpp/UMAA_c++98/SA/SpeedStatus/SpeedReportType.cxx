

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedReportType.idl 
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

#include "SpeedReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "SpeedReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_SpeedStatus_SpeedReportTypeTYPENAME = "UMAA::SA::SpeedStatus::SpeedReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_SpeedStatus_SpeedReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[6]=
    {

        {
            (char *)"engineRPM",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"speedOverGround",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"speedThroughAir",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"speedThroughWater",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"source",/* Member name */
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
        }, 
        {
            (char *)"timeStamp",/* Member name */
            {
                5,/* Representation ID */
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

    static DDS_TypeCode UMAA_SA_SpeedStatus_SpeedReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::SpeedStatus::SpeedReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_SpeedStatus_SpeedReportType*/

    if (is_initialized) {
        return &UMAA_SA_SpeedStatus_SpeedReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_SpeedStatus_SpeedReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_EngineSpeed_get_typecode();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_IndicatedAirspeed_get_typecode();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_LocalWaterMass_get_typecode();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 299792458ULL;

    UMAA_SA_SpeedStatus_SpeedReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_SpeedStatus_SpeedReportType_get_sample_access_info();
    UMAA_SA_SpeedStatus_SpeedReportType_g_tc._data._typePlugin =
    UMAA_SA_SpeedStatus_SpeedReportType_get_type_plugin_info();    

    return &UMAA_SA_SpeedStatus_SpeedReportType_g_tc;
}

#define TSeq UMAA_SA_SpeedStatus_SpeedReportTypeSeq
#define T UMAA_SA_SpeedStatus_SpeedReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_SpeedStatus_SpeedReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_SpeedStatus_SpeedReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_SpeedStatus_SpeedReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_SpeedStatus_SpeedReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_SpeedStatus_SpeedReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_SpeedStatus_SpeedReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_SpeedStatus_SpeedReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_SpeedStatus_SpeedReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->engineRPM - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speedOverGround - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speedThroughAir - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speedThroughWater - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_SpeedStatus_SpeedReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_SpeedStatus_SpeedReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_SpeedStatus_SpeedReportType_get_member_value_pointer;

    UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_SpeedStatus_SpeedReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_SpeedStatus_SpeedReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_SpeedStatus_SpeedReportType_g_typePlugin = 
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
        UMAA_SA_SpeedStatus_SpeedReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_SpeedStatus_SpeedReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_SpeedStatus_SpeedReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_SpeedStatus_SpeedReportType_initialize(
    UMAA_SA_SpeedStatus_SpeedReportType* sample)
{
    return UMAA_SA_SpeedStatus_SpeedReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_SpeedStatus_SpeedReportType_initialize_w_params(
    UMAA_SA_SpeedStatus_SpeedReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->engineRPM=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->engineRPM = new (std::nothrow)   DDS_Double ();
            if (sample->engineRPM==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->engineRPM)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->engineRPM != NULL) {
                if (!RTICdrType_initDouble(sample->engineRPM)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->speedOverGround=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->speedOverGround = new (std::nothrow)   DDS_Double ();
            if (sample->speedOverGround==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->speedOverGround)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->speedOverGround != NULL) {
                if (!RTICdrType_initDouble(sample->speedOverGround)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->speedThroughAir=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->speedThroughAir = new (std::nothrow)   DDS_Double ();
            if (sample->speedThroughAir==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->speedThroughAir)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->speedThroughAir != NULL) {
                if (!RTICdrType_initDouble(sample->speedThroughAir)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->speedThroughWater=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->speedThroughWater = new (std::nothrow)   DDS_Double ();
            if (sample->speedThroughWater==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->speedThroughWater)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->speedThroughWater != NULL) {
                if (!RTICdrType_initDouble(sample->speedThroughWater)) {
                    return RTI_FALSE;
                }
            }

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
RTIBool UMAA_SA_SpeedStatus_SpeedReportType_initialize_ex(
    UMAA_SA_SpeedStatus_SpeedReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_SpeedStatus_SpeedReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_SpeedStatus_SpeedReportType_finalize_w_return(
    UMAA_SA_SpeedStatus_SpeedReportType* sample)
{
    UMAA_SA_SpeedStatus_SpeedReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_SpeedStatus_SpeedReportType_finalize(
    UMAA_SA_SpeedStatus_SpeedReportType* sample)
{  
    UMAA_SA_SpeedStatus_SpeedReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_SpeedStatus_SpeedReportType_finalize_ex(
    UMAA_SA_SpeedStatus_SpeedReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_SpeedStatus_SpeedReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_SpeedStatus_SpeedReportType_finalize_w_params(
    UMAA_SA_SpeedStatus_SpeedReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->engineRPM != NULL) {

            delete  sample->engineRPM;
            sample->engineRPM=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->speedOverGround != NULL) {

            delete  sample->speedOverGround;
            sample->speedOverGround=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->speedThroughAir != NULL) {

            delete  sample->speedThroughAir;
            sample->speedThroughAir=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->speedThroughWater != NULL) {

            delete  sample->speedThroughWater;
            sample->speedThroughWater=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_SpeedStatus_SpeedReportType_finalize_optional_members(
    UMAA_SA_SpeedStatus_SpeedReportType* sample, RTIBool deletePointers)
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

    if (sample->engineRPM != NULL) {

        delete  sample->engineRPM;
        sample->engineRPM=NULL;
    }
    if (sample->speedOverGround != NULL) {

        delete  sample->speedOverGround;
        sample->speedOverGround=NULL;
    }
    if (sample->speedThroughAir != NULL) {

        delete  sample->speedThroughAir;
        sample->speedThroughAir=NULL;
    }
    if (sample->speedThroughWater != NULL) {

        delete  sample->speedThroughWater;
        sample->speedThroughWater=NULL;
    }
}

RTIBool UMAA_SA_SpeedStatus_SpeedReportType_copy(
    UMAA_SA_SpeedStatus_SpeedReportType* dst,
    const UMAA_SA_SpeedStatus_SpeedReportType* src)
{
    try {

        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = DDS_BOOLEAN_TRUE;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (src->engineRPM!=NULL) {
            if (dst->engineRPM==NULL) {

                dst->engineRPM = new (std::nothrow)   DDS_Double ();
                if (dst->engineRPM==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->engineRPM)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->engineRPM, 
                src->engineRPM)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->engineRPM != NULL) {
                delete  dst->engineRPM;
                dst->engineRPM=NULL;
            }
        }
        if (src->speedOverGround!=NULL) {
            if (dst->speedOverGround==NULL) {

                dst->speedOverGround = new (std::nothrow)   DDS_Double ();
                if (dst->speedOverGround==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->speedOverGround)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->speedOverGround, 
                src->speedOverGround)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->speedOverGround != NULL) {
                delete  dst->speedOverGround;
                dst->speedOverGround=NULL;
            }
        }
        if (src->speedThroughAir!=NULL) {
            if (dst->speedThroughAir==NULL) {

                dst->speedThroughAir = new (std::nothrow)   DDS_Double ();
                if (dst->speedThroughAir==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->speedThroughAir)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->speedThroughAir, 
                src->speedThroughAir)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->speedThroughAir != NULL) {
                delete  dst->speedThroughAir;
                dst->speedThroughAir=NULL;
            }
        }
        if (src->speedThroughWater!=NULL) {
            if (dst->speedThroughWater==NULL) {

                dst->speedThroughWater = new (std::nothrow)   DDS_Double ();
                if (dst->speedThroughWater==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->speedThroughWater)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->speedThroughWater, 
                src->speedThroughWater)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->speedThroughWater != NULL) {
                delete  dst->speedThroughWater;
                dst->speedThroughWater=NULL;
            }
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
* Configure and implement 'UMAA_SA_SpeedStatus_SpeedReportType' sequence class.
*/
#define T UMAA_SA_SpeedStatus_SpeedReportType
#define TSeq UMAA_SA_SpeedStatus_SpeedReportTypeSeq

#define T_initialize_w_params UMAA_SA_SpeedStatus_SpeedReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_SpeedStatus_SpeedReportType_finalize_w_params
#define T_copy       UMAA_SA_SpeedStatus_SpeedReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_SpeedStatus_SpeedReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_SpeedStatus_SpeedReportType_get_typecode();
        }

    } 
}
#endif
