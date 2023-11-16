

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl 
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

#include "GPSClockType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GPSClockTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_GPSStatus_GPSClockTypeTYPENAME = "UMAA::SEM::GPSStatus::GPSClockType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_GPSStatus_GPSClockType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[14]=
    {

        {
            (char *)"bias",/* Member name */
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
            (char *)"biasUncertianty",/* Member name */
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
            (char *)"drift",/* Member name */
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
            (char *)"driftUncertainty",/* Member name */
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
            (char *)"elapsedRealtime",/* Member name */
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
            (char *)"elapsedRealtimeUncertainty",/* Member name */
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
            (char *)"fullBias",/* Member name */
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
            (char *)"hardwareClockDiscontinuityCount",/* Member name */
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
            (char *)"leapSecond",/* Member name */
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
            (char *)"referenceCarrierFrequency",/* Member name */
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
            (char *)"referenceCodeTypeFor",/* Member name */
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
            (char *)"referenceConstellationType",/* Member name */
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
            (char *)"time",/* Member name */
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
            (char *)"timeUncertainty",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SEM_GPSStatus_GPSClockType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::GPSStatus::GPSClockType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            14, /* Number of members */
            UMAA_SEM_GPSStatus_GPSClockType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_GPSStatus_GPSClockType*/

    if (is_initialized) {
        return &UMAA_SEM_GPSStatus_GPSClockType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_GPSStatus_GPSClockType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsDrift_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_NanosecondsCount_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RadioFrequency_Hertz_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Count_get_typecode();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Size_Numeral_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[8]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[8]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[9]._annotations._minValue._u.double_value = 0.0;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[9]._annotations._maxValue._u.double_value = 10000000000ULL;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[12]._annotations._minValue._u.long_value = -2147483648L;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[12]._annotations._maxValue._u.long_value = 2147483647L;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[13]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSClockType_g_tc_members[13]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_SEM_GPSStatus_GPSClockType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_GPSStatus_GPSClockType_get_sample_access_info();
    UMAA_SEM_GPSStatus_GPSClockType_g_tc._data._typePlugin =
    UMAA_SEM_GPSStatus_GPSClockType_get_type_plugin_info();    

    return &UMAA_SEM_GPSStatus_GPSClockType_g_tc;
}

#define TSeq UMAA_SEM_GPSStatus_GPSClockTypeSeq
#define T UMAA_SEM_GPSStatus_GPSClockType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSClockType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSClockType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_GPSStatus_GPSClockTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_GPSStatus_GPSClockTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_GPSStatus_GPSClockType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSClockType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_GPSStatus_GPSClockType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[14] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_GPSStatus_GPSClockType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bias - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->biasUncertianty - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->drift - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->driftUncertainty - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtime - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elapsedRealtimeUncertainty - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->fullBias - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->hardwareClockDiscontinuityCount - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->leapSecond - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->referenceCarrierFrequency - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->referenceCodeTypeFor - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->referenceConstellationType - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->time - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeUncertainty - (char *)sample);

    UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_GPSStatus_GPSClockType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_GPSStatus_GPSClockType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_GPSStatus_GPSClockType_get_member_value_pointer;

    UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSClockType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSClockType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_GPSStatus_GPSClockType_g_typePlugin = 
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
        UMAA_SEM_GPSStatus_GPSClockType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_GPSStatus_GPSClockType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_GPSStatus_GPSClockType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize(
    UMAA_SEM_GPSStatus_GPSClockType* sample)
{
    return UMAA_SEM_GPSStatus_GPSClockType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSClockType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->bias=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->bias = new (std::nothrow)   DDS_Long ();
            if (sample->bias==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->bias)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->bias != NULL) {
                if (!RTICdrType_initLong(sample->bias)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->biasUncertianty=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->biasUncertianty = new (std::nothrow)   DDS_Long ();
            if (sample->biasUncertianty==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->biasUncertianty)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->biasUncertianty != NULL) {
                if (!RTICdrType_initLong(sample->biasUncertianty)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->drift=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->drift = new (std::nothrow)   DDS_Long ();
            if (sample->drift==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->drift)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->drift != NULL) {
                if (!RTICdrType_initLong(sample->drift)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->driftUncertainty=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->driftUncertainty = new (std::nothrow)   DDS_Long ();
            if (sample->driftUncertainty==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->driftUncertainty)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->driftUncertainty != NULL) {
                if (!RTICdrType_initLong(sample->driftUncertainty)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->elapsedRealtime=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->elapsedRealtime = new (std::nothrow)   DDS_Long ();
            if (sample->elapsedRealtime==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->elapsedRealtime)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->elapsedRealtime != NULL) {
                if (!RTICdrType_initLong(sample->elapsedRealtime)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->elapsedRealtimeUncertainty=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->elapsedRealtimeUncertainty = new (std::nothrow)   DDS_Long ();
            if (sample->elapsedRealtimeUncertainty==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->elapsedRealtimeUncertainty)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->elapsedRealtimeUncertainty != NULL) {
                if (!RTICdrType_initLong(sample->elapsedRealtimeUncertainty)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->fullBias=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->fullBias = new (std::nothrow)   DDS_Long ();
            if (sample->fullBias==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->fullBias)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->fullBias != NULL) {
                if (!RTICdrType_initLong(sample->fullBias)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->hardwareClockDiscontinuityCount=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->hardwareClockDiscontinuityCount = new (std::nothrow)   DDS_Long ();
            if (sample->hardwareClockDiscontinuityCount==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->hardwareClockDiscontinuityCount)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->hardwareClockDiscontinuityCount != NULL) {
                if (!RTICdrType_initLong(sample->hardwareClockDiscontinuityCount)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->leapSecond=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->leapSecond = new (std::nothrow)   DDS_Long ();
            if (sample->leapSecond==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->leapSecond)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->leapSecond != NULL) {
                if (!RTICdrType_initLong(sample->leapSecond)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->referenceCarrierFrequency=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->referenceCarrierFrequency = new (std::nothrow)   DDS_Double ();
            if (sample->referenceCarrierFrequency==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->referenceCarrierFrequency)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->referenceCarrierFrequency != NULL) {
                if (!RTICdrType_initDouble(sample->referenceCarrierFrequency)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->referenceCodeTypeFor=NULL;
    } else {   

        if (allocParams->allocate_memory) {
            sample->referenceCodeTypeFor = DDS_String_alloc((1023L));
            if (sample->referenceCodeTypeFor != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->referenceCodeTypeFor,
                        "",
                        (1023L),
                        RTI_FALSE),
                        RTIBool);
            }
            if (sample->referenceCodeTypeFor == NULL) {
                return RTI_FALSE;
            }
        } else {
            if (sample->referenceCodeTypeFor != NULL) {
                RTIOsapiUtility_unusedReturnValue(
                    RTICdrType_copyStringEx(
                        &sample->referenceCodeTypeFor,
                        "",
                        (1023L),
                        RTI_FALSE),
                        RTIBool);
                if (sample->referenceCodeTypeFor == NULL) {
                    return RTI_FALSE;
                }
            }
        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->referenceConstellationType=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->referenceConstellationType = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType ();
            if (sample->referenceConstellationType==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_w_params(
                sample->referenceConstellationType,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->referenceConstellationType!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_w_params(
                    sample->referenceConstellationType,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->time=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->time = new (std::nothrow)   DDS_Long ();
            if (sample->time==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initLong(sample->time)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->time != NULL) {
                if (!RTICdrType_initLong(sample->time)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->timeUncertainty=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->timeUncertainty = new (std::nothrow)   DDS_Double ();
            if (sample->timeUncertainty==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->timeUncertainty)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->timeUncertainty != NULL) {
                if (!RTICdrType_initDouble(sample->timeUncertainty)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    return RTI_TRUE;
}
RTIBool UMAA_SEM_GPSStatus_GPSClockType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSClockType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_GPSStatus_GPSClockType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_GPSStatus_GPSClockType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSClockType* sample)
{
    UMAA_SEM_GPSStatus_GPSClockType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_GPSStatus_GPSClockType_finalize(
    UMAA_SEM_GPSStatus_GPSClockType* sample)
{  
    UMAA_SEM_GPSStatus_GPSClockType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_GPSStatus_GPSClockType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSClockType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_GPSStatus_GPSClockType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_GPSStatus_GPSClockType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSClockType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->bias != NULL) {

            delete  sample->bias;
            sample->bias=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->biasUncertianty != NULL) {

            delete  sample->biasUncertianty;
            sample->biasUncertianty=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->drift != NULL) {

            delete  sample->drift;
            sample->drift=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->driftUncertainty != NULL) {

            delete  sample->driftUncertainty;
            sample->driftUncertainty=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->elapsedRealtime != NULL) {

            delete  sample->elapsedRealtime;
            sample->elapsedRealtime=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->elapsedRealtimeUncertainty != NULL) {

            delete  sample->elapsedRealtimeUncertainty;
            sample->elapsedRealtimeUncertainty=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->fullBias != NULL) {

            delete  sample->fullBias;
            sample->fullBias=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->hardwareClockDiscontinuityCount != NULL) {

            delete  sample->hardwareClockDiscontinuityCount;
            sample->hardwareClockDiscontinuityCount=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->leapSecond != NULL) {

            delete  sample->leapSecond;
            sample->leapSecond=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->referenceCarrierFrequency != NULL) {

            delete  sample->referenceCarrierFrequency;
            sample->referenceCarrierFrequency=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->referenceCodeTypeFor != NULL) {
            DDS_String_free(sample->referenceCodeTypeFor);
            sample->referenceCodeTypeFor=NULL;

        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->referenceConstellationType != NULL) {
            UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(
                sample->referenceConstellationType,
                deallocParams);

            delete  sample->referenceConstellationType;
            sample->referenceConstellationType=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->time != NULL) {

            delete  sample->time;
            sample->time=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->timeUncertainty != NULL) {

            delete  sample->timeUncertainty;
            sample->timeUncertainty=NULL;
        }
    }
}

void UMAA_SEM_GPSStatus_GPSClockType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSClockType* sample, RTIBool deletePointers)
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

    if (sample->bias != NULL) {

        delete  sample->bias;
        sample->bias=NULL;
    }
    if (sample->biasUncertianty != NULL) {

        delete  sample->biasUncertianty;
        sample->biasUncertianty=NULL;
    }
    if (sample->drift != NULL) {

        delete  sample->drift;
        sample->drift=NULL;
    }
    if (sample->driftUncertainty != NULL) {

        delete  sample->driftUncertainty;
        sample->driftUncertainty=NULL;
    }
    if (sample->elapsedRealtime != NULL) {

        delete  sample->elapsedRealtime;
        sample->elapsedRealtime=NULL;
    }
    if (sample->elapsedRealtimeUncertainty != NULL) {

        delete  sample->elapsedRealtimeUncertainty;
        sample->elapsedRealtimeUncertainty=NULL;
    }
    if (sample->fullBias != NULL) {

        delete  sample->fullBias;
        sample->fullBias=NULL;
    }
    if (sample->hardwareClockDiscontinuityCount != NULL) {

        delete  sample->hardwareClockDiscontinuityCount;
        sample->hardwareClockDiscontinuityCount=NULL;
    }
    if (sample->leapSecond != NULL) {

        delete  sample->leapSecond;
        sample->leapSecond=NULL;
    }
    if (sample->referenceCarrierFrequency != NULL) {

        delete  sample->referenceCarrierFrequency;
        sample->referenceCarrierFrequency=NULL;
    }
    if (sample->referenceCodeTypeFor != NULL) {
        DDS_String_free(sample->referenceCodeTypeFor);
        sample->referenceCodeTypeFor=NULL;

    }
    if (sample->referenceConstellationType != NULL) {
        UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(
            sample->referenceConstellationType,
            deallocParams);

        delete  sample->referenceConstellationType;
        sample->referenceConstellationType=NULL;
    }
    if (sample->time != NULL) {

        delete  sample->time;
        sample->time=NULL;
    }
    if (sample->timeUncertainty != NULL) {

        delete  sample->timeUncertainty;
        sample->timeUncertainty=NULL;
    }
}

RTIBool UMAA_SEM_GPSStatus_GPSClockType_copy(
    UMAA_SEM_GPSStatus_GPSClockType* dst,
    const UMAA_SEM_GPSStatus_GPSClockType* src)
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

        if (src->bias!=NULL) {
            if (dst->bias==NULL) {

                dst->bias = new (std::nothrow)   DDS_Long ();
                if (dst->bias==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->bias)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->bias, 
                src->bias)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->bias != NULL) {
                delete  dst->bias;
                dst->bias=NULL;
            }
        }
        if (src->biasUncertianty!=NULL) {
            if (dst->biasUncertianty==NULL) {

                dst->biasUncertianty = new (std::nothrow)   DDS_Long ();
                if (dst->biasUncertianty==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->biasUncertianty)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->biasUncertianty, 
                src->biasUncertianty)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->biasUncertianty != NULL) {
                delete  dst->biasUncertianty;
                dst->biasUncertianty=NULL;
            }
        }
        if (src->drift!=NULL) {
            if (dst->drift==NULL) {

                dst->drift = new (std::nothrow)   DDS_Long ();
                if (dst->drift==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->drift)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->drift, 
                src->drift)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->drift != NULL) {
                delete  dst->drift;
                dst->drift=NULL;
            }
        }
        if (src->driftUncertainty!=NULL) {
            if (dst->driftUncertainty==NULL) {

                dst->driftUncertainty = new (std::nothrow)   DDS_Long ();
                if (dst->driftUncertainty==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->driftUncertainty)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->driftUncertainty, 
                src->driftUncertainty)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->driftUncertainty != NULL) {
                delete  dst->driftUncertainty;
                dst->driftUncertainty=NULL;
            }
        }
        if (src->elapsedRealtime!=NULL) {
            if (dst->elapsedRealtime==NULL) {

                dst->elapsedRealtime = new (std::nothrow)   DDS_Long ();
                if (dst->elapsedRealtime==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->elapsedRealtime)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->elapsedRealtime, 
                src->elapsedRealtime)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->elapsedRealtime != NULL) {
                delete  dst->elapsedRealtime;
                dst->elapsedRealtime=NULL;
            }
        }
        if (src->elapsedRealtimeUncertainty!=NULL) {
            if (dst->elapsedRealtimeUncertainty==NULL) {

                dst->elapsedRealtimeUncertainty = new (std::nothrow)   DDS_Long ();
                if (dst->elapsedRealtimeUncertainty==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->elapsedRealtimeUncertainty)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->elapsedRealtimeUncertainty, 
                src->elapsedRealtimeUncertainty)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->elapsedRealtimeUncertainty != NULL) {
                delete  dst->elapsedRealtimeUncertainty;
                dst->elapsedRealtimeUncertainty=NULL;
            }
        }
        if (src->fullBias!=NULL) {
            if (dst->fullBias==NULL) {

                dst->fullBias = new (std::nothrow)   DDS_Long ();
                if (dst->fullBias==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->fullBias)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->fullBias, 
                src->fullBias)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->fullBias != NULL) {
                delete  dst->fullBias;
                dst->fullBias=NULL;
            }
        }
        if (src->hardwareClockDiscontinuityCount!=NULL) {
            if (dst->hardwareClockDiscontinuityCount==NULL) {

                dst->hardwareClockDiscontinuityCount = new (std::nothrow)   DDS_Long ();
                if (dst->hardwareClockDiscontinuityCount==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->hardwareClockDiscontinuityCount)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->hardwareClockDiscontinuityCount, 
                src->hardwareClockDiscontinuityCount)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->hardwareClockDiscontinuityCount != NULL) {
                delete  dst->hardwareClockDiscontinuityCount;
                dst->hardwareClockDiscontinuityCount=NULL;
            }
        }
        if (src->leapSecond!=NULL) {
            if (dst->leapSecond==NULL) {

                dst->leapSecond = new (std::nothrow)   DDS_Long ();
                if (dst->leapSecond==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->leapSecond)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->leapSecond, 
                src->leapSecond)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->leapSecond != NULL) {
                delete  dst->leapSecond;
                dst->leapSecond=NULL;
            }
        }
        if (src->referenceCarrierFrequency!=NULL) {
            if (dst->referenceCarrierFrequency==NULL) {

                dst->referenceCarrierFrequency = new (std::nothrow)   DDS_Double ();
                if (dst->referenceCarrierFrequency==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->referenceCarrierFrequency)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->referenceCarrierFrequency, 
                src->referenceCarrierFrequency)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->referenceCarrierFrequency != NULL) {
                delete  dst->referenceCarrierFrequency;
                dst->referenceCarrierFrequency=NULL;
            }
        }
        if (src->referenceCodeTypeFor!=NULL) {
            if (dst->referenceCodeTypeFor==NULL) {
                dst->referenceCodeTypeFor= DDS_String_alloc ((1023L));
                ;
                if (dst->referenceCodeTypeFor == NULL) {
                    return RTI_FALSE;
                }       
            }
            if (!RTICdrType_copyStringEx (
                &dst->referenceCodeTypeFor
                ,
                src->referenceCodeTypeFor, 
                (1023L) + 1,
                RTI_FALSE)){
                return RTI_FALSE;
            }
        } else {
            if (dst->referenceCodeTypeFor != NULL) {
                DDS_String_free(dst->referenceCodeTypeFor);   
                dst->referenceCodeTypeFor = NULL;     
            }
        }
        if (src->referenceConstellationType!=NULL) {
            if (dst->referenceConstellationType==NULL) {

                dst->referenceConstellationType = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType ();
                if (dst->referenceConstellationType==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_ex(
                    dst->referenceConstellationType, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_copy(
                dst->referenceConstellationType,
                (const UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType*)src->referenceConstellationType)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->referenceConstellationType != NULL) {
                UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(dst->referenceConstellationType, deallocParams);
                delete  dst->referenceConstellationType;
                dst->referenceConstellationType=NULL;
            }
        }
        if (src->time!=NULL) {
            if (dst->time==NULL) {

                dst->time = new (std::nothrow)   DDS_Long ();
                if (dst->time==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(dst->time)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyLong (
                dst->time, 
                src->time)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->time != NULL) {
                delete  dst->time;
                dst->time=NULL;
            }
        }
        if (src->timeUncertainty!=NULL) {
            if (dst->timeUncertainty==NULL) {

                dst->timeUncertainty = new (std::nothrow)   DDS_Double ();
                if (dst->timeUncertainty==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->timeUncertainty)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->timeUncertainty, 
                src->timeUncertainty)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->timeUncertainty != NULL) {
                delete  dst->timeUncertainty;
                dst->timeUncertainty=NULL;
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
* Configure and implement 'UMAA_SEM_GPSStatus_GPSClockType' sequence class.
*/
#define T UMAA_SEM_GPSStatus_GPSClockType
#define TSeq UMAA_SEM_GPSStatus_GPSClockTypeSeq

#define T_initialize_w_params UMAA_SEM_GPSStatus_GPSClockType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_GPSStatus_GPSClockType_finalize_w_params
#define T_copy       UMAA_SEM_GPSStatus_GPSClockType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_GPSStatus_GPSClockType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_GPSStatus_GPSClockType_get_typecode();
        }

    } 
}
#endif
