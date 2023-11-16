

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl 
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

#include "ObjectiveType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ObjectiveTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsTYPENAME = "UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc_members[11]=
    {

        {
            (char *)"PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RECOVERYOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_RECOVERYOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"COMMSLINKOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_COMMSLINKOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"DEPLOYMENTOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_DEPLOYMENTOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PASSIVELOITEROBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PASSIVELOITEROBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"STATIONKEEPOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_STATIONKEEPOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"ROUTEOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_ROUTEOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"CHARGINGOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CHARGINGOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"LOITEROBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_LOITEROBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"CONTINGENCYOBJECTIVETYPE_SELECT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CONTINGENCYOBJECTIVETYPE_SELECT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            11, /* Number of members */
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_sample_access_info();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_tc;
}

#define TSeq UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsSeq
#define T UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo;
    }

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_member_value_pointer;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_typePlugin = 
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
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* sample)
{

    *sample = UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT;
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* sample)
{  
    if (sample==NULL) {
        return;
    }
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* sample, RTIBool deletePointers)
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

}

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_copy(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* dst,
    const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors' sequence class.
*/
#define T UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors
#define TSeq UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_SelectorsSeq

#define T_initialize_w_params UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_copy

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

/* ========================================================================= */
const char *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionTYPENAME = "UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[11]=
    {

        {
            (char *)"ProductDisseminateFileObjectiveType_data",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RecoveryObjectiveType_data",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_RECOVERYOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"ProductExploitationObjectiveType_data",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"CommsLinkObjectiveType_data",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_COMMSLINKOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"DeploymentObjectiveType_data",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_DEPLOYMENTOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PassiveLoiterObjectiveType_data",/* Member name */
            {
                6,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PASSIVELOITEROBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"StationkeepObjectiveType_data",/* Member name */
            {
                7,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_STATIONKEEPOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RouteObjectiveType_data",/* Member name */
            {
                8,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_ROUTEOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"ChargingObjectiveType_data",/* Member name */
            {
                9,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CHARGINGOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"LoiterObjectiveType_data",/* Member name */
            {
                10,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_LOITEROBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"ContingencyObjectiveType_data",/* Member name */
            {
                11,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            ((UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CONTINGENCYOBJECTIVETYPE_SELECT)),
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc =
    {{
            DDS_TK_UNION, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            11, /* Number of members */
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_RecoveryObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ProductExploitationObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_CommsLinkObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_DeploymentObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_PassiveLoiterObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_StationkeepObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_RouteObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ChargingObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_LoiterObjectiveType_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ContingencyObjectiveType_get_typecode();

    /* Initialize the values for member annotations. */

    /* Discriminator type code */
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_get_typecode();

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_sample_access_info();
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_tc;
}

#define TSeq UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq
#define T UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[12] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_d - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.ProductDisseminateFileObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.RecoveryObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.ProductExploitationObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.CommsLinkObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.DeploymentObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.PassiveLoiterObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.StationkeepObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.RouteObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.ChargingObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.LoiterObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->_u.ContingencyObjectiveType_data - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_member_value_pointer;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_typePlugin = 
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
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_g_typePlugin;
}
#endif

DDS_LongLong UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_getDefaultDiscriminator(void)
{
    return 0;
}

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* sample)
{
    return UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->_d = (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors)UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_getDefaultDiscriminator();
    if (!UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_initialize_w_params(
        &sample->_u.ProductDisseminateFileObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_RecoveryObjectiveType_initialize_w_params(
        &sample->_u.RecoveryObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_ProductExploitationObjectiveType_initialize_w_params(
        &sample->_u.ProductExploitationObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_CommsLinkObjectiveType_initialize_w_params(
        &sample->_u.CommsLinkObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_DeploymentObjectiveType_initialize_w_params(
        &sample->_u.DeploymentObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_PassiveLoiterObjectiveType_initialize_w_params(
        &sample->_u.PassiveLoiterObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_StationkeepObjectiveType_initialize_w_params(
        &sample->_u.StationkeepObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_RouteObjectiveType_initialize_w_params(
        &sample->_u.RouteObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_ChargingObjectiveType_initialize_w_params(
        &sample->_u.ChargingObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_LoiterObjectiveType_initialize_w_params(
        &sample->_u.LoiterObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_MM_BaseType_ContingencyObjectiveType_initialize_w_params(
        &sample->_u.ContingencyObjectiveType_data,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* sample)
{
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* sample)
{  
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_finalize_w_params(
        &sample->_u.ProductDisseminateFileObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_RecoveryObjectiveType_finalize_w_params(
        &sample->_u.RecoveryObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_ProductExploitationObjectiveType_finalize_w_params(
        &sample->_u.ProductExploitationObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_CommsLinkObjectiveType_finalize_w_params(
        &sample->_u.CommsLinkObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_DeploymentObjectiveType_finalize_w_params(
        &sample->_u.DeploymentObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_w_params(
        &sample->_u.PassiveLoiterObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_StationkeepObjectiveType_finalize_w_params(
        &sample->_u.StationkeepObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_RouteObjectiveType_finalize_w_params(
        &sample->_u.RouteObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_ChargingObjectiveType_finalize_w_params(
        &sample->_u.ChargingObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_LoiterObjectiveType_finalize_w_params(
        &sample->_u.LoiterObjectiveType_data,
        deallocParams);

    UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_params(
        &sample->_u.ContingencyObjectiveType_data,
        deallocParams);

}

void UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* sample, RTIBool deletePointers)
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

    switch(sample->_d) {
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_RECOVERYOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_COMMSLINKOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_DEPLOYMENTOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PASSIVELOITEROBJECTIVETYPE_SELECT):
            {
                UMAA_MM_BaseType_PassiveLoiterObjectiveType_finalize_optional_members(&sample->_u.PassiveLoiterObjectiveType_data, deallocParams->delete_pointers);
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_STATIONKEEPOBJECTIVETYPE_SELECT):
            {
                UMAA_MM_BaseType_StationkeepObjectiveType_finalize_optional_members(&sample->_u.StationkeepObjectiveType_data, deallocParams->delete_pointers);
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_ROUTEOBJECTIVETYPE_SELECT):
            {
                UMAA_MM_BaseType_RouteObjectiveType_finalize_optional_members(&sample->_u.RouteObjectiveType_data, deallocParams->delete_pointers);
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CHARGINGOBJECTIVETYPE_SELECT):
            {
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_LOITEROBJECTIVETYPE_SELECT):
            {
                UMAA_MM_BaseType_LoiterObjectiveType_finalize_optional_members(&sample->_u.LoiterObjectiveType_data, deallocParams->delete_pointers);
        } break ;
        case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CONTINGENCYOBJECTIVETYPE_SELECT):
            {
        } break ;
        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
}

RTIBool UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_copy(
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* dst,
    const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_copy(
            &dst->_d,
            (const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors*)&src->_d)) {
            return RTI_FALSE;
        } 
        switch(src->_d) {

            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_ProductDisseminateFileObjectiveType_copy(
                        &dst->_u.ProductDisseminateFileObjectiveType_data,
                        (const UMAA_MM_BaseType_ProductDisseminateFileObjectiveType*)&src->_u.ProductDisseminateFileObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_RECOVERYOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_RecoveryObjectiveType_copy(
                        &dst->_u.RecoveryObjectiveType_data,
                        (const UMAA_MM_BaseType_RecoveryObjectiveType*)&src->_u.RecoveryObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_ProductExploitationObjectiveType_copy(
                        &dst->_u.ProductExploitationObjectiveType_data,
                        (const UMAA_MM_BaseType_ProductExploitationObjectiveType*)&src->_u.ProductExploitationObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_COMMSLINKOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_CommsLinkObjectiveType_copy(
                        &dst->_u.CommsLinkObjectiveType_data,
                        (const UMAA_MM_BaseType_CommsLinkObjectiveType*)&src->_u.CommsLinkObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_DEPLOYMENTOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_DeploymentObjectiveType_copy(
                        &dst->_u.DeploymentObjectiveType_data,
                        (const UMAA_MM_BaseType_DeploymentObjectiveType*)&src->_u.DeploymentObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_PASSIVELOITEROBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_PassiveLoiterObjectiveType_copy(
                        &dst->_u.PassiveLoiterObjectiveType_data,
                        (const UMAA_MM_BaseType_PassiveLoiterObjectiveType*)&src->_u.PassiveLoiterObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_STATIONKEEPOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_StationkeepObjectiveType_copy(
                        &dst->_u.StationkeepObjectiveType_data,
                        (const UMAA_MM_BaseType_StationkeepObjectiveType*)&src->_u.StationkeepObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_ROUTEOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_RouteObjectiveType_copy(
                        &dst->_u.RouteObjectiveType_data,
                        (const UMAA_MM_BaseType_RouteObjectiveType*)&src->_u.RouteObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CHARGINGOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_ChargingObjectiveType_copy(
                        &dst->_u.ChargingObjectiveType_data,
                        (const UMAA_MM_BaseType_ChargingObjectiveType*)&src->_u.ChargingObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_LOITEROBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_LoiterObjectiveType_copy(
                        &dst->_u.LoiterObjectiveType_data,
                        (const UMAA_MM_BaseType_LoiterObjectiveType*)&src->_u.LoiterObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;
            case (UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Selectors_CONTINGENCYOBJECTIVETYPE_SELECT):
                {
                    if (!UMAA_MM_BaseType_ContingencyObjectiveType_copy(
                        &dst->_u.ContingencyObjectiveType_data,
                        (const UMAA_MM_BaseType_ContingencyObjectiveType*)&src->_u.ContingencyObjectiveType_data)) {
                        return RTI_FALSE;
                } 
            } break ;

            default: 
            {
                /* 
                * Prevents compiler warnings when discriminator is an enum
                * and unionType does not specify all enumeration members.
                */ 
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
* Configure and implement 'UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union' sequence class.
*/
#define T UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union
#define TSeq UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_UnionSeq

#define T_initialize_w_params UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_copy

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

/* ========================================================================= */
const char *UMAA_MM_BaseType_ObjectiveTypeTYPENAME = "UMAA::MM::BaseType::ObjectiveType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ObjectiveType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_g_tc_childObjectiveIDs_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);
    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_g_tc_dependentObjectiveIDs_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);
    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_g_tc_preferredResourceIDs_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100L),NULL);

    static DDS_TypeCode_Member UMAA_MM_BaseType_ObjectiveType_g_tc_members[13]=
    {

        {
            (char *)"approvalRequired",/* Member name */
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
            (char *)"childObjectiveIDs",/* Member name */
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
            (char *)"dependentObjectiveIDs",/* Member name */
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
            (char *)"endTime",/* Member name */
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
            (char *)"endTimeTolerance",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"preferredResourceIDs",/* Member name */
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
            (char *)"priority",/* Member name */
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
            (char *)"startTime",/* Member name */
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
            (char *)"startTimeTolerance",/* Member name */
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
            (char *)"ObjectiveType_subtypes",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"objectiveID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"parentObjectiveID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode UMAA_MM_BaseType_ObjectiveType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ObjectiveType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            13, /* Number of members */
            UMAA_MM_BaseType_ObjectiveType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ObjectiveType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ObjectiveType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_ObjectiveType_g_tc_childObjectiveIDs_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_childObjectiveIDs_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_MM_BaseType_ObjectiveType_g_tc_dependentObjectiveIDs_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_dependentObjectiveIDs_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_MM_BaseType_ObjectiveType_g_tc_preferredResourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_preferredResourceIDs_sequence._data._sampleAccessInfo = UMAA_Common_Measurement_NumericGUID_get_sample_seq_access_info();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean_w_new;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_ObjectiveType_g_tc_childObjectiveIDs_sequence;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_ObjectiveType_g_tc_dependentObjectiveIDs_sequence;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_Tolerance_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& UMAA_MM_BaseType_ObjectiveType_g_tc_preferredResourceIDs_sequence;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Order_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_Tolerance_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._minValue._u.long_value = 0L;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    UMAA_MM_BaseType_ObjectiveType_g_tc_members[7]._annotations._maxValue._u.long_value = 2147483647L;

    UMAA_MM_BaseType_ObjectiveType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ObjectiveType_get_sample_access_info();
    UMAA_MM_BaseType_ObjectiveType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ObjectiveType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ObjectiveType_g_tc;
}

#define TSeq UMAA_MM_BaseType_ObjectiveTypeSeq
#define T UMAA_MM_BaseType_ObjectiveType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ObjectiveTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ObjectiveTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ObjectiveType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ObjectiveType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_ObjectiveType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[13] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_ObjectiveType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->approvalRequired - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->childObjectiveIDs - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->dependentObjectiveIDs - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTime - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->endTimeTolerance - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->name - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->preferredResourceIDs - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->priority - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTime - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->startTimeTolerance - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->ObjectiveType_subtypes - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->parentObjectiveID - (char *)sample);

    UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ObjectiveType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ObjectiveType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ObjectiveType_get_member_value_pointer;

    UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ObjectiveType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ObjectiveType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ObjectiveType_g_typePlugin = 
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
        UMAA_MM_BaseType_ObjectiveType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ObjectiveType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ObjectiveType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_ObjectiveType_initialize(
    UMAA_MM_BaseType_ObjectiveType* sample)
{
    return UMAA_MM_BaseType_ObjectiveType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_ObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_ObjectiveType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{
    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->approvalRequired = 0;

    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->childObjectiveIDs )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->childObjectiveIDs ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->childObjectiveIDs , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->childObjectiveIDs
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->childObjectiveIDs, 0)){
            return RTI_FALSE;
        }    
    }
    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->dependentObjectiveIDs )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->dependentObjectiveIDs ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->dependentObjectiveIDs , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->dependentObjectiveIDs
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->dependentObjectiveIDs, 0)){
            return RTI_FALSE;
        }    
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->endTime,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->endTimeTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->endTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
            if (sample->endTimeTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                sample->endTimeTolerance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->endTimeTolerance!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                    sample->endTimeTolerance,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }

    if (allocParams->allocate_memory) {
        sample->name = DDS_String_alloc((1023L));
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->name,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->name == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!UMAA_Common_Measurement_NumericGUIDSeq_initialize(&sample->preferredResourceIDs )){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_element_allocation_params(&sample->preferredResourceIDs ,allocParams)){
            return RTI_FALSE;
        }
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_absolute_maximum(&sample->preferredResourceIDs , (100L))){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_set_maximum(
            &sample->preferredResourceIDs
            ,
            (100L))) {
            return RTI_FALSE;
        }
    } else { 
        if(!UMAA_Common_Measurement_NumericGUIDSeq_set_length(&sample->preferredResourceIDs, 0)){
            return RTI_FALSE;
        }    
    }
    sample->priority = 0;

    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->startTime,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!allocParams->allocate_optional_members) {
        sample->startTimeTolerance=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->startTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
            if (sample->startTimeTolerance==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                sample->startTimeTolerance,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->startTimeTolerance!=NULL) {
                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_w_params(
                    sample->startTimeTolerance,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    if (!UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_initialize_w_params(
        &sample->ObjectiveType_subtypes,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->objectiveID,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->parentObjectiveID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ObjectiveType_initialize_ex(
    UMAA_MM_BaseType_ObjectiveType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ObjectiveType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_ObjectiveType* sample)
{
    UMAA_MM_BaseType_ObjectiveType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ObjectiveType_finalize(
    UMAA_MM_BaseType_ObjectiveType* sample)
{  
    UMAA_MM_BaseType_ObjectiveType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_ObjectiveType_finalize_ex(
    UMAA_MM_BaseType_ObjectiveType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ObjectiveType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_ObjectiveType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->childObjectiveIDs,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->childObjectiveIDs),
            DDS_Boolean);

    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->dependentObjectiveIDs,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->dependentObjectiveIDs),
            DDS_Boolean);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->endTime,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->endTimeTolerance != NULL) {
            UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
                sample->endTimeTolerance,
                deallocParams);

            delete  sample->endTimeTolerance;
            sample->endTimeTolerance=NULL;
        }
    }
    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }
    RTIOsapiUtility_unusedReturnValue(UMAA_Common_Measurement_NumericGUIDSeq_set_element_deallocation_params(
        &sample->preferredResourceIDs,deallocParams), 
        DDS_Boolean);
    RTIOsapiUtility_unusedReturnValue(
        UMAA_Common_Measurement_NumericGUIDSeq_finalize(
            &sample->preferredResourceIDs),
            DDS_Boolean);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->startTime,
        deallocParams);

    if (deallocParams->delete_optional_members) {
        if (sample->startTimeTolerance != NULL) {
            UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
                sample->startTimeTolerance,
                deallocParams);

            delete  sample->startTimeTolerance;
            sample->startTimeTolerance=NULL;
        }
    }
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_w_params(
        &sample->ObjectiveType_subtypes,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->objectiveID,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->parentObjectiveID,
        deallocParams);

}

void UMAA_MM_BaseType_ObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_ObjectiveType* sample, RTIBool deletePointers)
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

    if (sample->endTimeTolerance != NULL) {
        UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
            sample->endTimeTolerance,
            deallocParams);

        delete  sample->endTimeTolerance;
        sample->endTimeTolerance=NULL;
    }
    if (sample->startTimeTolerance != NULL) {
        UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(
            sample->startTimeTolerance,
            deallocParams);

        delete  sample->startTimeTolerance;
        sample->startTimeTolerance=NULL;
    }
    UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_finalize_optional_members(&sample->ObjectiveType_subtypes, deallocParams->delete_pointers);
}

RTIBool UMAA_MM_BaseType_ObjectiveType_copy(
    UMAA_MM_BaseType_ObjectiveType* dst,
    const UMAA_MM_BaseType_ObjectiveType* src)
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

        if (!RTICdrType_copyBoolean (
            &dst->approvalRequired, 
            &src->approvalRequired)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->childObjectiveIDs ,
            &src->childObjectiveIDs )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->dependentObjectiveIDs ,
            &src->dependentObjectiveIDs )) {
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->endTime,
            (const UMAA_Common_Measurement_DateTime*)&src->endTime)) {
            return RTI_FALSE;
        } 
        if (src->endTimeTolerance!=NULL) {
            if (dst->endTimeTolerance==NULL) {

                dst->endTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
                if (dst->endTimeTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_ex(
                    dst->endTimeTolerance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_copy(
                dst->endTimeTolerance,
                (const UMAA_Common_Measurement_DateTime_Tolerance*)src->endTimeTolerance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->endTimeTolerance != NULL) {
                UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(dst->endTimeTolerance, deallocParams);
                delete  dst->endTimeTolerance;
                dst->endTimeTolerance=NULL;
            }
        }
        if (!RTICdrType_copyStringEx (
            &dst->name
            ,
            src->name, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_NumericGUIDSeq_copy(
            &dst->preferredResourceIDs ,
            &src->preferredResourceIDs )) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->priority, 
            &src->priority)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->startTime,
            (const UMAA_Common_Measurement_DateTime*)&src->startTime)) {
            return RTI_FALSE;
        } 
        if (src->startTimeTolerance!=NULL) {
            if (dst->startTimeTolerance==NULL) {

                dst->startTimeTolerance = new (std::nothrow)   UMAA_Common_Measurement_DateTime_Tolerance ();
                if (dst->startTimeTolerance==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Measurement_DateTime_Tolerance_initialize_ex(
                    dst->startTimeTolerance, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Measurement_DateTime_Tolerance_copy(
                dst->startTimeTolerance,
                (const UMAA_Common_Measurement_DateTime_Tolerance*)src->startTimeTolerance)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->startTimeTolerance != NULL) {
                UMAA_Common_Measurement_DateTime_Tolerance_finalize_w_params(dst->startTimeTolerance, deallocParams);
                delete  dst->startTimeTolerance;
                dst->startTimeTolerance=NULL;
            }
        }
        if (!UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_copy(
            &dst->ObjectiveType_subtypes,
            (const UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union*)&src->ObjectiveType_subtypes)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->objectiveID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->objectiveID)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->parentObjectiveID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->parentObjectiveID)) {
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
* Configure and implement 'UMAA_MM_BaseType_ObjectiveType' sequence class.
*/
#define T UMAA_MM_BaseType_ObjectiveType
#define TSeq UMAA_MM_BaseType_ObjectiveTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_ObjectiveType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ObjectiveType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ObjectiveType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_ObjectiveType_Specializations_ObjectiveType_Union_get_typecode();
        }

        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_ObjectiveType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_ObjectiveType_get_typecode();
        }

    } 
}
#endif
