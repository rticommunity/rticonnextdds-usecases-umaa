

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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

#include "CommsChannelConfigReportTypePlugin.hpp"

namespace UMAA {
    namespace CO {
        namespace CommsChannelConfig {

            /* ----------------------------------------------------------------------------
            *  Type CommsChannelConfigReportType
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            CommsChannelConfigReportType *
            CommsChannelConfigReportTypePluginSupport_create_data(void)
            {
                try {
                    CommsChannelConfigReportType *sample = new CommsChannelConfigReportType();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            CommsChannelConfigReportTypePluginSupport_destroy_data(
                CommsChannelConfigReportType *sample) 
            {
                delete sample;
            }

            RTIBool 
            CommsChannelConfigReportTypePluginSupport_copy_data(
                CommsChannelConfigReportType *dst,
                const CommsChannelConfigReportType *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            CommsChannelConfigReportType *
            CommsChannelConfigReportTypePluginSupport_create_key(void)
            {
                return CommsChannelConfigReportTypePluginSupport_create_data();
            }

            void 
            CommsChannelConfigReportTypePluginSupport_destroy_key(
                CommsChannelConfigReportTypeKeyHolder *key) 
            {
                CommsChannelConfigReportTypePluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            CommsChannelConfigReportTypePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                try {
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportType >::get().native()
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
                } catch (...) {
                    return NULL;
                }
            }

            void 
            CommsChannelConfigReportTypePlugin_on_participant_detached(
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
            CommsChannelConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
                    PRESTypePluginEndpointData epd = NULL;
                    unsigned int serializedSampleMaxSize = 0;

                    unsigned int serializedKeyMaxSize = 0;
                    unsigned int serializedKeyMaxSizeV2 = 0;

                    if (top_level_registration) {} /* To avoid warnings */
                    if (containerPluginContext) {} /* To avoid warnings */

                    if (participant_data == NULL) {
                        return NULL;
                    } 

