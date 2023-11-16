

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl 
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

#include "TaskPlanType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "TaskPlanTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_TaskPlanTypeTYPENAME = "UMAA::MM::BaseType::TaskPlanType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_TaskPlanType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_MM_BaseType_TaskPlanType_g_tc_dependentTaskIDs_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);
    static DDS_TypeCode UMAA_MM_BaseType_TaskPlanType_g_tc_objectives_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_MM_BaseType_TaskPlanType_g_tc_members[8]=
    {

        {
            (char *)"dependentTaskIDs",/* Member name */
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
            (char *)"endTime",/* Member name */
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
            (char *)"endTimeTolerance",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"objectives",/* Member name */
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
        }, 
        {
            (char *)"startTime",/* Member name */
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
        }, 
        {
            (char *)"startTimeTolerance",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"taskID",/* Member name */
            {
                7,/* Representation ID */
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

    static DDS_TypeCode UMAA_MM_BaseType_TaskPlanType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::TaskPlanType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            UMAA_MM_BaseType_TaskPlanType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_TaskPlanType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_TaskPlanType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_TaskPlanType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_TaskPlanType_g_tc_dependentTaskIDs_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_dependentTaskIDs_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_MM_BaseType_TaskPlanType_g_tc_objectives_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ObjectiveType_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_objectives_sequence._data._sampleAccessInfo = UMAA_MM_BaseType_ObjectiveType_get_sample_seq_access_info();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_TaskPlanType_g_tc_dependentTaskIDs_sequence;
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_Tolerance_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_TaskPlanType_g_tc_objectives_sequence;
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_Tolerance_get_typecode();
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_BaseType_TaskPlanType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_MM_BaseType_TaskPlanType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_TaskPlanType_get_sample_access_info();
    UMAA_MM_BaseType_TaskPlanType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_TaskPlanType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_TaskPlanType_g_tc;
}

#define TSeq UMAA_MM_BaseType_TaskPlanTypeSeq
#define T UMAA_MM_BaseType_TaskPlanType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_TaskPlanType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_TaskPlanType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_TaskPlanTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_TaskPlanTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_TaskPlanType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_TaskPlanType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_TaskPlanType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[8] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_TaskPlanType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->dependentTaskIDs - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTime - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTimeTolerance - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->name - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->objectives - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTime - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTimeTolerance - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->taskID - (char *)sample);

    UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_TaskPlanType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_TaskPlanType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_TaskPlanType_get_member_value_pointer;

    UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_TaskPlanType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_TaskPlanType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_TaskPlanType_g_typePlugin = 
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
        UMAA_MM_BaseType_TaskPlanType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_TaskPlanType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_TaskPlanType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_TaskPlanType_initialize(
    UMAA_MM_BaseType_TaskPlanType* sample)
{
    return UMAA_MM_BaseType_TaskPlanType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_TaskPlanType_initialize_w_params(
    UMAA_MM_BaseType_TaskPlanType *sample,
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
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->dependentTaskIDs )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->dependentTaskIDs ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->dependentTaskIDs , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->dependentTaskIDs
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->dependentTaskIDs, 0)){
            return RTI_FALSE;
        }    
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->endTime,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->endTimeTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->endTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
            if (sample->endTimeTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                sample->endTimeTolerance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->endTimeTolerance!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                    sample->endTimeTolerance,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }

    if (allocParams->allocate_memory) {
        sample->name = DDS_String_alloc((1023L));
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->name == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!UMAA_MM_BaseType_ObjectiveTypeSeq_initialize(&sample->objectives )){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_ObjectiveTypeSeq_set_element_allocation_params(&sample->objectives ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_MM_BaseType_ObjectiveTypeSeq_set_absolute_maximum(&sample->objectives , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_ObjectiveTypeSeq_set_maximum(
            &sample->objectives
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_MM_BaseType_ObjectiveTypeSeq_set_length(&sample->objectives, 0)){
            return RTI_FALSE;
        }    
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->startTime,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->startTimeTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->startTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
            if (sample->startTimeTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                sample->startTimeTolerance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->startTimeTolerance!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                    sample->startTimeTolerance,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->taskID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_TaskPlanType_initialize_ex(
    UMAA_MM_BaseType_TaskPlanType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_TaskPlanType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_TaskPlanType_finalize_w_return(
    UMAA_MM_BaseType_TaskPlanType* sample)
{
    UMAA_MM_BaseType_TaskPlanType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_TaskPlanType_finalize(
    UMAA_MM_BaseType_TaskPlanType* sample)
{  
    UMAA_MM_BaseType_TaskPlanType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_TaskPlanType_finalize_ex(
    UMAA_MM_BaseType_TaskPlanType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_TaskPlanType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_TaskPlanType_finalize_w_params(
    UMAA_MM_BaseType_TaskPlanType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->dependentTaskIDs,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->dependentTaskIDs),
            DDS_Boolean);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->endTime,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->endTimeTolerance != NULL) {
            UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
                sample->endTimeTolerance,
                deallocParams);

            delete  sample->endTimeTolerance;
            sample->endTimeTolerance=NULL;
        }
    }
    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }
    RTIOsapiUtility_unusedReturnValue(UMAA_MM_BaseType_ObjectiveTypeSeq_set_element_deallocation_params(
        &sample->objectives,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_MM_BaseType_ObjectiveTypeSeq_finalize(
            &sample->objectives),
            DDS_Boolean);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->startTime,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->startTimeTolerance != NULL) {
            UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
                sample->startTimeTolerance,
                deallocParams);

            delete  sample->startTimeTolerance;
            sample->startTimeTolerance=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->taskID,
        deallocParams);

}

void UMAA_MM_BaseType_TaskPlanType_finalize_optional_members(
    UMAA_MM_BaseType_TaskPlanType* sample, RTIBool deletePointers)
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

    if (sample->endTimeTolerance != NULL) {
        UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
            sample->endTimeTolerance,
            deallocParams);

        delete  sample->endTimeTolerance;
        sample->endTimeTolerance=NULL;
    }
    {
        DDS_Long i, length;
        length = UMAA_MM_BaseType_ObjectiveTypeSeq_get_length(
            &sample->objectives);

        for (i = 0; i < length; i++) {
            UMAA_MM_BaseType_ObjectiveType_finalize_optional_members(
                UMAA_MM_BaseType_ObjectiveTypeSeq_get_reference(
                    &sample->objectives, i), deallocParams->delete_pointers);
        }
    }  
    if (sample->startTimeTolerance != NULL) {
        UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
            sample->startTimeTolerance,
            deallocParams);

        delete  sample->startTimeTolerance;
        sample->startTimeTolerance=NULL;
    }
}

