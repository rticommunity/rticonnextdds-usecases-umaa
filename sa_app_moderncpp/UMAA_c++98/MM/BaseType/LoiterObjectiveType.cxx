

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoiterObjectiveType.idl 
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

#include "LoiterObjectiveType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "LoiterObjectiveTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_LoiterObjectiveTypeTYPENAME = "UMAA::MM::BaseType::LoiterObjectiveType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_LoiterObjectiveType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[15]=
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
            (char *)"autoHeading",/* Member name */
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
            (char *)"bearing",/* Member name */
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
            (char *)"depth",/* Member name */
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
            (char *)"direction",/* Member name */
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
            (char *)"duration",/* Member name */
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
        }, 
        {
            (char *)"heading",/* Member name */
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
            (char *)"hoverKind",/* Member name */
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
            (char *)"length",/* Member name */
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
            (char *)"position",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"speed",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"type",/* Member name */
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
            (char *)"width",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_LoiterObjectiveType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::LoiterObjectiveType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            15, /* Number of members */
            UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_LoiterObjectiveType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_LoiterObjectiveType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_LoiterObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_AGL_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_ASF_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_BSL_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Hours_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Heading_TrueNorth_Angle_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position3D_WGS84_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType_get_typecode();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 10000ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[7]._annotations._maxValue._u.double_value = 10505ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[8]._annotations._minValue._u.double_value = -3.1415926535897931264626433832795;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[8]._annotations._maxValue._u.double_value = 3.1415926535897932384626433832795;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[12]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[13]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc_members[14]._annotations._maxValue._u.double_value = 401056000ULL;

    UMAA_MM_BaseType_LoiterObjectiveType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_LoiterObjectiveType_get_sample_access_info();
    UMAA_MM_BaseType_LoiterObjectiveType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_LoiterObjectiveType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_LoiterObjectiveType_g_tc;
}

