

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveLoiterObjectiveType.idl 
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

#include "PassiveLoiterObjectiveType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "PassiveLoiterObjectiveTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_PassiveLoiterObjectiveTypeTYPENAME = "UMAA::MM::BaseType::PassiveLoiterObjectiveType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[8]=
    {

        {
            (char *)"captureRadius",/* Member name */
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
            (char *)"depth",/* Member name */
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
            (char *)"driftRadius",/* Member name */
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
            (char *)"duration",/* Member name */
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
            (char *)"heading",/* Member name */
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
            (char *)"headingReference",/* Member name */
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
            (char *)"position",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"speed",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::PassiveLoiterObjectiveType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_PassiveLoiterObjectiveType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_BSL_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Seconds_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RelativeAngle_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2DTime_get_typecode();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[1]._annotations._maxValue._u.double_value = 10000ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[3]._annotations._maxValue._u.double_value = 37817280ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc_members[7]._annotations._maxValue._u.double_value = 200ULL;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_sample_access_info();
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_tc;
}

#define TSeq UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq
#define T UMAA_MM_BaseType_PassiveLoiterObjectiveType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[8] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_PassiveLoiterObjectiveType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->captureRadius - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->depth - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->driftRadius - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->duration - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->heading - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->headingReference - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speed - (char *)sample);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_PassiveLoiterObjectiveType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_member_value_pointer;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_typePlugin = 
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
        UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_PassiveLoiterObjectiveType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* sample)
{
    return UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->captureRadius = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->depth=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->depth = new (std::nothrow)   DDS_Double ();
            if (sample->depth==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->depth)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->depth != NULL) {
                if (!RTICdrType_initDouble(sample->depth)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->driftRadius=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->driftRadius = new (std::nothrow)   DDS_Double ();
            if (sample->driftRadius==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->driftRadius)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->driftRadius != NULL) {
                if (!RTICdrType_initDouble(sample->driftRadius)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->duration=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->duration = new (std::nothrow)   DDS_Double ();
            if (sample->duration==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->duration)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->duration != NULL) {
                if (!RTICdrType_initDouble(sample->duration)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->heading=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->heading = new (std::nothrow)   DDS_Double ();
            if (sample->heading==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->heading)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->heading != NULL) {
                if (!RTICdrType_initDouble(sample->heading)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->headingReference=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->headingReference = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType ();
            if (sample->headingReference==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_initialize_w_params(
                sample->headingReference,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->headingReference!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_initialize_w_params(
                    sample->headingReference,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_Common_Measurement_Position2DTime_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->speed = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_ex(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* sample)
{
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* sample)
{  
    UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_ex(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->depth != NULL) {

            delete  sample->depth;
            sample->depth=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->driftRadius != NULL) {

            delete  sample->driftRadius;
            sample->driftRadius=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->duration != NULL) {

            delete  sample->duration;
            sample->duration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->heading != NULL) {

            delete  sample->heading;
            sample->heading=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->headingReference != NULL) {
            UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_finalize_w_params(
                sample->headingReference,
                deallocParams);

            delete  sample->headingReference;
            sample->headingReference=NULL;
        }
    }
    UMAA_Common_Measurement_Position2DTime_finalize_w_params(
        &sample->position,
        deallocParams);

}

void UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* sample, RTIBool deletePointers)
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

    if (sample->depth != NULL) {

        delete  sample->depth;
        sample->depth=NULL;
    }
    if (sample->driftRadius != NULL) {

        delete  sample->driftRadius;
        sample->driftRadius=NULL;
    }
    if (sample->duration != NULL) {

        delete  sample->duration;
        sample->duration=NULL;
    }
    if (sample->heading != NULL) {

        delete  sample->heading;
        sample->heading=NULL;
    }
    if (sample->headingReference != NULL) {
        UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_finalize_w_params(
            sample->headingReference,
            deallocParams);

        delete  sample->headingReference;
        sample->headingReference=NULL;
    }
    UMAA_Common_Measurement_Position2DTime_finalize_optional_members(&sample->position, deallocParams->delete_pointers);
}

RTIBool UMAA_MM_BaseType_PassiveLoiterObjectiveType_copy(
    UMAA_MM_BaseType_PassiveLoiterObjectiveType* dst,
    const UMAA_MM_BaseType_PassiveLoiterObjectiveType* src)
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
            &dst->captureRadius, 
            &src->captureRadius)) { 
            return RTI_FALSE;
        }
        if (src->depth!=NULL) {
            if (dst->depth==NULL) {

                dst->depth = new (std::nothrow)   DDS_Double ();
                if (dst->depth==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->depth)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->depth, 
                src->depth)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->depth != NULL) {
                delete  dst->depth;
                dst->depth=NULL;
            }
        }
        if (src->driftRadius!=NULL) {
            if (dst->driftRadius==NULL) {

                dst->driftRadius = new (std::nothrow)   DDS_Double ();
                if (dst->driftRadius==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->driftRadius)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->driftRadius, 
                src->driftRadius)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->driftRadius != NULL) {
                delete  dst->driftRadius;
                dst->driftRadius=NULL;
            }
        }
        if (src->duration!=NULL) {
            if (dst->duration==NULL) {

                dst->duration = new (std::nothrow)   DDS_Double ();
                if (dst->duration==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->duration)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->duration, 
                src->duration)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->duration != NULL) {
                delete  dst->duration;
                dst->duration=NULL;
            }
        }
        if (src->heading!=NULL) {
            if (dst->heading==NULL) {

                dst->heading = new (std::nothrow)   DDS_Double ();
                if (dst->heading==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->heading)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->heading, 
                src->heading)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->heading != NULL) {
                delete  dst->heading;
                dst->heading=NULL;
            }
        }
        if (src->headingReference!=NULL) {
            if (dst->headingReference==NULL) {

                dst->headingReference = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType ();
                if (dst->headingReference==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_initialize_ex(
                    dst->headingReference, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_copy(
                dst->headingReference,
                (const UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType*)src->headingReference)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->headingReference != NULL) {
                UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType_finalize_w_params(dst->headingReference, deallocParams);
                delete  dst->headingReference;
                dst->headingReference=NULL;
            }
        }
        if (!UMAA_Common_Measurement_Position2DTime_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position2DTime*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->speed, 
            &src->speed)) { 
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
* Configure and implement 'UMAA_MM_BaseType_PassiveLoiterObjectiveType' sequence class.
*/
#define T UMAA_MM_BaseType_PassiveLoiterObjectiveType
#define TSeq UMAA_MM_BaseType_PassiveLoiterObjectiveTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_PassiveLoiterObjectiveType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_PassiveLoiterObjectiveType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_typecode();
        }

    } 
}
#endif