RTIBool UMAA_MM_BaseType_TaskPlanType_copy(
    UMAA_MM_BaseType_TaskPlanType* dst,
    const UMAA_MM_BaseType_TaskPlanType* src)
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

        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->dependentTaskIDs ,
            &src->dependentTaskIDs )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->endTime,
            (const UMAA_Common_Measurement_DateTime*)&src->endTime)) {
            return RTI_FALSE;
        } 
        if (src->endTimeTolerance!=NULL) {
            if (dst->endTimeTolerance==NULL) {

                dst->endTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
                if (dst->endTimeTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_ex(
                    dst->endTimeTolerance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_copy(
                dst->endTimeTolerance,
                (const UMAA_Common_Measurement_DateTime_Tolerance*)src->endTimeTolerance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->endTimeTolerance != NULL) {
                UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(dst->endTimeTolerance, deallocParams);
                delete  dst->endTimeTolerance;
                dst->endTimeTolerance=NULL;
            }
        }
        if (!RTICdrType_copyStringEx (
            &dst->name
            ,
            src->name, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_MM_BaseType_ObjectiveTypeSeq_copy(
            &dst->objectives ,
            &src->objectives )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->startTime,
            (const UMAA_Common_Measurement_DateTime*)&src->startTime)) {
            return RTI_FALSE;
        } 
        if (src->startTimeTolerance!=NULL) {
            if (dst->startTimeTolerance==NULL) {

                dst->startTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
                if (dst->startTimeTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_ex(
                    dst->startTimeTolerance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_copy(
                dst->startTimeTolerance,
                (const UMAA_Common_Measurement_DateTime_Tolerance*)src->startTimeTolerance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->startTimeTolerance != NULL) {
                UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(dst->startTimeTolerance, deallocParams);
                delete  dst->startTimeTolerance;
                dst->startTimeTolerance=NULL;
            }
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->taskID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->taskID)) {
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
* Configure and implement 'UMAA_MM_BaseType_TaskPlanType' sequence class.
*/
#define T UMAA_MM_BaseType_TaskPlanType
#define TSeq UMAA_MM_BaseType_TaskPlanTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_TaskPlanType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_TaskPlanType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_TaskPlanType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_TaskPlanType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_TaskPlanType_get_typecode();
        }

    } 
}
#endif
