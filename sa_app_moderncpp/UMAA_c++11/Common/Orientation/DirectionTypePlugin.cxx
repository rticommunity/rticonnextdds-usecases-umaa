

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
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

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
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

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "DirectionTypePlugin.hpp"

namespace UMAA {
    namespace Common {
        namespace Orientation {
            namespace DirectionType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                DirectionType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void DirectionType_SelectorsPluginSupport_print_data(
                    const DirectionType_Selectors *sample,
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

                    RTICdrType_printEnum((RTICdrEnum *)sample, "DirectionType_Selectors", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */

                /* ----------------------------------------------------------------------------
                *  Type DirectionType_Union
                * -------------------------------------------------------------------------- */

                /* -----------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------- */

                DirectionType_Union *
                DirectionType_UnionPluginSupport_create_data(void)
                {
                    try {
                        DirectionType_Union *sample = new DirectionType_Union();
                        ::rti::topic::allocate_sample(*sample);
                        return sample;
                    } catch (...) {
                        return NULL;
                    }
                }

                void 
                DirectionType_UnionPluginSupport_destroy_data(
                    DirectionType_Union *sample) 
                {
                    delete sample;
                }

                RTIBool 
                DirectionType_UnionPluginSupport_copy_data(
                    DirectionType_Union *dst,
                    const DirectionType_Union *src)
                {
                    try {
                        *dst = *src;
                    } catch (...) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                PRESTypePluginParticipantData 
                DirectionType_UnionPlugin_on_participant_attached(
                    void *registration_data,
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration,
                    void *container_plugin_context,
                    RTICdrTypeCode *type_code)
                {
                    struct RTIXCdrInterpreterPrograms *programs = NULL;
                    struct PRESTypePluginDefaultParticipantData *pd = NULL;
                    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
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

                    programProperty.externalReferenceSize = 
                    (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
                    programProperty.getExternalRefPointerFcn = 
                    ::rti::topic::interpreter::get_external_value_pointer;

                    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                        DDS_TypeCodeFactory_get_instance(),
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType_Union >::get().native()
                        ,
                        &programProperty,
                        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

                    if (programs == NULL) {
                        PRESTypePluginDefaultParticipantData_delete(
                            (PRESTypePluginParticipantData)pd);
                        return NULL;
                    }

                    pd->programs = programs;
                    return (PRESTypePluginParticipantData)pd;
                }

                void 
                DirectionType_UnionPlugin_on_participant_detached(
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
                DirectionType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *containerPluginContext)
                {
                    try {
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
                            DirectionType_UnionPluginSupport_create_data,
                            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                            DirectionType_UnionPluginSupport_destroy_data,
                            NULL , NULL );

                        if (epd == NULL) {
                            return NULL;
                        } 

                        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                            serializedSampleMaxSize = ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_get_serialized_sample_max_size(
                                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                                epd,
                                endpoint_info,
                                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                                ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_get_serialized_sample_max_size, epd,
                                (PRESTypePluginGetSerializedSampleSizeFunction)
                                PRESTypePlugin_interpretedGetSerializedSampleSize,
                                epd) == RTI_FALSE) {
                                PRESTypePluginDefaultEndpointData_delete(epd);
                                return NULL;
                            }
                        }

                        return epd;
                    } catch (...) {
                        return NULL;
                    }
                }

                void 
                DirectionType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data)
                {  
                    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
                }

                void    
                DirectionType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union *sample,
                    void *handle)
                {
                    try {
                        ::rti::topic::reset_sample(*sample);
                    } catch(const std::exception& ex) {
                        RTICdrLog_logWithFunctionName(
                            RTI_LOG_BIT_EXCEPTION,
                            "DirectionType_UnionPlugin_return_sample",
                            &RTI_LOG_ANY_FAILURE_ss,
                            "exception: ",
                            ex.what());
                    }

                    PRESTypePluginDefaultEndpointData_returnSample(
                        endpoint_data, sample, handle);
                }

