

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseReportType.idl 
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

#include "GlobalPoseReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GlobalPoseReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTYPENAME = "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[12]=
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"attitudeCovariance",/* Member name */
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
            (char *)"course",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"depth",/* Member name */
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
            (char *)"navigationSolution",/* Member name */
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
            (char *)"position",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"positionCovariance",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
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

    static DDS_TypeCode UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::GlobalPoseStatus::GlobalPoseReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            12, /* Number of members */
            UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_GlobalPoseStatus_GlobalPoseReportType*/

    if (is_initialized) {
        return &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_AGL_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_ASF_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Orientation3D_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarianceOrientationType_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Course_TrueNorth_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_BSL_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovariancePositionPositionType_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[6]._annotations._minValue._u.double_value = 0ULL;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 10000ULL;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc_members[7]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_sample_access_info();
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc._data._typePlugin =
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_type_plugin_info();    

    return &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_tc;
}

#define TSeq UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq
#define T UMAA_SA_GlobalPoseStatus_GlobalPoseReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[12] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_GlobalPoseStatus_GlobalPoseReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitude - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitude - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitudeCovariance - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->course - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->depth - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->navigationSolution - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->positionCovariance - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_GlobalPoseStatus_GlobalPoseReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_member_value_pointer;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_typePlugin = 
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
        UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* sample)
{
    return UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_w_params(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType *sample,
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
    if (!UMAA_Common_Measurement_Orientation3D_initialize_w_params(
        &sample->attitude,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_CovarianceOrientationType_initialize_w_params(
        &sample->attitudeCovariance,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->course = 0.0;

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
    sample->navigationSolution = UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType_ESTIMATED;
    if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_CovariancePositionPositionType_initialize_w_params(
        &sample->positionCovariance,
        allocParams)) {
        return RTI_FALSE;
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
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_ex(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_return(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* sample)
{
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* sample)
{  
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_ex(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_params(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType *sample,
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
    UMAA_Common_Measurement_Orientation3D_finalize_w_params(
        &sample->attitude,
        deallocParams);

    UMAA_Common_Measurement_CovarianceOrientationType_finalize_w_params(
        &sample->attitudeCovariance,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->depth != NULL) {

            delete  sample->depth;
            sample->depth=NULL;
        }
    }
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType_finalize_w_params(
        &sample->navigationSolution,
        deallocParams);

    UMAA_Common_Measurement_Position2D_finalize_w_params(
        &sample->position,
        deallocParams);

    UMAA_Common_Measurement_CovariancePositionPositionType_finalize_w_params(
        &sample->positionCovariance,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_optional_members(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* sample, RTIBool deletePointers)
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
    if (sample->depth != NULL) {

        delete  sample->depth;
        sample->depth=NULL;
    }
    UMAA_Common_Measurement_CovariancePositionPositionType_finalize_optional_members(&sample->positionCovariance, deallocParams->delete_pointers);
}

RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_copy(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* dst,
    const UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* src)
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
        if (!UMAA_Common_Measurement_Orientation3D_copy(
            &dst->attitude,
            (const UMAA_Common_Measurement_Orientation3D*)&src->attitude)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_CovarianceOrientationType_copy(
            &dst->attitudeCovariance,
            (const UMAA_Common_Measurement_CovarianceOrientationType*)&src->attitudeCovariance)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->course, 
            &src->course)) { 
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
        if (!UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType_copy(
            &dst->navigationSolution,
            (const UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType*)&src->navigationSolution)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_Position2D_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position2D*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_CovariancePositionPositionType_copy(
            &dst->positionCovariance,
            (const UMAA_Common_Measurement_CovariancePositionPositionType*)&src->positionCovariance)) {
            return RTI_FALSE;
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
* Configure and implement 'UMAA_SA_GlobalPoseStatus_GlobalPoseReportType' sequence class.
*/
#define T UMAA_SA_GlobalPoseStatus_GlobalPoseReportType
#define TSeq UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq

#define T_initialize_w_params UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_params
#define T_copy       UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_GlobalPoseStatus_GlobalPoseReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_typecode();
        }

    } 
}
#endif
