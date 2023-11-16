

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageReportType.idl 
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

#include "FeatureImageReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "FeatureImageReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_FeatureImageStatus_FeatureImageReportTypeTYPENAME = "UMAA::SA::FeatureImageStatus::FeatureImageReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_featureID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);
    static DDS_TypeCode UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_imageID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[5]=
    {

        {
            (char *)"boundingBox",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
            (char *)"featureID",/* Member name */
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
            (char *)"imageID",/* Member name */
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

    static DDS_TypeCode UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::FeatureImageStatus::FeatureImageReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_FeatureImageStatus_FeatureImageReportType*/

    if (is_initialized) {
        return &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_featureID_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_featureID_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_imageID_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_imageID_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_SA_BoundingBox_BoundingBoxType_get_typecode();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_featureID_sequence;
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc_imageID_sequence;

    /* Initialize the values for member annotations. */

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_sample_access_info();
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc._data._typePlugin =
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_type_plugin_info();    

    return &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_tc;
}

#define TSeq UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq
#define T UMAA_SA_FeatureImageStatus_FeatureImageReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_FeatureImageStatus_FeatureImageReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->boundingBox - (char *)sample);

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->featureID - (char *)sample);

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->imageID - (char *)sample);

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_FeatureImageStatus_FeatureImageReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_member_value_pointer;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_typePlugin = 
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
        UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_FeatureImageStatus_FeatureImageReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* sample)
{
    return UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType *sample,
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

    if (!allocParams->allocate_optional_members) {
        sample->boundingBox=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->boundingBox = new (std::nothrow)   UMAA_SA_BoundingBox_BoundingBoxType ();
            if (sample->boundingBox==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_SA_BoundingBox_BoundingBoxType_initialize_w_params(
                sample->boundingBox,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->boundingBox!=NULL) {
                if (!UMAA_SA_BoundingBox_BoundingBoxType_initialize_w_params(
                    sample->boundingBox,
                    allocParams)) {
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
    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->featureID )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->featureID ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->featureID , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->featureID
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->featureID, 0)){
            return RTI_FALSE;
        }    
    }
    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->imageID )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->imageID ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->imageID , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->imageID
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->imageID, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}
RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_return(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* sample)
{
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* sample)
{  
    UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_ex(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_params(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->boundingBox != NULL) {
            UMAA_SA_BoundingBox_BoundingBoxType_finalize_w_params(
                sample->boundingBox,
                deallocParams);

            delete  sample->boundingBox;
            sample->boundingBox=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->featureID,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->featureID),
            DDS_Boolean);

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->imageID,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->imageID),
            DDS_Boolean);

}

void UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_optional_members(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* sample, RTIBool deletePointers)
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

    if (sample->boundingBox != NULL) {
        UMAA_SA_BoundingBox_BoundingBoxType_finalize_w_params(
            sample->boundingBox,
            deallocParams);

        delete  sample->boundingBox;
        sample->boundingBox=NULL;
    }
}

RTIBool UMAA_SA_FeatureImageStatus_FeatureImageReportType_copy(
    UMAA_SA_FeatureImageStatus_FeatureImageReportType* dst,
    const UMAA_SA_FeatureImageStatus_FeatureImageReportType* src)
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

        if (src->boundingBox!=NULL) {
            if (dst->boundingBox==NULL) {

                dst->boundingBox = new (std::nothrow)   UMAA_SA_BoundingBox_BoundingBoxType ();
                if (dst->boundingBox==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_SA_BoundingBox_BoundingBoxType_initialize_ex(
                    dst->boundingBox, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_SA_BoundingBox_BoundingBoxType_copy(
                dst->boundingBox,
                (const UMAA_SA_BoundingBox_BoundingBoxType*)src->boundingBox)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->boundingBox != NULL) {
                UMAA_SA_BoundingBox_BoundingBoxType_finalize_w_params(dst->boundingBox, deallocParams);
                delete  dst->boundingBox;
                dst->boundingBox=NULL;
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
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->featureID ,
            &src->featureID )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->imageID ,
            &src->imageID )) {
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
* Configure and implement 'UMAA_SA_FeatureImageStatus_FeatureImageReportType' sequence class.
*/
#define T UMAA_SA_FeatureImageStatus_FeatureImageReportType
#define TSeq UMAA_SA_FeatureImageStatus_FeatureImageReportTypeSeq

#define T_initialize_w_params UMAA_SA_FeatureImageStatus_FeatureImageReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_FeatureImageStatus_FeatureImageReportType_finalize_w_params
#define T_copy       UMAA_SA_FeatureImageStatus_FeatureImageReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_FeatureImageStatus_FeatureImageReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_FeatureImageStatus_FeatureImageReportType_get_typecode();
        }

    } 
}
#endif
