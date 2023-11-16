
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
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

#include "MeasurementsPlugin.h"

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_Measurement_AngleAcceleration
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_AngleAcceleration*
UMAA_Common_Measurement_AngleAccelerationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_AngleAcceleration *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_AngleAcceleration();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AngleAcceleration_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_AngleAcceleration_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AngleAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_AngleAcceleration *
UMAA_Common_Measurement_AngleAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_AngleAcceleration *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_AngleAcceleration();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AngleAcceleration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_AngleAcceleration_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AngleAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_AngleAcceleration *
UMAA_Common_Measurement_AngleAccelerationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_AngleAccelerationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_AngleAccelerationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_AngleAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_AngleAcceleration_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_AngleAccelerationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_AngleAcceleration *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_AngleAcceleration_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_AngleAccelerationPluginSupport_destroy_data(
    UMAA_Common_Measurement_AngleAcceleration *sample) {

    UMAA_Common_Measurement_AngleAccelerationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_AngleAccelerationPluginSupport_copy_data(
    UMAA_Common_Measurement_AngleAcceleration *dst,
    const UMAA_Common_Measurement_AngleAcceleration *src)
{
    return UMAA_Common_Measurement_AngleAcceleration_copy(dst,(const UMAA_Common_Measurement_AngleAcceleration*) src);
}

void 
UMAA_Common_Measurement_AngleAccelerationPluginSupport_print_data(
    const UMAA_Common_Measurement_AngleAcceleration *sample,
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
UMAA_Common_Measurement_AngleAccelerationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_AngleAcceleration *dst,
    const UMAA_Common_Measurement_AngleAcceleration *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_AngleAccelerationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_AngleAccelerationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_AngleAccelerationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_AngleAccelerationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_AngleAccelerationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_AngleAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_AnglePosition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_AnglePosition*
UMAA_Common_Measurement_AnglePositionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_AnglePosition *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_AnglePosition();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AnglePosition_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_AnglePosition_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AnglePosition_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_AnglePosition *
UMAA_Common_Measurement_AnglePositionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_AnglePosition *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_AnglePosition();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AnglePosition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_AnglePosition_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AnglePosition_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_AnglePosition *
UMAA_Common_Measurement_AnglePositionPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_AnglePositionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_AnglePositionPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_AnglePosition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_AnglePosition_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_AnglePositionPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_AnglePosition *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_AnglePosition_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_AnglePositionPluginSupport_destroy_data(
    UMAA_Common_Measurement_AnglePosition *sample) {

    UMAA_Common_Measurement_AnglePositionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_AnglePositionPluginSupport_copy_data(
    UMAA_Common_Measurement_AnglePosition *dst,
    const UMAA_Common_Measurement_AnglePosition *src)
{
    return UMAA_Common_Measurement_AnglePosition_copy(dst,(const UMAA_Common_Measurement_AnglePosition*) src);
}

void 
UMAA_Common_Measurement_AnglePositionPluginSupport_print_data(
    const UMAA_Common_Measurement_AnglePosition *sample,
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
UMAA_Common_Measurement_AnglePositionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_AnglePosition *dst,
    const UMAA_Common_Measurement_AnglePosition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_AnglePositionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_AnglePositionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_AnglePositionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_AnglePositionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_AnglePositionPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_AnglePositionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Charge
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Charge*
UMAA_Common_Measurement_ChargePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Charge *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Charge();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Charge_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Charge_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Charge_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Charge *
UMAA_Common_Measurement_ChargePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Charge *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Charge();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Charge_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Charge_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Charge_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Charge *
UMAA_Common_Measurement_ChargePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_ChargePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_ChargePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Charge *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Charge_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_ChargePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Charge *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Charge_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_ChargePluginSupport_destroy_data(
    UMAA_Common_Measurement_Charge *sample) {

    UMAA_Common_Measurement_ChargePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_ChargePluginSupport_copy_data(
    UMAA_Common_Measurement_Charge *dst,
    const UMAA_Common_Measurement_Charge *src)
{
    return UMAA_Common_Measurement_Charge_copy(dst,(const UMAA_Common_Measurement_Charge*) src);
}

void 
UMAA_Common_Measurement_ChargePluginSupport_print_data(
    const UMAA_Common_Measurement_Charge *sample,
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
UMAA_Common_Measurement_ChargePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Charge *dst,
    const UMAA_Common_Measurement_Charge *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_ChargePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_ChargePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_ChargePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_ChargePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_ChargePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_ChargePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Conductivity
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Conductivity*
UMAA_Common_Measurement_ConductivityPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Conductivity *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Conductivity();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Conductivity_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Conductivity_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Conductivity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Conductivity *
UMAA_Common_Measurement_ConductivityPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Conductivity *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Conductivity();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Conductivity_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Conductivity_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Conductivity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Conductivity *
UMAA_Common_Measurement_ConductivityPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_ConductivityPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_ConductivityPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Conductivity *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Conductivity_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_ConductivityPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Conductivity *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Conductivity_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_ConductivityPluginSupport_destroy_data(
    UMAA_Common_Measurement_Conductivity *sample) {

    UMAA_Common_Measurement_ConductivityPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_ConductivityPluginSupport_copy_data(
    UMAA_Common_Measurement_Conductivity *dst,
    const UMAA_Common_Measurement_Conductivity *src)
{
    return UMAA_Common_Measurement_Conductivity_copy(dst,(const UMAA_Common_Measurement_Conductivity*) src);
}

void 
UMAA_Common_Measurement_ConductivityPluginSupport_print_data(
    const UMAA_Common_Measurement_Conductivity *sample,
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
UMAA_Common_Measurement_ConductivityPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Conductivity *dst,
    const UMAA_Common_Measurement_Conductivity *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_ConductivityPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_ConductivityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_ConductivityPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_ConductivityPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_ConductivityPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_ConductivityPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_DataTransferRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_DataTransferRate*
UMAA_Common_Measurement_DataTransferRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_DataTransferRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_DataTransferRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DataTransferRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_DataTransferRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DataTransferRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_DataTransferRate *
UMAA_Common_Measurement_DataTransferRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_DataTransferRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_DataTransferRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DataTransferRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_DataTransferRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DataTransferRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_DataTransferRate *
UMAA_Common_Measurement_DataTransferRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DataTransferRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DataTransferRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_DataTransferRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_DataTransferRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DataTransferRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_DataTransferRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_DataTransferRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DataTransferRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_DataTransferRate *sample) {

    UMAA_Common_Measurement_DataTransferRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DataTransferRatePluginSupport_copy_data(
    UMAA_Common_Measurement_DataTransferRate *dst,
    const UMAA_Common_Measurement_DataTransferRate *src)
{
    return UMAA_Common_Measurement_DataTransferRate_copy(dst,(const UMAA_Common_Measurement_DataTransferRate*) src);
}

void 
UMAA_Common_Measurement_DataTransferRatePluginSupport_print_data(
    const UMAA_Common_Measurement_DataTransferRate *sample,
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
UMAA_Common_Measurement_DataTransferRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DataTransferRate *dst,
    const UMAA_Common_Measurement_DataTransferRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DataTransferRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DataTransferRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_DataTransferRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DataTransferRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_DataTransferRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DataTransferRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Distance_ASF
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Distance_ASF*
UMAA_Common_Measurement_Distance_ASFPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Distance_ASF *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_ASF();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_ASF_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Distance_ASF_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_ASF_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Distance_ASF *
UMAA_Common_Measurement_Distance_ASFPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Distance_ASF *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_ASF();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_ASF_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Distance_ASF_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_ASF_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Distance_ASF *
UMAA_Common_Measurement_Distance_ASFPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Distance_ASFPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Distance_ASFPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Distance_ASF *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Distance_ASF_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_ASFPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Distance_ASF *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Distance_ASF_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_ASFPluginSupport_destroy_data(
    UMAA_Common_Measurement_Distance_ASF *sample) {

    UMAA_Common_Measurement_Distance_ASFPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Distance_ASFPluginSupport_copy_data(
    UMAA_Common_Measurement_Distance_ASF *dst,
    const UMAA_Common_Measurement_Distance_ASF *src)
{
    return UMAA_Common_Measurement_Distance_ASF_copy(dst,(const UMAA_Common_Measurement_Distance_ASF*) src);
}

void 
UMAA_Common_Measurement_Distance_ASFPluginSupport_print_data(
    const UMAA_Common_Measurement_Distance_ASF *sample,
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
UMAA_Common_Measurement_Distance_ASFPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Distance_ASF *dst,
    const UMAA_Common_Measurement_Distance_ASF *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Distance_ASFPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Distance_ASFPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Distance_ASFPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Distance_ASFPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Distance_ASFPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Distance_ASFPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Distance_BSL
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Distance_BSL*
UMAA_Common_Measurement_Distance_BSLPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Distance_BSL *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_BSL();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_BSL_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Distance_BSL_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_BSL_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Distance_BSL *
UMAA_Common_Measurement_Distance_BSLPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Distance_BSL *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_BSL();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_BSL_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Distance_BSL_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_BSL_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Distance_BSL *
UMAA_Common_Measurement_Distance_BSLPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Distance_BSLPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Distance_BSLPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Distance_BSL *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Distance_BSL_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_BSLPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Distance_BSL *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Distance_BSL_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_BSLPluginSupport_destroy_data(
    UMAA_Common_Measurement_Distance_BSL *sample) {

    UMAA_Common_Measurement_Distance_BSLPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Distance_BSLPluginSupport_copy_data(
    UMAA_Common_Measurement_Distance_BSL *dst,
    const UMAA_Common_Measurement_Distance_BSL *src)
{
    return UMAA_Common_Measurement_Distance_BSL_copy(dst,(const UMAA_Common_Measurement_Distance_BSL*) src);
}

void 
UMAA_Common_Measurement_Distance_BSLPluginSupport_print_data(
    const UMAA_Common_Measurement_Distance_BSL *sample,
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
UMAA_Common_Measurement_Distance_BSLPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Distance_BSL *dst,
    const UMAA_Common_Measurement_Distance_BSL *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Distance_BSLPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Distance_BSLPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Distance_BSLPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Distance_BSLPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Distance_BSLPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Distance_BSLPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Effort
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Effort*
UMAA_Common_Measurement_EffortPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Effort *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Effort();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Effort_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Effort_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Effort_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Effort *
UMAA_Common_Measurement_EffortPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Effort *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Effort();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Effort_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Effort_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Effort_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Effort *
UMAA_Common_Measurement_EffortPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_EffortPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_EffortPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Effort *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Effort_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_EffortPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Effort *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Effort_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_EffortPluginSupport_destroy_data(
    UMAA_Common_Measurement_Effort *sample) {

    UMAA_Common_Measurement_EffortPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_EffortPluginSupport_copy_data(
    UMAA_Common_Measurement_Effort *dst,
    const UMAA_Common_Measurement_Effort *src)
{
    return UMAA_Common_Measurement_Effort_copy(dst,(const UMAA_Common_Measurement_Effort*) src);
}

void 
UMAA_Common_Measurement_EffortPluginSupport_print_data(
    const UMAA_Common_Measurement_Effort *sample,
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
UMAA_Common_Measurement_EffortPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Effort *dst,
    const UMAA_Common_Measurement_Effort *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_EffortPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_EffortPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_EffortPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_EffortPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_EffortPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_EffortPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Energy_Percent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Energy_Percent*
UMAA_Common_Measurement_Energy_PercentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Energy_Percent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Energy_Percent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Energy_Percent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Energy_Percent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Energy_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Energy_Percent *
UMAA_Common_Measurement_Energy_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Energy_Percent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Energy_Percent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Energy_Percent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Energy_Percent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Energy_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Energy_Percent *
UMAA_Common_Measurement_Energy_PercentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Energy_PercentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Energy_PercentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Energy_Percent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Energy_Percent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Energy_PercentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Energy_Percent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Energy_Percent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Energy_PercentPluginSupport_destroy_data(
    UMAA_Common_Measurement_Energy_Percent *sample) {

    UMAA_Common_Measurement_Energy_PercentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Energy_PercentPluginSupport_copy_data(
    UMAA_Common_Measurement_Energy_Percent *dst,
    const UMAA_Common_Measurement_Energy_Percent *src)
{
    return UMAA_Common_Measurement_Energy_Percent_copy(dst,(const UMAA_Common_Measurement_Energy_Percent*) src);
}

void 
UMAA_Common_Measurement_Energy_PercentPluginSupport_print_data(
    const UMAA_Common_Measurement_Energy_Percent *sample,
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
UMAA_Common_Measurement_Energy_PercentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Energy_Percent *dst,
    const UMAA_Common_Measurement_Energy_Percent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Energy_PercentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Energy_PercentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Energy_PercentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Energy_PercentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Energy_PercentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Energy_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_FrameRateFPS
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_FrameRateFPS*
UMAA_Common_Measurement_FrameRateFPSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_FrameRateFPS *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_FrameRateFPS();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FrameRateFPS_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_FrameRateFPS_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FrameRateFPS_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_FrameRateFPS *
UMAA_Common_Measurement_FrameRateFPSPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_FrameRateFPS *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_FrameRateFPS();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FrameRateFPS_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_FrameRateFPS_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FrameRateFPS_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_FrameRateFPS *
UMAA_Common_Measurement_FrameRateFPSPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_FrameRateFPSPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_FrameRateFPSPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_FrameRateFPS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_FrameRateFPS_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_FrameRateFPSPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_FrameRateFPS *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_FrameRateFPS_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_FrameRateFPSPluginSupport_destroy_data(
    UMAA_Common_Measurement_FrameRateFPS *sample) {

    UMAA_Common_Measurement_FrameRateFPSPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_FrameRateFPSPluginSupport_copy_data(
    UMAA_Common_Measurement_FrameRateFPS *dst,
    const UMAA_Common_Measurement_FrameRateFPS *src)
{
    return UMAA_Common_Measurement_FrameRateFPS_copy(dst,(const UMAA_Common_Measurement_FrameRateFPS*) src);
}

void 
UMAA_Common_Measurement_FrameRateFPSPluginSupport_print_data(
    const UMAA_Common_Measurement_FrameRateFPS *sample,
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
UMAA_Common_Measurement_FrameRateFPSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_FrameRateFPS *dst,
    const UMAA_Common_Measurement_FrameRateFPS *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_FrameRateFPSPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_FrameRateFPSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_FrameRateFPSPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_FrameRateFPSPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_FrameRateFPSPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_FrameRateFPSPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_FrequencyRPM
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_FrequencyRPM*
UMAA_Common_Measurement_FrequencyRPMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_FrequencyRPM *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_FrequencyRPM();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FrequencyRPM_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_FrequencyRPM_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FrequencyRPM_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_FrequencyRPM *
UMAA_Common_Measurement_FrequencyRPMPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_FrequencyRPM *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_FrequencyRPM();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FrequencyRPM_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_FrequencyRPM_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FrequencyRPM_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_FrequencyRPM *
UMAA_Common_Measurement_FrequencyRPMPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_FrequencyRPMPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_FrequencyRPMPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_FrequencyRPM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_FrequencyRPM_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_FrequencyRPMPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_FrequencyRPM *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_FrequencyRPM_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_FrequencyRPMPluginSupport_destroy_data(
    UMAA_Common_Measurement_FrequencyRPM *sample) {

    UMAA_Common_Measurement_FrequencyRPMPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_FrequencyRPMPluginSupport_copy_data(
    UMAA_Common_Measurement_FrequencyRPM *dst,
    const UMAA_Common_Measurement_FrequencyRPM *src)
{
    return UMAA_Common_Measurement_FrequencyRPM_copy(dst,(const UMAA_Common_Measurement_FrequencyRPM*) src);
}

void 
UMAA_Common_Measurement_FrequencyRPMPluginSupport_print_data(
    const UMAA_Common_Measurement_FrequencyRPM *sample,
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
UMAA_Common_Measurement_FrequencyRPMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_FrequencyRPM *dst,
    const UMAA_Common_Measurement_FrequencyRPM *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_FrequencyRPMPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_FrequencyRPMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_FrequencyRPMPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_FrequencyRPMPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_FrequencyRPMPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_FrequencyRPMPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Heading_CurrentDirection
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Heading_CurrentDirection*
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Heading_CurrentDirection *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_CurrentDirection();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_CurrentDirection_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Heading_CurrentDirection *
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Heading_CurrentDirection *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_CurrentDirection();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_CurrentDirection_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Heading_CurrentDirection *
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Heading_CurrentDirection_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Heading_CurrentDirection_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_destroy_data(
    UMAA_Common_Measurement_Heading_CurrentDirection *sample) {

    UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_copy_data(
    UMAA_Common_Measurement_Heading_CurrentDirection *dst,
    const UMAA_Common_Measurement_Heading_CurrentDirection *src)
{
    return UMAA_Common_Measurement_Heading_CurrentDirection_copy(dst,(const UMAA_Common_Measurement_Heading_CurrentDirection*) src);
}

void 
UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_print_data(
    const UMAA_Common_Measurement_Heading_CurrentDirection *sample,
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
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Heading_CurrentDirection *dst,
    const UMAA_Common_Measurement_Heading_CurrentDirection *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Heading_CurrentDirectionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Heading_CurrentDirectionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Heading_MagneticNorth
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Heading_MagneticNorth*
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Heading_MagneticNorth *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_MagneticNorth();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_MagneticNorth_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Heading_MagneticNorth *
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Heading_MagneticNorth *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_MagneticNorth();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_MagneticNorth_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Heading_MagneticNorth *
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Heading_MagneticNorth_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Heading_MagneticNorth_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_destroy_data(
    UMAA_Common_Measurement_Heading_MagneticNorth *sample) {

    UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_copy_data(
    UMAA_Common_Measurement_Heading_MagneticNorth *dst,
    const UMAA_Common_Measurement_Heading_MagneticNorth *src)
{
    return UMAA_Common_Measurement_Heading_MagneticNorth_copy(dst,(const UMAA_Common_Measurement_Heading_MagneticNorth*) src);
}

void 
UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_print_data(
    const UMAA_Common_Measurement_Heading_MagneticNorth *sample,
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
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Heading_MagneticNorth *dst,
    const UMAA_Common_Measurement_Heading_MagneticNorth *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Heading_MagneticNorthPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Heading_MagneticNorthPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Heading_WindDirection
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Heading_WindDirection*
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Heading_WindDirection *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_WindDirection();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_WindDirection_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_WindDirection_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Heading_WindDirection *
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Heading_WindDirection *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_WindDirection();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_WindDirection_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_WindDirection_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Heading_WindDirection *
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Heading_WindDirection *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Heading_WindDirection_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Heading_WindDirection *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Heading_WindDirection_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_destroy_data(
    UMAA_Common_Measurement_Heading_WindDirection *sample) {

    UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_copy_data(
    UMAA_Common_Measurement_Heading_WindDirection *dst,
    const UMAA_Common_Measurement_Heading_WindDirection *src)
{
    return UMAA_Common_Measurement_Heading_WindDirection_copy(dst,(const UMAA_Common_Measurement_Heading_WindDirection*) src);
}

void 
UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_print_data(
    const UMAA_Common_Measurement_Heading_WindDirection *sample,
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
UMAA_Common_Measurement_Heading_WindDirectionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Heading_WindDirection *dst,
    const UMAA_Common_Measurement_Heading_WindDirection *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Heading_WindDirectionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Heading_WindDirectionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Heading_WindDirectionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Heading_WindDirectionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Heading_WindDirectionPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Heading_WindDirectionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Mass_MetricTon
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Mass_MetricTon*
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Mass_MetricTon *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Mass_MetricTon();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Mass_MetricTon_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Mass_MetricTon_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Mass_MetricTon *
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Mass_MetricTon *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Mass_MetricTon();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Mass_MetricTon_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Mass_MetricTon_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Mass_MetricTon *
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Mass_MetricTonPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Mass_MetricTon *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Mass_MetricTon_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Mass_MetricTon *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Mass_MetricTon_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_destroy_data(
    UMAA_Common_Measurement_Mass_MetricTon *sample) {

    UMAA_Common_Measurement_Mass_MetricTonPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_copy_data(
    UMAA_Common_Measurement_Mass_MetricTon *dst,
    const UMAA_Common_Measurement_Mass_MetricTon *src)
{
    return UMAA_Common_Measurement_Mass_MetricTon_copy(dst,(const UMAA_Common_Measurement_Mass_MetricTon*) src);
}

void 
UMAA_Common_Measurement_Mass_MetricTonPluginSupport_print_data(
    const UMAA_Common_Measurement_Mass_MetricTon *sample,
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
UMAA_Common_Measurement_Mass_MetricTonPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Mass_MetricTon *dst,
    const UMAA_Common_Measurement_Mass_MetricTon *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Mass_MetricTonPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Mass_MetricTonPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Mass_MetricTonPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Mass_MetricTonPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Mass_MetricTonPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Mass_MetricTonPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_MassFlowRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_MassFlowRate*
UMAA_Common_Measurement_MassFlowRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_MassFlowRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_MassFlowRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_MassFlowRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_MassFlowRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_MassFlowRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_MassFlowRate *
UMAA_Common_Measurement_MassFlowRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_MassFlowRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_MassFlowRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_MassFlowRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_MassFlowRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_MassFlowRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_MassFlowRate *
UMAA_Common_Measurement_MassFlowRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_MassFlowRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_MassFlowRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_MassFlowRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_MassFlowRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_MassFlowRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_MassFlowRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_MassFlowRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_MassFlowRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_MassFlowRate *sample) {

    UMAA_Common_Measurement_MassFlowRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_MassFlowRatePluginSupport_copy_data(
    UMAA_Common_Measurement_MassFlowRate *dst,
    const UMAA_Common_Measurement_MassFlowRate *src)
{
    return UMAA_Common_Measurement_MassFlowRate_copy(dst,(const UMAA_Common_Measurement_MassFlowRate*) src);
}

void 
UMAA_Common_Measurement_MassFlowRatePluginSupport_print_data(
    const UMAA_Common_Measurement_MassFlowRate *sample,
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
UMAA_Common_Measurement_MassFlowRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_MassFlowRate *dst,
    const UMAA_Common_Measurement_MassFlowRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_MassFlowRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_MassFlowRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_MassFlowRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_MassFlowRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_MassFlowRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_MassFlowRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_OrientationQuaternion
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_OrientationQuaternion*
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_OrientationQuaternion *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_OrientationQuaternion();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_OrientationQuaternion_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_OrientationQuaternion_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_OrientationQuaternion *
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_OrientationQuaternion *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_OrientationQuaternion();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_OrientationQuaternion_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_OrientationQuaternion_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_OrientationQuaternion *
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_OrientationQuaternionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_OrientationQuaternion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_OrientationQuaternion_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_OrientationQuaternion *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_OrientationQuaternion_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_destroy_data(
    UMAA_Common_Measurement_OrientationQuaternion *sample) {

    UMAA_Common_Measurement_OrientationQuaternionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_copy_data(
    UMAA_Common_Measurement_OrientationQuaternion *dst,
    const UMAA_Common_Measurement_OrientationQuaternion *src)
{
    return UMAA_Common_Measurement_OrientationQuaternion_copy(dst,(const UMAA_Common_Measurement_OrientationQuaternion*) src);
}

void 
UMAA_Common_Measurement_OrientationQuaternionPluginSupport_print_data(
    const UMAA_Common_Measurement_OrientationQuaternion *sample,
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

    BasicTypes_QuaternionPluginSupport_print_data(
        (const BasicTypes_Quaternion*) sample, "", indent_level + 1);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_Measurement_OrientationQuaternionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_OrientationQuaternion *dst,
    const UMAA_Common_Measurement_OrientationQuaternion *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_OrientationQuaternionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_OrientationQuaternionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_OrientationQuaternionPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_OrientationQuaternionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_OrientationQuaternionPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_OrientationQuaternionPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_PositiveCount
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PositiveCount*
UMAA_Common_Measurement_PositiveCountPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PositiveCount *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PositiveCount();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PositiveCount_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PositiveCount_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PositiveCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PositiveCount *
UMAA_Common_Measurement_PositiveCountPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PositiveCount *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PositiveCount();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PositiveCount_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PositiveCount_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PositiveCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PositiveCount *
UMAA_Common_Measurement_PositiveCountPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PositiveCountPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PositiveCountPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PositiveCount *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PositiveCount_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PositiveCountPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PositiveCount *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PositiveCount_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PositiveCountPluginSupport_destroy_data(
    UMAA_Common_Measurement_PositiveCount *sample) {

    UMAA_Common_Measurement_PositiveCountPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PositiveCountPluginSupport_copy_data(
    UMAA_Common_Measurement_PositiveCount *dst,
    const UMAA_Common_Measurement_PositiveCount *src)
{
    return UMAA_Common_Measurement_PositiveCount_copy(dst,(const UMAA_Common_Measurement_PositiveCount*) src);
}

void 
UMAA_Common_Measurement_PositiveCountPluginSupport_print_data(
    const UMAA_Common_Measurement_PositiveCount *sample,
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
UMAA_Common_Measurement_PositiveCountPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PositiveCount *dst,
    const UMAA_Common_Measurement_PositiveCount *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PositiveCountPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PositiveCountPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PositiveCountPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PositiveCountPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PositiveCountPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PositiveCountPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Power_Percent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Power_Percent*
UMAA_Common_Measurement_Power_PercentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Power_Percent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Power_Percent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Power_Percent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Power_Percent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Power_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Power_Percent *
UMAA_Common_Measurement_Power_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Power_Percent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Power_Percent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Power_Percent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Power_Percent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Power_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Power_Percent *
UMAA_Common_Measurement_Power_PercentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Power_PercentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Power_PercentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Power_Percent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Power_Percent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Power_PercentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Power_Percent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Power_Percent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Power_PercentPluginSupport_destroy_data(
    UMAA_Common_Measurement_Power_Percent *sample) {

    UMAA_Common_Measurement_Power_PercentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Power_PercentPluginSupport_copy_data(
    UMAA_Common_Measurement_Power_Percent *dst,
    const UMAA_Common_Measurement_Power_Percent *src)
{
    return UMAA_Common_Measurement_Power_Percent_copy(dst,(const UMAA_Common_Measurement_Power_Percent*) src);
}

void 
UMAA_Common_Measurement_Power_PercentPluginSupport_print_data(
    const UMAA_Common_Measurement_Power_Percent *sample,
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
UMAA_Common_Measurement_Power_PercentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Power_Percent *dst,
    const UMAA_Common_Measurement_Power_Percent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Power_PercentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Power_PercentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Power_PercentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Power_PercentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Power_PercentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Power_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Pressure_Percent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Pressure_Percent*
UMAA_Common_Measurement_Pressure_PercentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Pressure_Percent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Pressure_Percent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pressure_Percent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Pressure_Percent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pressure_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Pressure_Percent *
UMAA_Common_Measurement_Pressure_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Pressure_Percent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Pressure_Percent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pressure_Percent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Pressure_Percent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pressure_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Pressure_Percent *
UMAA_Common_Measurement_Pressure_PercentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Pressure_PercentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Pressure_PercentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Pressure_Percent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Pressure_Percent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pressure_PercentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Pressure_Percent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Pressure_Percent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pressure_PercentPluginSupport_destroy_data(
    UMAA_Common_Measurement_Pressure_Percent *sample) {

    UMAA_Common_Measurement_Pressure_PercentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Pressure_PercentPluginSupport_copy_data(
    UMAA_Common_Measurement_Pressure_Percent *dst,
    const UMAA_Common_Measurement_Pressure_Percent *src)
{
    return UMAA_Common_Measurement_Pressure_Percent_copy(dst,(const UMAA_Common_Measurement_Pressure_Percent*) src);
}

void 
UMAA_Common_Measurement_Pressure_PercentPluginSupport_print_data(
    const UMAA_Common_Measurement_Pressure_Percent *sample,
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
UMAA_Common_Measurement_Pressure_PercentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Pressure_Percent *dst,
    const UMAA_Common_Measurement_Pressure_Percent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Pressure_PercentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Pressure_PercentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Pressure_PercentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Pressure_PercentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Pressure_PercentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Pressure_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Salinity
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Salinity*
UMAA_Common_Measurement_SalinityPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Salinity *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Salinity();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Salinity_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Salinity_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Salinity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Salinity *
UMAA_Common_Measurement_SalinityPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Salinity *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Salinity();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Salinity_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Salinity_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Salinity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Salinity *
UMAA_Common_Measurement_SalinityPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_SalinityPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_SalinityPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Salinity *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Salinity_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_SalinityPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Salinity *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Salinity_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_SalinityPluginSupport_destroy_data(
    UMAA_Common_Measurement_Salinity *sample) {

    UMAA_Common_Measurement_SalinityPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_SalinityPluginSupport_copy_data(
    UMAA_Common_Measurement_Salinity *dst,
    const UMAA_Common_Measurement_Salinity *src)
{
    return UMAA_Common_Measurement_Salinity_copy(dst,(const UMAA_Common_Measurement_Salinity*) src);
}

void 
UMAA_Common_Measurement_SalinityPluginSupport_print_data(
    const UMAA_Common_Measurement_Salinity *sample,
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
UMAA_Common_Measurement_SalinityPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Salinity *dst,
    const UMAA_Common_Measurement_Salinity *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_SalinityPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_SalinityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_SalinityPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_SalinityPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_SalinityPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_SalinityPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_SidesCount
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_SidesCount*
UMAA_Common_Measurement_SidesCountPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_SidesCount *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_SidesCount();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_SidesCount_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_SidesCount_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_SidesCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_SidesCount *
UMAA_Common_Measurement_SidesCountPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_SidesCount *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_SidesCount();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_SidesCount_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_SidesCount_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_SidesCount_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_SidesCount *
UMAA_Common_Measurement_SidesCountPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_SidesCountPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_SidesCountPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_SidesCount *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_SidesCount_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_SidesCountPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_SidesCount *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_SidesCount_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_SidesCountPluginSupport_destroy_data(
    UMAA_Common_Measurement_SidesCount *sample) {

    UMAA_Common_Measurement_SidesCountPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_SidesCountPluginSupport_copy_data(
    UMAA_Common_Measurement_SidesCount *dst,
    const UMAA_Common_Measurement_SidesCount *src)
{
    return UMAA_Common_Measurement_SidesCount_copy(dst,(const UMAA_Common_Measurement_SidesCount*) src);
}

void 
UMAA_Common_Measurement_SidesCountPluginSupport_print_data(
    const UMAA_Common_Measurement_SidesCount *sample,
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
UMAA_Common_Measurement_SidesCountPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_SidesCount *dst,
    const UMAA_Common_Measurement_SidesCount *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_SidesCountPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_SidesCountPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_SidesCountPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_SidesCountPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_SidesCountPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_SidesCountPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Speed_BSL
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Speed_BSL*
UMAA_Common_Measurement_Speed_BSLPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Speed_BSL *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed_BSL();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_BSL_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Speed_BSL_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_BSL_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Speed_BSL *
UMAA_Common_Measurement_Speed_BSLPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Speed_BSL *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed_BSL();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_BSL_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Speed_BSL_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_BSL_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Speed_BSL *
UMAA_Common_Measurement_Speed_BSLPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Speed_BSLPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Speed_BSLPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Speed_BSL *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Speed_BSL_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Speed_BSLPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Speed_BSL *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Speed_BSL_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Speed_BSLPluginSupport_destroy_data(
    UMAA_Common_Measurement_Speed_BSL *sample) {

    UMAA_Common_Measurement_Speed_BSLPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Speed_BSLPluginSupport_copy_data(
    UMAA_Common_Measurement_Speed_BSL *dst,
    const UMAA_Common_Measurement_Speed_BSL *src)
{
    return UMAA_Common_Measurement_Speed_BSL_copy(dst,(const UMAA_Common_Measurement_Speed_BSL*) src);
}

void 
UMAA_Common_Measurement_Speed_BSLPluginSupport_print_data(
    const UMAA_Common_Measurement_Speed_BSL *sample,
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
UMAA_Common_Measurement_Speed_BSLPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Speed_BSL *dst,
    const UMAA_Common_Measurement_Speed_BSL *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Speed_BSLPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Speed_BSLPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Speed_BSLPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Speed_BSLPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Speed_BSLPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Speed_BSLPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Speed_LocalWaterMass
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Speed_LocalWaterMass*
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed_LocalWaterMass();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Speed_LocalWaterMass *
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed_LocalWaterMass();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_LocalWaterMass_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Speed_LocalWaterMass *
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Speed_LocalWaterMass_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_destroy_data(
    UMAA_Common_Measurement_Speed_LocalWaterMass *sample) {

    UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_copy_data(
    UMAA_Common_Measurement_Speed_LocalWaterMass *dst,
    const UMAA_Common_Measurement_Speed_LocalWaterMass *src)
{
    return UMAA_Common_Measurement_Speed_LocalWaterMass_copy(dst,(const UMAA_Common_Measurement_Speed_LocalWaterMass*) src);
}

void 
UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_print_data(
    const UMAA_Common_Measurement_Speed_LocalWaterMass *sample,
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
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Speed_LocalWaterMass *dst,
    const UMAA_Common_Measurement_Speed_LocalWaterMass *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Speed_LocalWaterMassPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Speed_LocalWaterMassPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Volume_CubicMeter
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Volume_CubicMeter*
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Volume_CubicMeter *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Volume_CubicMeter();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Volume_CubicMeter_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Volume_CubicMeter *
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Volume_CubicMeter *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Volume_CubicMeter();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Volume_CubicMeter_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Volume_CubicMeter *
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Volume_CubicMeter_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Volume_CubicMeter *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Volume_CubicMeter_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_destroy_data(
    UMAA_Common_Measurement_Volume_CubicMeter *sample) {

    UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_copy_data(
    UMAA_Common_Measurement_Volume_CubicMeter *dst,
    const UMAA_Common_Measurement_Volume_CubicMeter *src)
{
    return UMAA_Common_Measurement_Volume_CubicMeter_copy(dst,(const UMAA_Common_Measurement_Volume_CubicMeter*) src);
}

void 
UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_print_data(
    const UMAA_Common_Measurement_Volume_CubicMeter *sample,
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
UMAA_Common_Measurement_Volume_CubicMeterPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Volume_CubicMeter *dst,
    const UMAA_Common_Measurement_Volume_CubicMeter *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Volume_CubicMeterPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Volume_CubicMeterPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Volume_CubicMeterPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Volume_CubicMeterPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Volume_CubicMeterPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Volume_CubicMeterPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Volume_Percent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Volume_Percent*
UMAA_Common_Measurement_Volume_PercentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Volume_Percent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Volume_Percent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Volume_Percent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Volume_Percent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Volume_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Volume_Percent *
UMAA_Common_Measurement_Volume_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Volume_Percent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Volume_Percent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Volume_Percent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Volume_Percent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Volume_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Volume_Percent *
UMAA_Common_Measurement_Volume_PercentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Volume_PercentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Volume_PercentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Volume_Percent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Volume_Percent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Volume_PercentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Volume_Percent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Volume_Percent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Volume_PercentPluginSupport_destroy_data(
    UMAA_Common_Measurement_Volume_Percent *sample) {

    UMAA_Common_Measurement_Volume_PercentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Volume_PercentPluginSupport_copy_data(
    UMAA_Common_Measurement_Volume_Percent *dst,
    const UMAA_Common_Measurement_Volume_Percent *src)
{
    return UMAA_Common_Measurement_Volume_Percent_copy(dst,(const UMAA_Common_Measurement_Volume_Percent*) src);
}

void 
UMAA_Common_Measurement_Volume_PercentPluginSupport_print_data(
    const UMAA_Common_Measurement_Volume_Percent *sample,
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
UMAA_Common_Measurement_Volume_PercentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Volume_Percent *dst,
    const UMAA_Common_Measurement_Volume_Percent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Volume_PercentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Volume_PercentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Volume_PercentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Volume_PercentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Volume_PercentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Volume_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_VolumetricFlowRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_VolumetricFlowRate*
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_VolumetricFlowRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_VolumetricFlowRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_VolumetricFlowRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_VolumetricFlowRate *
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_VolumetricFlowRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_VolumetricFlowRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_VolumetricFlowRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_VolumetricFlowRate *
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_VolumetricFlowRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_VolumetricFlowRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_VolumetricFlowRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_VolumetricFlowRate *sample) {

    UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_copy_data(
    UMAA_Common_Measurement_VolumetricFlowRate *dst,
    const UMAA_Common_Measurement_VolumetricFlowRate *src)
{
    return UMAA_Common_Measurement_VolumetricFlowRate_copy(dst,(const UMAA_Common_Measurement_VolumetricFlowRate*) src);
}

void 
UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_print_data(
    const UMAA_Common_Measurement_VolumetricFlowRate *sample,
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
UMAA_Common_Measurement_VolumetricFlowRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_VolumetricFlowRate *dst,
    const UMAA_Common_Measurement_VolumetricFlowRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_VolumetricFlowRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_VolumetricFlowRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_VolumetricFlowRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_VolumetricFlowRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_VolumetricFlowRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_VolumetricFlowRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_AccelerationScalar
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_AccelerationScalar*
UMAA_Common_Measurement_AccelerationScalarPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_AccelerationScalar *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_AccelerationScalar();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AccelerationScalar_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_AccelerationScalar_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AccelerationScalar_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_AccelerationScalar *
UMAA_Common_Measurement_AccelerationScalarPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_AccelerationScalar *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_AccelerationScalar();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AccelerationScalar_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_AccelerationScalar_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AccelerationScalar_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_AccelerationScalar *
UMAA_Common_Measurement_AccelerationScalarPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_AccelerationScalarPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_AccelerationScalarPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_AccelerationScalar *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_AccelerationScalar_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_AccelerationScalarPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_AccelerationScalar *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_AccelerationScalar_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_AccelerationScalarPluginSupport_destroy_data(
    UMAA_Common_Measurement_AccelerationScalar *sample) {

    UMAA_Common_Measurement_AccelerationScalarPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_AccelerationScalarPluginSupport_copy_data(
    UMAA_Common_Measurement_AccelerationScalar *dst,
    const UMAA_Common_Measurement_AccelerationScalar *src)
{
    return UMAA_Common_Measurement_AccelerationScalar_copy(dst,(const UMAA_Common_Measurement_AccelerationScalar*) src);
}

void 
UMAA_Common_Measurement_AccelerationScalarPluginSupport_print_data(
    const UMAA_Common_Measurement_AccelerationScalar *sample,
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
UMAA_Common_Measurement_AccelerationScalarPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_AccelerationScalar *dst,
    const UMAA_Common_Measurement_AccelerationScalar *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_AccelerationScalarPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_AccelerationScalarPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_AccelerationScalarPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_AccelerationScalarPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_AccelerationScalarPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_AccelerationScalarPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Angle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Angle*
UMAA_Common_Measurement_AnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Angle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Angle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Angle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Angle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Angle *
UMAA_Common_Measurement_AnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Angle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Angle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Angle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Angle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Angle *
UMAA_Common_Measurement_AnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_AnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_AnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Angle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Angle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_AnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Angle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Angle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_AnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Angle *sample) {

    UMAA_Common_Measurement_AnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_AnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Angle *dst,
    const UMAA_Common_Measurement_Angle *src)
{
    return UMAA_Common_Measurement_Angle_copy(dst,(const UMAA_Common_Measurement_Angle*) src);
}

void 
UMAA_Common_Measurement_AnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Angle *sample,
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
UMAA_Common_Measurement_AnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Angle *dst,
    const UMAA_Common_Measurement_Angle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_AnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_AnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_AnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_AnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_AnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_AnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_AngleRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_AngleRate*
UMAA_Common_Measurement_AngleRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_AngleRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_AngleRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AngleRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_AngleRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AngleRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_AngleRate *
UMAA_Common_Measurement_AngleRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_AngleRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_AngleRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_AngleRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_AngleRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_AngleRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_AngleRate *
UMAA_Common_Measurement_AngleRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_AngleRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_AngleRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_AngleRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_AngleRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_AngleRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_AngleRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_AngleRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_AngleRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_AngleRate *sample) {

    UMAA_Common_Measurement_AngleRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_AngleRatePluginSupport_copy_data(
    UMAA_Common_Measurement_AngleRate *dst,
    const UMAA_Common_Measurement_AngleRate *src)
{
    return UMAA_Common_Measurement_AngleRate_copy(dst,(const UMAA_Common_Measurement_AngleRate*) src);
}

void 
UMAA_Common_Measurement_AngleRatePluginSupport_print_data(
    const UMAA_Common_Measurement_AngleRate *sample,
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
UMAA_Common_Measurement_AngleRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_AngleRate *dst,
    const UMAA_Common_Measurement_AngleRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_AngleRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_AngleRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_AngleRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_AngleRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_AngleRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_AngleRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle*
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample) {

    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *dst,
    const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *src)
{
    return UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle_copy(dst,(const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle*) src);
}

void 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *sample,
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
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *dst,
    const UMAA_Common_Measurement_Azimuth_TrueNorth_PosAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Azimuth_TrueNorth_PosAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_BarometricPressure
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_BarometricPressure*
UMAA_Common_Measurement_BarometricPressurePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_BarometricPressure *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_BarometricPressure();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_BarometricPressure_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_BarometricPressure_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_BarometricPressure_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_BarometricPressure *
UMAA_Common_Measurement_BarometricPressurePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_BarometricPressure *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_BarometricPressure();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_BarometricPressure_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_BarometricPressure_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_BarometricPressure_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_BarometricPressure *
UMAA_Common_Measurement_BarometricPressurePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_BarometricPressurePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_BarometricPressurePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_BarometricPressure *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_BarometricPressure_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_BarometricPressurePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_BarometricPressure *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_BarometricPressure_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_BarometricPressurePluginSupport_destroy_data(
    UMAA_Common_Measurement_BarometricPressure *sample) {

    UMAA_Common_Measurement_BarometricPressurePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_BarometricPressurePluginSupport_copy_data(
    UMAA_Common_Measurement_BarometricPressure *dst,
    const UMAA_Common_Measurement_BarometricPressure *src)
{
    return UMAA_Common_Measurement_BarometricPressure_copy(dst,(const UMAA_Common_Measurement_BarometricPressure*) src);
}

void 
UMAA_Common_Measurement_BarometricPressurePluginSupport_print_data(
    const UMAA_Common_Measurement_BarometricPressure *sample,
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
UMAA_Common_Measurement_BarometricPressurePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_BarometricPressure *dst,
    const UMAA_Common_Measurement_BarometricPressure *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_BarometricPressurePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_BarometricPressurePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_BarometricPressurePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_BarometricPressurePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_BarometricPressurePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_BarometricPressurePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CommsRate_BitsPerSecond
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CommsRate_BitsPerSecond*
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CommsRate_BitsPerSecond();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CommsRate_BitsPerSecond *
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CommsRate_BitsPerSecond();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CommsRate_BitsPerSecond_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CommsRate_BitsPerSecond *
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CommsRate_BitsPerSecond_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_destroy_data(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample) {

    UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_copy_data(
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *dst,
    const UMAA_Common_Measurement_CommsRate_BitsPerSecond *src)
{
    return UMAA_Common_Measurement_CommsRate_BitsPerSecond_copy(dst,(const UMAA_Common_Measurement_CommsRate_BitsPerSecond*) src);
}

void 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_print_data(
    const UMAA_Common_Measurement_CommsRate_BitsPerSecond *sample,
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
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CommsRate_BitsPerSecond *dst,
    const UMAA_Common_Measurement_CommsRate_BitsPerSecond *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CommsRate_BitsPerSecondPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CommsRate_BitsPerSecondPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CommsRate_MegabitsPerSecond
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CommsRate_MegabitsPerSecond*
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CommsRate_MegabitsPerSecond();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CommsRate_MegabitsPerSecond();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_destroy_data(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample) {

    UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_copy_data(
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *dst,
    const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *src)
{
    return UMAA_Common_Measurement_CommsRate_MegabitsPerSecond_copy(dst,(const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond*) src);
}

void 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_print_data(
    const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *sample,
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
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *dst,
    const UMAA_Common_Measurement_CommsRate_MegabitsPerSecond *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CommsRate_MegabitsPerSecondPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_ContinuousSize
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_ContinuousSize*
UMAA_Common_Measurement_ContinuousSizePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_ContinuousSize *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_ContinuousSize();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_ContinuousSize_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_ContinuousSize_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_ContinuousSize_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_ContinuousSize *
UMAA_Common_Measurement_ContinuousSizePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_ContinuousSize *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_ContinuousSize();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_ContinuousSize_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_ContinuousSize_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_ContinuousSize_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_ContinuousSize *
UMAA_Common_Measurement_ContinuousSizePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_ContinuousSizePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_ContinuousSizePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_ContinuousSize *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_ContinuousSize_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_ContinuousSizePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_ContinuousSize *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_ContinuousSize_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_ContinuousSizePluginSupport_destroy_data(
    UMAA_Common_Measurement_ContinuousSize *sample) {

    UMAA_Common_Measurement_ContinuousSizePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_ContinuousSizePluginSupport_copy_data(
    UMAA_Common_Measurement_ContinuousSize *dst,
    const UMAA_Common_Measurement_ContinuousSize *src)
{
    return UMAA_Common_Measurement_ContinuousSize_copy(dst,(const UMAA_Common_Measurement_ContinuousSize*) src);
}

void 
UMAA_Common_Measurement_ContinuousSizePluginSupport_print_data(
    const UMAA_Common_Measurement_ContinuousSize *sample,
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
UMAA_Common_Measurement_ContinuousSizePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_ContinuousSize *dst,
    const UMAA_Common_Measurement_ContinuousSize *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_ContinuousSizePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_ContinuousSizePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_ContinuousSizePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_ContinuousSizePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_ContinuousSizePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_ContinuousSizePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Count
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Count*
UMAA_Common_Measurement_CountPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Count *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Count();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Count_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Count_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Count_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Count *
UMAA_Common_Measurement_CountPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Count *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Count();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Count_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Count_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Count_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Count *
UMAA_Common_Measurement_CountPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CountPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CountPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Count *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Count_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CountPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Count *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Count_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CountPluginSupport_destroy_data(
    UMAA_Common_Measurement_Count *sample) {

    UMAA_Common_Measurement_CountPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CountPluginSupport_copy_data(
    UMAA_Common_Measurement_Count *dst,
    const UMAA_Common_Measurement_Count *src)
{
    return UMAA_Common_Measurement_Count_copy(dst,(const UMAA_Common_Measurement_Count*) src);
}

void 
UMAA_Common_Measurement_CountPluginSupport_print_data(
    const UMAA_Common_Measurement_Count *sample,
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
UMAA_Common_Measurement_CountPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Count *dst,
    const UMAA_Common_Measurement_Count *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CountPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CountPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CountPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CountPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CountPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CountPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Course_TrueNorth
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Course_TrueNorth*
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Course_TrueNorth *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Course_TrueNorth();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Course_TrueNorth_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Course_TrueNorth_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Course_TrueNorth *
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Course_TrueNorth *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Course_TrueNorth();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Course_TrueNorth_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Course_TrueNorth_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Course_TrueNorth *
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Course_TrueNorthPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Course_TrueNorth *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Course_TrueNorth_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Course_TrueNorth *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Course_TrueNorth_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_destroy_data(
    UMAA_Common_Measurement_Course_TrueNorth *sample) {

    UMAA_Common_Measurement_Course_TrueNorthPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_copy_data(
    UMAA_Common_Measurement_Course_TrueNorth *dst,
    const UMAA_Common_Measurement_Course_TrueNorth *src)
{
    return UMAA_Common_Measurement_Course_TrueNorth_copy(dst,(const UMAA_Common_Measurement_Course_TrueNorth*) src);
}

void 
UMAA_Common_Measurement_Course_TrueNorthPluginSupport_print_data(
    const UMAA_Common_Measurement_Course_TrueNorth *sample,
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
UMAA_Common_Measurement_Course_TrueNorthPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Course_TrueNorth *dst,
    const UMAA_Common_Measurement_Course_TrueNorth *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Course_TrueNorthPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Course_TrueNorthPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Course_TrueNorthPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Course_TrueNorthPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Course_TrueNorthPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Course_TrueNorthPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CovarOrientation
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CovarOrientation*
UMAA_Common_Measurement_CovarOrientationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CovarOrientation *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarOrientation();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarOrientation_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CovarOrientation_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarOrientation_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CovarOrientation *
UMAA_Common_Measurement_CovarOrientationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CovarOrientation *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarOrientation();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarOrientation_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CovarOrientation_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarOrientation_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CovarOrientation *
UMAA_Common_Measurement_CovarOrientationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CovarOrientationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CovarOrientationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CovarOrientation *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CovarOrientation_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarOrientationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CovarOrientation *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CovarOrientation_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarOrientationPluginSupport_destroy_data(
    UMAA_Common_Measurement_CovarOrientation *sample) {

    UMAA_Common_Measurement_CovarOrientationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CovarOrientationPluginSupport_copy_data(
    UMAA_Common_Measurement_CovarOrientation *dst,
    const UMAA_Common_Measurement_CovarOrientation *src)
{
    return UMAA_Common_Measurement_CovarOrientation_copy(dst,(const UMAA_Common_Measurement_CovarOrientation*) src);
}

void 
UMAA_Common_Measurement_CovarOrientationPluginSupport_print_data(
    const UMAA_Common_Measurement_CovarOrientation *sample,
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
UMAA_Common_Measurement_CovarOrientationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CovarOrientation *dst,
    const UMAA_Common_Measurement_CovarOrientation *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CovarOrientationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CovarOrientationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CovarOrientationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CovarOrientationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CovarOrientationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CovarOrientationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CovarPosPos
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CovarPosPos*
UMAA_Common_Measurement_CovarPosPosPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CovarPosPos *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarPosPos();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarPosPos_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CovarPosPos_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarPosPos_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CovarPosPos *
UMAA_Common_Measurement_CovarPosPosPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CovarPosPos *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarPosPos();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarPosPos_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CovarPosPos_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarPosPos_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CovarPosPos *
UMAA_Common_Measurement_CovarPosPosPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CovarPosPosPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CovarPosPosPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CovarPosPos *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CovarPosPos_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarPosPosPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CovarPosPos *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CovarPosPos_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarPosPosPluginSupport_destroy_data(
    UMAA_Common_Measurement_CovarPosPos *sample) {

    UMAA_Common_Measurement_CovarPosPosPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CovarPosPosPluginSupport_copy_data(
    UMAA_Common_Measurement_CovarPosPos *dst,
    const UMAA_Common_Measurement_CovarPosPos *src)
{
    return UMAA_Common_Measurement_CovarPosPos_copy(dst,(const UMAA_Common_Measurement_CovarPosPos*) src);
}

void 
UMAA_Common_Measurement_CovarPosPosPluginSupport_print_data(
    const UMAA_Common_Measurement_CovarPosPos *sample,
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
UMAA_Common_Measurement_CovarPosPosPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CovarPosPos *dst,
    const UMAA_Common_Measurement_CovarPosPos *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CovarPosPosPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CovarPosPosPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CovarPosPosPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CovarPosPosPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CovarPosPosPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CovarPosPosPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CovarPosVel
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CovarPosVel*
UMAA_Common_Measurement_CovarPosVelPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CovarPosVel *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarPosVel();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarPosVel_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CovarPosVel_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarPosVel_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CovarPosVel *
UMAA_Common_Measurement_CovarPosVelPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CovarPosVel *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarPosVel();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarPosVel_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CovarPosVel_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarPosVel_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CovarPosVel *
UMAA_Common_Measurement_CovarPosVelPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CovarPosVelPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CovarPosVelPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CovarPosVel *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CovarPosVel_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarPosVelPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CovarPosVel *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CovarPosVel_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarPosVelPluginSupport_destroy_data(
    UMAA_Common_Measurement_CovarPosVel *sample) {

    UMAA_Common_Measurement_CovarPosVelPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CovarPosVelPluginSupport_copy_data(
    UMAA_Common_Measurement_CovarPosVel *dst,
    const UMAA_Common_Measurement_CovarPosVel *src)
{
    return UMAA_Common_Measurement_CovarPosVel_copy(dst,(const UMAA_Common_Measurement_CovarPosVel*) src);
}

void 
UMAA_Common_Measurement_CovarPosVelPluginSupport_print_data(
    const UMAA_Common_Measurement_CovarPosVel *sample,
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
UMAA_Common_Measurement_CovarPosVelPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CovarPosVel *dst,
    const UMAA_Common_Measurement_CovarPosVel *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CovarPosVelPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CovarPosVelPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CovarPosVelPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CovarPosVelPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CovarPosVelPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CovarPosVelPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_CovarVelVel
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_CovarVelVel*
UMAA_Common_Measurement_CovarVelVelPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_CovarVelVel *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarVelVel();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarVelVel_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_CovarVelVel_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarVelVel_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_CovarVelVel *
UMAA_Common_Measurement_CovarVelVelPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_CovarVelVel *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_CovarVelVel();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_CovarVelVel_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_CovarVelVel_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_CovarVelVel_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_CovarVelVel *
UMAA_Common_Measurement_CovarVelVelPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_CovarVelVelPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_CovarVelVelPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_CovarVelVel *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_CovarVelVel_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarVelVelPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_CovarVelVel *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_CovarVelVel_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_CovarVelVelPluginSupport_destroy_data(
    UMAA_Common_Measurement_CovarVelVel *sample) {

    UMAA_Common_Measurement_CovarVelVelPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_CovarVelVelPluginSupport_copy_data(
    UMAA_Common_Measurement_CovarVelVel *dst,
    const UMAA_Common_Measurement_CovarVelVel *src)
{
    return UMAA_Common_Measurement_CovarVelVel_copy(dst,(const UMAA_Common_Measurement_CovarVelVel*) src);
}

void 
UMAA_Common_Measurement_CovarVelVelPluginSupport_print_data(
    const UMAA_Common_Measurement_CovarVelVel *sample,
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
UMAA_Common_Measurement_CovarVelVelPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_CovarVelVel *dst,
    const UMAA_Common_Measurement_CovarVelVel *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_CovarVelVelPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_CovarVelVelPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_CovarVelVelPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_CovarVelVelPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_CovarVelVelPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_CovarVelVelPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_DateTimeSeconds
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_DateTimeSeconds*
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_DateTimeSeconds *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTimeSeconds();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTimeSeconds_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTimeSeconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_DateTimeSeconds *
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_DateTimeSeconds *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTimeSeconds();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTimeSeconds_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTimeSeconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_DateTimeSeconds *
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DateTimeSecondsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_DateTimeSeconds *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_DateTimeSeconds_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_DateTimeSeconds *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_DateTimeSeconds_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_destroy_data(
    UMAA_Common_Measurement_DateTimeSeconds *sample) {

    UMAA_Common_Measurement_DateTimeSecondsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_copy_data(
    UMAA_Common_Measurement_DateTimeSeconds *dst,
    const UMAA_Common_Measurement_DateTimeSeconds *src)
{
    return UMAA_Common_Measurement_DateTimeSeconds_copy(dst,(const UMAA_Common_Measurement_DateTimeSeconds*) src);
}

void 
UMAA_Common_Measurement_DateTimeSecondsPluginSupport_print_data(
    const UMAA_Common_Measurement_DateTimeSeconds *sample,
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

    RTICdrType_printLongLong(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_Measurement_DateTimeSecondsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTimeSeconds *dst,
    const UMAA_Common_Measurement_DateTimeSeconds *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DateTimeSecondsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DateTimeSecondsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_DateTimeSecondsPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DateTimeSecondsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_DateTimeSecondsPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DateTimeSecondsPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_DateTimeNanoseconds
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_DateTimeNanoseconds*
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_DateTimeNanoseconds *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTimeNanoseconds();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTimeNanoseconds_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_DateTimeNanoseconds *
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_DateTimeNanoseconds *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTimeNanoseconds();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTimeNanoseconds_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_DateTimeNanoseconds *
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_DateTimeNanoseconds_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_DateTimeNanoseconds_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_destroy_data(
    UMAA_Common_Measurement_DateTimeNanoseconds *sample) {

    UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_copy_data(
    UMAA_Common_Measurement_DateTimeNanoseconds *dst,
    const UMAA_Common_Measurement_DateTimeNanoseconds *src)
{
    return UMAA_Common_Measurement_DateTimeNanoseconds_copy(dst,(const UMAA_Common_Measurement_DateTimeNanoseconds*) src);
}

void 
UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_print_data(
    const UMAA_Common_Measurement_DateTimeNanoseconds *sample,
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
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTimeNanoseconds *dst,
    const UMAA_Common_Measurement_DateTimeNanoseconds *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DateTimeNanosecondsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DateTimeNanosecondsPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_DateTime
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_DateTime*
UMAA_Common_Measurement_DateTimePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_DateTime *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTime();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_DateTime_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTime_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_DateTime *
UMAA_Common_Measurement_DateTimePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_DateTime *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_DateTime();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_DateTime_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_DateTime_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_DateTime_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_DateTime *
UMAA_Common_Measurement_DateTimePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DateTimePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DateTimePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_DateTime *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_DateTime_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_DateTime *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_DateTime_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DateTimePluginSupport_destroy_data(
    UMAA_Common_Measurement_DateTime *sample) {

    UMAA_Common_Measurement_DateTimePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DateTimePluginSupport_copy_data(
    UMAA_Common_Measurement_DateTime *dst,
    const UMAA_Common_Measurement_DateTime *src)
{
    return UMAA_Common_Measurement_DateTime_copy(dst,(const UMAA_Common_Measurement_DateTime*) src);
}

void 
UMAA_Common_Measurement_DateTimePluginSupport_print_data(
    const UMAA_Common_Measurement_DateTime *sample,
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

    RTICdrType_printLongLong(
        &sample->seconds, "seconds", indent_level + 1);    

    RTICdrType_printLong(
        &sample->nanoseconds, "nanoseconds", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
UMAA_Common_Measurement_DateTimePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;
    programProperty.unboundedSize = RTIXCdrLong_MAX;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        UMAA_Common_Measurement_DateTime_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
UMAA_Common_Measurement_DateTimePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
UMAA_Common_Measurement_DateTimePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        UMAA_Common_Measurement_DateTimePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        UMAA_Common_Measurement_DateTimePluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
UMAA_Common_Measurement_DateTimePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
UMAA_Common_Measurement_DateTimePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTime *sample,
    void *handle)
{
    UMAA_Common_Measurement_DateTime_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

void UMAA_Common_Measurement_DateTimePlugin_finalize_optional_members(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTime* sample,
    RTIBool deletePointers)
{
    RTIOsapiUtility_unusedParameter(endpoint_data);
    UMAA_Common_Measurement_DateTime_finalize_optional_members(
        sample, deletePointers);
}

RTIBool 
UMAA_Common_Measurement_DateTimePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTime *dst,
    const UMAA_Common_Measurement_DateTime *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DateTimePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
UMAA_Common_Measurement_DateTimePlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const UMAA_Common_Measurement_DateTime *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    UMAA_Common_Measurement_DateTime_get_typecode();
    pd.programs = UMAA_Common_Measurement_DateTimePlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = (unsigned int) RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
UMAA_Common_Measurement_DateTimePlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const UMAA_Common_Measurement_DateTime *sample)
{
    return UMAA_Common_Measurement_DateTimePlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
UMAA_Common_Measurement_DateTimePlugin_deserialize_from_cdr_buffer(
    UMAA_Common_Measurement_DateTime *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    UMAA_Common_Measurement_DateTime_get_typecode();
    pd.programs = UMAA_Common_Measurement_DateTimePlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
    RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    UMAA_Common_Measurement_DateTime_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#if !defined(NDDS_STANDALONE_TYPE)
DDS_ReturnCode_t
UMAA_Common_Measurement_DateTimePlugin_data_to_string(
    const UMAA_Common_Measurement_DateTime *sample,
    char *_str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!UMAA_Common_Measurement_DateTimePlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!UMAA_Common_Measurement_DateTimePlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        UMAA_Common_Measurement_DateTime_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        _str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DateTimePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool UMAA_Common_Measurement_DateTimePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_DateTime **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    /*  Depending on the type and the flags used in rtiddsgen, coverity may detect
    that sample is always null. Since the case is very dependant on
    the IDL/XML and the configuration we keep the check for safety.
    */
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data,
        /* coverity[check_after_deref] */
        (sample != NULL) ? *sample : NULL,
        stream,
        deserialize_encapsulation,
        deserialize_key,
        endpoint_plugin_qos);
    return result;    

}

unsigned int
UMAA_Common_Measurement_DateTimePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DateTimePlugin_get_serialized_key_max_size_for_keyhash(
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

struct RTIXCdrInterpreterPrograms * UMAA_Common_Measurement_DateTimePlugin_get_programs(void)
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    UMAA_Common_Measurement_DateTime, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *UMAA_Common_Measurement_DateTimePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    UMAA_Common_Measurement_DateTimePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    UMAA_Common_Measurement_DateTimePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    UMAA_Common_Measurement_DateTimePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    UMAA_Common_Measurement_DateTimePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    UMAA_Common_Measurement_DateTimePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    UMAA_Common_Measurement_DateTimePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    UMAA_Common_Measurement_DateTimePlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    UMAA_Common_Measurement_DateTimePlugin_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    UMAA_Common_Measurement_DateTimePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    UMAA_Common_Measurement_DateTimePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    UMAA_Common_Measurement_DateTimePlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    UMAA_Common_Measurement_DateTimePlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    UMAA_Common_Measurement_DateTimePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    UMAA_Common_Measurement_DateTimePlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = UMAA_Common_Measurement_DateTimeTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
UMAA_Common_Measurement_DateTimePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_Measurement_Density
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Density*
UMAA_Common_Measurement_DensityPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Density *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Density();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Density_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Density_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Density_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Density *
UMAA_Common_Measurement_DensityPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Density *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Density();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Density_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Density_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Density_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Density *
UMAA_Common_Measurement_DensityPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DensityPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DensityPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Density *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Density_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DensityPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Density *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Density_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DensityPluginSupport_destroy_data(
    UMAA_Common_Measurement_Density *sample) {

    UMAA_Common_Measurement_DensityPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DensityPluginSupport_copy_data(
    UMAA_Common_Measurement_Density *dst,
    const UMAA_Common_Measurement_Density *src)
{
    return UMAA_Common_Measurement_Density_copy(dst,(const UMAA_Common_Measurement_Density*) src);
}

void 
UMAA_Common_Measurement_DensityPluginSupport_print_data(
    const UMAA_Common_Measurement_Density *sample,
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
UMAA_Common_Measurement_DensityPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Density *dst,
    const UMAA_Common_Measurement_Density *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DensityPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DensityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_DensityPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DensityPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_DensityPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DensityPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Distance
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Distance*
UMAA_Common_Measurement_DistancePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Distance *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Distance_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Distance *
UMAA_Common_Measurement_DistancePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Distance *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Distance_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Distance *
UMAA_Common_Measurement_DistancePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_DistancePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_DistancePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Distance *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Distance_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_DistancePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Distance *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Distance_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_DistancePluginSupport_destroy_data(
    UMAA_Common_Measurement_Distance *sample) {

    UMAA_Common_Measurement_DistancePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_DistancePluginSupport_copy_data(
    UMAA_Common_Measurement_Distance *dst,
    const UMAA_Common_Measurement_Distance *src)
{
    return UMAA_Common_Measurement_Distance_copy(dst,(const UMAA_Common_Measurement_Distance*) src);
}

void 
UMAA_Common_Measurement_DistancePluginSupport_print_data(
    const UMAA_Common_Measurement_Distance *sample,
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
UMAA_Common_Measurement_DistancePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Distance *dst,
    const UMAA_Common_Measurement_Distance *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_DistancePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_DistancePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_DistancePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_DistancePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_DistancePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_DistancePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Distance_Precise
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Distance_Precise*
UMAA_Common_Measurement_Distance_PrecisePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Distance_Precise *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_Precise();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_Precise_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Distance_Precise_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_Precise_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Distance_Precise *
UMAA_Common_Measurement_Distance_PrecisePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Distance_Precise *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Distance_Precise();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Distance_Precise_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Distance_Precise_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Distance_Precise_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Distance_Precise *
UMAA_Common_Measurement_Distance_PrecisePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Distance_PrecisePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Distance_PrecisePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Distance_Precise *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Distance_Precise_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_PrecisePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Distance_Precise *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Distance_Precise_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Distance_PrecisePluginSupport_destroy_data(
    UMAA_Common_Measurement_Distance_Precise *sample) {

    UMAA_Common_Measurement_Distance_PrecisePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Distance_PrecisePluginSupport_copy_data(
    UMAA_Common_Measurement_Distance_Precise *dst,
    const UMAA_Common_Measurement_Distance_Precise *src)
{
    return UMAA_Common_Measurement_Distance_Precise_copy(dst,(const UMAA_Common_Measurement_Distance_Precise*) src);
}

void 
UMAA_Common_Measurement_Distance_PrecisePluginSupport_print_data(
    const UMAA_Common_Measurement_Distance_Precise *sample,
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
UMAA_Common_Measurement_Distance_PrecisePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Distance_Precise *dst,
    const UMAA_Common_Measurement_Distance_Precise *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Distance_PrecisePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Distance_PrecisePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Distance_PrecisePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Distance_PrecisePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Distance_PrecisePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Distance_PrecisePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Duration_Hours
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Duration_Hours*
UMAA_Common_Measurement_Duration_HoursPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Duration_Hours *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Duration_Hours();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Duration_Hours_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Duration_Hours_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Duration_Hours_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Duration_Hours *
UMAA_Common_Measurement_Duration_HoursPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Duration_Hours *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Duration_Hours();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Duration_Hours_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Duration_Hours_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Duration_Hours_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Duration_Hours *
UMAA_Common_Measurement_Duration_HoursPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Duration_HoursPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Duration_HoursPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Duration_Hours *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Duration_Hours_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Duration_HoursPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Duration_Hours *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Duration_Hours_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Duration_HoursPluginSupport_destroy_data(
    UMAA_Common_Measurement_Duration_Hours *sample) {

    UMAA_Common_Measurement_Duration_HoursPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Duration_HoursPluginSupport_copy_data(
    UMAA_Common_Measurement_Duration_Hours *dst,
    const UMAA_Common_Measurement_Duration_Hours *src)
{
    return UMAA_Common_Measurement_Duration_Hours_copy(dst,(const UMAA_Common_Measurement_Duration_Hours*) src);
}

void 
UMAA_Common_Measurement_Duration_HoursPluginSupport_print_data(
    const UMAA_Common_Measurement_Duration_Hours *sample,
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
UMAA_Common_Measurement_Duration_HoursPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Duration_Hours *dst,
    const UMAA_Common_Measurement_Duration_Hours *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Duration_HoursPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Duration_HoursPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Duration_HoursPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Duration_HoursPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Duration_HoursPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Duration_HoursPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Duration_Seconds
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Duration_Seconds*
UMAA_Common_Measurement_Duration_SecondsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Duration_Seconds *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Duration_Seconds();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Duration_Seconds_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Duration_Seconds_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Duration_Seconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Duration_Seconds *
UMAA_Common_Measurement_Duration_SecondsPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Duration_Seconds *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Duration_Seconds();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Duration_Seconds_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Duration_Seconds_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Duration_Seconds_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Duration_Seconds *
UMAA_Common_Measurement_Duration_SecondsPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Duration_SecondsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Duration_SecondsPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Duration_Seconds *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Duration_Seconds_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Duration_SecondsPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Duration_Seconds *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Duration_Seconds_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Duration_SecondsPluginSupport_destroy_data(
    UMAA_Common_Measurement_Duration_Seconds *sample) {

    UMAA_Common_Measurement_Duration_SecondsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Duration_SecondsPluginSupport_copy_data(
    UMAA_Common_Measurement_Duration_Seconds *dst,
    const UMAA_Common_Measurement_Duration_Seconds *src)
{
    return UMAA_Common_Measurement_Duration_Seconds_copy(dst,(const UMAA_Common_Measurement_Duration_Seconds*) src);
}

void 
UMAA_Common_Measurement_Duration_SecondsPluginSupport_print_data(
    const UMAA_Common_Measurement_Duration_Seconds *sample,
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
UMAA_Common_Measurement_Duration_SecondsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Duration_Seconds *dst,
    const UMAA_Common_Measurement_Duration_Seconds *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Duration_SecondsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Duration_SecondsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Duration_SecondsPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Duration_SecondsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Duration_SecondsPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Duration_SecondsPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_ElectricalPower
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_ElectricalPower*
UMAA_Common_Measurement_ElectricalPowerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_ElectricalPower *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_ElectricalPower();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_ElectricalPower_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_ElectricalPower_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_ElectricalPower_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_ElectricalPower *
UMAA_Common_Measurement_ElectricalPowerPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_ElectricalPower *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_ElectricalPower();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_ElectricalPower_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_ElectricalPower_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_ElectricalPower_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_ElectricalPower *
UMAA_Common_Measurement_ElectricalPowerPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_ElectricalPowerPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_ElectricalPowerPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_ElectricalPower *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_ElectricalPower_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_ElectricalPowerPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_ElectricalPower *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_ElectricalPower_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_ElectricalPowerPluginSupport_destroy_data(
    UMAA_Common_Measurement_ElectricalPower *sample) {

    UMAA_Common_Measurement_ElectricalPowerPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_ElectricalPowerPluginSupport_copy_data(
    UMAA_Common_Measurement_ElectricalPower *dst,
    const UMAA_Common_Measurement_ElectricalPower *src)
{
    return UMAA_Common_Measurement_ElectricalPower_copy(dst,(const UMAA_Common_Measurement_ElectricalPower*) src);
}

void 
UMAA_Common_Measurement_ElectricalPowerPluginSupport_print_data(
    const UMAA_Common_Measurement_ElectricalPower *sample,
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
UMAA_Common_Measurement_ElectricalPowerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_ElectricalPower *dst,
    const UMAA_Common_Measurement_ElectricalPower *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_ElectricalPowerPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_ElectricalPowerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_ElectricalPowerPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_ElectricalPowerPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_ElectricalPowerPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_ElectricalPowerPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_EngineSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_EngineSpeed*
UMAA_Common_Measurement_EngineSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_EngineSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_EngineSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_EngineSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_EngineSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_EngineSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_EngineSpeed *
UMAA_Common_Measurement_EngineSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_EngineSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_EngineSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_EngineSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_EngineSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_EngineSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_EngineSpeed *
UMAA_Common_Measurement_EngineSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_EngineSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_EngineSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_EngineSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_EngineSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_EngineSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_EngineSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_EngineSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_EngineSpeedPluginSupport_destroy_data(
    UMAA_Common_Measurement_EngineSpeed *sample) {

    UMAA_Common_Measurement_EngineSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_EngineSpeedPluginSupport_copy_data(
    UMAA_Common_Measurement_EngineSpeed *dst,
    const UMAA_Common_Measurement_EngineSpeed *src)
{
    return UMAA_Common_Measurement_EngineSpeed_copy(dst,(const UMAA_Common_Measurement_EngineSpeed*) src);
}

void 
UMAA_Common_Measurement_EngineSpeedPluginSupport_print_data(
    const UMAA_Common_Measurement_EngineSpeed *sample,
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
UMAA_Common_Measurement_EngineSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_EngineSpeed *dst,
    const UMAA_Common_Measurement_EngineSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_EngineSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_EngineSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_EngineSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_EngineSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_EngineSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_EngineSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane*
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample) {

    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_copy_data(
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *dst,
    const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *src)
{
    return UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane_copy(dst,(const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane*) src);
}

void 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_print_data(
    const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *sample,
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
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *dst,
    const UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlane *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_FocusValue
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_FocusValue*
UMAA_Common_Measurement_FocusValuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_FocusValue *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_FocusValue();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FocusValue_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_FocusValue_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FocusValue_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_FocusValue *
UMAA_Common_Measurement_FocusValuePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_FocusValue *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_FocusValue();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_FocusValue_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_FocusValue_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_FocusValue_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_FocusValue *
UMAA_Common_Measurement_FocusValuePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_FocusValuePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_FocusValuePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_FocusValue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_FocusValue_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_FocusValuePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_FocusValue *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_FocusValue_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_FocusValuePluginSupport_destroy_data(
    UMAA_Common_Measurement_FocusValue *sample) {

    UMAA_Common_Measurement_FocusValuePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_FocusValuePluginSupport_copy_data(
    UMAA_Common_Measurement_FocusValue *dst,
    const UMAA_Common_Measurement_FocusValue *src)
{
    return UMAA_Common_Measurement_FocusValue_copy(dst,(const UMAA_Common_Measurement_FocusValue*) src);
}

void 
UMAA_Common_Measurement_FocusValuePluginSupport_print_data(
    const UMAA_Common_Measurement_FocusValue *sample,
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
UMAA_Common_Measurement_FocusValuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_FocusValue *dst,
    const UMAA_Common_Measurement_FocusValue *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_FocusValuePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_FocusValuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_FocusValuePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_FocusValuePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_FocusValuePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_FocusValuePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Force
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Force*
UMAA_Common_Measurement_ForcePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Force *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Force();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Force_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Force_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Force_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Force *
UMAA_Common_Measurement_ForcePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Force *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Force();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Force_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Force_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Force_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Force *
UMAA_Common_Measurement_ForcePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_ForcePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_ForcePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Force *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Force_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_ForcePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Force *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Force_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_ForcePluginSupport_destroy_data(
    UMAA_Common_Measurement_Force *sample) {

    UMAA_Common_Measurement_ForcePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_ForcePluginSupport_copy_data(
    UMAA_Common_Measurement_Force *dst,
    const UMAA_Common_Measurement_Force *src)
{
    return UMAA_Common_Measurement_Force_copy(dst,(const UMAA_Common_Measurement_Force*) src);
}

void 
UMAA_Common_Measurement_ForcePluginSupport_print_data(
    const UMAA_Common_Measurement_Force *sample,
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
UMAA_Common_Measurement_ForcePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Force *dst,
    const UMAA_Common_Measurement_Force *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_ForcePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_ForcePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_ForcePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_ForcePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_ForcePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_ForcePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Frequency_Hertz
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Frequency_Hertz*
UMAA_Common_Measurement_Frequency_HertzPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Frequency_Hertz *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Frequency_Hertz();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Frequency_Hertz_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Frequency_Hertz_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Frequency_Hertz *
UMAA_Common_Measurement_Frequency_HertzPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Frequency_Hertz *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Frequency_Hertz();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Frequency_Hertz_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Frequency_Hertz_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Frequency_Hertz *
UMAA_Common_Measurement_Frequency_HertzPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Frequency_HertzPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Frequency_HertzPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Frequency_Hertz *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Frequency_Hertz_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Frequency_HertzPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Frequency_Hertz *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Frequency_Hertz_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Frequency_HertzPluginSupport_destroy_data(
    UMAA_Common_Measurement_Frequency_Hertz *sample) {

    UMAA_Common_Measurement_Frequency_HertzPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Frequency_HertzPluginSupport_copy_data(
    UMAA_Common_Measurement_Frequency_Hertz *dst,
    const UMAA_Common_Measurement_Frequency_Hertz *src)
{
    return UMAA_Common_Measurement_Frequency_Hertz_copy(dst,(const UMAA_Common_Measurement_Frequency_Hertz*) src);
}

void 
UMAA_Common_Measurement_Frequency_HertzPluginSupport_print_data(
    const UMAA_Common_Measurement_Frequency_Hertz *sample,
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
UMAA_Common_Measurement_Frequency_HertzPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Frequency_Hertz *dst,
    const UMAA_Common_Measurement_Frequency_Hertz *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Frequency_HertzPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Frequency_HertzPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Frequency_HertzPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Frequency_HertzPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Frequency_HertzPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Frequency_HertzPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_GroundSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_GroundSpeed*
UMAA_Common_Measurement_GroundSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_GroundSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_GroundSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_GroundSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_GroundSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_GroundSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_GroundSpeed *
UMAA_Common_Measurement_GroundSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_GroundSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_GroundSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_GroundSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_GroundSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_GroundSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_GroundSpeed *
UMAA_Common_Measurement_GroundSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_GroundSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_GroundSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_GroundSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_GroundSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_GroundSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_GroundSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_GroundSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_GroundSpeedPluginSupport_destroy_data(
    UMAA_Common_Measurement_GroundSpeed *sample) {

    UMAA_Common_Measurement_GroundSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_GroundSpeedPluginSupport_copy_data(
    UMAA_Common_Measurement_GroundSpeed *dst,
    const UMAA_Common_Measurement_GroundSpeed *src)
{
    return UMAA_Common_Measurement_GroundSpeed_copy(dst,(const UMAA_Common_Measurement_GroundSpeed*) src);
}

void 
UMAA_Common_Measurement_GroundSpeedPluginSupport_print_data(
    const UMAA_Common_Measurement_GroundSpeed *sample,
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
UMAA_Common_Measurement_GroundSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_GroundSpeed *dst,
    const UMAA_Common_Measurement_GroundSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_GroundSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_GroundSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_GroundSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_GroundSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_GroundSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_GroundSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Heading_TrueNorth_Angle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Heading_TrueNorth_Angle*
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_TrueNorth_Angle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Heading_TrueNorth_Angle *
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Heading_TrueNorth_Angle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Heading_TrueNorth_Angle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Heading_TrueNorth_Angle *
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Heading_TrueNorth_Angle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample) {

    UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *dst,
    const UMAA_Common_Measurement_Heading_TrueNorth_Angle *src)
{
    return UMAA_Common_Measurement_Heading_TrueNorth_Angle_copy(dst,(const UMAA_Common_Measurement_Heading_TrueNorth_Angle*) src);
}

void 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Heading_TrueNorth_Angle *sample,
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
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Heading_TrueNorth_Angle *dst,
    const UMAA_Common_Measurement_Heading_TrueNorth_Angle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Heading_TrueNorth_AnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Heading_TrueNorth_AnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_IndicatedAirspeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_IndicatedAirspeed*
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_IndicatedAirspeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_IndicatedAirspeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_IndicatedAirspeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_IndicatedAirspeed *
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_IndicatedAirspeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_IndicatedAirspeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_IndicatedAirspeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_IndicatedAirspeed *
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_IndicatedAirspeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_IndicatedAirspeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_IndicatedAirspeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_destroy_data(
    UMAA_Common_Measurement_IndicatedAirspeed *sample) {

    UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_copy_data(
    UMAA_Common_Measurement_IndicatedAirspeed *dst,
    const UMAA_Common_Measurement_IndicatedAirspeed *src)
{
    return UMAA_Common_Measurement_IndicatedAirspeed_copy(dst,(const UMAA_Common_Measurement_IndicatedAirspeed*) src);
}

void 
UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_print_data(
    const UMAA_Common_Measurement_IndicatedAirspeed *sample,
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
UMAA_Common_Measurement_IndicatedAirspeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_IndicatedAirspeed *dst,
    const UMAA_Common_Measurement_IndicatedAirspeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_IndicatedAirspeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_IndicatedAirspeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_IndicatedAirspeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_IndicatedAirspeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_IndicatedAirspeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_IndicatedAirspeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_IPPort_Counting
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_IPPort_Counting*
UMAA_Common_Measurement_IPPort_CountingPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_IPPort_Counting *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_IPPort_Counting();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_IPPort_Counting_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_IPPort_Counting_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_IPPort_Counting_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_IPPort_Counting *
UMAA_Common_Measurement_IPPort_CountingPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_IPPort_Counting *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_IPPort_Counting();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_IPPort_Counting_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_IPPort_Counting_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_IPPort_Counting_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_IPPort_Counting *
UMAA_Common_Measurement_IPPort_CountingPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_IPPort_CountingPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_IPPort_CountingPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_IPPort_Counting *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_IPPort_Counting_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_IPPort_CountingPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_IPPort_Counting *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_IPPort_Counting_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_IPPort_CountingPluginSupport_destroy_data(
    UMAA_Common_Measurement_IPPort_Counting *sample) {

    UMAA_Common_Measurement_IPPort_CountingPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_IPPort_CountingPluginSupport_copy_data(
    UMAA_Common_Measurement_IPPort_Counting *dst,
    const UMAA_Common_Measurement_IPPort_Counting *src)
{
    return UMAA_Common_Measurement_IPPort_Counting_copy(dst,(const UMAA_Common_Measurement_IPPort_Counting*) src);
}

void 
UMAA_Common_Measurement_IPPort_CountingPluginSupport_print_data(
    const UMAA_Common_Measurement_IPPort_Counting *sample,
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
UMAA_Common_Measurement_IPPort_CountingPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_IPPort_Counting *dst,
    const UMAA_Common_Measurement_IPPort_Counting *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_IPPort_CountingPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_IPPort_CountingPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_IPPort_CountingPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_IPPort_CountingPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_IPPort_CountingPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_IPPort_CountingPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_MagneticVariation
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_MagneticVariation*
UMAA_Common_Measurement_MagneticVariationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_MagneticVariation *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_MagneticVariation();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_MagneticVariation_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_MagneticVariation_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_MagneticVariation_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_MagneticVariation *
UMAA_Common_Measurement_MagneticVariationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_MagneticVariation *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_MagneticVariation();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_MagneticVariation_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_MagneticVariation_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_MagneticVariation_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_MagneticVariation *
UMAA_Common_Measurement_MagneticVariationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_MagneticVariationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_MagneticVariationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_MagneticVariation *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_MagneticVariation_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_MagneticVariationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_MagneticVariation *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_MagneticVariation_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_MagneticVariationPluginSupport_destroy_data(
    UMAA_Common_Measurement_MagneticVariation *sample) {

    UMAA_Common_Measurement_MagneticVariationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_MagneticVariationPluginSupport_copy_data(
    UMAA_Common_Measurement_MagneticVariation *dst,
    const UMAA_Common_Measurement_MagneticVariation *src)
{
    return UMAA_Common_Measurement_MagneticVariation_copy(dst,(const UMAA_Common_Measurement_MagneticVariation*) src);
}

void 
UMAA_Common_Measurement_MagneticVariationPluginSupport_print_data(
    const UMAA_Common_Measurement_MagneticVariation *sample,
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
UMAA_Common_Measurement_MagneticVariationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_MagneticVariation *dst,
    const UMAA_Common_Measurement_MagneticVariation *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_MagneticVariationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_MagneticVariationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_MagneticVariationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_MagneticVariationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_MagneticVariationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_MagneticVariationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Mass
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Mass*
UMAA_Common_Measurement_MassPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Mass *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Mass();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Mass_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Mass_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Mass_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Mass *
UMAA_Common_Measurement_MassPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Mass *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Mass();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Mass_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Mass_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Mass_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Mass *
UMAA_Common_Measurement_MassPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_MassPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_MassPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Mass *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Mass_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_MassPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Mass *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Mass_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_MassPluginSupport_destroy_data(
    UMAA_Common_Measurement_Mass *sample) {

    UMAA_Common_Measurement_MassPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_MassPluginSupport_copy_data(
    UMAA_Common_Measurement_Mass *dst,
    const UMAA_Common_Measurement_Mass *src)
{
    return UMAA_Common_Measurement_Mass_copy(dst,(const UMAA_Common_Measurement_Mass*) src);
}

void 
UMAA_Common_Measurement_MassPluginSupport_print_data(
    const UMAA_Common_Measurement_Mass *sample,
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
UMAA_Common_Measurement_MassPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Mass *dst,
    const UMAA_Common_Measurement_Mass *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_MassPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_MassPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_MassPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_MassPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_MassPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_MassPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_NumericGUID
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_NumericGUID*
UMAA_Common_Measurement_NumericGUIDPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_NumericGUID *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_NumericGUID[1]();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_NumericGUID_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_NumericGUID_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete [] sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_NumericGUID *
UMAA_Common_Measurement_NumericGUIDPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_NumericGUID *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_NumericGUID[1]();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_NumericGUID_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_NumericGUID_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_NumericGUID_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete [] sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_NumericGUID *
UMAA_Common_Measurement_NumericGUIDPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_NumericGUIDPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_NumericGUIDPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_NumericGUID *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_NumericGUID_finalize_w_params(sample,dealloc_params);

    delete [] sample;
}

void 
UMAA_Common_Measurement_NumericGUIDPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_NumericGUID *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_NumericGUID_finalize_ex(sample,deallocate_pointers);

    delete [] sample;
}

void 
UMAA_Common_Measurement_NumericGUIDPluginSupport_destroy_data(
    UMAA_Common_Measurement_NumericGUID *sample) {

    UMAA_Common_Measurement_NumericGUIDPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_NumericGUIDPluginSupport_copy_data(
    UMAA_Common_Measurement_NumericGUID *dst,
    const UMAA_Common_Measurement_NumericGUID *src)
{
    return UMAA_Common_Measurement_NumericGUID_copy(dst,(const UMAA_Common_Measurement_NumericGUID*) src);
}

void 
UMAA_Common_Measurement_NumericGUIDPluginSupport_print_data(
    const UMAA_Common_Measurement_NumericGUID *sample,
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

    RTICdrType_printArray(
        (*sample), (16L), RTI_CDR_OCTET_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printOctet, 
        "", indent_level + 1);        

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
UMAA_Common_Measurement_NumericGUIDPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_NumericGUID *dst,
    const UMAA_Common_Measurement_NumericGUID *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_NumericGUIDPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_NumericGUIDPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_NumericGUIDPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_NumericGUIDPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_NumericGUIDPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_NumericGUIDPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Order
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Order*
UMAA_Common_Measurement_OrderPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Order *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Order();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Order_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Order_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Order_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Order *
UMAA_Common_Measurement_OrderPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Order *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Order();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Order_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Order_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Order_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Order *
UMAA_Common_Measurement_OrderPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_OrderPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_OrderPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Order *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Order_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_OrderPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Order *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Order_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_OrderPluginSupport_destroy_data(
    UMAA_Common_Measurement_Order *sample) {

    UMAA_Common_Measurement_OrderPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_OrderPluginSupport_copy_data(
    UMAA_Common_Measurement_Order *dst,
    const UMAA_Common_Measurement_Order *src)
{
    return UMAA_Common_Measurement_Order_copy(dst,(const UMAA_Common_Measurement_Order*) src);
}

void 
UMAA_Common_Measurement_OrderPluginSupport_print_data(
    const UMAA_Common_Measurement_Order *sample,
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
UMAA_Common_Measurement_OrderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Order *dst,
    const UMAA_Common_Measurement_Order *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_OrderPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_OrderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_OrderPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_OrderPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_OrderPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_OrderPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Percent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Percent*
UMAA_Common_Measurement_PercentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Percent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Percent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Percent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Percent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Percent *
UMAA_Common_Measurement_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Percent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Percent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Percent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Percent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Percent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Percent *
UMAA_Common_Measurement_PercentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PercentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PercentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Percent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Percent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PercentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Percent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Percent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PercentPluginSupport_destroy_data(
    UMAA_Common_Measurement_Percent *sample) {

    UMAA_Common_Measurement_PercentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PercentPluginSupport_copy_data(
    UMAA_Common_Measurement_Percent *dst,
    const UMAA_Common_Measurement_Percent *src)
{
    return UMAA_Common_Measurement_Percent_copy(dst,(const UMAA_Common_Measurement_Percent*) src);
}

void 
UMAA_Common_Measurement_PercentPluginSupport_print_data(
    const UMAA_Common_Measurement_Percent *sample,
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
UMAA_Common_Measurement_PercentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Percent *dst,
    const UMAA_Common_Measurement_Percent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PercentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PercentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PercentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PercentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PercentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Pitch_HalfAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Pitch_HalfAngle*
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Pitch_HalfAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Pitch_HalfAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pitch_HalfAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Pitch_HalfAngle *
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Pitch_HalfAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Pitch_HalfAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pitch_HalfAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Pitch_HalfAngle *
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Pitch_HalfAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Pitch_HalfAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Pitch_HalfAngle *sample) {

    UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Pitch_HalfAngle *dst,
    const UMAA_Common_Measurement_Pitch_HalfAngle *src)
{
    return UMAA_Common_Measurement_Pitch_HalfAngle_copy(dst,(const UMAA_Common_Measurement_Pitch_HalfAngle*) src);
}

void 
UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Pitch_HalfAngle *sample,
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
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Pitch_HalfAngle *dst,
    const UMAA_Common_Measurement_Pitch_HalfAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Pitch_HalfAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Pitch_HalfAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_PitchAcceleration
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PitchAcceleration*
UMAA_Common_Measurement_PitchAccelerationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PitchAcceleration *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PitchAcceleration();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PitchAcceleration_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PitchAcceleration_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PitchAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PitchAcceleration *
UMAA_Common_Measurement_PitchAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PitchAcceleration *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PitchAcceleration();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PitchAcceleration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PitchAcceleration_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PitchAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PitchAcceleration *
UMAA_Common_Measurement_PitchAccelerationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PitchAccelerationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PitchAccelerationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PitchAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PitchAcceleration_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PitchAccelerationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PitchAcceleration *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PitchAcceleration_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PitchAccelerationPluginSupport_destroy_data(
    UMAA_Common_Measurement_PitchAcceleration *sample) {

    UMAA_Common_Measurement_PitchAccelerationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PitchAccelerationPluginSupport_copy_data(
    UMAA_Common_Measurement_PitchAcceleration *dst,
    const UMAA_Common_Measurement_PitchAcceleration *src)
{
    return UMAA_Common_Measurement_PitchAcceleration_copy(dst,(const UMAA_Common_Measurement_PitchAcceleration*) src);
}

void 
UMAA_Common_Measurement_PitchAccelerationPluginSupport_print_data(
    const UMAA_Common_Measurement_PitchAcceleration *sample,
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
UMAA_Common_Measurement_PitchAccelerationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PitchAcceleration *dst,
    const UMAA_Common_Measurement_PitchAcceleration *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PitchAccelerationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PitchAccelerationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PitchAccelerationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PitchAccelerationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PitchAccelerationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PitchAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_PitchRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PitchRate*
UMAA_Common_Measurement_PitchRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PitchRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PitchRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PitchRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PitchRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PitchRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PitchRate *
UMAA_Common_Measurement_PitchRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PitchRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PitchRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PitchRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PitchRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PitchRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PitchRate *
UMAA_Common_Measurement_PitchRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PitchRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PitchRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PitchRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PitchRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PitchRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PitchRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PitchRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PitchRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_PitchRate *sample) {

    UMAA_Common_Measurement_PitchRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PitchRatePluginSupport_copy_data(
    UMAA_Common_Measurement_PitchRate *dst,
    const UMAA_Common_Measurement_PitchRate *src)
{
    return UMAA_Common_Measurement_PitchRate_copy(dst,(const UMAA_Common_Measurement_PitchRate*) src);
}

void 
UMAA_Common_Measurement_PitchRatePluginSupport_print_data(
    const UMAA_Common_Measurement_PitchRate *sample,
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
UMAA_Common_Measurement_PitchRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PitchRate *dst,
    const UMAA_Common_Measurement_PitchRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PitchRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PitchRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PitchRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PitchRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PitchRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PitchRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_PowerBusCurrent
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PowerBusCurrent*
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PowerBusCurrent *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PowerBusCurrent();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PowerBusCurrent_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PowerBusCurrent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PowerBusCurrent *
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PowerBusCurrent *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PowerBusCurrent();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PowerBusCurrent_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PowerBusCurrent_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PowerBusCurrent *
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PowerBusCurrentPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PowerBusCurrent *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PowerBusCurrent_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PowerBusCurrent *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PowerBusCurrent_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_destroy_data(
    UMAA_Common_Measurement_PowerBusCurrent *sample) {

    UMAA_Common_Measurement_PowerBusCurrentPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_copy_data(
    UMAA_Common_Measurement_PowerBusCurrent *dst,
    const UMAA_Common_Measurement_PowerBusCurrent *src)
{
    return UMAA_Common_Measurement_PowerBusCurrent_copy(dst,(const UMAA_Common_Measurement_PowerBusCurrent*) src);
}

void 
UMAA_Common_Measurement_PowerBusCurrentPluginSupport_print_data(
    const UMAA_Common_Measurement_PowerBusCurrent *sample,
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
UMAA_Common_Measurement_PowerBusCurrentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PowerBusCurrent *dst,
    const UMAA_Common_Measurement_PowerBusCurrent *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PowerBusCurrentPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PowerBusCurrentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PowerBusCurrentPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PowerBusCurrentPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PowerBusCurrentPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PowerBusCurrentPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_PowerBusVoltage
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PowerBusVoltage*
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PowerBusVoltage *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PowerBusVoltage();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PowerBusVoltage_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PowerBusVoltage_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PowerBusVoltage *
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PowerBusVoltage *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PowerBusVoltage();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PowerBusVoltage_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PowerBusVoltage_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PowerBusVoltage *
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PowerBusVoltagePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PowerBusVoltage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PowerBusVoltage_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PowerBusVoltage *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PowerBusVoltage_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_destroy_data(
    UMAA_Common_Measurement_PowerBusVoltage *sample) {

    UMAA_Common_Measurement_PowerBusVoltagePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_copy_data(
    UMAA_Common_Measurement_PowerBusVoltage *dst,
    const UMAA_Common_Measurement_PowerBusVoltage *src)
{
    return UMAA_Common_Measurement_PowerBusVoltage_copy(dst,(const UMAA_Common_Measurement_PowerBusVoltage*) src);
}

void 
UMAA_Common_Measurement_PowerBusVoltagePluginSupport_print_data(
    const UMAA_Common_Measurement_PowerBusVoltage *sample,
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
UMAA_Common_Measurement_PowerBusVoltagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PowerBusVoltage *dst,
    const UMAA_Common_Measurement_PowerBusVoltage *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PowerBusVoltagePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PowerBusVoltagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_PowerBusVoltagePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PowerBusVoltagePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_PowerBusVoltagePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PowerBusVoltagePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Pressure_KiloPascals
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Pressure_KiloPascals*
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Pressure_KiloPascals *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Pressure_KiloPascals();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pressure_KiloPascals_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Pressure_KiloPascals *
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Pressure_KiloPascals *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Pressure_KiloPascals();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Pressure_KiloPascals_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Pressure_KiloPascals *
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Pressure_KiloPascals_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Pressure_KiloPascals_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_destroy_data(
    UMAA_Common_Measurement_Pressure_KiloPascals *sample) {

    UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_copy_data(
    UMAA_Common_Measurement_Pressure_KiloPascals *dst,
    const UMAA_Common_Measurement_Pressure_KiloPascals *src)
{
    return UMAA_Common_Measurement_Pressure_KiloPascals_copy(dst,(const UMAA_Common_Measurement_Pressure_KiloPascals*) src);
}

void 
UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_print_data(
    const UMAA_Common_Measurement_Pressure_KiloPascals *sample,
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
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Pressure_KiloPascals *dst,
    const UMAA_Common_Measurement_Pressure_KiloPascals *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Pressure_KiloPascalsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Pressure_KiloPascalsPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_RadioFrequency_Hertz
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_RadioFrequency_Hertz*
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_RadioFrequency_Hertz();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_RadioFrequency_Hertz *
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_RadioFrequency_Hertz();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RadioFrequency_Hertz_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_RadioFrequency_Hertz *
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_RadioFrequency_Hertz_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_destroy_data(
    UMAA_Common_Measurement_RadioFrequency_Hertz *sample) {

    UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_copy_data(
    UMAA_Common_Measurement_RadioFrequency_Hertz *dst,
    const UMAA_Common_Measurement_RadioFrequency_Hertz *src)
{
    return UMAA_Common_Measurement_RadioFrequency_Hertz_copy(dst,(const UMAA_Common_Measurement_RadioFrequency_Hertz*) src);
}

void 
UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_print_data(
    const UMAA_Common_Measurement_RadioFrequency_Hertz *sample,
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
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_RadioFrequency_Hertz *dst,
    const UMAA_Common_Measurement_RadioFrequency_Hertz *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_RadioFrequency_HertzPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_RadioFrequency_HertzPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_RelativeAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_RelativeAngle*
UMAA_Common_Measurement_RelativeAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_RelativeAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_RelativeAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RelativeAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_RelativeAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RelativeAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_RelativeAngle *
UMAA_Common_Measurement_RelativeAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_RelativeAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_RelativeAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RelativeAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_RelativeAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RelativeAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_RelativeAngle *
UMAA_Common_Measurement_RelativeAnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_RelativeAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_RelativeAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_RelativeAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_RelativeAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_RelativeAnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_RelativeAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_RelativeAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_RelativeAnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_RelativeAngle *sample) {

    UMAA_Common_Measurement_RelativeAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_RelativeAnglePluginSupport_copy_data(
    UMAA_Common_Measurement_RelativeAngle *dst,
    const UMAA_Common_Measurement_RelativeAngle *src)
{
    return UMAA_Common_Measurement_RelativeAngle_copy(dst,(const UMAA_Common_Measurement_RelativeAngle*) src);
}

void 
UMAA_Common_Measurement_RelativeAnglePluginSupport_print_data(
    const UMAA_Common_Measurement_RelativeAngle *sample,
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
UMAA_Common_Measurement_RelativeAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_RelativeAngle *dst,
    const UMAA_Common_Measurement_RelativeAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_RelativeAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_RelativeAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_RelativeAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_RelativeAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_RelativeAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_RelativeAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_RelativeHumidity
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_RelativeHumidity*
UMAA_Common_Measurement_RelativeHumidityPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_RelativeHumidity *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_RelativeHumidity();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RelativeHumidity_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_RelativeHumidity_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RelativeHumidity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_RelativeHumidity *
UMAA_Common_Measurement_RelativeHumidityPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_RelativeHumidity *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_RelativeHumidity();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RelativeHumidity_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_RelativeHumidity_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RelativeHumidity_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_RelativeHumidity *
UMAA_Common_Measurement_RelativeHumidityPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_RelativeHumidityPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_RelativeHumidityPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_RelativeHumidity *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_RelativeHumidity_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_RelativeHumidityPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_RelativeHumidity *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_RelativeHumidity_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_RelativeHumidityPluginSupport_destroy_data(
    UMAA_Common_Measurement_RelativeHumidity *sample) {

    UMAA_Common_Measurement_RelativeHumidityPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_RelativeHumidityPluginSupport_copy_data(
    UMAA_Common_Measurement_RelativeHumidity *dst,
    const UMAA_Common_Measurement_RelativeHumidity *src)
{
    return UMAA_Common_Measurement_RelativeHumidity_copy(dst,(const UMAA_Common_Measurement_RelativeHumidity*) src);
}

void 
UMAA_Common_Measurement_RelativeHumidityPluginSupport_print_data(
    const UMAA_Common_Measurement_RelativeHumidity *sample,
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
UMAA_Common_Measurement_RelativeHumidityPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_RelativeHumidity *dst,
    const UMAA_Common_Measurement_RelativeHumidity *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_RelativeHumidityPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_RelativeHumidityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_RelativeHumidityPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_RelativeHumidityPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_RelativeHumidityPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_RelativeHumidityPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Roll_Angle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Roll_Angle*
UMAA_Common_Measurement_Roll_AnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Roll_Angle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Roll_Angle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Roll_Angle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Roll_Angle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Roll_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Roll_Angle *
UMAA_Common_Measurement_Roll_AnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Roll_Angle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Roll_Angle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Roll_Angle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Roll_Angle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Roll_Angle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Roll_Angle *
UMAA_Common_Measurement_Roll_AnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Roll_AnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Roll_AnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Roll_Angle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Roll_Angle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Roll_AnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Roll_Angle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Roll_Angle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Roll_AnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Roll_Angle *sample) {

    UMAA_Common_Measurement_Roll_AnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Roll_AnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Roll_Angle *dst,
    const UMAA_Common_Measurement_Roll_Angle *src)
{
    return UMAA_Common_Measurement_Roll_Angle_copy(dst,(const UMAA_Common_Measurement_Roll_Angle*) src);
}

void 
UMAA_Common_Measurement_Roll_AnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Roll_Angle *sample,
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
UMAA_Common_Measurement_Roll_AnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Roll_Angle *dst,
    const UMAA_Common_Measurement_Roll_Angle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Roll_AnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Roll_AnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Roll_AnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Roll_AnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Roll_AnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Roll_AnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_RollAcceleration
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_RollAcceleration*
UMAA_Common_Measurement_RollAccelerationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_RollAcceleration *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_RollAcceleration();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RollAcceleration_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_RollAcceleration_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RollAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_RollAcceleration *
UMAA_Common_Measurement_RollAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_RollAcceleration *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_RollAcceleration();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RollAcceleration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_RollAcceleration_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RollAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_RollAcceleration *
UMAA_Common_Measurement_RollAccelerationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_RollAccelerationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_RollAccelerationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_RollAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_RollAcceleration_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_RollAccelerationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_RollAcceleration *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_RollAcceleration_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_RollAccelerationPluginSupport_destroy_data(
    UMAA_Common_Measurement_RollAcceleration *sample) {

    UMAA_Common_Measurement_RollAccelerationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_RollAccelerationPluginSupport_copy_data(
    UMAA_Common_Measurement_RollAcceleration *dst,
    const UMAA_Common_Measurement_RollAcceleration *src)
{
    return UMAA_Common_Measurement_RollAcceleration_copy(dst,(const UMAA_Common_Measurement_RollAcceleration*) src);
}

void 
UMAA_Common_Measurement_RollAccelerationPluginSupport_print_data(
    const UMAA_Common_Measurement_RollAcceleration *sample,
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
UMAA_Common_Measurement_RollAccelerationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_RollAcceleration *dst,
    const UMAA_Common_Measurement_RollAcceleration *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_RollAccelerationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_RollAccelerationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_RollAccelerationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_RollAccelerationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_RollAccelerationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_RollAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_RollRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_RollRate*
UMAA_Common_Measurement_RollRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_RollRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_RollRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RollRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_RollRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RollRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_RollRate *
UMAA_Common_Measurement_RollRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_RollRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_RollRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_RollRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_RollRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_RollRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_RollRate *
UMAA_Common_Measurement_RollRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_RollRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_RollRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_RollRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_RollRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_RollRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_RollRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_RollRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_RollRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_RollRate *sample) {

    UMAA_Common_Measurement_RollRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_RollRatePluginSupport_copy_data(
    UMAA_Common_Measurement_RollRate *dst,
    const UMAA_Common_Measurement_RollRate *src)
{
    return UMAA_Common_Measurement_RollRate_copy(dst,(const UMAA_Common_Measurement_RollRate*) src);
}

void 
UMAA_Common_Measurement_RollRatePluginSupport_print_data(
    const UMAA_Common_Measurement_RollRate *sample,
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
UMAA_Common_Measurement_RollRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_RollRate *dst,
    const UMAA_Common_Measurement_RollRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_RollRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_RollRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_RollRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_RollRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_RollRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_RollRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Size_Numeral
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Size_Numeral*
UMAA_Common_Measurement_Size_NumeralPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Size_Numeral *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Size_Numeral();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Size_Numeral_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Size_Numeral_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Size_Numeral_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Size_Numeral *
UMAA_Common_Measurement_Size_NumeralPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Size_Numeral *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Size_Numeral();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Size_Numeral_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Size_Numeral_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Size_Numeral_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Size_Numeral *
UMAA_Common_Measurement_Size_NumeralPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Size_NumeralPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Size_NumeralPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Size_Numeral *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Size_Numeral_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Size_NumeralPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Size_Numeral *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Size_Numeral_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Size_NumeralPluginSupport_destroy_data(
    UMAA_Common_Measurement_Size_Numeral *sample) {

    UMAA_Common_Measurement_Size_NumeralPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Size_NumeralPluginSupport_copy_data(
    UMAA_Common_Measurement_Size_Numeral *dst,
    const UMAA_Common_Measurement_Size_Numeral *src)
{
    return UMAA_Common_Measurement_Size_Numeral_copy(dst,(const UMAA_Common_Measurement_Size_Numeral*) src);
}

void 
UMAA_Common_Measurement_Size_NumeralPluginSupport_print_data(
    const UMAA_Common_Measurement_Size_Numeral *sample,
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
UMAA_Common_Measurement_Size_NumeralPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Size_Numeral *dst,
    const UMAA_Common_Measurement_Size_Numeral *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Size_NumeralPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Size_NumeralPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Size_NumeralPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Size_NumeralPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Size_NumeralPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Size_NumeralPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Speed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Speed*
UMAA_Common_Measurement_SpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Speed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Speed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Speed *
UMAA_Common_Measurement_SpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Speed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Speed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Speed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Speed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Speed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Speed *
UMAA_Common_Measurement_SpeedPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_SpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_SpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Speed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Speed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_SpeedPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Speed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Speed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_SpeedPluginSupport_destroy_data(
    UMAA_Common_Measurement_Speed *sample) {

    UMAA_Common_Measurement_SpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_SpeedPluginSupport_copy_data(
    UMAA_Common_Measurement_Speed *dst,
    const UMAA_Common_Measurement_Speed *src)
{
    return UMAA_Common_Measurement_Speed_copy(dst,(const UMAA_Common_Measurement_Speed*) src);
}

void 
UMAA_Common_Measurement_SpeedPluginSupport_print_data(
    const UMAA_Common_Measurement_Speed *sample,
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
UMAA_Common_Measurement_SpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Speed *dst,
    const UMAA_Common_Measurement_Speed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_SpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_SpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_SpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_SpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_SpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_SpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Temperature
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Temperature*
UMAA_Common_Measurement_TemperaturePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Temperature *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Temperature();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Temperature_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Temperature_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Temperature_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Temperature *
UMAA_Common_Measurement_TemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Temperature *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Temperature();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Temperature_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Temperature_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Temperature_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Temperature *
UMAA_Common_Measurement_TemperaturePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_TemperaturePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_TemperaturePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Temperature *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Temperature_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_TemperaturePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Temperature *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Temperature_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_TemperaturePluginSupport_destroy_data(
    UMAA_Common_Measurement_Temperature *sample) {

    UMAA_Common_Measurement_TemperaturePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_TemperaturePluginSupport_copy_data(
    UMAA_Common_Measurement_Temperature *dst,
    const UMAA_Common_Measurement_Temperature *src)
{
    return UMAA_Common_Measurement_Temperature_copy(dst,(const UMAA_Common_Measurement_Temperature*) src);
}

void 
UMAA_Common_Measurement_TemperaturePluginSupport_print_data(
    const UMAA_Common_Measurement_Temperature *sample,
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
UMAA_Common_Measurement_TemperaturePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Temperature *dst,
    const UMAA_Common_Measurement_Temperature *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_TemperaturePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_TemperaturePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_TemperaturePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_TemperaturePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_TemperaturePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_TemperaturePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_TurnRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_TurnRate*
UMAA_Common_Measurement_TurnRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_TurnRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_TurnRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_TurnRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_TurnRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_TurnRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_TurnRate *
UMAA_Common_Measurement_TurnRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_TurnRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_TurnRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_TurnRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_TurnRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_TurnRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_TurnRate *
UMAA_Common_Measurement_TurnRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_TurnRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_TurnRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_TurnRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_TurnRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_TurnRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_TurnRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_TurnRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_TurnRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_TurnRate *sample) {

    UMAA_Common_Measurement_TurnRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_TurnRatePluginSupport_copy_data(
    UMAA_Common_Measurement_TurnRate *dst,
    const UMAA_Common_Measurement_TurnRate *src)
{
    return UMAA_Common_Measurement_TurnRate_copy(dst,(const UMAA_Common_Measurement_TurnRate*) src);
}

void 
UMAA_Common_Measurement_TurnRatePluginSupport_print_data(
    const UMAA_Common_Measurement_TurnRate *sample,
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
UMAA_Common_Measurement_TurnRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_TurnRate *dst,
    const UMAA_Common_Measurement_TurnRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_TurnRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_TurnRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_TurnRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_TurnRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_TurnRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_TurnRatePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_Yaw_PosAngle
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_Yaw_PosAngle*
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_Yaw_PosAngle *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_Yaw_PosAngle();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Yaw_PosAngle_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_Yaw_PosAngle *
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_Yaw_PosAngle *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_Yaw_PosAngle();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_Yaw_PosAngle_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_Yaw_PosAngle *
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_Yaw_PosAngle_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_Yaw_PosAngle *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_Yaw_PosAngle_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_destroy_data(
    UMAA_Common_Measurement_Yaw_PosAngle *sample) {

    UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_copy_data(
    UMAA_Common_Measurement_Yaw_PosAngle *dst,
    const UMAA_Common_Measurement_Yaw_PosAngle *src)
{
    return UMAA_Common_Measurement_Yaw_PosAngle_copy(dst,(const UMAA_Common_Measurement_Yaw_PosAngle*) src);
}

void 
UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_print_data(
    const UMAA_Common_Measurement_Yaw_PosAngle *sample,
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
UMAA_Common_Measurement_Yaw_PosAnglePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_Yaw_PosAngle *dst,
    const UMAA_Common_Measurement_Yaw_PosAngle *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_Yaw_PosAnglePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_Yaw_PosAnglePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_Yaw_PosAnglePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_Yaw_PosAnglePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_Yaw_PosAnglePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_Yaw_PosAnglePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_YawAcceleration
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_YawAcceleration*
UMAA_Common_Measurement_YawAccelerationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_YawAcceleration *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_YawAcceleration();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_YawAcceleration_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_YawAcceleration_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_YawAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_YawAcceleration *
UMAA_Common_Measurement_YawAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_YawAcceleration *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_YawAcceleration();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_YawAcceleration_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_YawAcceleration_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_YawAcceleration_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_YawAcceleration *
UMAA_Common_Measurement_YawAccelerationPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_YawAccelerationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_YawAccelerationPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_YawAcceleration *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_YawAcceleration_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_YawAccelerationPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_YawAcceleration *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_YawAcceleration_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_YawAccelerationPluginSupport_destroy_data(
    UMAA_Common_Measurement_YawAcceleration *sample) {

    UMAA_Common_Measurement_YawAccelerationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_YawAccelerationPluginSupport_copy_data(
    UMAA_Common_Measurement_YawAcceleration *dst,
    const UMAA_Common_Measurement_YawAcceleration *src)
{
    return UMAA_Common_Measurement_YawAcceleration_copy(dst,(const UMAA_Common_Measurement_YawAcceleration*) src);
}

void 
UMAA_Common_Measurement_YawAccelerationPluginSupport_print_data(
    const UMAA_Common_Measurement_YawAcceleration *sample,
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
UMAA_Common_Measurement_YawAccelerationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_YawAcceleration *dst,
    const UMAA_Common_Measurement_YawAcceleration *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_YawAccelerationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_YawAccelerationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_YawAccelerationPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_YawAccelerationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_YawAccelerationPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_YawAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_Measurement_YawRate
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_YawRate*
UMAA_Common_Measurement_YawRatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_YawRate *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_YawRate();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_YawRate_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_YawRate_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_YawRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_YawRate *
UMAA_Common_Measurement_YawRatePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_YawRate *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_YawRate();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_YawRate_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_YawRate_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_YawRate_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_YawRate *
UMAA_Common_Measurement_YawRatePluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_YawRatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_YawRatePluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_YawRate *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_YawRate_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_YawRatePluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_YawRate *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_YawRate_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_YawRatePluginSupport_destroy_data(
    UMAA_Common_Measurement_YawRate *sample) {

    UMAA_Common_Measurement_YawRatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_YawRatePluginSupport_copy_data(
    UMAA_Common_Measurement_YawRate *dst,
    const UMAA_Common_Measurement_YawRate *src)
{
    return UMAA_Common_Measurement_YawRate_copy(dst,(const UMAA_Common_Measurement_YawRate*) src);
}

void 
UMAA_Common_Measurement_YawRatePluginSupport_print_data(
    const UMAA_Common_Measurement_YawRate *sample,
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
UMAA_Common_Measurement_YawRatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_YawRate *dst,
    const UMAA_Common_Measurement_YawRate *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_YawRatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_YawRatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_Measurement_YawRatePlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_YawRatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_Measurement_YawRatePlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_YawRatePlugin_get_serialized_key_max_size_for_keyhash(
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
