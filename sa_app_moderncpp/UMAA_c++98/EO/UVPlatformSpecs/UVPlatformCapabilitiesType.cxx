

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesType.idl 
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

#include "UVPlatformCapabilitiesType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "UVPlatformCapabilitiesTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeTYPENAME = "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[9]=
    {

        {
            (char *)"cruisingSpeed",/* Member name */
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
            (char *)"maxForwardSpeed",/* Member name */
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
            (char *)"maxPitchRate",/* Member name */
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
            (char *)"maxReverseSpeed",/* Member name */
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
            (char *)"maxTowingSpeed",/* Member name */
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
            (char *)"maxTowingTurnRate",/* Member name */
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
            (char *)"maxTurnRate",/* Member name */
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
            (char *)"minTowingSpeed",/* Member name */
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
            (char *)"minTowingTurnRate",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType*/

    if (is_initialized) {
        return &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_PitchRate_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_TurnRate_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_TurnRate_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_GroundSpeed_get_typecode();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_TurnRate_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[0]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[1]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[2]._annotations._maxValue._u.double_value = 32.767;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[3]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[4]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[5]._annotations._maxValue._u.double_value = 32.767;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[6]._annotations._maxValue._u.double_value = 32.767;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[7]._annotations._maxValue._u.double_value = 200ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc_members[8]._annotations._maxValue._u.double_value = 32.767;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc._data._sampleAccessInfo =
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_sample_access_info();
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc._data._typePlugin =
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_type_plugin_info();    

    return &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_tc;
}

#define TSeq UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq
#define T UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[9] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->cruisingSpeed - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxForwardSpeed - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxPitchRate - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxReverseSpeed - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingSpeed - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxTowingTurnRate - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->maxTurnRate - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minTowingSpeed - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->minTowingTurnRate - (char *)sample);

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_member_value_pointer;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_typePlugin = 
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
        UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* sample)
{
    return UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->cruisingSpeed = 0.0;

    sample->maxForwardSpeed = 0.0;

    sample->maxPitchRate = 0.0;

    sample->maxReverseSpeed = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->maxTowingSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->maxTowingSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->maxTowingSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->maxTowingSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->maxTowingSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->maxTowingSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->maxTowingTurnRate=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->maxTowingTurnRate = new (std::nothrow)   DDS_Double ();
            if (sample->maxTowingTurnRate==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->maxTowingTurnRate)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->maxTowingTurnRate != NULL) {
                if (!RTICdrType_initDouble(sample->maxTowingTurnRate)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->maxTurnRate = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->minTowingSpeed=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->minTowingSpeed = new (std::nothrow)   DDS_Double ();
            if (sample->minTowingSpeed==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->minTowingSpeed)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->minTowingSpeed != NULL) {
                if (!RTICdrType_initDouble(sample->minTowingSpeed)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->minTowingTurnRate=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->minTowingTurnRate = new (std::nothrow)   DDS_Double ();
            if (sample->minTowingTurnRate==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->minTowingTurnRate)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->minTowingTurnRate != NULL) {
                if (!RTICdrType_initDouble(sample->minTowingTurnRate)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    return RTI_TRUE;
}
RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_return(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* sample)
{
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* sample)
{  
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_ex(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_params(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->maxTowingSpeed != NULL) {

            delete  sample->maxTowingSpeed;
            sample->maxTowingSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->maxTowingTurnRate != NULL) {

            delete  sample->maxTowingTurnRate;
            sample->maxTowingTurnRate=NULL;
        }
    }

    if (deallocParams->delete_optional_members) {
        if (sample->minTowingSpeed != NULL) {

            delete  sample->minTowingSpeed;
            sample->minTowingSpeed=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->minTowingTurnRate != NULL) {

            delete  sample->minTowingTurnRate;
            sample->minTowingTurnRate=NULL;
        }
    }
}

void UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_optional_members(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* sample, RTIBool deletePointers)
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

    if (sample->maxTowingSpeed != NULL) {

        delete  sample->maxTowingSpeed;
        sample->maxTowingSpeed=NULL;
    }
    if (sample->maxTowingTurnRate != NULL) {

        delete  sample->maxTowingTurnRate;
        sample->maxTowingTurnRate=NULL;
    }
    if (sample->minTowingSpeed != NULL) {

        delete  sample->minTowingSpeed;
        sample->minTowingSpeed=NULL;
    }
    if (sample->minTowingTurnRate != NULL) {

        delete  sample->minTowingTurnRate;
        sample->minTowingTurnRate=NULL;
    }
}

RTIBool UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_copy(
    UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* dst,
    const UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType* src)
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
            &dst->cruisingSpeed, 
            &src->cruisingSpeed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxForwardSpeed, 
            &src->maxForwardSpeed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxPitchRate, 
            &src->maxPitchRate)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->maxReverseSpeed, 
            &src->maxReverseSpeed)) { 
            return RTI_FALSE;
        }
        if (src->maxTowingSpeed!=NULL) {
            if (dst->maxTowingSpeed==NULL) {

                dst->maxTowingSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->maxTowingSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->maxTowingSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->maxTowingSpeed, 
                src->maxTowingSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->maxTowingSpeed != NULL) {
                delete  dst->maxTowingSpeed;
                dst->maxTowingSpeed=NULL;
            }
        }
        if (src->maxTowingTurnRate!=NULL) {
            if (dst->maxTowingTurnRate==NULL) {

                dst->maxTowingTurnRate = new (std::nothrow)   DDS_Double ();
                if (dst->maxTowingTurnRate==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->maxTowingTurnRate)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->maxTowingTurnRate, 
                src->maxTowingTurnRate)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->maxTowingTurnRate != NULL) {
                delete  dst->maxTowingTurnRate;
                dst->maxTowingTurnRate=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->maxTurnRate, 
            &src->maxTurnRate)) { 
            return RTI_FALSE;
        }
        if (src->minTowingSpeed!=NULL) {
            if (dst->minTowingSpeed==NULL) {

                dst->minTowingSpeed = new (std::nothrow)   DDS_Double ();
                if (dst->minTowingSpeed==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->minTowingSpeed)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->minTowingSpeed, 
                src->minTowingSpeed)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->minTowingSpeed != NULL) {
                delete  dst->minTowingSpeed;
                dst->minTowingSpeed=NULL;
            }
        }
        if (src->minTowingTurnRate!=NULL) {
            if (dst->minTowingTurnRate==NULL) {

                dst->minTowingTurnRate = new (std::nothrow)   DDS_Double ();
                if (dst->minTowingTurnRate==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->minTowingTurnRate)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->minTowingTurnRate, 
                src->minTowingTurnRate)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->minTowingTurnRate != NULL) {
                delete  dst->minTowingTurnRate;
                dst->minTowingTurnRate=NULL;
            }
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
* Configure and implement 'UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType' sequence class.
*/
#define T UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType
#define TSeq UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesTypeSeq

#define T_initialize_w_params UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_finalize_w_params
#define T_copy       UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_UVPlatformSpecs_UVPlatformCapabilitiesType_get_typecode();
        }

    } 
}
#endif
