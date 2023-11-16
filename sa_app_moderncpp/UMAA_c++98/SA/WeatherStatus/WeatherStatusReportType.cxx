

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherStatusReportType.idl 
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

#include "WeatherStatusReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "WeatherStatusReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_WeatherStatus_WeatherStatusReportTypeTYPENAME = "UMAA::SA::WeatherStatus::WeatherStatusReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_WeatherStatus_WeatherStatusReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[12]=
    {

        {
            (char *)"airTemperature",/* Member name */
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
            (char *)"barometricPressure",/* Member name */
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
            (char *)"cloudiness",/* Member name */
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
            (char *)"dewPoint",/* Member name */
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
            (char *)"icingSeverity",/* Member name */
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
            (char *)"precipitation",/* Member name */
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
            (char *)"relativeHumidity",/* Member name */
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
            (char *)"thunderstormPotential",/* Member name */
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
            (char *)"visibility",/* Member name */
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
            (char *)"waterTemperature",/* Member name */
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
            (char *)"source",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::WeatherStatus::WeatherStatusReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            12, /* Number of members */
            UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_WeatherStatus_WeatherStatusReportType*/

    if (is_initialized) {
        return &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_BarometricPressure_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CloudCoverType_All_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_WeatherSeverityType_All_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_PrecipitationType_All_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MeasurementConstrained_Percent_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MeasurementConstrained_Percent_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Temperature_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = -273LL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[3]._annotations._minValue._u.double_value = -273LL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 1000ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[8]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[9]._annotations._minValue._u.double_value = -273LL;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc_members[9]._annotations._maxValue._u.double_value = 1000ULL;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_WeatherStatus_WeatherStatusReportType_get_sample_access_info();
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc._data._typePlugin =
    UMAA_SA_WeatherStatus_WeatherStatusReportType_get_type_plugin_info();    

    return &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_tc;
}

#define TSeq UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq
#define T UMAA_SA_WeatherStatus_WeatherStatusReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_WeatherStatus_WeatherStatusReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_WeatherStatus_WeatherStatusReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[12] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_WeatherStatus_WeatherStatusReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->airTemperature - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->barometricPressure - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->cloudiness - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->dewPoint - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->icingSeverity - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->precipitation - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->relativeHumidity - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->thunderstormPotential - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->visibility - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->waterTemperature - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_WeatherStatus_WeatherStatusReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_WeatherStatus_WeatherStatusReportType_get_member_value_pointer;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_WeatherStatus_WeatherStatusReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_WeatherStatus_WeatherStatusReportType_g_typePlugin = 
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
        UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_WeatherStatus_WeatherStatusReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* sample)
{
    return UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_w_params(
    UMAA_SA_WeatherStatus_WeatherStatusReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->airTemperature=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->airTemperature = new (std::nothrow)   DDS_Double ();
            if (sample->airTemperature==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->airTemperature)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->airTemperature != NULL) {
                if (!RTICdrType_initDouble(sample->airTemperature)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->barometricPressure=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->barometricPressure = new (std::nothrow)   DDS_Double ();
            if (sample->barometricPressure==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->barometricPressure)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->barometricPressure != NULL) {
                if (!RTICdrType_initDouble(sample->barometricPressure)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->cloudiness=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->cloudiness = new (std::nothrow)   UMAA_Common_Measurement_CloudCoverType_All ();
            if (sample->cloudiness==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_CloudCoverType_All_initialize_w_params(
                sample->cloudiness,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->cloudiness!=NULL) {
                if (!UMAA_Common_Measurement_CloudCoverType_All_initialize_w_params(
                    sample->cloudiness,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->dewPoint=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->dewPoint = new (std::nothrow)   DDS_Double ();
            if (sample->dewPoint==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->dewPoint)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->dewPoint != NULL) {
                if (!RTICdrType_initDouble(sample->dewPoint)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->icingSeverity=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->icingSeverity = new (std::nothrow)   UMAA_Common_Measurement_WeatherSeverityType_All ();
            if (sample->icingSeverity==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_WeatherSeverityType_All_initialize_w_params(
                sample->icingSeverity,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->icingSeverity!=NULL) {
                if (!UMAA_Common_Measurement_WeatherSeverityType_All_initialize_w_params(
                    sample->icingSeverity,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->precipitation=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->precipitation = new (std::nothrow)   UMAA_Common_Measurement_PrecipitationType_All ();
            if (sample->precipitation==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_PrecipitationType_All_initialize_w_params(
                sample->precipitation,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->precipitation!=NULL) {
                if (!UMAA_Common_Measurement_PrecipitationType_All_initialize_w_params(
                    sample->precipitation,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->relativeHumidity=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->relativeHumidity = new (std::nothrow)   DDS_Double ();
            if (sample->relativeHumidity==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->relativeHumidity)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->relativeHumidity != NULL) {
                if (!RTICdrType_initDouble(sample->relativeHumidity)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->thunderstormPotential=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->thunderstormPotential = new (std::nothrow)   DDS_Double ();
            if (sample->thunderstormPotential==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->thunderstormPotential)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->thunderstormPotential != NULL) {
                if (!RTICdrType_initDouble(sample->thunderstormPotential)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->visibility=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->visibility = new (std::nothrow)   DDS_Double ();
            if (sample->visibility==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->visibility)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->visibility != NULL) {
                if (!RTICdrType_initDouble(sample->visibility)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->waterTemperature=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->waterTemperature = new (std::nothrow)   DDS_Double ();
            if (sample->waterTemperature==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->waterTemperature)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->waterTemperature != NULL) {
                if (!RTICdrType_initDouble(sample->waterTemperature)) {
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
RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_ex(
    UMAA_SA_WeatherStatus_WeatherStatusReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_return(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* sample)
{
    UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* sample)
{  
    UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_ex(
    UMAA_SA_WeatherStatus_WeatherStatusReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_params(
    UMAA_SA_WeatherStatus_WeatherStatusReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->airTemperature != NULL) {

            delete  sample->airTemperature;
            sample->airTemperature=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->barometricPressure != NULL) {

            delete  sample->barometricPressure;
            sample->barometricPressure=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->cloudiness != NULL) {
            UMAA_Common_Measurement_CloudCoverType_All_finalize_w_params(
                sample->cloudiness,
                deallocParams);

            delete  sample->cloudiness;
            sample->cloudiness=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->dewPoint != NULL) {

            delete  sample->dewPoint;
            sample->dewPoint=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->icingSeverity != NULL) {
            UMAA_Common_Measurement_WeatherSeverityType_All_finalize_w_params(
                sample->icingSeverity,
                deallocParams);

            delete  sample->icingSeverity;
            sample->icingSeverity=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->precipitation != NULL) {
            UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(
                sample->precipitation,
                deallocParams);

            delete  sample->precipitation;
            sample->precipitation=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->relativeHumidity != NULL) {

            delete  sample->relativeHumidity;
            sample->relativeHumidity=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->thunderstormPotential != NULL) {

            delete  sample->thunderstormPotential;
            sample->thunderstormPotential=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->visibility != NULL) {

            delete  sample->visibility;
            sample->visibility=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->waterTemperature != NULL) {

            delete  sample->waterTemperature;
            sample->waterTemperature=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_optional_members(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* sample, RTIBool deletePointers)
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

    if (sample->airTemperature != NULL) {

        delete  sample->airTemperature;
        sample->airTemperature=NULL;
    }
    if (sample->barometricPressure != NULL) {

        delete  sample->barometricPressure;
        sample->barometricPressure=NULL;
    }
    if (sample->cloudiness != NULL) {
        UMAA_Common_Measurement_CloudCoverType_All_finalize_w_params(
            sample->cloudiness,
            deallocParams);

        delete  sample->cloudiness;
        sample->cloudiness=NULL;
    }
    if (sample->dewPoint != NULL) {

        delete  sample->dewPoint;
        sample->dewPoint=NULL;
    }
    if (sample->icingSeverity != NULL) {
        UMAA_Common_Measurement_WeatherSeverityType_All_finalize_w_params(
            sample->icingSeverity,
            deallocParams);

        delete  sample->icingSeverity;
        sample->icingSeverity=NULL;
    }
    if (sample->precipitation != NULL) {
        UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(
            sample->precipitation,
            deallocParams);

        delete  sample->precipitation;
        sample->precipitation=NULL;
    }
    if (sample->relativeHumidity != NULL) {

        delete  sample->relativeHumidity;
        sample->relativeHumidity=NULL;
    }
    if (sample->thunderstormPotential != NULL) {

        delete  sample->thunderstormPotential;
        sample->thunderstormPotential=NULL;
    }
    if (sample->visibility != NULL) {

        delete  sample->visibility;
        sample->visibility=NULL;
    }
    if (sample->waterTemperature != NULL) {

        delete  sample->waterTemperature;
        sample->waterTemperature=NULL;
    }
}

RTIBool UMAA_SA_WeatherStatus_WeatherStatusReportType_copy(
    UMAA_SA_WeatherStatus_WeatherStatusReportType* dst,
    const UMAA_SA_WeatherStatus_WeatherStatusReportType* src)
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

        if (src->airTemperature!=NULL) {
            if (dst->airTemperature==NULL) {

                dst->airTemperature = new (std::nothrow)   DDS_Double ();
                if (dst->airTemperature==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->airTemperature)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->airTemperature, 
                src->airTemperature)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->airTemperature != NULL) {
                delete  dst->airTemperature;
                dst->airTemperature=NULL;
            }
        }
        if (src->barometricPressure!=NULL) {
            if (dst->barometricPressure==NULL) {

                dst->barometricPressure = new (std::nothrow)   DDS_Double ();
                if (dst->barometricPressure==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->barometricPressure)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->barometricPressure, 
                src->barometricPressure)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->barometricPressure != NULL) {
                delete  dst->barometricPressure;
                dst->barometricPressure=NULL;
            }
        }
        if (src->cloudiness!=NULL) {
            if (dst->cloudiness==NULL) {

                dst->cloudiness = new (std::nothrow)   UMAA_Common_Measurement_CloudCoverType_All ();
                if (dst->cloudiness==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_CloudCoverType_All_initialize_ex(
                    dst->cloudiness, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_CloudCoverType_All_copy(
                dst->cloudiness,
                (const UMAA_Common_Measurement_CloudCoverType_All*)src->cloudiness)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->cloudiness != NULL) {
                UMAA_Common_Measurement_CloudCoverType_All_finalize_w_params(dst->cloudiness, deallocParams);
                delete  dst->cloudiness;
                dst->cloudiness=NULL;
            }
        }
        if (src->dewPoint!=NULL) {
            if (dst->dewPoint==NULL) {

                dst->dewPoint = new (std::nothrow)   DDS_Double ();
                if (dst->dewPoint==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->dewPoint)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->dewPoint, 
                src->dewPoint)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->dewPoint != NULL) {
                delete  dst->dewPoint;
                dst->dewPoint=NULL;
            }
        }
        if (src->icingSeverity!=NULL) {
            if (dst->icingSeverity==NULL) {

                dst->icingSeverity = new (std::nothrow)   UMAA_Common_Measurement_WeatherSeverityType_All ();
                if (dst->icingSeverity==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_WeatherSeverityType_All_initialize_ex(
                    dst->icingSeverity, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_WeatherSeverityType_All_copy(
                dst->icingSeverity,
                (const UMAA_Common_Measurement_WeatherSeverityType_All*)src->icingSeverity)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->icingSeverity != NULL) {
                UMAA_Common_Measurement_WeatherSeverityType_All_finalize_w_params(dst->icingSeverity, deallocParams);
                delete  dst->icingSeverity;
                dst->icingSeverity=NULL;
            }
        }
        if (src->precipitation!=NULL) {
            if (dst->precipitation==NULL) {

                dst->precipitation = new (std::nothrow)   UMAA_Common_Measurement_PrecipitationType_All ();
                if (dst->precipitation==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_PrecipitationType_All_initialize_ex(
                    dst->precipitation, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_PrecipitationType_All_copy(
                dst->precipitation,
                (const UMAA_Common_Measurement_PrecipitationType_All*)src->precipitation)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->precipitation != NULL) {
                UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(dst->precipitation, deallocParams);
                delete  dst->precipitation;
                dst->precipitation=NULL;
            }
        }
        if (src->relativeHumidity!=NULL) {
            if (dst->relativeHumidity==NULL) {

                dst->relativeHumidity = new (std::nothrow)   DDS_Double ();
                if (dst->relativeHumidity==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->relativeHumidity)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->relativeHumidity, 
                src->relativeHumidity)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->relativeHumidity != NULL) {
                delete  dst->relativeHumidity;
                dst->relativeHumidity=NULL;
            }
        }
        if (src->thunderstormPotential!=NULL) {
            if (dst->thunderstormPotential==NULL) {

                dst->thunderstormPotential = new (std::nothrow)   DDS_Double ();
                if (dst->thunderstormPotential==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->thunderstormPotential)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->thunderstormPotential, 
                src->thunderstormPotential)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->thunderstormPotential != NULL) {
                delete  dst->thunderstormPotential;
                dst->thunderstormPotential=NULL;
            }
        }
        if (src->visibility!=NULL) {
            if (dst->visibility==NULL) {

                dst->visibility = new (std::nothrow)   DDS_Double ();
                if (dst->visibility==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->visibility)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->visibility, 
                src->visibility)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->visibility != NULL) {
                delete  dst->visibility;
                dst->visibility=NULL;
            }
        }
        if (src->waterTemperature!=NULL) {
            if (dst->waterTemperature==NULL) {

                dst->waterTemperature = new (std::nothrow)   DDS_Double ();
                if (dst->waterTemperature==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->waterTemperature)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->waterTemperature, 
                src->waterTemperature)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->waterTemperature != NULL) {
                delete  dst->waterTemperature;
                dst->waterTemperature=NULL;
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
* Configure and implement 'UMAA_SA_WeatherStatus_WeatherStatusReportType' sequence class.
*/
#define T UMAA_SA_WeatherStatus_WeatherStatusReportType
#define TSeq UMAA_SA_WeatherStatus_WeatherStatusReportTypeSeq

#define T_initialize_w_params UMAA_SA_WeatherStatus_WeatherStatusReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_WeatherStatus_WeatherStatusReportType_finalize_w_params
#define T_copy       UMAA_SA_WeatherStatus_WeatherStatusReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_WeatherStatus_WeatherStatusReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_WeatherStatus_WeatherStatusReportType_get_typecode();
        }

    } 
}
#endif
