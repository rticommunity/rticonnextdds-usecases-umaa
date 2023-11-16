

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DriverConfigReportType.idl 
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

#include "DriverConfigReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "DriverConfigReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MO_DriverConfig_DriverConfigReportTypeTYPENAME = "UMAA::MO::DriverConfig::DriverConfigReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MO_DriverConfig_DriverConfigReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[18]=
    {

        {
            (char *)"maxAllowableAcceleration",/* Member name */
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
            (char *)"maxAllowableAttitudeAcceleration",/* Member name */
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
            (char *)"maxAllowableElevation",/* Member name */
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
            (char *)"maxAllowableSpeed",/* Member name */
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
            (char *)"maxAllowableTurnRate",/* Member name */
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
            (char *)"maxElevationChangeRate",/* Member name */
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
            (char *)"minAllowableAcceleration",/* Member name */
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
            (char *)"minAllowableAttitudeAcceleration",/* Member name */
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
            (char *)"minAllowableElevation",/* Member name */
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
            (char *)"minAllowableSpeed",/* Member name */
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
            (char *)"recommendedAcceleration",/* Member name */
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
            (char *)"recommendedAttitudeAcceleration",/* Member name */
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
            (char *)"recommendedElevation",/* Member name */
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
            (char *)"recommendedElevationChangeRate",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"recommendedSpeed",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"recommendedTurnRate",/* Member name */
            {
                15,/* Representation ID */
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
                16,/* Representation ID */
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
                17,/* Representation ID */
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

    static DDS_TypeCode UMAA_MO_DriverConfig_DriverConfigReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MO::DriverConfig::DriverConfigReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            18, /* Number of members */
            UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MO_DriverConfig_DriverConfigReportType*/

    if (is_initialized) {
        return &UMAA_MO_DriverConfig_DriverConfigReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_OrientationAcceleration3D_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Speed_SpeedControlType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_AngleRate_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Capabilities_Speed_BSL_Capability_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_OrientationAcceleration3D_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Speed_SpeedControlType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_OrientationAcceleration3D_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_ElevationType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Capabilities_Speed_BSL_Capability_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Speed_SpeedControlType_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_AngleRate_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[4]._annotations._minValue._u.double_value = -62.831;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 62.831;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[15]._annotations._minValue._u.double_value = -62.831;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc_members[15]._annotations._maxValue._u.double_value = 62.831;

    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc._data._sampleAccessInfo =
    UMAA_MO_DriverConfig_DriverConfigReportType_get_sample_access_info();
    UMAA_MO_DriverConfig_DriverConfigReportType_g_tc._data._typePlugin =
    UMAA_MO_DriverConfig_DriverConfigReportType_get_type_plugin_info();    

    return &UMAA_MO_DriverConfig_DriverConfigReportType_g_tc;
}

#define TSeq UMAA_MO_DriverConfig_DriverConfigReportTypeSeq
#define T UMAA_MO_DriverConfig_DriverConfigReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MO_DriverConfig_DriverConfigReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MO_DriverConfig_DriverConfigReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MO_DriverConfig_DriverConfigReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MO_DriverConfig_DriverConfigReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MO_DriverConfig_DriverConfigReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MO_DriverConfig_DriverConfigReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MO_DriverConfig_DriverConfigReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[18] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MO_DriverConfig_DriverConfigReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableAttitudeAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableElevation - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableSpeed - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxAllowableTurnRate - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxElevationChangeRate - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableAttitudeAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableElevation - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minAllowableSpeed - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedAttitudeAcceleration - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedElevation - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedElevationChangeRate - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedSpeed - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->recommendedTurnRate - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MO_DriverConfig_DriverConfigReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MO_DriverConfig_DriverConfigReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MO_DriverConfig_DriverConfigReportType_get_member_value_pointer;

    UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MO_DriverConfig_DriverConfigReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MO_DriverConfig_DriverConfigReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MO_DriverConfig_DriverConfigReportType_g_typePlugin = 
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
        UMAA_MO_DriverConfig_DriverConfigReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MO_DriverConfig_DriverConfigReportType_g_typePlugin;
}
#endif

RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize(
    UMAA_MO_DriverConfig_DriverConfigReportType* sample)
{
    return UMAA_MO_DriverConfig_DriverConfigReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize_w_params(
    UMAA_MO_DriverConfig_DriverConfigReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->maxAllowableAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->maxAllowableAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
            if (sample->maxAllowableAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                sample->maxAllowableAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->maxAllowableAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                    sample->maxAllowableAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->maxAllowableAttitudeAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->maxAllowableAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
            if (sample->maxAllowableAttitudeAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                sample->maxAllowableAttitudeAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->maxAllowableAttitudeAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                    sample->maxAllowableAttitudeAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->maxAllowableElevation=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->maxAllowableElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
            if (sample->maxAllowableElevation==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                sample->maxAllowableElevation,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->maxAllowableElevation!=NULL) {
                if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                    sample->maxAllowableElevation,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->maxAllowableSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->maxAllowableSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
            if (sample->maxAllowableSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                sample->maxAllowableSpeed,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->maxAllowableSpeed!=NULL) {
                if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                    sample->maxAllowableSpeed,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->maxAllowableTurnRate=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->maxAllowableTurnRate = new (std::nothrow)   DDS_Double ();
            if (sample->maxAllowableTurnRate==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->maxAllowableTurnRate)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->maxAllowableTurnRate != NULL) {
                if (!RTICdrType_initDouble(sample->maxAllowableTurnRate)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->maxElevationChangeRate=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->maxElevationChangeRate = new (std::nothrow)   UMAA_Common_Capabilities_Speed_BSL_Capability ();
            if (sample->maxElevationChangeRate==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_w_params(
                sample->maxElevationChangeRate,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->maxElevationChangeRate!=NULL) {
                if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_w_params(
                    sample->maxElevationChangeRate,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->minAllowableAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->minAllowableAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
            if (sample->minAllowableAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                sample->minAllowableAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->minAllowableAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                    sample->minAllowableAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->minAllowableAttitudeAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->minAllowableAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
            if (sample->minAllowableAttitudeAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                sample->minAllowableAttitudeAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->minAllowableAttitudeAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                    sample->minAllowableAttitudeAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->minAllowableElevation=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->minAllowableElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
            if (sample->minAllowableElevation==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                sample->minAllowableElevation,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->minAllowableElevation!=NULL) {
                if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                    sample->minAllowableElevation,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->minAllowableSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->minAllowableSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
            if (sample->minAllowableSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                sample->minAllowableSpeed,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->minAllowableSpeed!=NULL) {
                if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                    sample->minAllowableSpeed,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->recommendedAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
            if (sample->recommendedAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                sample->recommendedAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->recommendedAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_w_params(
                    sample->recommendedAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedAttitudeAcceleration=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->recommendedAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
            if (sample->recommendedAttitudeAcceleration==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                sample->recommendedAttitudeAcceleration,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->recommendedAttitudeAcceleration!=NULL) {
                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_w_params(
                    sample->recommendedAttitudeAcceleration,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedElevation=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->recommendedElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
            if (sample->recommendedElevation==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                sample->recommendedElevation,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->recommendedElevation!=NULL) {
                if (!UMAA_Common_Measurement_ElevationType_initialize_w_params(
                    sample->recommendedElevation,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedElevationChangeRate=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->recommendedElevationChangeRate = new (std::nothrow)   UMAA_Common_Capabilities_Speed_BSL_Capability ();
            if (sample->recommendedElevationChangeRate==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_w_params(
                sample->recommendedElevationChangeRate,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->recommendedElevationChangeRate!=NULL) {
                if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_w_params(
                    sample->recommendedElevationChangeRate,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->recommendedSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
            if (sample->recommendedSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                sample->recommendedSpeed,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->recommendedSpeed!=NULL) {
                if (!UMAA_Common_Speed_SpeedControlType_initialize_w_params(
                    sample->recommendedSpeed,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->recommendedTurnRate=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->recommendedTurnRate = new (std::nothrow)   DDS_Double ();
            if (sample->recommendedTurnRate==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->recommendedTurnRate)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->recommendedTurnRate != NULL) {
                if (!RTICdrType_initDouble(sample->recommendedTurnRate)) {
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
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize_ex(
    UMAA_MO_DriverConfig_DriverConfigReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MO_DriverConfig_DriverConfigReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_return(
    UMAA_MO_DriverConfig_DriverConfigReportType* sample)
{
    UMAA_MO_DriverConfig_DriverConfigReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MO_DriverConfig_DriverConfigReportType_finalize(
    UMAA_MO_DriverConfig_DriverConfigReportType* sample)
{  
    UMAA_MO_DriverConfig_DriverConfigReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_ex(
    UMAA_MO_DriverConfig_DriverConfigReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_params(
    UMAA_MO_DriverConfig_DriverConfigReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->maxAllowableAcceleration != NULL) {
            UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
                sample->maxAllowableAcceleration,
                deallocParams);

            delete  sample->maxAllowableAcceleration;
            sample->maxAllowableAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxAllowableAttitudeAcceleration != NULL) {
            UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
                sample->maxAllowableAttitudeAcceleration,
                deallocParams);

            delete  sample->maxAllowableAttitudeAcceleration;
            sample->maxAllowableAttitudeAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxAllowableElevation != NULL) {
            UMAA_Common_Measurement_ElevationType_finalize_w_params(
                sample->maxAllowableElevation,
                deallocParams);

            delete  sample->maxAllowableElevation;
            sample->maxAllowableElevation=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxAllowableSpeed != NULL) {
            UMAA_Common_Speed_SpeedControlType_finalize_w_params(
                sample->maxAllowableSpeed,
                deallocParams);

            delete  sample->maxAllowableSpeed;
            sample->maxAllowableSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxAllowableTurnRate != NULL) {

            delete  sample->maxAllowableTurnRate;
            sample->maxAllowableTurnRate=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxElevationChangeRate != NULL) {
            UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(
                sample->maxElevationChangeRate,
                deallocParams);

            delete  sample->maxElevationChangeRate;
            sample->maxElevationChangeRate=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->minAllowableAcceleration != NULL) {
            UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
                sample->minAllowableAcceleration,
                deallocParams);

            delete  sample->minAllowableAcceleration;
            sample->minAllowableAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->minAllowableAttitudeAcceleration != NULL) {
            UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
                sample->minAllowableAttitudeAcceleration,
                deallocParams);

            delete  sample->minAllowableAttitudeAcceleration;
            sample->minAllowableAttitudeAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->minAllowableElevation != NULL) {
            UMAA_Common_Measurement_ElevationType_finalize_w_params(
                sample->minAllowableElevation,
                deallocParams);

            delete  sample->minAllowableElevation;
            sample->minAllowableElevation=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->minAllowableSpeed != NULL) {
            UMAA_Common_Speed_SpeedControlType_finalize_w_params(
                sample->minAllowableSpeed,
                deallocParams);

            delete  sample->minAllowableSpeed;
            sample->minAllowableSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedAcceleration != NULL) {
            UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
                sample->recommendedAcceleration,
                deallocParams);

            delete  sample->recommendedAcceleration;
            sample->recommendedAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedAttitudeAcceleration != NULL) {
            UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
                sample->recommendedAttitudeAcceleration,
                deallocParams);

            delete  sample->recommendedAttitudeAcceleration;
            sample->recommendedAttitudeAcceleration=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedElevation != NULL) {
            UMAA_Common_Measurement_ElevationType_finalize_w_params(
                sample->recommendedElevation,
                deallocParams);

            delete  sample->recommendedElevation;
            sample->recommendedElevation=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedElevationChangeRate != NULL) {
            UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(
                sample->recommendedElevationChangeRate,
                deallocParams);

            delete  sample->recommendedElevationChangeRate;
            sample->recommendedElevationChangeRate=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedSpeed != NULL) {
            UMAA_Common_Speed_SpeedControlType_finalize_w_params(
                sample->recommendedSpeed,
                deallocParams);

            delete  sample->recommendedSpeed;
            sample->recommendedSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->recommendedTurnRate != NULL) {

            delete  sample->recommendedTurnRate;
            sample->recommendedTurnRate=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_optional_members(
    UMAA_MO_DriverConfig_DriverConfigReportType* sample, RTIBool deletePointers)
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

    if (sample->maxAllowableAcceleration != NULL) {
        UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
            sample->maxAllowableAcceleration,
            deallocParams);

        delete  sample->maxAllowableAcceleration;
        sample->maxAllowableAcceleration=NULL;
    }
    if (sample->maxAllowableAttitudeAcceleration != NULL) {
        UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
            sample->maxAllowableAttitudeAcceleration,
            deallocParams);

        delete  sample->maxAllowableAttitudeAcceleration;
        sample->maxAllowableAttitudeAcceleration=NULL;
    }
    if (sample->maxAllowableElevation != NULL) {
        UMAA_Common_Measurement_ElevationType_finalize_w_params(
            sample->maxAllowableElevation,
            deallocParams);

        delete  sample->maxAllowableElevation;
        sample->maxAllowableElevation=NULL;
    }
    if (sample->maxAllowableSpeed != NULL) {
        UMAA_Common_Speed_SpeedControlType_finalize_w_params(
            sample->maxAllowableSpeed,
            deallocParams);

        delete  sample->maxAllowableSpeed;
        sample->maxAllowableSpeed=NULL;
    }
    if (sample->maxAllowableTurnRate != NULL) {

        delete  sample->maxAllowableTurnRate;
        sample->maxAllowableTurnRate=NULL;
    }
    if (sample->maxElevationChangeRate != NULL) {
        UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(
            sample->maxElevationChangeRate,
            deallocParams);

        delete  sample->maxElevationChangeRate;
        sample->maxElevationChangeRate=NULL;
    }
    if (sample->minAllowableAcceleration != NULL) {
        UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
            sample->minAllowableAcceleration,
            deallocParams);

        delete  sample->minAllowableAcceleration;
        sample->minAllowableAcceleration=NULL;
    }
    if (sample->minAllowableAttitudeAcceleration != NULL) {
        UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
            sample->minAllowableAttitudeAcceleration,
            deallocParams);

        delete  sample->minAllowableAttitudeAcceleration;
        sample->minAllowableAttitudeAcceleration=NULL;
    }
    if (sample->minAllowableElevation != NULL) {
        UMAA_Common_Measurement_ElevationType_finalize_w_params(
            sample->minAllowableElevation,
            deallocParams);

        delete  sample->minAllowableElevation;
        sample->minAllowableElevation=NULL;
    }
    if (sample->minAllowableSpeed != NULL) {
        UMAA_Common_Speed_SpeedControlType_finalize_w_params(
            sample->minAllowableSpeed,
            deallocParams);

        delete  sample->minAllowableSpeed;
        sample->minAllowableSpeed=NULL;
    }
    if (sample->recommendedAcceleration != NULL) {
        UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(
            sample->recommendedAcceleration,
            deallocParams);

        delete  sample->recommendedAcceleration;
        sample->recommendedAcceleration=NULL;
    }
    if (sample->recommendedAttitudeAcceleration != NULL) {
        UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(
            sample->recommendedAttitudeAcceleration,
            deallocParams);

        delete  sample->recommendedAttitudeAcceleration;
        sample->recommendedAttitudeAcceleration=NULL;
    }
    if (sample->recommendedElevation != NULL) {
        UMAA_Common_Measurement_ElevationType_finalize_w_params(
            sample->recommendedElevation,
            deallocParams);

        delete  sample->recommendedElevation;
        sample->recommendedElevation=NULL;
    }
    if (sample->recommendedElevationChangeRate != NULL) {
        UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(
            sample->recommendedElevationChangeRate,
            deallocParams);

        delete  sample->recommendedElevationChangeRate;
        sample->recommendedElevationChangeRate=NULL;
    }
    if (sample->recommendedSpeed != NULL) {
        UMAA_Common_Speed_SpeedControlType_finalize_w_params(
            sample->recommendedSpeed,
            deallocParams);

        delete  sample->recommendedSpeed;
        sample->recommendedSpeed=NULL;
    }
    if (sample->recommendedTurnRate != NULL) {

        delete  sample->recommendedTurnRate;
        sample->recommendedTurnRate=NULL;
    }
}

RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_copy(
    UMAA_MO_DriverConfig_DriverConfigReportType* dst,
    const UMAA_MO_DriverConfig_DriverConfigReportType* src)
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

        if (src->maxAllowableAcceleration!=NULL) {
            if (dst->maxAllowableAcceleration==NULL) {

                dst->maxAllowableAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
                if (dst->maxAllowableAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_ex(
                    dst->maxAllowableAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_copy(
                dst->maxAllowableAcceleration,
                (const UMAA_Common_Measurement_Acceleration3D_PlatformXYZ*)src->maxAllowableAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->maxAllowableAcceleration != NULL) {
                UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(dst->maxAllowableAcceleration, deallocParams);
                delete  dst->maxAllowableAcceleration;
                dst->maxAllowableAcceleration=NULL;
            }
        }
        if (src->maxAllowableAttitudeAcceleration!=NULL) {
            if (dst->maxAllowableAttitudeAcceleration==NULL) {

                dst->maxAllowableAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
                if (dst->maxAllowableAttitudeAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_ex(
                    dst->maxAllowableAttitudeAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_copy(
                dst->maxAllowableAttitudeAcceleration,
                (const UMAA_Common_Measurement_OrientationAcceleration3D*)src->maxAllowableAttitudeAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->maxAllowableAttitudeAcceleration != NULL) {
                UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(dst->maxAllowableAttitudeAcceleration, deallocParams);
                delete  dst->maxAllowableAttitudeAcceleration;
                dst->maxAllowableAttitudeAcceleration=NULL;
            }
        }
        if (src->maxAllowableElevation!=NULL) {
            if (dst->maxAllowableElevation==NULL) {

                dst->maxAllowableElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
                if (dst->maxAllowableElevation==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_ElevationType_initialize_ex(
                    dst->maxAllowableElevation, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_ElevationType_copy(
                dst->maxAllowableElevation,
                (const UMAA_Common_Measurement_ElevationType*)src->maxAllowableElevation)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->maxAllowableElevation != NULL) {
                UMAA_Common_Measurement_ElevationType_finalize_w_params(dst->maxAllowableElevation, deallocParams);
                delete  dst->maxAllowableElevation;
                dst->maxAllowableElevation=NULL;
            }
        }
        if (src->maxAllowableSpeed!=NULL) {
            if (dst->maxAllowableSpeed==NULL) {

                dst->maxAllowableSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
                if (dst->maxAllowableSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Speed_SpeedControlType_initialize_ex(
                    dst->maxAllowableSpeed, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Speed_SpeedControlType_copy(
                dst->maxAllowableSpeed,
                (const UMAA_Common_Speed_SpeedControlType*)src->maxAllowableSpeed)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->maxAllowableSpeed != NULL) {
                UMAA_Common_Speed_SpeedControlType_finalize_w_params(dst->maxAllowableSpeed, deallocParams);
                delete  dst->maxAllowableSpeed;
                dst->maxAllowableSpeed=NULL;
            }
        }
        if (src->maxAllowableTurnRate!=NULL) {
            if (dst->maxAllowableTurnRate==NULL) {

                dst->maxAllowableTurnRate = new (std::nothrow)   DDS_Double ();
                if (dst->maxAllowableTurnRate==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->maxAllowableTurnRate)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->maxAllowableTurnRate, 
                src->maxAllowableTurnRate)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->maxAllowableTurnRate != NULL) {
                delete  dst->maxAllowableTurnRate;
                dst->maxAllowableTurnRate=NULL;
            }
        }
        if (src->maxElevationChangeRate!=NULL) {
            if (dst->maxElevationChangeRate==NULL) {

                dst->maxElevationChangeRate = new (std::nothrow)   UMAA_Common_Capabilities_Speed_BSL_Capability ();
                if (dst->maxElevationChangeRate==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_ex(
                    dst->maxElevationChangeRate, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Capabilities_Speed_BSL_Capability_copy(
                dst->maxElevationChangeRate,
                (const UMAA_Common_Capabilities_Speed_BSL_Capability*)src->maxElevationChangeRate)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->maxElevationChangeRate != NULL) {
                UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(dst->maxElevationChangeRate, deallocParams);
                delete  dst->maxElevationChangeRate;
                dst->maxElevationChangeRate=NULL;
            }
        }
        if (src->minAllowableAcceleration!=NULL) {
            if (dst->minAllowableAcceleration==NULL) {

                dst->minAllowableAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
                if (dst->minAllowableAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_ex(
                    dst->minAllowableAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_copy(
                dst->minAllowableAcceleration,
                (const UMAA_Common_Measurement_Acceleration3D_PlatformXYZ*)src->minAllowableAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->minAllowableAcceleration != NULL) {
                UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(dst->minAllowableAcceleration, deallocParams);
                delete  dst->minAllowableAcceleration;
                dst->minAllowableAcceleration=NULL;
            }
        }
        if (src->minAllowableAttitudeAcceleration!=NULL) {
            if (dst->minAllowableAttitudeAcceleration==NULL) {

                dst->minAllowableAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
                if (dst->minAllowableAttitudeAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_ex(
                    dst->minAllowableAttitudeAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_copy(
                dst->minAllowableAttitudeAcceleration,
                (const UMAA_Common_Measurement_OrientationAcceleration3D*)src->minAllowableAttitudeAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->minAllowableAttitudeAcceleration != NULL) {
                UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(dst->minAllowableAttitudeAcceleration, deallocParams);
                delete  dst->minAllowableAttitudeAcceleration;
                dst->minAllowableAttitudeAcceleration=NULL;
            }
        }
        if (src->minAllowableElevation!=NULL) {
            if (dst->minAllowableElevation==NULL) {

                dst->minAllowableElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
                if (dst->minAllowableElevation==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_ElevationType_initialize_ex(
                    dst->minAllowableElevation, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_ElevationType_copy(
                dst->minAllowableElevation,
                (const UMAA_Common_Measurement_ElevationType*)src->minAllowableElevation)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->minAllowableElevation != NULL) {
                UMAA_Common_Measurement_ElevationType_finalize_w_params(dst->minAllowableElevation, deallocParams);
                delete  dst->minAllowableElevation;
                dst->minAllowableElevation=NULL;
            }
        }
        if (src->minAllowableSpeed!=NULL) {
            if (dst->minAllowableSpeed==NULL) {

                dst->minAllowableSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
                if (dst->minAllowableSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Speed_SpeedControlType_initialize_ex(
                    dst->minAllowableSpeed, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Speed_SpeedControlType_copy(
                dst->minAllowableSpeed,
                (const UMAA_Common_Speed_SpeedControlType*)src->minAllowableSpeed)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->minAllowableSpeed != NULL) {
                UMAA_Common_Speed_SpeedControlType_finalize_w_params(dst->minAllowableSpeed, deallocParams);
                delete  dst->minAllowableSpeed;
                dst->minAllowableSpeed=NULL;
            }
        }
        if (src->recommendedAcceleration!=NULL) {
            if (dst->recommendedAcceleration==NULL) {

                dst->recommendedAcceleration = new (std::nothrow)   UMAA_Common_Measurement_Acceleration3D_PlatformXYZ ();
                if (dst->recommendedAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_initialize_ex(
                    dst->recommendedAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_copy(
                dst->recommendedAcceleration,
                (const UMAA_Common_Measurement_Acceleration3D_PlatformXYZ*)src->recommendedAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->recommendedAcceleration != NULL) {
                UMAA_Common_Measurement_Acceleration3D_PlatformXYZ_finalize_w_params(dst->recommendedAcceleration, deallocParams);
                delete  dst->recommendedAcceleration;
                dst->recommendedAcceleration=NULL;
            }
        }
        if (src->recommendedAttitudeAcceleration!=NULL) {
            if (dst->recommendedAttitudeAcceleration==NULL) {

                dst->recommendedAttitudeAcceleration = new (std::nothrow)   UMAA_Common_Measurement_OrientationAcceleration3D ();
                if (dst->recommendedAttitudeAcceleration==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_OrientationAcceleration3D_initialize_ex(
                    dst->recommendedAttitudeAcceleration, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_OrientationAcceleration3D_copy(
                dst->recommendedAttitudeAcceleration,
                (const UMAA_Common_Measurement_OrientationAcceleration3D*)src->recommendedAttitudeAcceleration)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->recommendedAttitudeAcceleration != NULL) {
                UMAA_Common_Measurement_OrientationAcceleration3D_finalize_w_params(dst->recommendedAttitudeAcceleration, deallocParams);
                delete  dst->recommendedAttitudeAcceleration;
                dst->recommendedAttitudeAcceleration=NULL;
            }
        }
        if (src->recommendedElevation!=NULL) {
            if (dst->recommendedElevation==NULL) {

                dst->recommendedElevation = new (std::nothrow)   UMAA_Common_Measurement_ElevationType ();
                if (dst->recommendedElevation==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_ElevationType_initialize_ex(
                    dst->recommendedElevation, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_ElevationType_copy(
                dst->recommendedElevation,
                (const UMAA_Common_Measurement_ElevationType*)src->recommendedElevation)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->recommendedElevation != NULL) {
                UMAA_Common_Measurement_ElevationType_finalize_w_params(dst->recommendedElevation, deallocParams);
                delete  dst->recommendedElevation;
                dst->recommendedElevation=NULL;
            }
        }
        if (src->recommendedElevationChangeRate!=NULL) {
            if (dst->recommendedElevationChangeRate==NULL) {

                dst->recommendedElevationChangeRate = new (std::nothrow)   UMAA_Common_Capabilities_Speed_BSL_Capability ();
                if (dst->recommendedElevationChangeRate==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Capabilities_Speed_BSL_Capability_initialize_ex(
                    dst->recommendedElevationChangeRate, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Capabilities_Speed_BSL_Capability_copy(
                dst->recommendedElevationChangeRate,
                (const UMAA_Common_Capabilities_Speed_BSL_Capability*)src->recommendedElevationChangeRate)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->recommendedElevationChangeRate != NULL) {
                UMAA_Common_Capabilities_Speed_BSL_Capability_finalize_w_params(dst->recommendedElevationChangeRate, deallocParams);
                delete  dst->recommendedElevationChangeRate;
                dst->recommendedElevationChangeRate=NULL;
            }
        }
        if (src->recommendedSpeed!=NULL) {
            if (dst->recommendedSpeed==NULL) {

                dst->recommendedSpeed = new (std::nothrow)   UMAA_Common_Speed_SpeedControlType ();
                if (dst->recommendedSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Speed_SpeedControlType_initialize_ex(
                    dst->recommendedSpeed, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Speed_SpeedControlType_copy(
                dst->recommendedSpeed,
                (const UMAA_Common_Speed_SpeedControlType*)src->recommendedSpeed)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->recommendedSpeed != NULL) {
                UMAA_Common_Speed_SpeedControlType_finalize_w_params(dst->recommendedSpeed, deallocParams);
                delete  dst->recommendedSpeed;
                dst->recommendedSpeed=NULL;
            }
        }
        if (src->recommendedTurnRate!=NULL) {
            if (dst->recommendedTurnRate==NULL) {

                dst->recommendedTurnRate = new (std::nothrow)   DDS_Double ();
                if (dst->recommendedTurnRate==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->recommendedTurnRate)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->recommendedTurnRate, 
                src->recommendedTurnRate)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->recommendedTurnRate != NULL) {
                delete  dst->recommendedTurnRate;
                dst->recommendedTurnRate=NULL;
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
* Configure and implement 'UMAA_MO_DriverConfig_DriverConfigReportType' sequence class.
*/
#define T UMAA_MO_DriverConfig_DriverConfigReportType
#define TSeq UMAA_MO_DriverConfig_DriverConfigReportTypeSeq

#define T_initialize_w_params UMAA_MO_DriverConfig_DriverConfigReportType_initialize_w_params

#define T_finalize_w_params   UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_params
#define T_copy       UMAA_MO_DriverConfig_DriverConfigReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MO_DriverConfig_DriverConfigReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MO_DriverConfig_DriverConfigReportType_get_typecode();
        }

    } 
}
#endif
