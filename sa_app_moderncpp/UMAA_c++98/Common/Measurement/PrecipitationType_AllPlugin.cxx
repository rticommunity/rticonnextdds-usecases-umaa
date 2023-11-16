
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrecipitationType_All.idl
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

#include "PrecipitationType_AllPlugin.h"

/* ----------------------------------------------------------------------------
*  Type UMAA_Common_Measurement_PrecipitationType_All
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

UMAA_Common_Measurement_PrecipitationType_All*
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    UMAA_Common_Measurement_PrecipitationType_All *sample = NULL;

    if (alloc_params == NULL) {
        return NULL;
    } else if(!alloc_params->allocate_memory) {
        RTICdrLog_exception(&RTI_CDR_LOG_TYPE_OBJECT_NOT_ASSIGNABLE_ss,
        "alloc_params->allocate_memory","false");
        return NULL;
    }

    sample = new (std::nothrow) UMAA_Common_Measurement_PrecipitationType_All();
    if (sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PrecipitationType_All_initialize_w_params(sample,alloc_params)) {
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
        UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(sample, &deallocParams);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PrecipitationType_All_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

UMAA_Common_Measurement_PrecipitationType_All *
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    UMAA_Common_Measurement_PrecipitationType_All *sample = NULL;

    sample = new (std::nothrow) UMAA_Common_Measurement_PrecipitationType_All();

    if(sample == NULL) {
        return NULL;
    }

    if (!UMAA_Common_Measurement_PrecipitationType_All_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        /* Coverity reports a possible uninit_use_in_call that will happen if the
        new fails. But if new fails then sample == null and the method will
        return before reach this point. */
        /* Coverity reports a possible overwrite_var on the members of the sample.
        It is a false positive since all the pointers are freed before assigning
        null to them. */
        /* coverity[uninit_use_in_call : FALSE] */
        /* coverity[overwrite_var : FALSE] */
        UMAA_Common_Measurement_PrecipitationType_All_finalize_ex(sample, RTI_TRUE);
        /* Coverity reports a possible leaked_storage on the sample members when 
        freeing sample. It is a false positive since all the members' memory 
        is freed in the call "UMAA_Common_Measurement_PrecipitationType_All_finalize_ex" */
        /* coverity[leaked_storage : FALSE] */
        delete  sample;
        sample=NULL;
    }

    return sample;
}

UMAA_Common_Measurement_PrecipitationType_All *
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_create_data(void)
{
    return UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_create_data_ex(RTI_TRUE);
}

void 
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_destroy_data_w_params(
    UMAA_Common_Measurement_PrecipitationType_All *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    UMAA_Common_Measurement_PrecipitationType_All_finalize_w_params(sample,dealloc_params);

    delete  sample;
}

void 
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_destroy_data_ex(
    UMAA_Common_Measurement_PrecipitationType_All *sample,RTIBool deallocate_pointers) {
    UMAA_Common_Measurement_PrecipitationType_All_finalize_ex(sample,deallocate_pointers);

    delete  sample;
}

void 
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_destroy_data(
    UMAA_Common_Measurement_PrecipitationType_All *sample) {

    UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_copy_data(
    UMAA_Common_Measurement_PrecipitationType_All *dst,
    const UMAA_Common_Measurement_PrecipitationType_All *src)
{
    return UMAA_Common_Measurement_PrecipitationType_All_copy(dst,(const UMAA_Common_Measurement_PrecipitationType_All*) src);
}

void 
UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_print_data(
    const UMAA_Common_Measurement_PrecipitationType_All *sample,
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

    if (UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_get_contiguous_bufferI(&sample->domain) != NULL) {
        RTICdrType_printArray(
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_get_contiguous_bufferI(&sample->domain), 
            (RTICdrUnsignedLong) UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_get_length(&sample->domain),
            sizeof(UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType),
            (RTICdrTypePrintFunction)UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePluginSupport_print_data,
            "domain", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_get_discontiguous_bufferI(&sample->domain), 
            (RTICdrUnsignedLong) UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypeSeq_get_length(&sample->domain),
            (RTICdrTypePrintFunction)UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePluginSupport_print_data,
            "domain", indent_level + 1);
    }

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePluginSupport_print_data(
        (const UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType*) &sample->setPoint, "setPoint", indent_level + 1);

    UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumTypePluginSupport_print_data(
        (const UMAA_Common_Enumeration_PrecipitationEnumType_PrecipitationEnumType*) &sample->value, "value", indent_level + 1);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_participant_attached(
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
        UMAA_Common_Measurement_PrecipitationType_All_get_typecode(),
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_participant_detached(
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_endpoint_attached(
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
        UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size, epd,
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
UMAA_Common_Measurement_PrecipitationType_AllPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PrecipitationType_All *sample,
    void *handle)
{
    UMAA_Common_Measurement_PrecipitationType_All_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

void UMAA_Common_Measurement_PrecipitationType_AllPlugin_finalize_optional_members(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PrecipitationType_All* sample,
    RTIBool deletePointers)
{
    RTIOsapiUtility_unusedParameter(endpoint_data);
    UMAA_Common_Measurement_PrecipitationType_All_finalize_optional_members(
        sample, deletePointers);
}

RTIBool 
UMAA_Common_Measurement_PrecipitationType_AllPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PrecipitationType_All *dst,
    const UMAA_Common_Measurement_PrecipitationType_All *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return UMAA_Common_Measurement_PrecipitationType_AllPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
UMAA_Common_Measurement_PrecipitationType_AllPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const UMAA_Common_Measurement_PrecipitationType_All *sample,
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
    UMAA_Common_Measurement_PrecipitationType_All_get_typecode();
    pd.programs = UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_programs();
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
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const UMAA_Common_Measurement_PrecipitationType_All *sample)
{
    return UMAA_Common_Measurement_PrecipitationType_AllPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
UMAA_Common_Measurement_PrecipitationType_AllPlugin_deserialize_from_cdr_buffer(
    UMAA_Common_Measurement_PrecipitationType_All *sample,
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
    UMAA_Common_Measurement_PrecipitationType_All_get_typecode();
    pd.programs = UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
    RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    UMAA_Common_Measurement_PrecipitationType_All_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#if !defined(NDDS_STANDALONE_TYPE)
DDS_ReturnCode_t
UMAA_Common_Measurement_PrecipitationType_AllPlugin_data_to_string(
    const UMAA_Common_Measurement_PrecipitationType_All *sample,
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
    if (!UMAA_Common_Measurement_PrecipitationType_AllPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!UMAA_Common_Measurement_PrecipitationType_AllPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        UMAA_Common_Measurement_PrecipitationType_All_get_typecode(), 
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size(
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool UMAA_Common_Measurement_PrecipitationType_AllPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UMAA_Common_Measurement_PrecipitationType_All **sample, 
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_key_max_size(
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
UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_key_max_size_for_keyhash(
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

struct RTIXCdrInterpreterPrograms * UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_programs(void)
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    UMAA_Common_Measurement_PrecipitationType_All, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *UMAA_Common_Measurement_PrecipitationType_AllPlugin_new(void) 
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
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_key_kind;

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
    plugin->typeCode =  (struct RTICdrTypeCode *)UMAA_Common_Measurement_PrecipitationType_All_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    UMAA_Common_Measurement_PrecipitationType_AllPlugin_return_buffer;
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

    plugin->endpointTypeName = UMAA_Common_Measurement_PrecipitationType_AllTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
UMAA_Common_Measurement_PrecipitationType_AllPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
