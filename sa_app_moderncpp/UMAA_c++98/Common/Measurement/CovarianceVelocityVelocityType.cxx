

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityVelocityType.idl 
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

#include "CovarianceVelocityVelocityType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "CovarianceVelocityVelocityTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_Common_Measurement_CovarianceVelocityVelocityTypeTYPENAME = "UMAA::Common::Measurement::CovarianceVelocityVelocityType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[6]=
    {

        {
            (char *)"vdVd",/* Member name */
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
            (char *)"veVd",/* Member name */
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
            (char *)"veVe",/* Member name */
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
            (char *)"vnVd",/* Member name */
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
            (char *)"vnVe",/* Member name */
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
            (char *)"vnVn",/* Member name */
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
        }
    };

    static DDS_TypeCode UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::Common::Measurement::CovarianceVelocityVelocityType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_Common_Measurement_CovarianceVelocityVelocityType*/

    if (is_initialized) {
        return &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_CovarVelVel_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[4]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc_members[5]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc._data._sampleAccessInfo =
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_sample_access_info();
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc._data._typePlugin =
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_type_plugin_info();    

    return &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_tc;
}

#define TSeq UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq
#define T UMAA_Common_Measurement_CovarianceVelocityVelocityType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType *sample;

    static RTIXCdrMemberAccessInfo UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[6] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_Common_Measurement_CovarianceVelocityVelocityType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vdVd - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->veVd - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->veVe - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vnVd - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vnVe - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vnVn - (char *)sample);

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_Common_Measurement_CovarianceVelocityVelocityType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_member_value_pointer;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_typePlugin = 
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
        UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_Common_Measurement_CovarianceVelocityVelocityType_g_typePlugin;
}
#endif

RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* sample)
{
    return UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->vdVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->vdVd = new (std::nothrow)   DDS_Double ();
            if (sample->vdVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->vdVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->vdVd != NULL) {
                if (!RTICdrType_initDouble(sample->vdVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    if (!allocParams->allocate_optional_members) {
        sample->veVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->veVd = new (std::nothrow)   DDS_Double ();
            if (sample->veVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->veVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->veVd != NULL) {
                if (!RTICdrType_initDouble(sample->veVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->veVe = 0.0;

    if (!allocParams->allocate_optional_members) {
        sample->vnVd=NULL;
    } else {   
        if (allocParams->allocate_memory){
            sample->vnVd = new (std::nothrow)   DDS_Double ();
            if (sample->vnVd==NULL) {
                return RTI_FALSE;
            }
            if (!RTICdrType_initDouble(sample->vnVd)) {
                return RTI_FALSE;
            }

        } else {

            if (sample->vnVd != NULL) {
                if (!RTICdrType_initDouble(sample->vnVd)) {
                    return RTI_FALSE;
                }
            }

        }

    }
    sample->vnVe = 0.0;

    sample->vnVn = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_ex(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_return(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* sample)
{
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* sample)
{  
    UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_ex(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->vdVd != NULL) {

            delete  sample->vdVd;
            sample->vdVd=NULL;
        }
    }
    if (deallocParams->delete_optional_members) {
        if (sample->veVd != NULL) {

            delete  sample->veVd;
            sample->veVd=NULL;
        }
    }

    if (deallocParams->delete_optional_members) {
        if (sample->vnVd != NULL) {

            delete  sample->vnVd;
            sample->vnVd=NULL;
        }
    }

}

void UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_optional_members(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* sample, RTIBool deletePointers)
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

    if (sample->vdVd != NULL) {

        delete  sample->vdVd;
        sample->vdVd=NULL;
    }
    if (sample->veVd != NULL) {

        delete  sample->veVd;
        sample->veVd=NULL;
    }
    if (sample->vnVd != NULL) {

        delete  sample->vnVd;
        sample->vnVd=NULL;
    }
}

RTIBool UMAA_Common_Measurement_CovarianceVelocityVelocityType_copy(
    UMAA_Common_Measurement_CovarianceVelocityVelocityType* dst,
    const UMAA_Common_Measurement_CovarianceVelocityVelocityType* src)
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

        if (src->vdVd!=NULL) {
            if (dst->vdVd==NULL) {

                dst->vdVd = new (std::nothrow)   DDS_Double ();
                if (dst->vdVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->vdVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->vdVd, 
                src->vdVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->vdVd != NULL) {
                delete  dst->vdVd;
                dst->vdVd=NULL;
            }
        }
        if (src->veVd!=NULL) {
            if (dst->veVd==NULL) {

                dst->veVd = new (std::nothrow)   DDS_Double ();
                if (dst->veVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->veVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->veVd, 
                src->veVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->veVd != NULL) {
                delete  dst->veVd;
                dst->veVd=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->veVe, 
            &src->veVe)) { 
            return RTI_FALSE;
        }
        if (src->vnVd!=NULL) {
            if (dst->vnVd==NULL) {

                dst->vnVd = new (std::nothrow)   DDS_Double ();
                if (dst->vnVd==NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(dst->vnVd)) {
                    return RTI_FALSE;
                }
            }
            if (!RTICdrType_copyDouble (
                dst->vnVd, 
                src->vnVd)) { 
                return RTI_FALSE;
            }
        } else {
            if (dst->vnVd != NULL) {
                delete  dst->vnVd;
                dst->vnVd=NULL;
            }
        }
        if (!RTICdrType_copyDouble (
            &dst->vnVe, 
            &src->vnVe)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->vnVn, 
            &src->vnVn)) { 
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
* Configure and implement 'UMAA_Common_Measurement_CovarianceVelocityVelocityType' sequence class.
*/
#define T UMAA_Common_Measurement_CovarianceVelocityVelocityType
#define TSeq UMAA_Common_Measurement_CovarianceVelocityVelocityTypeSeq

#define T_initialize_w_params UMAA_Common_Measurement_CovarianceVelocityVelocityType_initialize_w_params

#define T_finalize_w_params   UMAA_Common_Measurement_CovarianceVelocityVelocityType_finalize_w_params
#define T_copy       UMAA_Common_Measurement_CovarianceVelocityVelocityType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_Common_Measurement_CovarianceVelocityVelocityType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_Common_Measurement_CovarianceVelocityVelocityType_get_typecode();
        }

    } 
}
#endif