                RTIBool 
                DirectionType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData,
                    DirectionType_Union *dst,
                    const DirectionType_Union *src)
                {
                    return ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPluginSupport_copy_data(dst,src);
                }

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */
                unsigned int 
                DirectionType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                RTIBool
                DirectionType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const DirectionType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation)
                {
                    using namespace ::dds::core::policy;

                    try{
                        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                        struct RTICdrStream stream;
                        struct PRESTypePluginDefaultEndpointData epd;
                        RTIBool result;
                        struct PRESTypePluginDefaultParticipantData pd;
                        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                        RTIXCdrTypePluginProgramContext_INTIALIZER;
                        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                        if (length == NULL) {
                            return RTI_FALSE;
                        }

                        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                        epd.programContext = defaultProgramContext;
                        epd._participantData = &pd;
                        epd.typePlugin = &plugin;
                        epd.programContext.endpointPluginData = &epd;
                        plugin.typeCode = (struct RTICdrTypeCode *)
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType_Union >::get().native()
                        ;
                        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                        DirectionType_Union, 
                        true, true, true>();

                        encapsulationId = DDS_TypeCode_get_native_encapsulation(
                            (DDS_TypeCode *) plugin.typeCode,
                            representation);

                        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                            return RTI_FALSE;
                        }

                        epd._maxSizeSerializedSample =
                        DirectionType_UnionPlugin_get_serialized_sample_max_size(
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
                    } catch (...) {
                        return RTI_FALSE;
                    }
                }

                RTIBool
                DirectionType_UnionPlugin_deserialize_from_cdr_buffer(
                    DirectionType_Union *sample,
                    const char * buffer,
                    unsigned int length)
                {
                    struct RTICdrStream stream;
                    struct PRESTypePluginDefaultParticipantData pd;
                    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                    RTIXCdrTypePluginProgramContext_INTIALIZER;
                    struct PRESTypePlugin plugin;
                    struct PRESTypePluginDefaultEndpointData epd;

                    RTICdrStream_init(&stream);
                    RTICdrStream_set(&stream, (char *)buffer, length);

                    epd.programContext = defaultProgramContext;
                    epd._participantData = &pd;
                    epd.typePlugin = &plugin;
                    epd.programContext.endpointPluginData = &epd;
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType_Union >::get().native()
                    ;
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    DirectionType_Union, 
                    true, true, true>();

                    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
                    RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

                    ::rti::topic::reset_sample(*sample);
                    return PRESTypePlugin_interpretedDeserialize( 
                        (PRESTypePluginEndpointData)&epd,
                        sample,
                        &stream, 
                        RTI_TRUE, 
                        RTI_TRUE, 
                        NULL);
                }

                unsigned int 
                DirectionType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int size;
                        RTIBool overflow = RTI_FALSE;

                        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                        if (overflow) {
                            size = RTI_CDR_MAX_SERIALIZED_SIZE;
                        }

                        return size;
                    } catch (...) {
                        return 0;
                    }
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                PRESTypePluginKeyKind 
                DirectionType_UnionPlugin_get_key_kind(void)
                {
                    return PRES_TYPEPLUGIN_NO_KEY;
                }

                RTIBool DirectionType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos)
                {
                    try {
                        RTIBool result;
                        if (drop_sample) {} /* To avoid warnings */
                        stream->_xTypesState.unassignable = RTI_FALSE;
                        result= PRESTypePlugin_interpretedDeserializeKey( 
                            endpoint_data, (sample != NULL)?*sample:NULL, stream,
                            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                        if (result) {
                            if (stream->_xTypesState.unassignable) {
                                result = RTI_FALSE;
                            }
                        }
                        return result;    
                    } catch (...) {
                        return RTI_FALSE;
                    }     
                }

                unsigned int
                DirectionType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int size;
                        RTIBool overflow = RTI_FALSE;

                        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                        if (overflow) {
                            size = RTI_CDR_MAX_SERIALIZED_SIZE;
                        }

                        return size;
                    } catch (...) {
                        return RTI_FALSE;
                    }    
                }

                unsigned int
                DirectionType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
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
                struct PRESTypePlugin *DirectionType_UnionPlugin_new(void) 
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
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_on_participant_attached;
                    plugin->onParticipantDetached =
                    (PRESTypePluginOnParticipantDetachedCallback)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_on_participant_detached;
                    plugin->onEndpointAttached =
                    (PRESTypePluginOnEndpointAttachedCallback)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_on_endpoint_attached;
                    plugin->onEndpointDetached =
                    (PRESTypePluginOnEndpointDetachedCallback)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_on_endpoint_detached;

                    plugin->copySampleFnc =
                    (PRESTypePluginCopySampleFunction)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_copy_sample;
                    plugin->createSampleFnc =
                    (PRESTypePluginCreateSampleFunction)
                    DirectionType_UnionPlugin_create_sample;
                    plugin->destroySampleFnc =
                    (PRESTypePluginDestroySampleFunction)
                    DirectionType_UnionPlugin_destroy_sample;

                    plugin->serializeFnc = 
                    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                    plugin->deserializeFnc =
                    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                    plugin->getSerializedSampleMaxSizeFnc =
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_get_serialized_sample_max_size;
                    plugin->getSerializedSampleMinSizeFnc =
                    (PRESTypePluginGetSerializedSampleMinSizeFunction)
                    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                    plugin->getSampleFnc =
                    (PRESTypePluginGetSampleFunction)
                    DirectionType_UnionPlugin_get_sample;
                    plugin->returnSampleFnc =
                    (PRESTypePluginReturnSampleFunction)
                    DirectionType_UnionPlugin_return_sample;
                    plugin->getKeyKindFnc =
                    (PRESTypePluginGetKeyKindFunction)
                    ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_UnionPlugin_get_key_kind;

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
                    plugin->typeCode = (struct RTICdrTypeCode *) 
                    &::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union >::get().native();
                    #endif
                    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                    /* Serialized buffer */
                    plugin->getBuffer = 
                    (PRESTypePluginGetBufferFunction)
                    DirectionType_UnionPlugin_get_buffer;
                    plugin->returnBuffer = 
                    (PRESTypePluginReturnBufferFunction)
                    DirectionType_UnionPlugin_return_buffer;
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

                    static const char * TYPE_NAME = "UMAA::Common::Orientation::DirectionType_Specializations::DirectionType_Union";
                    plugin->endpointTypeName = TYPE_NAME;
                    plugin->isMetpType = RTI_FALSE;
                    return plugin;
                }

                void
                DirectionType_UnionPlugin_delete(struct PRESTypePlugin *plugin)
                {
                    RTIOsapiHeap_freeStructure(plugin);
                } 
            } /* namespace DirectionType_Specializations  */

            /* ----------------------------------------------------------------------------
            *  Type DirectionType
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            DirectionType *
            DirectionTypePluginSupport_create_data(void)
            {
                try {
                    DirectionType *sample = new DirectionType();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            DirectionTypePluginSupport_destroy_data(
                DirectionType *sample) 
            {
                delete sample;
            }

            RTIBool 
            DirectionTypePluginSupport_copy_data(
                DirectionType *dst,
                const DirectionType *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            DirectionTypePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
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

                programProperty.externalReferenceSize = 
                (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
                programProperty.getExternalRefPointerFcn = 
                ::rti::topic::interpreter::get_external_value_pointer;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType >::get().native()
                    ,
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData)pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            DirectionTypePlugin_on_participant_detached(
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
            DirectionTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
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
                        DirectionTypePluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        DirectionTypePluginSupport_destroy_data,
                        NULL , NULL );

                    if (epd == NULL) {
                        return NULL;
                    } 

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = ::UMAA::Common::Orientation::DirectionTypePlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::Common::Orientation::DirectionTypePlugin_get_serialized_sample_max_size, epd,
                            (PRESTypePluginGetSerializedSampleSizeFunction)
                            PRESTypePlugin_interpretedGetSerializedSampleSize,
                            epd) == RTI_FALSE) {
                            PRESTypePluginDefaultEndpointData_delete(epd);
                            return NULL;
                        }
                    }

                    return epd;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            DirectionTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            DirectionTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "DirectionTypePlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            DirectionTypePlugin_copy_sample(
                PRESTypePluginEndpointData,
                DirectionType *dst,
                const DirectionType *src)
            {
                return ::UMAA::Common::Orientation::DirectionTypePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            DirectionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            DirectionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionType *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream stream;
                    struct PRESTypePluginDefaultEndpointData epd;
                    RTIBool result;
                    struct PRESTypePluginDefaultParticipantData pd;
                    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                    RTIXCdrTypePluginProgramContext_INTIALIZER;
                    struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                    if (length == NULL) {
                        return RTI_FALSE;
                    }

                    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                    epd.programContext = defaultProgramContext;
                    epd._participantData = &pd;
                    epd.typePlugin = &plugin;
                    epd.programContext.endpointPluginData = &epd;
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType >::get().native()
                    ;
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    DirectionType, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    DirectionTypePlugin_get_serialized_sample_max_size(
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
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            DirectionTypePlugin_deserialize_from_cdr_buffer(
                DirectionType *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< DirectionType >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                DirectionType, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
                RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream, 
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            DirectionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return 0;
                }
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            DirectionTypePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool DirectionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    stream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, stream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (stream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            DirectionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            unsigned int
            DirectionTypePlugin_get_serialized_key_max_size_for_keyhash(
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
            struct PRESTypePlugin *DirectionTypePlugin_new(void) 
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
                ::UMAA::Common::Orientation::DirectionTypePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::Common::Orientation::DirectionTypePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::Common::Orientation::DirectionTypePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::Common::Orientation::DirectionTypePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::Common::Orientation::DirectionTypePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                DirectionTypePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                DirectionTypePlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::Common::Orientation::DirectionTypePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                DirectionTypePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                DirectionTypePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::Common::Orientation::DirectionTypePlugin_get_key_kind;

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
                plugin->typeCode = (struct RTICdrTypeCode *) 
                &::rti::topic::dynamic_type< ::UMAA::Common::Orientation::DirectionType >::get().native();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                DirectionTypePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                DirectionTypePlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::Common::Orientation::DirectionType";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            DirectionTypePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */
#undef RTI_CDR_CURRENT_SUBMODULE 
