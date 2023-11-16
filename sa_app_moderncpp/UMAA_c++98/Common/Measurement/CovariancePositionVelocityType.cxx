

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePositionVelocityType.idl 
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

#include "CovariancePositionVelocityType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CovariancePositionVelocityTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_Common_Measurement_CovariancePositionVelocityTypeTYPENAME = "UMAA::Common::Measurement::CovariancePositionVelocityType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_CovariancePositionVelocityType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[9]=
    {

        {
            (char *)"pdVd",/* Member name */
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
            (char *)"pdVe",/* Member name */
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
            (char *)"pdVn",/* Member name */
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
            (char *)"peVd",/* Member name */
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
            (char *)"peVe",/* Member name */
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
            (char *)"peVn",/* Member name */
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
            (char *)"pnVd",/* Member name */
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
            (char *)"pnVe",/* Member name */
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
            (char *)"pnVn",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Measurement::CovariancePositionVelocityType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            9, /* Number of members */
            UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Measurement_CovariancePositionVelocityType*/

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarPosVel_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[6]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[6]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[7]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc_members[8]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovariancePositionVelocityType_get_sample_access_info();
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovariancePositionVelocityType_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovariancePositionVelocityType_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovariancePositionVelocityTypeSeq
#define T UMAA_Common_Measurement_CovariancePositionVelocityType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovariancePositionVelocityType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovariancePositionVelocityType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovariancePositionVelocityTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovariancePositionVelocityTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovariancePositionVelocityType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovariancePositionVelocityType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_Common_Measurement_CovariancePositionVelocityType *sample;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[9] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_Common_Measurement_CovariancePositionVelocityType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pdVd - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pdVe - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pdVn - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->peVd - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->peVe - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->peVn - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pnVd - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pnVe - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->pnVn - (char *)sample);

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovariancePositionVelocityType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovariancePositionVelocityType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovariancePositionVelocityType_get_member_value_pointer;

    UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovariancePositionVelocityType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovariancePositionVelocityType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovariancePositionVelocityType_g_typePlugin = 
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
        UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovariancePositionVelocityType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovariancePositionVelocityType_initialize(
    UMAA_Common_Measurement_CovariancePositionVelocityType* sample)
{
    return UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_w_params(
    UMAA_Common_Measurement_CovariancePositionVelocityType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->pdVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->pdVd = new (std::nothrow)   DDS_Double ();
            if (sample->pdVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->pdVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->pdVd != NULL) {
                if (!RTICdrType_initDouble(sample->pdVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->pdVe=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->pdVe = new (std::nothrow)   DDS_Double ();
            if (sample->pdVe==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->pdVe)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->pdVe != NULL) {
                if (!RTICdrType_initDouble(sample->pdVe)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->pdVn=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->pdVn = new (std::nothrow)   DDS_Double ();
            if (sample->pdVn==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->pdVn)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->pdVn != NULL) {
                if (!RTICdrType_initDouble(sample->pdVn)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->peVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->peVd = new (std::nothrow)   DDS_Double ();
            if (sample->peVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->peVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->peVd != NULL) {
                if (!RTICdrType_initDouble(sample->peVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->peVe = 0.0;

    sample->peVn = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->pnVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->pnVd = new (std::nothrow)   DDS_Double ();
            if (sample->pnVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->pnVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->pnVd != NULL) {
                if (!RTICdrType_initDouble(sample->pnVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->pnVe = 0.0;

    sample->pnVn = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_ex(
    UMAA_Common_Measurement_CovariancePositionVelocityType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_w_return(
    UMAA_Common_Measurement_CovariancePositionVelocityType* sample)
{
    UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovariancePositionVelocityType_finalize(
    UMAA_Common_Measurement_CovariancePositionVelocityType* sample)
{  
    UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_ex(
    UMAA_Common_Measurement_CovariancePositionVelocityType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_w_params(
    UMAA_Common_Measurement_CovariancePositionVelocityType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->pdVd != NULL) {

            delete  sample->pdVd;
            sample->pdVd=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->pdVe != NULL) {

            delete  sample->pdVe;
            sample->pdVe=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->pdVn != NULL) {

            delete  sample->pdVn;
            sample->pdVn=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->peVd != NULL) {

            delete  sample->peVd;
            sample->peVd=NULL;
        }
    }

    if (deallocParams->delete_optional_members) {
        if (sample->pnVd != NULL) {

            delete  sample->pnVd;
            sample->pnVd=NULL;
        }
    }

}

void UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_optional_members(
    UMAA_Common_Measurement_CovariancePositionVelocityType* sample, RTIBool deletePointers)
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

    if (sample->pdVd != NULL) {

        delete  sample->pdVd;
        sample->pdVd=NULL;
    }
    if (sample->pdVe != NULL) {

        delete  sample->pdVe;
        sample->pdVe=NULL;
    }
    if (sample->pdVn != NULL) {

        delete  sample->pdVn;
        sample->pdVn=NULL;
    }
    if (sample->peVd != NULL) {

        delete  sample->peVd;
        sample->peVd=NULL;
    }
    if (sample->pnVd != NULL) {

        delete  sample->pnVd;
        sample->pnVd=NULL;
    }
}

RTIBool UMAA_Common_Measurement_CovariancePositionVelocityType_copy(
    UMAA_Common_Measurement_CovariancePositionVelocityType* dst,
    const UMAA_Common_Measurement_CovariancePositionVelocityType* src)
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

        if (src->pdVd!=NULL) {
            if (dst->pdVd==NULL) {

                dst->pdVd = new (std::nothrow)   DDS_Double ();
                if (dst->pdVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->pdVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->pdVd, 
                src->pdVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->pdVd != NULL) {
                delete  dst->pdVd;
                dst->pdVd=NULL;
            }
        }
        if (src->pdVe!=NULL) {
            if (dst->pdVe==NULL) {

                dst->pdVe = new (std::nothrow)   DDS_Double ();
                if (dst->pdVe==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->pdVe)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->pdVe, 
                src->pdVe)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->pdVe != NULL) {
                delete  dst->pdVe;
                dst->pdVe=NULL;
            }
        }
        if (src->pdVn!=NULL) {
            if (dst->pdVn==NULL) {

                dst->pdVn = new (std::nothrow)   DDS_Double ();
                if (dst->pdVn==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->pdVn)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->pdVn, 
                src->pdVn)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->pdVn != NULL) {
                delete  dst->pdVn;
                dst->pdVn=NULL;
            }
        }
        if (src->peVd!=NULL) {
            if (dst->peVd==NULL) {

                dst->peVd = new (std::nothrow)   DDS_Double ();
                if (dst->peVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->peVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->peVd, 
                src->peVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->peVd != NULL) {
                delete  dst->peVd;
                dst->peVd=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->peVe, 
            &src->peVe)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->peVn, 
            &src->peVn)) { 
            return RTI_FALSE;
        }
        if (src->pnVd!=NULL) {
            if (dst->pnVd==NULL) {

                dst->pnVd = new (std::nothrow)   DDS_Double ();
                if (dst->pnVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->pnVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->pnVd, 
                src->pnVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->pnVd != NULL) {
                delete  dst->pnVd;
                dst->pnVd=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->pnVe, 
            &src->pnVe)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->pnVn, 
            &src->pnVn)) { 
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
* Configure and implement 'UMAA_Common_Measurement_CovariancePositionVelocityType' sequence class.
*/
#define T UMAA_Common_Measurement_CovariancePositionVelocityType
#define TSeq UMAA_Common_Measurement_CovariancePositionVelocityTypeSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovariancePositionVelocityType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovariancePositionVelocityType_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovariancePositionVelocityType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_Common_Measurement_CovariancePositionVelocityType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_Common_Measurement_CovariancePositionVelocityType_get_typecode();
        }

    } 
}
#endif
