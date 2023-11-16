

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityReportType.idl 
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

#include "VelocityReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "VelocityReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SA_VelocityStatus_VelocityReportTypeTYPENAME = "UMAA::SA::VelocityStatus::VelocityReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SA_VelocityStatus_VelocityReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[7]=
    {

        {
            (char *)"attitudeRate",/* Member name */
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
            (char *)"attitudeRateCovariance",/* Member name */
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
            (char *)"mode",/* Member name */
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
            (char *)"velocity",/* Member name */
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
            (char *)"velocityCovariance",/* Member name */
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
            (char *)"source",/* Member name */
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
        }, 
        {
            (char *)"timeStamp",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_SA_VelocityStatus_VelocityReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SA::VelocityStatus::VelocityReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SA_VelocityStatus_VelocityReportType*/

    if (is_initialized) {
        return &UMAA_SA_VelocityStatus_VelocityReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SA_VelocityStatus_VelocityReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_OrientationVelocity3D_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarianceOrientationType_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Velocity3D_PlatformNED_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */

    UMAA_SA_VelocityStatus_VelocityReportType_g_tc._data._sampleAccessInfo =
    UMAA_SA_VelocityStatus_VelocityReportType_get_sample_access_info();
    UMAA_SA_VelocityStatus_VelocityReportType_g_tc._data._typePlugin =
    UMAA_SA_VelocityStatus_VelocityReportType_get_type_plugin_info();    

    return &UMAA_SA_VelocityStatus_VelocityReportType_g_tc;
}

#define TSeq UMAA_SA_VelocityStatus_VelocityReportTypeSeq
#define T UMAA_SA_VelocityStatus_VelocityReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SA_VelocityStatus_VelocityReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SA_VelocityStatus_VelocityReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SA_VelocityStatus_VelocityReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SA_VelocityStatus_VelocityReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SA_VelocityStatus_VelocityReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SA_VelocityStatus_VelocityReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SA_VelocityStatus_VelocityReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[7] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SA_VelocityStatus_VelocityReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitudeRate - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->attitudeRateCovariance - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->velocity - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->velocityCovariance - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SA_VelocityStatus_VelocityReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SA_VelocityStatus_VelocityReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SA_VelocityStatus_VelocityReportType_get_member_value_pointer;

    UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SA_VelocityStatus_VelocityReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SA_VelocityStatus_VelocityReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SA_VelocityStatus_VelocityReportType_g_typePlugin = 
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
        UMAA_SA_VelocityStatus_VelocityReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SA_VelocityStatus_VelocityReportType_g_typePlugin;
}
#endif

RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize(
    UMAA_SA_VelocityStatus_VelocityReportType* sample)
{
    return UMAA_SA_VelocityStatus_VelocityReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize_w_params(
    UMAA_SA_VelocityStatus_VelocityReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_Common_Measurement_OrientationVelocity3D_initialize_w_params(
        &sample->attitudeRate,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->attitudeRateCovariance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->attitudeRateCovariance = new (std::nothrow)   UMAA_Common_Measurement_CovarianceOrientationType ();
            if (sample->attitudeRateCovariance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_CovarianceOrientationType_initialize_w_params(
                sample->attitudeRateCovariance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->attitudeRateCovariance!=NULL) {
                if (!UMAA_Common_Measurement_CovarianceOrientationType_initialize_w_params(
                    sample->attitudeRateCovariance,
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
            sample->mode = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType ();
            if (sample->mode==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_initialize_w_params(
                sample->mode,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->mode!=NULL) {
                if (!UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_initialize_w_params(
                    sample->mode,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_Common_Measurement_Velocity3D_PlatformNED_initialize_w_params(
        &sample->velocity,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->velocityCovariance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->velocityCovariance = new (std::nothrow)   UMAA_Common_Measurement_CovarianceVelocityVelocityType ();
            if (sample->velocityCovariance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params(
                sample->velocityCovariance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->velocityCovariance!=NULL) {
                if (!UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params(
                    sample->velocityCovariance,
                    allocParams)) {
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
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize_ex(
    UMAA_SA_VelocityStatus_VelocityReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SA_VelocityStatus_VelocityReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_return(
    UMAA_SA_VelocityStatus_VelocityReportType* sample)
{
    UMAA_SA_VelocityStatus_VelocityReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SA_VelocityStatus_VelocityReportType_finalize(
    UMAA_SA_VelocityStatus_VelocityReportType* sample)
{  
    UMAA_SA_VelocityStatus_VelocityReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SA_VelocityStatus_VelocityReportType_finalize_ex(
    UMAA_SA_VelocityStatus_VelocityReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_params(
    UMAA_SA_VelocityStatus_VelocityReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_OrientationVelocity3D_finalize_w_params(
        &sample->attitudeRate,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->attitudeRateCovariance != NULL) {
            UMAA_Common_Measurement_CovarianceOrientationType_finalize_w_params(
                sample->attitudeRateCovariance,
                deallocParams);

            delete  sample->attitudeRateCovariance;
            sample->attitudeRateCovariance=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->mode != NULL) {
            UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_finalize_w_params(
                sample->mode,
                deallocParams);

            delete  sample->mode;
            sample->mode=NULL;
        }
    }
    UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize_w_params(
        &sample->velocity,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->velocityCovariance != NULL) {
            UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(
                sample->velocityCovariance,
                deallocParams);

            delete  sample->velocityCovariance;
            sample->velocityCovariance=NULL;
        }
    }
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_SA_VelocityStatus_VelocityReportType_finalize_optional_members(
    UMAA_SA_VelocityStatus_VelocityReportType* sample, RTIBool deletePointers)
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

    if (sample->attitudeRateCovariance != NULL) {
        UMAA_Common_Measurement_CovarianceOrientationType_finalize_w_params(
            sample->attitudeRateCovariance,
            deallocParams);

        delete  sample->attitudeRateCovariance;
        sample->attitudeRateCovariance=NULL;
    }
    if (sample->mode != NULL) {
        UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_finalize_w_params(
            sample->mode,
            deallocParams);

        delete  sample->mode;
        sample->mode=NULL;
    }
    if (sample->velocityCovariance != NULL) {
        UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(
            sample->velocityCovariance,
            deallocParams);

        delete  sample->velocityCovariance;
        sample->velocityCovariance=NULL;
    }
}

RTIBool UMAA_SA_VelocityStatus_VelocityReportType_copy(
    UMAA_SA_VelocityStatus_VelocityReportType* dst,
    const UMAA_SA_VelocityStatus_VelocityReportType* src)
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

        if (!UMAA_Common_Measurement_OrientationVelocity3D_copy(
            &dst->attitudeRate,
            (const UMAA_Common_Measurement_OrientationVelocity3D*)&src->attitudeRate)) {
            return RTI_FALSE;
        } 
        if (src->attitudeRateCovariance!=NULL) {
            if (dst->attitudeRateCovariance==NULL) {

                dst->attitudeRateCovariance = new (std::nothrow)   UMAA_Common_Measurement_CovarianceOrientationType ();
                if (dst->attitudeRateCovariance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_CovarianceOrientationType_initialize_ex(
                    dst->attitudeRateCovariance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_CovarianceOrientationType_copy(
                dst->attitudeRateCovariance,
                (const UMAA_Common_Measurement_CovarianceOrientationType*)src->attitudeRateCovariance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->attitudeRateCovariance != NULL) {
                UMAA_Common_Measurement_CovarianceOrientationType_finalize_w_params(dst->attitudeRateCovariance, deallocParams);
                delete  dst->attitudeRateCovariance;
                dst->attitudeRateCovariance=NULL;
            }
        }
        if (src->mode!=NULL) {
            if (dst->mode==NULL) {

                dst->mode = new (std::nothrow)   UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType ();
                if (dst->mode==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_initialize_ex(
                    dst->mode, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_copy(
                dst->mode,
                (const UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType*)src->mode)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->mode != NULL) {
                UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType_finalize_w_params(dst->mode, deallocParams);
                delete  dst->mode;
                dst->mode=NULL;
            }
        }
        if (!UMAA_Common_Measurement_Velocity3D_PlatformNED_copy(
            &dst->velocity,
            (const UMAA_Common_Measurement_Velocity3D_PlatformNED*)&src->velocity)) {
            return RTI_FALSE;
        } 
        if (src->velocityCovariance!=NULL) {
            if (dst->velocityCovariance==NULL) {

                dst->velocityCovariance = new (std::nothrow)   UMAA_Common_Measurement_CovarianceVelocityVelocityType ();
                if (dst->velocityCovariance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_ex(
                    dst->velocityCovariance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_CovarianceVelocityVelocityType_copy(
                dst->velocityCovariance,
                (const UMAA_Common_Measurement_CovarianceVelocityVelocityType*)src->velocityCovariance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->velocityCovariance != NULL) {
                UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(dst->velocityCovariance, deallocParams);
                delete  dst->velocityCovariance;
                dst->velocityCovariance=NULL;
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
* Configure and implement 'UMAA_SA_VelocityStatus_VelocityReportType' sequence class.
*/
#define T UMAA_SA_VelocityStatus_VelocityReportType
#define TSeq UMAA_SA_VelocityStatus_VelocityReportTypeSeq

#define T_initialize_w_params UMAA_SA_VelocityStatus_VelocityReportType_initialize_w_params

#define T_finalize_w_params   UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_params
#define T_copy       UMAA_SA_VelocityStatus_VelocityReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SA_VelocityStatus_VelocityReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SA_VelocityStatus_VelocityReportType_get_typecode();
        }

    } 
}
#endif
