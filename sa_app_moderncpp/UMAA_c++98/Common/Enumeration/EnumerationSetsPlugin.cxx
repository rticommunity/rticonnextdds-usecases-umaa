
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "EnumerationSetsPlugin.h"

#undef ERROR
#undef VARIABLE_PITCH
#undef DELETE
#undef PLATFORM

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_Enumeration_BooleanEnumType
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Enumeration_BooleanEnumType*
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Enumeration_BooleanEnumType *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Enumeration_BooleanEnumType();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Enumeration_BooleanEnumType_initialize_w_params(sample,alloc_params)) {
        struct DDS_TypeDeallocationParams_t deallocParams =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        deallocParams.delete_pointers = alloc_params->allocate_pointers;
        deallocParams.delete_optional_members = alloc_params->allocate_pointers;
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        allocation fails. But if the allocation fails then sample == null and
        the method will return before reach this point.*/
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Enumeration_BooleanEnumType_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Enumeration_BooleanEnumType *
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Enumeration_BooleanEnumType *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Enumeration_BooleanEnumType();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Enumeration_BooleanEnumType_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Enumeration_BooleanEnumType_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Enumeration_BooleanEnumType *
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_create_data(void)
{
    return UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_destroy_data_w_params(
    UMAA_Common_Enumeration_BooleanEnumType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Enumeration_BooleanEnumType_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_destroy_data_ex(
    UMAA_Common_Enumeration_BooleanEnumType *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Enumeration_BooleanEnumType_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_destroy_data(
    UMAA_Common_Enumeration_BooleanEnumType *sample) {

    UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_copy_data(
    UMAA_Common_Enumeration_BooleanEnumType *dst,
    const UMAA_Common_Enumeration_BooleanEnumType *src)
{
    return UMAA_Common_Enumeration_BooleanEnumType_copy(dst,(const UMAA_Common_Enumeration_BooleanEnumType*) src);
}

void 
UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_BooleanEnumType *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILogParamString_printPlain("%s:\n", desc);
    } else {
        RTILogParamString_printPlain("\n");
    }

    if (sample == NULL) {
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printBoolean(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_Enumeration_BooleanEnumTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Enumeration_BooleanEnumType *dst,
    const UMAA_Common_Enumeration_BooleanEnumType *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Enumeration_BooleanEnumTypePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Enumeration_BooleanEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Enumeration_BooleanEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
UMAA_Common_Enumeration_BooleanEnumTypePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Enumeration_BooleanEnumTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
UMAA_Common_Enumeration_BooleanEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_BuiltInTestStatusEnumType_BuiltInTestStatusEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_IRPolarityEnumType_IRPolarityEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_NetworkProtocolEnumType_NetworkProtocolEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_PlanActionEnumType_PlanActionEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumTypePluginSupport_print_data(
    const UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType *sample,
    const char *description,
    unsigned int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILogParamString_printPlain("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILogParamString_printPlain("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "UMAA_Common_Enumeration_SpecificLOIEnumType_SpecificLOIEnumType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
#undef RTI_CDR_CURRENT_SUBMODULE 
