

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointType.idl 
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

#include "WaypointType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "WaypointTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_WaypointTypeTYPENAME = "UMAA::MM::BaseType::WaypointType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_WaypointType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_WaypointType_g_tc_members[15]=
    {

        {
            (char *)"altitude",/* Member name */
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
            (char *)"altitudeAGL",/* Member name */
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
            (char *)"altitudeASF",/* Member name */
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
            (char *)"attitude",/* Member name */
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
            (char *)"depth",/* Member name */
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
            (char *)"endTime",/* Member name */
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
            (char *)"globalPosition",/* Member name */
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
            (char *)"localPosition",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"mode",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"pathTolerance",/* Member name */
            {
                9,/* Representation ID */
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
            (char *)"speed",/* Member name */
            {
                10,/* Representation ID */
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
                11,/* Representation ID */
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
            (char *)"waypointTolerance",/* Member name */
            {
                12,/* Representation ID */
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
            (char *)"waypointType",/* Member name */
            {
                13,/* Representation ID */
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
            (char *)"waypointID",/* Member name */
            {
                14,/* Representation ID */
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

    static DDS_TypeCode UMAA_MM_BaseType_WaypointType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::WaypointType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            15, /* Number of members */
            UMAA_MM_BaseType_WaypointType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_WaypointType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_WaypointType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_WaypointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_WaypointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_AGL_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_ASF_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Orientation3D_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_BSL_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position3D_PlatformXYZ_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_LocalWaterMass_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType_get_typecode();
    UMAA_MM_BaseType_WaypointType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_WaypointType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[4]._annotations._maxValue._u.double_value = 10000ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[10]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_WaypointType_g_tc_members[12]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_WaypointType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_WaypointType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_MM_BaseType_WaypointType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_WaypointType_get_sample_access_info();
    UMAA_MM_BaseType_WaypointType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_WaypointType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_WaypointType_g_tc;
}

#define TSeq UMAA_MM_BaseType_WaypointTypeSeq
#define T UMAA_MM_BaseType_WaypointType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_WaypointType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_WaypointType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_WaypointTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_WaypointTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_WaypointType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_WaypointType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_WaypointType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[15] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_WaypointType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitude - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitude - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->depth - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTime - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->globalPosition - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->localPosition - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pathTolerance - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speed - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTime - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointTolerance - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointType - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waypointID - (char *)sample);

    UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_WaypointType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_WaypointType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_WaypointType_get_member_value_pointer;

    UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_WaypointType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_WaypointType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_WaypointType_g_typePlugin = 
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
        UMAA_MM_BaseType_WaypointType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_WaypointType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_WaypointType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_WaypointType_initialize(
    UMAA_MM_BaseType_WaypointType* sample)
{
    return UMAA_MM_BaseType_WaypointType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_WaypointType_initialize_w_params(
    UMAA_MM_BaseType_WaypointType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->altitude=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->altitude = new (std::nothrow)   UMAA_Common_Measurement_Altitude_MSL ();
            if (sample->altitude==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
                sample->altitude,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->altitude!=NULL) {
                if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
                    sample->altitude,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->altitudeAGL=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->altitudeAGL = new (std::nothrow)   UMAA_Common_Measurement_Altitude_AGL ();
            if (sample->altitudeAGL==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Altitude_AGL_initialize_w_params(
                sample->altitudeAGL,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->altitudeAGL!=NULL) {
                if (!UMAA_Common_Measurement_Altitude_AGL_initialize_w_params(
                    sample->altitudeAGL,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->altitudeASF=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->altitudeASF = new (std::nothrow)   DDS_Double ();
            if (sample->altitudeASF==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->altitudeASF)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->altitudeASF != NULL) {
                if (!RTICdrType_initDouble(sample->altitudeASF)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->attitude=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->attitude = new (std::nothrow)   UMAA_Common_Measurement_Orientation3D ();
            if (sample->attitude==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Orientation3D_initialize_w_params(
                sample->attitude,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->attitude!=NULL) {
                if (!UMAA_Common_Measurement_Orientation3D_initialize_w_params(
                    sample->attitude,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
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
        sample->globalPosition=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->globalPosition = new (std::nothrow)   UMAA_Common_Measurement_Position2D ();
            if (sample->globalPosition==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
                sample->globalPosition,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->globalPosition!=NULL) {
                if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
                    sample->globalPosition,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->localPosition=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->localPosition = new (std::nothrow)   UMAA_Common_Measurement_Position3D_PlatformXYZ ();
            if (sample->localPosition==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_initialize_w_params(
                sample->localPosition,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->localPosition!=NULL) {
                if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_initialize_w_params(
                    sample->localPosition,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->mode=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->mode = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType ();
            if (sample->mode==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_initialize_w_params(
                sample->mode,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->mode!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_initialize_w_params(
                    sample->mode,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->pathTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->pathTolerance = new (std::nothrow)   DDS_Double ();
            if (sample->pathTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->pathTolerance)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->pathTolerance != NULL) {
                if (!RTICdrType_initDouble(sample->pathTolerance)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->speed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->speed = new (std::nothrow)   DDS_Double ();
            if (sample->speed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->speed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->speed != NULL) {
                if (!RTICdrType_initDouble(sample->speed)) {
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
    if (!allocParams->allocate_optional_members) {
        sample->waypointTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->waypointTolerance = new (std::nothrow)   DDS_Double ();
            if (sample->waypointTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->waypointTolerance)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->waypointTolerance != NULL) {
                if (!RTICdrType_initDouble(sample->waypointTolerance)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->waypointType = UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType_APPROACH_FINAL_POINT;
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->waypointID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_WaypointType_initialize_ex(
    UMAA_MM_BaseType_WaypointType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_WaypointType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_WaypointType_finalize_w_return(
    UMAA_MM_BaseType_WaypointType* sample)
{
    UMAA_MM_BaseType_WaypointType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_WaypointType_finalize(
    UMAA_MM_BaseType_WaypointType* sample)
{  
    UMAA_MM_BaseType_WaypointType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_WaypointType_finalize_ex(
    UMAA_MM_BaseType_WaypointType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_WaypointType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_WaypointType_finalize_w_params(
    UMAA_MM_BaseType_WaypointType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->altitude != NULL) {
            UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
                sample->altitude,
                deallocParams);

            delete  sample->altitude;
            sample->altitude=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->altitudeAGL != NULL) {
            UMAA_Common_Measurement_Altitude_AGL_finalize_w_params(
                sample->altitudeAGL,
                deallocParams);

            delete  sample->altitudeAGL;
            sample->altitudeAGL=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->altitudeASF != NULL) {

            delete  sample->altitudeASF;
            sample->altitudeASF=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->attitude != NULL) {
            UMAA_Common_Measurement_Orientation3D_finalize_w_params(
                sample->attitude,
                deallocParams);

            delete  sample->attitude;
            sample->attitude=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->depth != NULL) {

            delete  sample->depth;
            sample->depth=NULL;
        }
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
        if (sample->globalPosition != NULL) {
            UMAA_Common_Measurement_Position2D_finalize_w_params(
                sample->globalPosition,
                deallocParams);

            delete  sample->globalPosition;
            sample->globalPosition=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->localPosition != NULL) {
            UMAA_Common_Measurement_Position3D_PlatformXYZ_finalize_w_params(
                sample->localPosition,
                deallocParams);

            delete  sample->localPosition;
            sample->localPosition=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->mode != NULL) {
            UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_finalize_w_params(
                sample->mode,
                deallocParams);

            delete  sample->mode;
            sample->mode=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->pathTolerance != NULL) {

            delete  sample->pathTolerance;
            sample->pathTolerance=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->speed != NULL) {

            delete  sample->speed;
            sample->speed=NULL;
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
    if (deallocParams->delete_optional_members) {
        if (sample->waypointTolerance != NULL) {

            delete  sample->waypointTolerance;
            sample->waypointTolerance=NULL;
        }
    }
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType_finalize_w_params(
        &sample->waypointType,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->waypointID,
        deallocParams);

}

void UMAA_MM_BaseType_WaypointType_finalize_optional_members(
    UMAA_MM_BaseType_WaypointType* sample, RTIBool deletePointers)
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

    if (sample->altitude != NULL) {
        UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
            sample->altitude,
            deallocParams);

        delete  sample->altitude;
        sample->altitude=NULL;
    }
    if (sample->altitudeAGL != NULL) {
        UMAA_Common_Measurement_Altitude_AGL_finalize_w_params(
            sample->altitudeAGL,
            deallocParams);

        delete  sample->altitudeAGL;
        sample->altitudeAGL=NULL;
    }
    if (sample->altitudeASF != NULL) {

        delete  sample->altitudeASF;
        sample->altitudeASF=NULL;
    }
    if (sample->attitude != NULL) {
        UMAA_Common_Measurement_Orientation3D_finalize_w_params(
            sample->attitude,
            deallocParams);

        delete  sample->attitude;
        sample->attitude=NULL;
    }
    if (sample->depth != NULL) {

        delete  sample->depth;
        sample->depth=NULL;
    }
    if (sample->endTime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->endTime,
            deallocParams);

        delete  sample->endTime;
        sample->endTime=NULL;
    }
    if (sample->globalPosition != NULL) {
        UMAA_Common_Measurement_Position2D_finalize_w_params(
            sample->globalPosition,
            deallocParams);

        delete  sample->globalPosition;
        sample->globalPosition=NULL;
    }
    if (sample->localPosition != NULL) {
        UMAA_Common_Measurement_Position3D_PlatformXYZ_finalize_w_params(
            sample->localPosition,
            deallocParams);

        delete  sample->localPosition;
        sample->localPosition=NULL;
    }
    if (sample->mode != NULL) {
        UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_finalize_w_params(
            sample->mode,
            deallocParams);

        delete  sample->mode;
        sample->mode=NULL;
    }
    if (sample->pathTolerance != NULL) {

        delete  sample->pathTolerance;
        sample->pathTolerance=NULL;
    }
    if (sample->speed != NULL) {

        delete  sample->speed;
        sample->speed=NULL;
    }
    if (sample->startTime != NULL) {
        UMAA_Common_Measurement_DateTime_finalize_w_params(
            sample->startTime,
            deallocParams);

        delete  sample->startTime;
        sample->startTime=NULL;
    }
    if (sample->waypointTolerance != NULL) {

        delete  sample->waypointTolerance;
        sample->waypointTolerance=NULL;
    }
}

RTIBool UMAA_MM_BaseType_WaypointType_copy(
    UMAA_MM_BaseType_WaypointType* dst,
    const UMAA_MM_BaseType_WaypointType* src)
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

        if (src->altitude!=NULL) {
            if (dst->altitude==NULL) {

                dst->altitude = new (std::nothrow)   UMAA_Common_Measurement_Altitude_MSL ();
                if (dst->altitude==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Altitude_MSL_initialize_ex(
                    dst->altitude, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Altitude_MSL_copy(
                dst->altitude,
                (const UMAA_Common_Measurement_Altitude_MSL*)src->altitude)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->altitude != NULL) {
                UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(dst->altitude, deallocParams);
                delete  dst->altitude;
                dst->altitude=NULL;
            }
        }
        if (src->altitudeAGL!=NULL) {
            if (dst->altitudeAGL==NULL) {

                dst->altitudeAGL = new (std::nothrow)   UMAA_Common_Measurement_Altitude_AGL ();
                if (dst->altitudeAGL==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Altitude_AGL_initialize_ex(
                    dst->altitudeAGL, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Altitude_AGL_copy(
                dst->altitudeAGL,
                (const UMAA_Common_Measurement_Altitude_AGL*)src->altitudeAGL)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->altitudeAGL != NULL) {
                UMAA_Common_Measurement_Altitude_AGL_finalize_w_params(dst->altitudeAGL, deallocParams);
                delete  dst->altitudeAGL;
                dst->altitudeAGL=NULL;
            }
        }
        if (src->altitudeASF!=NULL) {
            if (dst->altitudeASF==NULL) {

                dst->altitudeASF = new (std::nothrow)   DDS_Double ();
                if (dst->altitudeASF==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->altitudeASF)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->altitudeASF, 
                src->altitudeASF)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->altitudeASF != NULL) {
                delete  dst->altitudeASF;
                dst->altitudeASF=NULL;
            }
        }
        if (src->attitude!=NULL) {
            if (dst->attitude==NULL) {

                dst->attitude = new (std::nothrow)   UMAA_Common_Measurement_Orientation3D ();
                if (dst->attitude==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Orientation3D_initialize_ex(
                    dst->attitude, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Orientation3D_copy(
                dst->attitude,
                (const UMAA_Common_Measurement_Orientation3D*)src->attitude)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->attitude != NULL) {
                UMAA_Common_Measurement_Orientation3D_finalize_w_params(dst->attitude, deallocParams);
                delete  dst->attitude;
                dst->attitude=NULL;
            }
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
        if (src->globalPosition!=NULL) {
            if (dst->globalPosition==NULL) {

                dst->globalPosition = new (std::nothrow)   UMAA_Common_Measurement_Position2D ();
                if (dst->globalPosition==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Position2D_initialize_ex(
                    dst->globalPosition, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Position2D_copy(
                dst->globalPosition,
                (const UMAA_Common_Measurement_Position2D*)src->globalPosition)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->globalPosition != NULL) {
                UMAA_Common_Measurement_Position2D_finalize_w_params(dst->globalPosition, deallocParams);
                delete  dst->globalPosition;
                dst->globalPosition=NULL;
            }
        }
        if (src->localPosition!=NULL) {
            if (dst->localPosition==NULL) {

                dst->localPosition = new (std::nothrow)   UMAA_Common_Measurement_Position3D_PlatformXYZ ();
                if (dst->localPosition==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_initialize_ex(
                    dst->localPosition, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Position3D_PlatformXYZ_copy(
                dst->localPosition,
                (const UMAA_Common_Measurement_Position3D_PlatformXYZ*)src->localPosition)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->localPosition != NULL) {
                UMAA_Common_Measurement_Position3D_PlatformXYZ_finalize_w_params(dst->localPosition, deallocParams);
                delete  dst->localPosition;
                dst->localPosition=NULL;
            }
        }
        if (src->mode!=NULL) {
            if (dst->mode==NULL) {

                dst->mode = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType ();
                if (dst->mode==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_initialize_ex(
                    dst->mode, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_copy(
                dst->mode,
                (const UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType*)src->mode)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->mode != NULL) {
                UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType_finalize_w_params(dst->mode, deallocParams);
                delete  dst->mode;
                dst->mode=NULL;
            }
        }
        if (src->pathTolerance!=NULL) {
            if (dst->pathTolerance==NULL) {

                dst->pathTolerance = new (std::nothrow)   DDS_Double ();
                if (dst->pathTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->pathTolerance)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->pathTolerance, 
                src->pathTolerance)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->pathTolerance != NULL) {
                delete  dst->pathTolerance;
                dst->pathTolerance=NULL;
            }
        }
        if (src->speed!=NULL) {
            if (dst->speed==NULL) {

                dst->speed = new (std::nothrow)   DDS_Double ();
                if (dst->speed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->speed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->speed, 
                src->speed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->speed != NULL) {
                delete  dst->speed;
                dst->speed=NULL;
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
        if (src->waypointTolerance!=NULL) {
            if (dst->waypointTolerance==NULL) {

                dst->waypointTolerance = new (std::nothrow)   DDS_Double ();
                if (dst->waypointTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->waypointTolerance)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->waypointTolerance, 
                src->waypointTolerance)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->waypointTolerance != NULL) {
                delete  dst->waypointTolerance;
                dst->waypointTolerance=NULL;
            }
        }
        if (!UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType_copy(
            &dst->waypointType,
            (const UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType*)&src->waypointType)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->waypointID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->waypointID)) {
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
* Configure and implement 'UMAA_MM_BaseType_WaypointType' sequence class.
*/
#define T UMAA_MM_BaseType_WaypointType
#define TSeq UMAA_MM_BaseType_WaypointTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_WaypointType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_WaypointType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_WaypointType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_WaypointType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_WaypointType_get_typecode();
        }

    } 
}
#endif
