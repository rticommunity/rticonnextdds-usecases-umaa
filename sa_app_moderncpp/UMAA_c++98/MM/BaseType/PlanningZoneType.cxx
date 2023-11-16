

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlanningZoneType.idl 
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

#include "PlanningZoneType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "PlanningZoneTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_PlanningZoneTypeTYPENAME = "UMAA::MM::BaseType::PlanningZoneType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_PlanningZoneType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_PlanningZoneType_g_tc_members[6]=
    {

        {
            (char *)"endTime",/* Member name */
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
            (char *)"startTime",/* Member name */
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
            (char *)"zone",/* Member name */
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
            (char *)"zoneKind",/* Member name */
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
            (char *)"zoneName",/* Member name */
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
            (char *)"zoneID",/* Member name */
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

    static DDS_TypeCode UMAA_MM_BaseType_PlanningZoneType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::PlanningZoneType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_MM_BaseType_PlanningZoneType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_PlanningZoneType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_PlanningZoneType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_PlanningZoneType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Polygon_Volume_get_typecode();
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_get_typecode();
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_BaseType_PlanningZoneType_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    UMAA_MM_BaseType_PlanningZoneType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_PlanningZoneType_get_sample_access_info();
    UMAA_MM_BaseType_PlanningZoneType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_PlanningZoneType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_PlanningZoneType_g_tc;
}

#define TSeq UMAA_MM_BaseType_PlanningZoneTypeSeq
#define T UMAA_MM_BaseType_PlanningZoneType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PlanningZoneType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_PlanningZoneType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_PlanningZoneTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_PlanningZoneTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_PlanningZoneType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_PlanningZoneType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_PlanningZoneType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_PlanningZoneType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTime - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTime - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zone - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoneKind - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoneName - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->zoneID - (char *)sample);

    UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_PlanningZoneType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_PlanningZoneType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_PlanningZoneType_get_member_value_pointer;

    UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_PlanningZoneType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_PlanningZoneType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_PlanningZoneType_g_typePlugin = 
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
        UMAA_MM_BaseType_PlanningZoneType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_PlanningZoneType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_PlanningZoneType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize(
    UMAA_MM_BaseType_PlanningZoneType* sample)
{
    return UMAA_MM_BaseType_PlanningZoneType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize_w_params(
    UMAA_MM_BaseType_PlanningZoneType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->endTime=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->endTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->endTime==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->endTime,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->endTime!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->endTime,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->startTime=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->startTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
            if (sample->startTime==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                sample->startTime,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->startTime!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
                    sample->startTime,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_Common_Measurement_Polygon_Volume_initialize_w_params(
        &sample->zone,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->zoneKind = UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_KEEP_IN;

    if (allocParams->allocate_memory) {
        sample->zoneName = DDS_String_alloc((1023L));
        if (sample->zoneName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->zoneName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->zoneName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->zoneName != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->zoneName,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->zoneName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->zoneID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_PlanningZoneType_initialize_ex(
    UMAA_MM_BaseType_PlanningZoneType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_PlanningZoneType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_PlanningZoneType_finalize_w_return(
    UMAA_MM_BaseType_PlanningZoneType* sample)
{
    UMAA_MM_BaseType_PlanningZoneType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_PlanningZoneType_finalize(
    UMAA_MM_BaseType_PlanningZoneType* sample)
{  
    UMAA_MM_BaseType_PlanningZoneType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_PlanningZoneType_finalize_ex(
    UMAA_MM_BaseType_PlanningZoneType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_PlanningZoneType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_PlanningZoneType_finalize_w_params(
    UMAA_MM_BaseType_PlanningZoneType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->endTime != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->endTime,
                deallocParams);

            delete  sample->endTime;
            sample->endTime=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->startTime != NULL) {
            UMAA_Common_Measurement_DateTime_finalize_w_params(
                sample->startTime,
                deallocParams);

            delete  sample->startTime;
            sample->startTime=NULL;
        }
    }
    UMAA_Common_Measurement_Polygon_Volume_finalize_w_params(
        &sample->zone,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_finalize_w_params(
        &sample->zoneKind,
        deallocParams);

    if (sample->zoneName != NULL) {
        DDS_String_free(sample->zoneName);
        sample->zoneName=NULL;

    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->zoneID,
        deallocParams);

}

void UMAA_MM_BaseType_PlanningZoneType_finalize_optional_members(
    UMAA_MM_BaseType_PlanningZoneType* sample, RTIBool deletePointers)
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

    if (sample->endTime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->endTime,
            deallocParams);

        delete  sample->endTime;
        sample->endTime=NULL;
    }
    if (sample->startTime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->startTime,
            deallocParams);

        delete  sample->startTime;
        sample->startTime=NULL;
    }
}

RTIBool UMAA_MM_BaseType_PlanningZoneType_copy(
    UMAA_MM_BaseType_PlanningZoneType* dst,
    const UMAA_MM_BaseType_PlanningZoneType* src)
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

        if (src->endTime!=NULL) {
            if (dst->endTime==NULL) {

                dst->endTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->endTime==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->endTime, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->endTime,
                (const UMAA_Common_Measurement_DateTime*)src->endTime)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->endTime != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->endTime, deallocParams);
                delete  dst->endTime;
                dst->endTime=NULL;
            }
        }
        if (src->startTime!=NULL) {
            if (dst->startTime==NULL) {

                dst->startTime = new (std::nothrow)   UMAA_Common_Measurement_DateTime ();
                if (dst->startTime==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_initialize_ex(
                    dst->startTime, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_copy(
                dst->startTime,
                (const UMAA_Common_Measurement_DateTime*)src->startTime)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->startTime != NULL) {
                UMAA_Common_Measurement_DateTime_finalize_w_params(dst->startTime, deallocParams);
                delete  dst->startTime;
                dst->startTime=NULL;
            }
        }
        if (!UMAA_Common_Measurement_Polygon_Volume_copy(
            &dst->zone,
            (const UMAA_Common_Measurement_Polygon_Volume*)&src->zone)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType_copy(
            &dst->zoneKind,
            (const UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType*)&src->zoneKind)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyStringEx (
            &dst->zoneName
            ,
            src->zoneName, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->zoneID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->zoneID)) {
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
* Configure and implement 'UMAA_MM_BaseType_PlanningZoneType' sequence class.
*/
#define T UMAA_MM_BaseType_PlanningZoneType
#define TSeq UMAA_MM_BaseType_PlanningZoneTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_PlanningZoneType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_PlanningZoneType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_PlanningZoneType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_PlanningZoneType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_PlanningZoneType_get_typecode();
        }

    } 
}
#endif
