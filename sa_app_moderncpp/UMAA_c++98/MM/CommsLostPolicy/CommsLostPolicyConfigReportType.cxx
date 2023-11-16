

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyConfigReportType.idl 
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

#include "CommsLostPolicyConfigReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CommsLostPolicyConfigReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportTypeTYPENAME = "UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[9]=
    {

        {
            (char *)"commsLostTimeOut",/* Member name */
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
            (char *)"commsRegainedStop",/* Member name */
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
            (char *)"commsRegainedTimeOut",/* Member name */
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
            (char *)"continueMission",/* Member name */
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
            (char *)"moveToPos",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"retrotraverse",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"stopMotion",/* Member name */
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
            (char *)"source",/* Member name */
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
        }, 
        {
            (char *)"timeStamp",/* Member name */
            {
                8,/* Representation ID */
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

    static DDS_TypeCode UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType*/

    if (is_initialized) {
        return &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_get_typecode();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_get_typecode();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 37817280ULL;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc._data._sampleAccessInfo =
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_sample_access_info();
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc._data._typePlugin =
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_type_plugin_info();    

    return &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_tc;
}

#define TSeq UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportTypeSeq
#define T UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[9] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->commsLostTimeOut - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedStop - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->commsRegainedTimeOut - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->continueMission - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->moveToPos - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->retrotraverse - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->stopMotion - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_member_value_pointer;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_typePlugin = 
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
        UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* sample)
{
    return UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->commsLostTimeOut = 0.0;

    sample->commsRegainedStop = 0;

    sample->commsRegainedTimeOut = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->continueMission=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->continueMission = new (std::nothrow)   DDS_Boolean ();
            if (sample->continueMission==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->continueMission)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->continueMission != NULL) {
                if (!RTICdrType_initBoolean(sample->continueMission)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->moveToPos=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->moveToPos = new (std::nothrow)   UMAA_MM_CommsLostPolicy_MoveToPosPolicyType ();
            if (sample->moveToPos==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize_w_params(
                sample->moveToPos,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->moveToPos!=NULL) {
                if (!UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize_w_params(
                    sample->moveToPos,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->retrotraverse=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->retrotraverse = new (std::nothrow)   UMAA_MM_CommsLostPolicy_RetrotraversePolicyType ();
            if (sample->retrotraverse==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize_w_params(
                sample->retrotraverse,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->retrotraverse!=NULL) {
                if (!UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize_w_params(
                    sample->retrotraverse,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->stopMotion=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->stopMotion = new (std::nothrow)   DDS_Boolean ();
            if (sample->stopMotion==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->stopMotion)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->stopMotion != NULL) {
                if (!RTICdrType_initBoolean(sample->stopMotion)) {
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
RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_w_return(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* sample)
{
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* sample)
{  
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_ex(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_w_params(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->continueMission != NULL) {

            delete  sample->continueMission;
            sample->continueMission=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->moveToPos != NULL) {
            UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_w_params(
                sample->moveToPos,
                deallocParams);

            delete  sample->moveToPos;
            sample->moveToPos=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->retrotraverse != NULL) {
            UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_w_params(
                sample->retrotraverse,
                deallocParams);

            delete  sample->retrotraverse;
            sample->retrotraverse=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->stopMotion != NULL) {

            delete  sample->stopMotion;
            sample->stopMotion=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_optional_members(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* sample, RTIBool deletePointers)
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

    if (sample->continueMission != NULL) {

        delete  sample->continueMission;
        sample->continueMission=NULL;
    }
    if (sample->moveToPos != NULL) {
        UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_w_params(
            sample->moveToPos,
            deallocParams);

        delete  sample->moveToPos;
        sample->moveToPos=NULL;
    }
    if (sample->retrotraverse != NULL) {
        UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_w_params(
            sample->retrotraverse,
            deallocParams);

        delete  sample->retrotraverse;
        sample->retrotraverse=NULL;
    }
    if (sample->stopMotion != NULL) {

        delete  sample->stopMotion;
        sample->stopMotion=NULL;
    }
}

RTIBool UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_copy(
    UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* dst,
    const UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType* src)
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
            &dst->commsLostTimeOut, 
            &src->commsLostTimeOut)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyBoolean (
            &dst->commsRegainedStop, 
            &src->commsRegainedStop)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->commsRegainedTimeOut, 
            &src->commsRegainedTimeOut)) { 
            return RTI_FALSE;
        }
        if (src->continueMission!=NULL) {
            if (dst->continueMission==NULL) {

                dst->continueMission = new (std::nothrow)   DDS_Boolean ();
                if (dst->continueMission==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->continueMission)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->continueMission, 
                src->continueMission)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->continueMission != NULL) {
                delete  dst->continueMission;
                dst->continueMission=NULL;
            }
        }
        if (src->moveToPos!=NULL) {
            if (dst->moveToPos==NULL) {

                dst->moveToPos = new (std::nothrow)   UMAA_MM_CommsLostPolicy_MoveToPosPolicyType ();
                if (dst->moveToPos==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_initialize_ex(
                    dst->moveToPos, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_copy(
                dst->moveToPos,
                (const UMAA_MM_CommsLostPolicy_MoveToPosPolicyType*)src->moveToPos)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->moveToPos != NULL) {
                UMAA_MM_CommsLostPolicy_MoveToPosPolicyType_finalize_w_params(dst->moveToPos, deallocParams);
                delete  dst->moveToPos;
                dst->moveToPos=NULL;
            }
        }
        if (src->retrotraverse!=NULL) {
            if (dst->retrotraverse==NULL) {

                dst->retrotraverse = new (std::nothrow)   UMAA_MM_CommsLostPolicy_RetrotraversePolicyType ();
                if (dst->retrotraverse==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_initialize_ex(
                    dst->retrotraverse, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_copy(
                dst->retrotraverse,
                (const UMAA_MM_CommsLostPolicy_RetrotraversePolicyType*)src->retrotraverse)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->retrotraverse != NULL) {
                UMAA_MM_CommsLostPolicy_RetrotraversePolicyType_finalize_w_params(dst->retrotraverse, deallocParams);
                delete  dst->retrotraverse;
                dst->retrotraverse=NULL;
            }
        }
        if (src->stopMotion!=NULL) {
            if (dst->stopMotion==NULL) {

                dst->stopMotion = new (std::nothrow)   DDS_Boolean ();
                if (dst->stopMotion==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->stopMotion)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->stopMotion, 
                src->stopMotion)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->stopMotion != NULL) {
                delete  dst->stopMotion;
                dst->stopMotion=NULL;
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
* Configure and implement 'UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType' sequence class.
*/
#define T UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType
#define TSeq UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportTypeSeq

#define T_initialize_w_params UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_finalize_w_params
#define T_copy       UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_CommsLostPolicy_CommsLostPolicyConfigReportType_get_typecode();
        }

    } 
}
#endif