                    epd = PRESTypePluginDefaultEndpointData_new(
                        participant_data,
                        endpoint_info,
                        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                        CommsChannelConfigReportTypePluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        CommsChannelConfigReportTypePluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = CommsChannelConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                        epd,
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                        0);

                    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                        epd,
                        endpoint_info,
                        serializedKeyMaxSize,
                        serializedKeyMaxSizeV2))  
                    {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size, epd,
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
            CommsChannelConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            CommsChannelConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "CommsChannelConfigReportTypePlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            CommsChannelConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData,
                CommsChannelConfigReportType *dst,
                const CommsChannelConfigReportType *src)
            {
                return ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            CommsChannelConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream cdrStream;
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
                    try {
                        plugin.typeCode = (struct RTICdrTypeCode *)
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportType >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    CommsChannelConfigReportType, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size(
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

                    RTICdrStream_init(&cdrStream);
                    RTICdrStream_set(&cdrStream, buffer, *length);

                    result = PRESTypePlugin_interpretedSerialize(
                        (PRESTypePluginEndpointData)&epd, 
                        sample, 
                        &cdrStream, 
                        RTI_TRUE, 
                        encapsulationId,
                        RTI_TRUE, 
                        NULL);  

                    *length = (unsigned int) RTICdrStream_getCurrentPositionOffset(&cdrStream);
                    return result;
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            CommsChannelConfigReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelConfigReportType *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream cdrStream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&cdrStream);
                /*
                * The buffer is constant because this is a deserialization function
                * (the buffer is an input parameter, not an output parameter).
                * However, the buffer member in the stream is a (char *) so coverity
                * complains in case something else modifies the buffer's contents later.
                *
                * We don't currently have a stream type with a constant buffer.
                * Therefore, we suppress the warning after making sure that this function
                * doesn't modify the contents of the stream's buffer.
                */
                /* coverity[cert_exp40_c_violation : FALSE] */
                RTICdrStream_set(&cdrStream, (char *) buffer, length);

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                try {
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportType >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                CommsChannelConfigReportType, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
                RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &cdrStream,
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size(
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
            CommsChannelConfigReportTypePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool CommsChannelConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    cdrStream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, cdrStream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (cdrStream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            CommsChannelConfigReportTypePlugin_get_serialized_key_max_size(
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
            CommsChannelConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
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

            RTIBool 
            CommsChannelConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeKeyHolder *dst, 
                const CommsChannelConfigReportType *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->source() = src->source();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            CommsChannelConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType *dst, const
                CommsChannelConfigReportTypeKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->source() = src->source();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            CommsChannelConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                CommsChannelConfigReportType * sample = NULL;
                sample = (CommsChannelConfigReportType *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    cdrStream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedInstanceToKeyHash(
                    endpoint_data,
                    keyhash,
                    sample,
                    RTICdrStream_getEncapsulationKind(cdrStream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;   
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *CommsChannelConfigReportTypePlugin_new(void) 
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
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                CommsChannelConfigReportTypePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                CommsChannelConfigReportTypePlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                CommsChannelConfigReportTypePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                CommsChannelConfigReportTypePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                CommsChannelConfigReportTypePlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                CommsChannelConfigReportTypePlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportType >::get().native();
                } catch (...) {
                    ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypePlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                CommsChannelConfigReportTypePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                CommsChannelConfigReportTypePlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::CO::CommsChannelConfig::CommsChannelConfigReportType";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            CommsChannelConfigReportTypePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type CommsChannelConfigReportTypeMessageConfigsSetElement
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            CommsChannelConfigReportTypeMessageConfigsSetElement *
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data(void)
            {
                try {
                    CommsChannelConfigReportTypeMessageConfigsSetElement *sample = new CommsChannelConfigReportTypeMessageConfigsSetElement();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample) 
            {
                delete sample;
            }

            RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_copy_data(
                CommsChannelConfigReportTypeMessageConfigsSetElement *dst,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            CommsChannelConfigReportTypeMessageConfigsSetElement *
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_key(void)
            {
                return CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data();
            }

            void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_key(
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *key) 
            {
                CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                try {
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportTypeMessageConfigsSetElement >::get().native()
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
                } catch (...) {
                    return NULL;
                }
            }

            void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_detached(
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
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
                    PRESTypePluginEndpointData epd = NULL;
                    unsigned int serializedSampleMaxSize = 0;

                    unsigned int serializedKeyMaxSize = 0;
                    unsigned int serializedKeyMaxSizeV2 = 0;

                    if (top_level_registration) {} /* To avoid warnings */
                    if (containerPluginContext) {} /* To avoid warnings */

                    if (participant_data == NULL) {
                        return NULL;
                    } 

                    epd = PRESTypePluginDefaultEndpointData_new(
                        participant_data,
                        endpoint_info,
                        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                        CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                        epd,
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                        0);

                    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                        epd,
                        endpoint_info,
                        serializedKeyMaxSize,
                        serializedKeyMaxSizeV2))  
                    {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size, epd,
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
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData,
                CommsChannelConfigReportTypeMessageConfigsSetElement *dst,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *src)
            {
                return ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream cdrStream;
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
                    try {
                        plugin.typeCode = (struct RTICdrTypeCode *)
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportTypeMessageConfigsSetElement >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    CommsChannelConfigReportTypeMessageConfigsSetElement, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size(
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

                    RTICdrStream_init(&cdrStream);
                    RTICdrStream_set(&cdrStream, buffer, *length);

                    result = PRESTypePlugin_interpretedSerialize(
                        (PRESTypePluginEndpointData)&epd, 
                        sample, 
                        &cdrStream, 
                        RTI_TRUE, 
                        encapsulationId,
                        RTI_TRUE, 
                        NULL);  

                    *length = (unsigned int) RTICdrStream_getCurrentPositionOffset(&cdrStream);
                    return result;
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize_from_cdr_buffer(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream cdrStream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&cdrStream);
                /*
                * The buffer is constant because this is a deserialization function
                * (the buffer is an input parameter, not an output parameter).
                * However, the buffer member in the stream is a (char *) so coverity
                * complains in case something else modifies the buffer's contents later.
                *
                * We don't currently have a stream type with a constant buffer.
                * Therefore, we suppress the warning after making sure that this function
                * doesn't modify the contents of the stream's buffer.
                */
                /* coverity[cert_exp40_c_violation : FALSE] */
                RTICdrStream_set(&cdrStream, (char *) buffer, length);

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                try {
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< CommsChannelConfigReportTypeMessageConfigsSetElement >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                CommsChannelConfigReportTypeMessageConfigsSetElement, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = 
                RTI_XCDR_ACCEPT_UNKNOWN_DISCRIMINATOR_AND_SELECT_DEFAULT;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &cdrStream,
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size(
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
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    cdrStream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, cdrStream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (cdrStream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size(
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
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
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

            RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *dst, 
                const CommsChannelConfigReportTypeMessageConfigsSetElement *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->setID() = src->setID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement *dst, const
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->setID() = src->setID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                CommsChannelConfigReportTypeMessageConfigsSetElement * sample = NULL;
                sample = (CommsChannelConfigReportTypeMessageConfigsSetElement *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    cdrStream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedInstanceToKeyHash(
                    endpoint_data,
                    keyhash,
                    sample,
                    RTICdrStream_getEncapsulationKind(cdrStream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;   
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_new(void) 
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
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElement >::get().native();
                } catch (...) {
                    ::UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::CO::CommsChannelConfig::CommsChannelConfigReportTypeMessageConfigsSetElement";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */
#undef RTI_CDR_CURRENT_SUBMODULE 
