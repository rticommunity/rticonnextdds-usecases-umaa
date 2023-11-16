

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl 
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

#include "GPSSatelliteType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GPSSatelliteTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_GPSStatus_GPSSatelliteTypeTYPENAME = "UMAA::SEM::GPSStatus::GPSSatelliteType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_GPSStatus_GPSSatelliteType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[10]=
    {

        {
            (char *)"antennaCarrierNoiseDensity",/* Member name */
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
            (char *)"azimuth",/* Member name */
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
            (char *)"basebandCarrierNoiseDensity",/* Member name */
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
            (char *)"carrierFrequency",/* Member name */
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
            (char *)"constellationType",/* Member name */
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
            (char *)"containsAlmanacData",/* Member name */
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
            (char *)"elevation",/* Member name */
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
            (char *)"ephemerisData",/* Member name */
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
            (char *)"satelliteId",/* Member name */
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
            (char *)"usedInFix",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::GPSStatus::GPSSatelliteType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            10, /* Number of members */
            UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_GPSStatus_GPSSatelliteType*/

    if (is_initialized) {
        return &UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Angle_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_RadioFrequency_Hertz_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Angle_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;

    /* Initialize the values for member annotations. */
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[3]._annotations._minValue._u.double_value = 0.0;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[3]._annotations._maxValue._u.double_value = 10000000000ULL;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_access_info();
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc._data._typePlugin =
    UMAA_SEM_GPSStatus_GPSSatelliteType_get_type_plugin_info();    

    return &UMAA_SEM_GPSStatus_GPSSatelliteType_g_tc;
}

#define TSeq UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq
#define T UMAA_SEM_GPSStatus_GPSSatelliteType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSSatelliteType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_GPSStatus_GPSSatelliteType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_GPSStatus_GPSSatelliteType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_GPSStatus_GPSSatelliteType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[10] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_GPSStatus_GPSSatelliteType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->antennaCarrierNoiseDensity - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->azimuth - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->basebandCarrierNoiseDensity - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->carrierFrequency - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->constellationType - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->containsAlmanacData - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->elevation - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->ephemerisData - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->satelliteId - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->usedInFix - (char *)sample);

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_GPSStatus_GPSSatelliteType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_GPSStatus_GPSSatelliteType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_GPSStatus_GPSSatelliteType_get_member_value_pointer;

    UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_GPSStatus_GPSSatelliteType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_GPSStatus_GPSSatelliteType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_GPSStatus_GPSSatelliteType_g_typePlugin = 
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
        UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_GPSStatus_GPSSatelliteType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize(
    UMAA_SEM_GPSStatus_GPSSatelliteType* sample)
{
    return UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_w_params(
    UMAA_SEM_GPSStatus_GPSSatelliteType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->antennaCarrierNoiseDensity=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->antennaCarrierNoiseDensity = new (std::nothrow)   DDS_Double ();
            if (sample->antennaCarrierNoiseDensity==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->antennaCarrierNoiseDensity)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->antennaCarrierNoiseDensity != NULL) {
                if (!RTICdrType_initDouble(sample->antennaCarrierNoiseDensity)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->azimuth=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->azimuth = new (std::nothrow)   DDS_Double ();
            if (sample->azimuth==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->azimuth)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->azimuth != NULL) {
                if (!RTICdrType_initDouble(sample->azimuth)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->basebandCarrierNoiseDensity=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->basebandCarrierNoiseDensity = new (std::nothrow)   DDS_Double ();
            if (sample->basebandCarrierNoiseDensity==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->basebandCarrierNoiseDensity)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->basebandCarrierNoiseDensity != NULL) {
                if (!RTICdrType_initDouble(sample->basebandCarrierNoiseDensity)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->carrierFrequency=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->carrierFrequency = new (std::nothrow)   DDS_Double ();
            if (sample->carrierFrequency==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->carrierFrequency)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->carrierFrequency != NULL) {
                if (!RTICdrType_initDouble(sample->carrierFrequency)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->constellationType=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->constellationType = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType ();
            if (sample->constellationType==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_w_params(
                sample->constellationType,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->constellationType!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_w_params(
                    sample->constellationType,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->containsAlmanacData=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->containsAlmanacData = new (std::nothrow)   DDS_Boolean ();
            if (sample->containsAlmanacData==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->containsAlmanacData)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->containsAlmanacData != NULL) {
                if (!RTICdrType_initBoolean(sample->containsAlmanacData)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->elevation=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->elevation = new (std::nothrow)   DDS_Double ();
            if (sample->elevation==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->elevation)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->elevation != NULL) {
                if (!RTICdrType_initDouble(sample->elevation)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->ephemerisData=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->ephemerisData = new (std::nothrow)   DDS_Boolean ();
            if (sample->ephemerisData==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->ephemerisData)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->ephemerisData != NULL) {
                if (!RTICdrType_initBoolean(sample->ephemerisData)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->satelliteId=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->satelliteId = new (std::nothrow)   UMAA_Common_Measurement_NumericGUID [1]();
            if (sample->satelliteId==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
                sample->satelliteId,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->satelliteId!=NULL) {
                if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
                    sample->satelliteId,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!allocParams->allocate_optional_members) {
        sample->usedInFix=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->usedInFix = new (std::nothrow)   DDS_Boolean ();
            if (sample->usedInFix==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initBoolean(sample->usedInFix)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->usedInFix != NULL) {
                if (!RTICdrType_initBoolean(sample->usedInFix)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    return RTI_TRUE;
}
RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_ex(
    UMAA_SEM_GPSStatus_GPSSatelliteType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_return(
    UMAA_SEM_GPSStatus_GPSSatelliteType* sample)
{
    UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize(
    UMAA_SEM_GPSStatus_GPSSatelliteType* sample)
{  
    UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_ex(
    UMAA_SEM_GPSStatus_GPSSatelliteType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_params(
    UMAA_SEM_GPSStatus_GPSSatelliteType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->antennaCarrierNoiseDensity != NULL) {

            delete  sample->antennaCarrierNoiseDensity;
            sample->antennaCarrierNoiseDensity=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->azimuth != NULL) {

            delete  sample->azimuth;
            sample->azimuth=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->basebandCarrierNoiseDensity != NULL) {

            delete  sample->basebandCarrierNoiseDensity;
            sample->basebandCarrierNoiseDensity=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->carrierFrequency != NULL) {

            delete  sample->carrierFrequency;
            sample->carrierFrequency=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->constellationType != NULL) {
            UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(
                sample->constellationType,
                deallocParams);

            delete  sample->constellationType;
            sample->constellationType=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->containsAlmanacData != NULL) {

            delete  sample->containsAlmanacData;
            sample->containsAlmanacData=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->elevation != NULL) {

            delete  sample->elevation;
            sample->elevation=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->ephemerisData != NULL) {

            delete  sample->ephemerisData;
            sample->ephemerisData=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->satelliteId != NULL) {
            UMAA_Common_Measurement_NumericGUID_finalize_w_params(
                sample->satelliteId,
                deallocParams);

            delete [] sample->satelliteId;
            sample->satelliteId=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->usedInFix != NULL) {

            delete  sample->usedInFix;
            sample->usedInFix=NULL;
        }
    }
}

void UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_optional_members(
    UMAA_SEM_GPSStatus_GPSSatelliteType* sample, RTIBool deletePointers)
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

    if (sample->antennaCarrierNoiseDensity != NULL) {

        delete  sample->antennaCarrierNoiseDensity;
        sample->antennaCarrierNoiseDensity=NULL;
    }
    if (sample->azimuth != NULL) {

        delete  sample->azimuth;
        sample->azimuth=NULL;
    }
    if (sample->basebandCarrierNoiseDensity != NULL) {

        delete  sample->basebandCarrierNoiseDensity;
        sample->basebandCarrierNoiseDensity=NULL;
    }
    if (sample->carrierFrequency != NULL) {

        delete  sample->carrierFrequency;
        sample->carrierFrequency=NULL;
    }
    if (sample->constellationType != NULL) {
        UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(
            sample->constellationType,
            deallocParams);

        delete  sample->constellationType;
        sample->constellationType=NULL;
    }
    if (sample->containsAlmanacData != NULL) {

        delete  sample->containsAlmanacData;
        sample->containsAlmanacData=NULL;
    }
    if (sample->elevation != NULL) {

        delete  sample->elevation;
        sample->elevation=NULL;
    }
    if (sample->ephemerisData != NULL) {

        delete  sample->ephemerisData;
        sample->ephemerisData=NULL;
    }
    if (sample->satelliteId != NULL) {
        UMAA_Common_Measurement_NumericGUID_finalize_w_params(
            sample->satelliteId,
            deallocParams);

        delete [] sample->satelliteId;
        sample->satelliteId=NULL;
    }
    if (sample->usedInFix != NULL) {

        delete  sample->usedInFix;
        sample->usedInFix=NULL;
    }
}

RTIBool UMAA_SEM_GPSStatus_GPSSatelliteType_copy(
    UMAA_SEM_GPSStatus_GPSSatelliteType* dst,
    const UMAA_SEM_GPSStatus_GPSSatelliteType* src)
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

        if (src->antennaCarrierNoiseDensity!=NULL) {
            if (dst->antennaCarrierNoiseDensity==NULL) {

                dst->antennaCarrierNoiseDensity = new (std::nothrow)   DDS_Double ();
                if (dst->antennaCarrierNoiseDensity==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->antennaCarrierNoiseDensity)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->antennaCarrierNoiseDensity, 
                src->antennaCarrierNoiseDensity)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->antennaCarrierNoiseDensity != NULL) {
                delete  dst->antennaCarrierNoiseDensity;
                dst->antennaCarrierNoiseDensity=NULL;
            }
        }
        if (src->azimuth!=NULL) {
            if (dst->azimuth==NULL) {

                dst->azimuth = new (std::nothrow)   DDS_Double ();
                if (dst->azimuth==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->azimuth)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->azimuth, 
                src->azimuth)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->azimuth != NULL) {
                delete  dst->azimuth;
                dst->azimuth=NULL;
            }
        }
        if (src->basebandCarrierNoiseDensity!=NULL) {
            if (dst->basebandCarrierNoiseDensity==NULL) {

                dst->basebandCarrierNoiseDensity = new (std::nothrow)   DDS_Double ();
                if (dst->basebandCarrierNoiseDensity==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->basebandCarrierNoiseDensity)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->basebandCarrierNoiseDensity, 
                src->basebandCarrierNoiseDensity)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->basebandCarrierNoiseDensity != NULL) {
                delete  dst->basebandCarrierNoiseDensity;
                dst->basebandCarrierNoiseDensity=NULL;
            }
        }
        if (src->carrierFrequency!=NULL) {
            if (dst->carrierFrequency==NULL) {

                dst->carrierFrequency = new (std::nothrow)   DDS_Double ();
                if (dst->carrierFrequency==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->carrierFrequency)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->carrierFrequency, 
                src->carrierFrequency)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->carrierFrequency != NULL) {
                delete  dst->carrierFrequency;
                dst->carrierFrequency=NULL;
            }
        }
        if (src->constellationType!=NULL) {
            if (dst->constellationType==NULL) {

                dst->constellationType = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType ();
                if (dst->constellationType==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_initialize_ex(
                    dst->constellationType, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_copy(
                dst->constellationType,
                (const UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType*)src->constellationType)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->constellationType != NULL) {
                UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType_finalize_w_params(dst->constellationType, deallocParams);
                delete  dst->constellationType;
                dst->constellationType=NULL;
            }
        }
        if (src->containsAlmanacData!=NULL) {
            if (dst->containsAlmanacData==NULL) {

                dst->containsAlmanacData = new (std::nothrow)   DDS_Boolean ();
                if (dst->containsAlmanacData==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->containsAlmanacData)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->containsAlmanacData, 
                src->containsAlmanacData)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->containsAlmanacData != NULL) {
                delete  dst->containsAlmanacData;
                dst->containsAlmanacData=NULL;
            }
        }
        if (src->elevation!=NULL) {
            if (dst->elevation==NULL) {

                dst->elevation = new (std::nothrow)   DDS_Double ();
                if (dst->elevation==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->elevation)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->elevation, 
                src->elevation)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->elevation != NULL) {
                delete  dst->elevation;
                dst->elevation=NULL;
            }
        }
        if (src->ephemerisData!=NULL) {
            if (dst->ephemerisData==NULL) {

                dst->ephemerisData = new (std::nothrow)   DDS_Boolean ();
                if (dst->ephemerisData==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->ephemerisData)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->ephemerisData, 
                src->ephemerisData)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->ephemerisData != NULL) {
                delete  dst->ephemerisData;
                dst->ephemerisData=NULL;
            }
        }
        if (src->satelliteId!=NULL) {
            if (dst->satelliteId==NULL) {

                dst->satelliteId = new (std::nothrow)   UMAA_Common_Measurement_NumericGUID [1]();
                if (dst->satelliteId==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_NumericGUID_initialize_ex(
                    dst->satelliteId, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_NumericGUID_copy(
                dst->satelliteId,
                (const UMAA_Common_Measurement_NumericGUID*)src->satelliteId)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->satelliteId != NULL) {
                UMAA_Common_Measurement_NumericGUID_finalize_w_params(dst->satelliteId, deallocParams);
                delete [] dst->satelliteId;
                dst->satelliteId=NULL;
            }
        }
        if (src->usedInFix!=NULL) {
            if (dst->usedInFix==NULL) {

                dst->usedInFix = new (std::nothrow)   DDS_Boolean ();
                if (dst->usedInFix==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(dst->usedInFix)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyBoolean (
                dst->usedInFix, 
                src->usedInFix)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->usedInFix != NULL) {
                delete  dst->usedInFix;
                dst->usedInFix=NULL;
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
* Configure and implement 'UMAA_SEM_GPSStatus_GPSSatelliteType' sequence class.
*/
#define T UMAA_SEM_GPSStatus_GPSSatelliteType
#define TSeq UMAA_SEM_GPSStatus_GPSSatelliteTypeSeq

#define T_initialize_w_params UMAA_SEM_GPSStatus_GPSSatelliteType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_GPSStatus_GPSSatelliteType_finalize_w_params
#define T_copy       UMAA_SEM_GPSStatus_GPSSatelliteType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_GPSStatus_GPSSatelliteType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_GPSStatus_GPSSatelliteType_get_typecode();
        }

    } 
}
#endif
