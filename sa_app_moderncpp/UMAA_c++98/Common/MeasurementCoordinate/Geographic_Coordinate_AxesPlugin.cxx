
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Geographic_Coordinate_Axes.idl
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

#include "Geographic_Coordinate_AxesPlugin.h"

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_MeasurementCoordinate_EllipsoidalHeight
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_EllipsoidalHeight*
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_EllipsoidalHeight();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_EllipsoidalHeight();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample) {

    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *dst,
    const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *src)
{
    return UMAA_Common_MeasurementCoordinate_EllipsoidalHeight_copy(dst,(const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight*) src);
}

void 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
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
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *dst,
    const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_GeodeticLatitude
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_GeodeticLatitude*
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_GeodeticLatitude();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_GeodeticLatitude *
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_GeodeticLatitude();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_GeodeticLatitude_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_GeodeticLatitude *
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample) {

    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *src)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLatitude_copy(dst,(const UMAA_Common_MeasurementCoordinate_GeodeticLatitude*) src);
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
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
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_GeodeticLatitude *dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_GeodeticLongitude
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_GeodeticLongitude*
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_GeodeticLongitude();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_GeodeticLongitude *
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_GeodeticLongitude();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_GeodeticLongitude_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_GeodeticLongitude *
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample) {

    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *src)
{
    return UMAA_Common_MeasurementCoordinate_GeodeticLongitude_copy(dst,(const UMAA_Common_MeasurementCoordinate_GeodeticLongitude*) src);
}

void 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
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
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_GeodeticLongitude *dst,
    const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_key_max_size_for_keyhash(
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
*  Type UMAA_Common_MeasurementCoordinate_MSLHeight
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_MeasurementCoordinate_MSLHeight*
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_MSLHeight();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_MeasurementCoordinate_MSLHeight *
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_MeasurementCoordinate_MSLHeight();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_MeasurementCoordinate_MSLHeight_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_MeasurementCoordinate_MSLHeight *
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data(void)
{
    return UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data_w_params(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data_ex(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample,RTIBool deallocate_pointers) {
    UMAA_Common_MeasurementCoordinate_MSLHeight_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data(
    UMAA_Common_MeasurementCoordinate_MSLHeight *sample) {

    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_copy_data(
    UMAA_Common_MeasurementCoordinate_MSLHeight *dst,
    const UMAA_Common_MeasurementCoordinate_MSLHeight *src)
{
    return UMAA_Common_MeasurementCoordinate_MSLHeight_copy(dst,(const UMAA_Common_MeasurementCoordinate_MSLHeight*) src);
}

void 
UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_print_data(
    const UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
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
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_MeasurementCoordinate_MSLHeight *dst,
    const UMAA_Common_MeasurementCoordinate_MSLHeight *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_sample_max_size(
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
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_key_max_size(
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
UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_key_max_size_for_keyhash(
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