#define TSeq UMAA_MM_BaseType_LoiterObjectiveTypeSeq
#define T UMAA_MM_BaseType_LoiterObjectiveType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_LoiterObjectiveType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_LoiterObjectiveType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_LoiterObjectiveTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_LoiterObjectiveTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_LoiterObjectiveType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_LoiterObjectiveType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_LoiterObjectiveType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[15] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_LoiterObjectiveType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitude - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->autoHeading - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bearing - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->depth - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->direction - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->duration - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->heading - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->hoverKind - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->length - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speed - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->type - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->width - (char *)sample);

    UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_LoiterObjectiveType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_LoiterObjectiveType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_LoiterObjectiveType_get_member_value_pointer;

    UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_LoiterObjectiveType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_LoiterObjectiveType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_LoiterObjectiveType_g_typePlugin = 
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
        UMAA_MM_BaseType_LoiterObjectiveType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_LoiterObjectiveType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize(
    UMAA_MM_BaseType_LoiterObjectiveType* sample)
{
    return UMAA_MM_BaseType_LoiterObjectiveType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_LoiterObjectiveType *sample,
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
        sample->autoHeading=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->autoHeading = new (std::nothrow)   DDS_Boolean ();
            if (sample->autoHeading==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->autoHeading)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->autoHeading != NULL) {
                if (!RTICdrType_initBoolean(sample->autoHeading)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->bearing=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->bearing = new (std::nothrow)   DDS_Double ();
            if (sample->bearing==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->bearing)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->bearing != NULL) {
                if (!RTICdrType_initDouble(sample->bearing)) {
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
        sample->direction=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->direction = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType ();
            if (sample->direction==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_initialize_w_params(
                sample->direction,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->direction!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_initialize_w_params(
                    sample->direction,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    sample->duration = 0.0;

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
        sample->hoverKind=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->hoverKind = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType ();
            if (sample->hoverKind==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_initialize_w_params(
                sample->hoverKind,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->hoverKind!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_initialize_w_params(
                    sample->hoverKind,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->length=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->length = new (std::nothrow)   DDS_Double ();
            if (sample->length==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->length)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->length != NULL) {
                if (!RTICdrType_initDouble(sample->length)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!UMAA_Common_Measurement_Position3D_WGS84_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->speed = 0.0;

    sample->type = UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType_CIRCLE;
    sample->width = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_LoiterObjectiveType_initialize_ex(
    UMAA_MM_BaseType_LoiterObjectiveType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_LoiterObjectiveType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_LoiterObjectiveType* sample)
{
    UMAA_MM_BaseType_LoiterObjectiveType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_LoiterObjectiveType_finalize(
    UMAA_MM_BaseType_LoiterObjectiveType* sample)
{  
    UMAA_MM_BaseType_LoiterObjectiveType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_LoiterObjectiveType_finalize_ex(
    UMAA_MM_BaseType_LoiterObjectiveType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_LoiterObjectiveType *sample,
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
        if (sample->autoHeading != NULL) {

            delete  sample->autoHeading;
            sample->autoHeading=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->bearing != NULL) {

            delete  sample->bearing;
            sample->bearing=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->depth != NULL) {

            delete  sample->depth;
            sample->depth=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->direction != NULL) {
            UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_finalize_w_params(
                sample->direction,
                deallocParams);

            delete  sample->direction;
            sample->direction=NULL;
        }
    }

    if (deallocParams->delete_optional_members) {
        if (sample->heading != NULL) {

            delete  sample->heading;
            sample->heading=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->hoverKind != NULL) {
            UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_finalize_w_params(
                sample->hoverKind,
                deallocParams);

            delete  sample->hoverKind;
            sample->hoverKind=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->length != NULL) {

            delete  sample->length;
            sample->length=NULL;
        }
    }
    UMAA_Common_Measurement_Position3D_WGS84_finalize_w_params(
        &sample->position,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType_finalize_w_params(
        &sample->type,
        deallocParams);

}

void UMAA_MM_BaseType_LoiterObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_LoiterObjectiveType* sample, RTIBool deletePointers)
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
    if (sample->autoHeading != NULL) {

        delete  sample->autoHeading;
        sample->autoHeading=NULL;
    }
    if (sample->bearing != NULL) {

        delete  sample->bearing;
        sample->bearing=NULL;
    }
    if (sample->depth != NULL) {

        delete  sample->depth;
        sample->depth=NULL;
    }
    if (sample->direction != NULL) {
        UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_finalize_w_params(
            sample->direction,
            deallocParams);

        delete  sample->direction;
        sample->direction=NULL;
    }
    if (sample->heading != NULL) {

        delete  sample->heading;
        sample->heading=NULL;
    }
    if (sample->hoverKind != NULL) {
        UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_finalize_w_params(
            sample->hoverKind,
            deallocParams);

        delete  sample->hoverKind;
        sample->hoverKind=NULL;
    }
    if (sample->length != NULL) {

        delete  sample->length;
        sample->length=NULL;
    }
}

RTIBool UMAA_MM_BaseType_LoiterObjectiveType_copy(
    UMAA_MM_BaseType_LoiterObjectiveType* dst,
    const UMAA_MM_BaseType_LoiterObjectiveType* src)
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
        if (src->autoHeading!=NULL) {
            if (dst->autoHeading==NULL) {

                dst->autoHeading = new (std::nothrow)   DDS_Boolean ();
                if (dst->autoHeading==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->autoHeading)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->autoHeading, 
                src->autoHeading)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->autoHeading != NULL) {
                delete  dst->autoHeading;
                dst->autoHeading=NULL;
            }
        }
        if (src->bearing!=NULL) {
            if (dst->bearing==NULL) {

                dst->bearing = new (std::nothrow)   DDS_Double ();
                if (dst->bearing==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->bearing)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->bearing, 
                src->bearing)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->bearing != NULL) {
                delete  dst->bearing;
                dst->bearing=NULL;
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
        if (src->direction!=NULL) {
            if (dst->direction==NULL) {

                dst->direction = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType ();
                if (dst->direction==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_initialize_ex(
                    dst->direction, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_copy(
                dst->direction,
                (const UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType*)src->direction)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->direction != NULL) {
                UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType_finalize_w_params(dst->direction, deallocParams);
                delete  dst->direction;
                dst->direction=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->duration, 
            &src->duration)) { 
            return RTI_FALSE;
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
        if (src->hoverKind!=NULL) {
            if (dst->hoverKind==NULL) {

                dst->hoverKind = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType ();
                if (dst->hoverKind==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_initialize_ex(
                    dst->hoverKind, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_copy(
                dst->hoverKind,
                (const UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType*)src->hoverKind)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->hoverKind != NULL) {
                UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType_finalize_w_params(dst->hoverKind, deallocParams);
                delete  dst->hoverKind;
                dst->hoverKind=NULL;
            }
        }
        if (src->length!=NULL) {
            if (dst->length==NULL) {

                dst->length = new (std::nothrow)   DDS_Double ();
                if (dst->length==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->length)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->length, 
                src->length)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->length != NULL) {
                delete  dst->length;
                dst->length=NULL;
            }
        }
        if (!UMAA_Common_Measurement_Position3D_WGS84_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position3D_WGS84*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->speed, 
            &src->speed)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType_copy(
            &dst->type,
            (const UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType*)&src->type)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->width, 
            &src->width)) { 
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
* Configure and implement 'UMAA_MM_BaseType_LoiterObjectiveType' sequence class.
*/
#define T UMAA_MM_BaseType_LoiterObjectiveType
#define TSeq UMAA_MM_BaseType_LoiterObjectiveTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_LoiterObjectiveType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_LoiterObjectiveType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_LoiterObjectiveType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_LoiterObjectiveType_get_typecode();
        }

    } 
}
#endif
