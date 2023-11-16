
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Engineering_Coordinate_Axes.idl
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

#include "Engineering_Coordinate_AxesPlugin.h"

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_MeasurementCoordinate_DateTime
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_DateTime*
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_DateTime *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_DateTime();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_DateTime_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_DateTime *
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_DateTime *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_DateTime();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_DateTime_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_DateTime *
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_DateTime_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_DateTime *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_DateTime_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_DateTime *sample) {

    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_DateTime *dst,
    const UMAA_Common_MeasurementCoordinate_DateTime *src)
{
    return UMAA_Common_MeasurementCoordinate_DateTime_copy(dst,(const UMAA_Common_MeasurementCoordinate_DateTime*) src);
}

void 
UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_DateTime *sample,
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
UMAA_Common_MeasurementCoordinate_DateTimePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_DateTime *dst,
    const UMAA_Common_MeasurementCoordinate_DateTime *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_Down
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_Down*
UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_Down *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Down();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Down_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_Down_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Down_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_Down *
UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_Down *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Down();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Down_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_Down_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Down_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_Down *
UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_Down *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_Down_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_Down *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_Down_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_Down *sample) {

    UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_DownPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_Down *dst,
    const UMAA_Common_MeasurementCoordinate_Down *src)
{
    return UMAA_Common_MeasurementCoordinate_Down_copy(dst,(const UMAA_Common_MeasurementCoordinate_Down*) src);
}

void 
UMAA_Common_MeasurementCoordinate_DownPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_Down *sample,
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
UMAA_Common_MeasurementCoordinate_DownPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_Down *dst,
    const UMAA_Common_MeasurementCoordinate_Down *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_DownPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_DownPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_DownSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_DownSpeed*
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_DownSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_DownSpeed *
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_DownSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_DownSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_DownSpeed *
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_DownSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_DownSpeed *sample) {

    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_DownSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_DownSpeed *src)
{
    return UMAA_Common_MeasurementCoordinate_DownSpeed_copy(dst,(const UMAA_Common_MeasurementCoordinate_DownSpeed*) src);
}

void 
UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
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
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_DownSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_DownSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_EastSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_EastSpeed*
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_EastSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_EastSpeed *
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_EastSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_EastSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_EastSpeed *
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_EastSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_EastSpeed *sample) {

    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_EastSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_EastSpeed *src)
{
    return UMAA_Common_MeasurementCoordinate_EastSpeed_copy(dst,(const UMAA_Common_MeasurementCoordinate_EastSpeed*) src);
}

void 
UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
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
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_EastSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_EastSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_Forward
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_Forward*
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_Forward *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Forward();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Forward_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Forward_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_Forward *
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_Forward *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Forward();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Forward_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Forward_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_Forward *
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_Forward *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_Forward_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_Forward *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_Forward_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_Forward *sample) {

    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_Forward *dst,
    const UMAA_Common_MeasurementCoordinate_Forward *src)
{
    return UMAA_Common_MeasurementCoordinate_Forward_copy(dst,(const UMAA_Common_MeasurementCoordinate_Forward*) src);
}

void 
UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_Forward *sample,
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
UMAA_Common_MeasurementCoordinate_ForwardPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_Forward *dst,
    const UMAA_Common_MeasurementCoordinate_Forward *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_ForwardSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_ForwardSpeed*
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_ForwardSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_ForwardSpeed *
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_ForwardSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_ForwardSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_ForwardSpeed *
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_ForwardSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample) {

    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_ForwardSpeed *src)
{
    return UMAA_Common_MeasurementCoordinate_ForwardSpeed_copy(dst,(const UMAA_Common_MeasurementCoordinate_ForwardSpeed*) src);
}

void 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
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
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_ForwardSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_ForwardSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_NorthSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_NorthSpeed*
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_NorthSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_NorthSpeed *
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_NorthSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_NorthSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_NorthSpeed *
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_NorthSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *sample) {

    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_NorthSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_NorthSpeed *src)
{
    return UMAA_Common_MeasurementCoordinate_NorthSpeed_copy(dst,(const UMAA_Common_MeasurementCoordinate_NorthSpeed*) src);
}

void 
UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
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
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_NorthSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_NorthSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_RadarHeight
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_RadarHeight*
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_RadarHeight();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_RadarHeight *
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_RadarHeight();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_RadarHeight_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_RadarHeight *
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_RadarHeight_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_RadarHeight *sample) {

    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_RadarHeight *dst,
    const UMAA_Common_MeasurementCoordinate_RadarHeight *src)
{
    return UMAA_Common_MeasurementCoordinate_RadarHeight_copy(dst,(const UMAA_Common_MeasurementCoordinate_RadarHeight*) src);
}

void 
UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
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
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_RadarHeight *dst,
    const UMAA_Common_MeasurementCoordinate_RadarHeight *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_Right
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_Right*
UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_Right *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Right();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Right_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_Right_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Right_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_Right *
UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_Right *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_Right();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_Right_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_Right_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_Right_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_Right *
UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_Right *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_Right_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_Right *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_Right_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_Right *sample) {

    UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_RightPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_Right *dst,
    const UMAA_Common_MeasurementCoordinate_Right *src)
{
    return UMAA_Common_MeasurementCoordinate_Right_copy(dst,(const UMAA_Common_MeasurementCoordinate_Right*) src);
}

void 
UMAA_Common_MeasurementCoordinate_RightPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_Right *sample,
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
UMAA_Common_MeasurementCoordinate_RightPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_Right *dst,
    const UMAA_Common_MeasurementCoordinate_Right *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_RightPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_RightPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_RightSpeed
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_RightSpeed*
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_RightSpeed();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_RightSpeed *
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_RightSpeed();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_RightSpeed_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_RightSpeed *
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_RightSpeed_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_RightSpeed *sample) {

    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_RightSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_RightSpeed *src)
{
    return UMAA_Common_MeasurementCoordinate_RightSpeed_copy(dst,(const UMAA_Common_MeasurementCoordinate_RightSpeed*) src);
}

void 
UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
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
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_RightSpeed *dst,
    const UMAA_Common_MeasurementCoordinate_RightSpeed *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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
