

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointType.idl 
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

#include "GlobalWaypointType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GlobalWaypointTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeTYPENAME = "UMAA::MO::GlobalWaypointControl::GlobalWaypointType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[8]=
    {

        {
            (char *)"attitude",/* Member name */
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
            (char *)"elevation",/* Member name */
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
            (char *)"maintainTrack",/* Member name */
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
            (char *)"position",/* Member name */
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
            (char *)"speed",/* Member name */
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
            (char *)"trackTolerance",/* Member name */
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
            (char *)"waypointID",/* Member name */
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
            (char *)"waypointTolerance",/* Member name */
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

    static DDS_TypeCode UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MO::GlobalWaypointControl::GlobalWaypointType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MO_GlobalWaypointControl_GlobalWaypointType*/

    if (is_initialized) {
        return &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Orientation3D_PlatformXYZ_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_VariableSpeedControl_VariableSpeedControlType_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc_members[7]._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc._data._sampleAccessInfo =
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_sample_access_info();
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc._data._typePlugin =
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_type_plugin_info();    

    return &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_tc;
}

#define TSeq UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq
#define T UMAA_MO_GlobalWaypointControl_GlobalWaypointType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[8] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MO_GlobalWaypointControl_GlobalWaypointType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitude - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevation - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maintainTrack - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speed - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->trackTolerance - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointID - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointTolerance - (char *)sample);

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MO_GlobalWaypointControl_GlobalWaypointType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_member_value_pointer;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_typePlugin = 
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
        UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MO_GlobalWaypointControl_GlobalWaypointType_g_typePlugin;
}
#endif

RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* sample)
{
    return UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->attitude=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->attitude = new (std::nothrow)   UMAA_Common_Measurement_Orientation3D_PlatformXYZ ();
            if (sample->attitude==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Orientation3D_PlatformXYZ_initialize_w_params(
                sample->attitude,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->attitude!=NULL) {
                if (!UMAA_Common_Measurement_Orientation3D_PlatformXYZ_initialize_w_params(
                    sample->attitude,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
        &sample->elevation,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->maintainTrack = 0;

    if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_VariableSpeedControl_VariableSpeedControlType_initialize_w_params(
        &sample->speed,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->trackTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->trackTolerance = new (std::nothrow)   DDS_Double ();
            if (sample->trackTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->trackTolerance)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->trackTolerance != NULL) {
                if (!RTICdrType_initDouble(sample->trackTolerance)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->waypointID,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->waypointTolerance = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* sample)
{
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* sample)
{  
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->attitude != NULL) {
            UMAA_Common_Measurement_Orientation3D_PlatformXYZ_finalize_w_params(
                sample->attitude,
                deallocParams);

            delete  sample->attitude;
            sample->attitude=NULL;
        }
    }
    UMAA_Common_Measurement_ElevationType_finalize_w_params(
        &sample->elevation,
        deallocParams);

    UMAA_Common_Measurement_Position2D_finalize_w_params(
        &sample->position,
        deallocParams);

    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_finalize_w_params(
        &sample->speed,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->trackTolerance != NULL) {

            delete  sample->trackTolerance;
            sample->trackTolerance=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->waypointID,
        deallocParams);

}

void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* sample, RTIBool deletePointers)
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

    if (sample->attitude != NULL) {
        UMAA_Common_Measurement_Orientation3D_PlatformXYZ_finalize_w_params(
            sample->attitude,
            deallocParams);

        delete  sample->attitude;
        sample->attitude=NULL;
    }
    UMAA_Common_Measurement_ElevationType_finalize_optional_members(&sample->elevation, deallocParams->delete_pointers);
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_finalize_optional_members(&sample->speed, deallocParams->delete_pointers);
    if (sample->trackTolerance != NULL) {

        delete  sample->trackTolerance;
        sample->trackTolerance=NULL;
    }
}

RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointType* src)
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

        if (src->attitude!=NULL) {
            if (dst->attitude==NULL) {

                dst->attitude = new (std::nothrow)   UMAA_Common_Measurement_Orientation3D_PlatformXYZ ();
                if (dst->attitude==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Orientation3D_PlatformXYZ_initialize_ex(
                    dst->attitude, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Orientation3D_PlatformXYZ_copy(
                dst->attitude,
                (const UMAA_Common_Measurement_Orientation3D_PlatformXYZ*)src->attitude)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->attitude != NULL) {
                UMAA_Common_Measurement_Orientation3D_PlatformXYZ_finalize_w_params(dst->attitude, deallocParams);
                delete  dst->attitude;
                dst->attitude=NULL;
            }
        }
        if (!UMAA_Common_Measurement_ElevationType_copy(
            &dst->elevation,
            (const UMAA_Common_Measurement_ElevationType*)&src->elevation)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyBoolean (
            &dst->maintainTrack, 
            &src->maintainTrack)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Position2D_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position2D*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_VariableSpeedControl_VariableSpeedControlType_copy(
            &dst->speed,
            (const UMAA_Common_VariableSpeedControl_VariableSpeedControlType*)&src->speed)) {
            return RTI_FALSE;
        } 
        if (src->trackTolerance!=NULL) {
            if (dst->trackTolerance==NULL) {

                dst->trackTolerance = new (std::nothrow)   DDS_Double ();
                if (dst->trackTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->trackTolerance)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->trackTolerance, 
                src->trackTolerance)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->trackTolerance != NULL) {
                delete  dst->trackTolerance;
                dst->trackTolerance=NULL;
            }
        }
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->waypointID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->waypointID)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->waypointTolerance, 
            &src->waypointTolerance)) { 
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
* Configure and implement 'UMAA_MO_GlobalWaypointControl_GlobalWaypointType' sequence class.
*/
#define T UMAA_MO_GlobalWaypointControl_GlobalWaypointType
#define TSeq UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq

#define T_initialize_w_params UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_w_params

#define T_finalize_w_params   UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_params
#define T_copy       UMAA_MO_GlobalWaypointControl_GlobalWaypointType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_typecode();
        }

    } 
}
#endif
