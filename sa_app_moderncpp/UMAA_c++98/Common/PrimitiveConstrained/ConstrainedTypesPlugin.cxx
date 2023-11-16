
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
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

#include "ConstrainedTypesPlugin.h"

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio*
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample) {

    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *dst,
    const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *src)
{
    return UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio_copy(dst,(const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio*) src);
}

void 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
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

    RTICdrType_printDouble(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *dst,
    const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_CovarAngleAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_CovarAngleAngle*
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarAngleAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_CovarAngleAngle *
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarAngleAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarAngleAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_CovarAngleAngle *
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample) {

    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *dst,
    const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *src)
{
    return UMAA_Common_PrimitiveConstrained_CovarAngleAngle_copy(dst,(const UMAA_Common_PrimitiveConstrained_CovarAngleAngle*) src);
}

void 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
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

    RTICdrType_printDouble(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_CovarAngleAngle *dst,
    const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_CovarDisAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_CovarDisAngle*
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarDisAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_CovarDisAngle *
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarDisAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarDisAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_CovarDisAngle *
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_CovarDisAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample) {

    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisAngle *src)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisAngle_copy(dst,(const UMAA_Common_PrimitiveConstrained_CovarDisAngle*) src);
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
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

    RTICdrType_printDouble(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_CovarDisAngle *dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_CovarDisDis
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_CovarDisDis*
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarDisDis();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_CovarDisDis *
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_CovarDisDis();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_CovarDisDis_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_CovarDisDis *
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_CovarDisDis_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *sample) {

    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_CovarDisDis *dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisDis *src)
{
    return UMAA_Common_PrimitiveConstrained_CovarDisDis_copy(dst,(const UMAA_Common_PrimitiveConstrained_CovarDisDis*) src);
}

void 
UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
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

    RTICdrType_printDouble(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_CovarDisDis *dst,
    const UMAA_Common_PrimitiveConstrained_CovarDisDis *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_Left
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_Left*
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_Left *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_Left();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_Left_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_Left_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_Left_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_Left *
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_Left *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_Left();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_Left_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_Left_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_Left_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_Left *
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_Left *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_Left_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_Left *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_Left_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_Left *sample) {

    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_Left *dst,
    const UMAA_Common_PrimitiveConstrained_Left *src)
{
    return UMAA_Common_PrimitiveConstrained_Left_copy(dst,(const UMAA_Common_PrimitiveConstrained_Left*) src);
}

void 
UMAA_Common_PrimitiveConstrained_LeftPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_Left *sample,
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

    RTICdrType_printDouble(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_LeftPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_Left *dst,
    const UMAA_Common_PrimitiveConstrained_Left *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_LeftPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_LeftPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_MMSI
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_MMSI*
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_MMSI *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_MMSI();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_MMSI_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_MMSI *
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_MMSI *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_MMSI();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_MMSI_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_MMSI *
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_MMSI_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_MMSI *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_MMSI_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_MMSI *sample) {

    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_MMSI *dst,
    const UMAA_Common_PrimitiveConstrained_MMSI *src)
{
    return UMAA_Common_PrimitiveConstrained_MMSI_copy(dst,(const UMAA_Common_PrimitiveConstrained_MMSI*) src);
}

void 
UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_MMSI *sample,
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

    if ((*sample)==NULL) {
        RTICdrType_printString(
            NULL,"", indent_level + 1);
    } else {
        RTICdrType_printString(
            (*sample),"", indent_level + 1);    
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_MMSIPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_MMSI *dst,
    const UMAA_Common_PrimitiveConstrained_MMSI *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_NanosecondsCount
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_NanosecondsCount*
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_NanosecondsCount();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_NanosecondsCount *
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_NanosecondsCount();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_NanosecondsCount_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_NanosecondsCount *
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_NanosecondsCount_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample) {

    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsCount *src)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsCount_copy(dst,(const UMAA_Common_PrimitiveConstrained_NanosecondsCount*) src);
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
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

    RTICdrType_printLong(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_NanosecondsCount *dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsCount *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_NanosecondsDrift
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_NanosecondsDrift*
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_NanosecondsDrift();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_NanosecondsDrift *
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_NanosecondsDrift();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_NanosecondsDrift_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_NanosecondsDrift *
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample) {

    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *src)
{
    return UMAA_Common_PrimitiveConstrained_NanosecondsDrift_copy(dst,(const UMAA_Common_PrimitiveConstrained_NanosecondsDrift*) src);
}

void 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
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

    RTICdrType_printLong(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_NanosecondsDrift *dst,
    const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_StringLongDescription
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_StringLongDescription*
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_StringLongDescription();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_StringLongDescription *
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_StringLongDescription();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_StringLongDescription_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_StringLongDescription *
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_StringLongDescription_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *sample) {

    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_StringLongDescription *dst,
    const UMAA_Common_PrimitiveConstrained_StringLongDescription *src)
{
    return UMAA_Common_PrimitiveConstrained_StringLongDescription_copy(dst,(const UMAA_Common_PrimitiveConstrained_StringLongDescription*) src);
}

void 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
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

    if ((*sample)==NULL) {
        RTICdrType_printString(
            NULL,"", indent_level + 1);
    } else {
        RTICdrType_printString(
            (*sample),"", indent_level + 1);    
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_StringLongDescription *dst,
    const UMAA_Common_PrimitiveConstrained_StringLongDescription *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_StringShortDescription
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_StringShortDescription*
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_StringShortDescription();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_StringShortDescription *
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_StringShortDescription();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_StringShortDescription_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_StringShortDescription *
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_StringShortDescription_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *sample) {

    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_StringShortDescription *dst,
    const UMAA_Common_PrimitiveConstrained_StringShortDescription *src)
{
    return UMAA_Common_PrimitiveConstrained_StringShortDescription_copy(dst,(const UMAA_Common_PrimitiveConstrained_StringShortDescription*) src);
}

void 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
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

    if ((*sample)==NULL) {
        RTICdrType_printString(
            NULL,"", indent_level + 1);
    } else {
        RTICdrType_printString(
            (*sample),"", indent_level + 1);    
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_StringShortDescription *dst,
    const UMAA_Common_PrimitiveConstrained_StringShortDescription *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier*
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data(void)
{
    return UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data_w_params(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data_ex(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,RTIBool deallocate_pointers) {
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample) {

    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_copy_data(
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *dst,
    const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *src)
{
    return UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier_copy(dst,(const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier*) src);
}

void 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_print_data(
    const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
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

    if ((*sample)==NULL) {
        RTICdrType_printString(
            NULL,"", indent_level + 1);
    } else {
        RTICdrType_printString(
            (*sample),"", indent_level + 1);    
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *dst,
    const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_sample_max_size(
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
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_key_max_size(
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
UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_key_max_size_for_keyhash(
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
#undef RTI_CDR_CURRENT_SUBMODULE 
