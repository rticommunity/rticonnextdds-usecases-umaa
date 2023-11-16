

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftExecutionStatusReportType.idl 
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

#include "LocalDriftExecutionStatusReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "LocalDriftExecutionStatusReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeTYPENAME = "UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[6]=
    {

        {
            (char *)"distanceFromReference",/* Member name */
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
            (char *)"localDriftState",/* Member name */
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
            (char *)"timeDriftAchieved",/* Member name */
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
            (char *)"timeDriftCompleted",/* Member name */
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
            (char *)"sessionID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType*/

    if (is_initialized) {
        return &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_MO_LocalDriftState_LocalDriftStateType_get_typecode();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc._data._sampleAccessInfo =
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_sample_access_info();
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc._data._typePlugin =
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_type_plugin_info();    

    return &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_tc;
}

#define TSeq UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq
#define T UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->distanceFromReference - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->localDriftState - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeDriftAchieved - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeDriftCompleted - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sessionID - (char *)sample);

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_member_value_pointer;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_typePlugin = 
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
        UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_g_typePlugin;
}
#endif

RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* sample)
{
    return UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->distanceFromReference = 0.0;

    if (!UMAA_MO_LocalDriftState_LocalDriftStateType_initialize_w_params(
        &sample->localDriftState,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeDriftAchieved,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->timeDriftCompleted=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->timeDriftCompleted = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->timeDriftCompleted==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->timeDriftCompleted,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->timeDriftCompleted!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->timeDriftCompleted,
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
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->sessionID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* sample)
{
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* sample)
{  
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_w_params(
        &sample->localDriftState,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeDriftAchieved,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->timeDriftCompleted != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->timeDriftCompleted,
                deallocParams);

            delete  sample->timeDriftCompleted;
            sample->timeDriftCompleted=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->sessionID,
        deallocParams);

}

void UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* sample, RTIBool deletePointers)
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

    UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_optional_members(&sample->localDriftState, deallocParams->delete_pointers);
    if (sample->timeDriftCompleted != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->timeDriftCompleted,
            deallocParams);

        delete  sample->timeDriftCompleted;
        sample->timeDriftCompleted=NULL;
    }
}

RTIBool UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_copy(
    UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* dst,
    const UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType* src)
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

        if (!RTICdrType_copyDouble (
            &dst->distanceFromReference, 
            &src->distanceFromReference)) { 
            return RTI_FALSE;
        }
        if (!UMAA_MO_LocalDriftState_LocalDriftStateType_copy(
            &dst->localDriftState,
            (const UMAA_MO_LocalDriftState_LocalDriftStateType*)&src->localDriftState)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeDriftAchieved,
            (const UMAA_Common_Measurement_DateTime*)&src->timeDriftAchieved)) {
            return RTI_FALSE;
        } 
        if (src->timeDriftCompleted!=NULL) {
            if (dst->timeDriftCompleted==NULL) {

                dst->timeDriftCompleted = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->timeDriftCompleted==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->timeDriftCompleted, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->timeDriftCompleted,
                (const UMAA_Common_Measurement_DateTime*)src->timeDriftCompleted)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->timeDriftCompleted != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->timeDriftCompleted, deallocParams);
                delete  dst->timeDriftCompleted;
                dst->timeDriftCompleted=NULL;
            }
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->sessionID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->sessionID)) {
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
* Configure and implement 'UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType' sequence class.
*/
#define T UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType
#define TSeq UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportTypeSeq

#define T_initialize_w_params UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_initialize_w_params

#define T_finalize_w_params   UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_finalize_w_params
#define T_copy       UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MO_LocalDriftControl_LocalDriftExecutionStatusReportType_get_typecode();
        }

    } 
}
#endif
