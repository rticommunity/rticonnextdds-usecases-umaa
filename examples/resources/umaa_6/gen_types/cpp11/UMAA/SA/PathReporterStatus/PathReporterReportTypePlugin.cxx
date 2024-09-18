

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
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

#include "PathReporterReportTypePlugin.hpp"

namespace UMAA {
    namespace SA {
        namespace PathReporterStatus {

            /* ----------------------------------------------------------------------------
            *  Type PathReporterReportType
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PathReporterReportType *
            PathReporterReportTypePluginSupport_create_data(void)
            {
                try {
                    PathReporterReportType *sample = new PathReporterReportType();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            PathReporterReportTypePluginSupport_destroy_data(
                PathReporterReportType *sample) 
            {
                delete sample;
            }

            RTIBool 
            PathReporterReportTypePluginSupport_copy_data(
                PathReporterReportType *dst,
                const PathReporterReportType *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            PathReporterReportType *
            PathReporterReportTypePluginSupport_create_key(void)
            {
                return PathReporterReportTypePluginSupport_create_data();
            }

            void 
            PathReporterReportTypePluginSupport_destroy_key(
                PathReporterReportTypeKeyHolder *key) 
            {
                PathReporterReportTypePluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PathReporterReportTypePlugin_on_participant_attached(
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportType >::get().native()
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
            PathReporterReportTypePlugin_on_participant_detached(
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
            PathReporterReportTypePlugin_on_endpoint_attached(
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
                        PathReporterReportTypePluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        PathReporterReportTypePluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = PathReporterReportTypePlugin_get_serialized_key_max_size_for_keyhash(
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
                        serializedSampleMaxSize = ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_serialized_sample_max_size, epd,
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
            PathReporterReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PathReporterReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "PathReporterReportTypePlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PathReporterReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData,
                PathReporterReportType *dst,
                const PathReporterReportType *src)
            {
                return ::UMAA::SA::PathReporterStatus::PathReporterReportTypePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PathReporterReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportType *sample,
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
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportType >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    PathReporterReportType, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    PathReporterReportTypePlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlugin_deserialize_from_cdr_buffer(
                PathReporterReportType *sample,
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
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportType >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                PathReporterReportType, 
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
            PathReporterReportTypePlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool PathReporterReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType **sample, 
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
            PathReporterReportTypePlugin_get_serialized_key_max_size(
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
            PathReporterReportTypePlugin_get_serialized_key_max_size_for_keyhash(
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
            PathReporterReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeKeyHolder *dst, 
                const PathReporterReportType *src)
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
            PathReporterReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType *dst, const
                PathReporterReportTypeKeyHolder *src)
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
            PathReporterReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                PathReporterReportType * sample = NULL;
                sample = (PathReporterReportType *)
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
            struct PRESTypePlugin *PathReporterReportTypePlugin_new(void) 
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
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PathReporterReportTypePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PathReporterReportTypePlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PathReporterReportTypePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PathReporterReportTypePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                PathReporterReportTypePlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                PathReporterReportTypePlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportType >::get().native();
                } catch (...) {
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PathReporterReportTypePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PathReporterReportTypePlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::SA::PathReporterStatus::PathReporterReportType";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            PathReporterReportTypePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type PathReporterReportTypeHistoricalGlobalPathsListElement
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PathReporterReportTypeHistoricalGlobalPathsListElement *
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data(void)
            {
                try {
                    PathReporterReportTypeHistoricalGlobalPathsListElement *sample = new PathReporterReportTypeHistoricalGlobalPathsListElement();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample) 
            {
                delete sample;
            }

            RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypeHistoricalGlobalPathsListElement *dst,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            PathReporterReportTypeHistoricalGlobalPathsListElement *
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_key(void)
            {
                return PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data();
            }

            void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *key) 
            {
                PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_attached(
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalGlobalPathsListElement >::get().native()
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_detached(
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_attached(
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
                        PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
                        serializedSampleMaxSize = ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size, epd,
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData,
                PathReporterReportTypeHistoricalGlobalPathsListElement *dst,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *src)
            {
                return ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
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
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalGlobalPathsListElement >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    PathReporterReportTypeHistoricalGlobalPathsListElement, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
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
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalGlobalPathsListElement >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                PathReporterReportTypeHistoricalGlobalPathsListElement, 
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement **sample, 
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size(
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *dst, 
                const PathReporterReportTypeHistoricalGlobalPathsListElement *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement *dst, const
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                PathReporterReportTypeHistoricalGlobalPathsListElement * sample = NULL;
                sample = (PathReporterReportTypeHistoricalGlobalPathsListElement *)
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
            struct PRESTypePlugin *PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_new(void) 
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
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement >::get().native();
                } catch (...) {
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalGlobalPathsListElement";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type PathReporterReportTypeHistoricalLocalPathsListElement
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PathReporterReportTypeHistoricalLocalPathsListElement *
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data(void)
            {
                try {
                    PathReporterReportTypeHistoricalLocalPathsListElement *sample = new PathReporterReportTypeHistoricalLocalPathsListElement();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample) 
            {
                delete sample;
            }

            RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypeHistoricalLocalPathsListElement *dst,
                const PathReporterReportTypeHistoricalLocalPathsListElement *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            PathReporterReportTypeHistoricalLocalPathsListElement *
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_key(void)
            {
                return PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data();
            }

            void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *key) 
            {
                PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_attached(
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalLocalPathsListElement >::get().native()
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_detached(
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_attached(
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
                        PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
                        serializedSampleMaxSize = ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size, epd,
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData,
                PathReporterReportTypeHistoricalLocalPathsListElement *dst,
                const PathReporterReportTypeHistoricalLocalPathsListElement *src)
            {
                return ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypeHistoricalLocalPathsListElement *sample,
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
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalLocalPathsListElement >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    PathReporterReportTypeHistoricalLocalPathsListElement, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,
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
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypeHistoricalLocalPathsListElement >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                PathReporterReportTypeHistoricalLocalPathsListElement, 
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement **sample, 
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size(
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *dst, 
                const PathReporterReportTypeHistoricalLocalPathsListElement *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement *dst, const
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                PathReporterReportTypeHistoricalLocalPathsListElement * sample = NULL;
                sample = (PathReporterReportTypeHistoricalLocalPathsListElement *)
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
            struct PRESTypePlugin *PathReporterReportTypeHistoricalLocalPathsListElementPlugin_new(void) 
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
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement >::get().native();
                } catch (...) {
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElementPlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::SA::PathReporterStatus::PathReporterReportTypeHistoricalLocalPathsListElement";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type PathReporterReportTypePlannedGlobalPathsListElement
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PathReporterReportTypePlannedGlobalPathsListElement *
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data(void)
            {
                try {
                    PathReporterReportTypePlannedGlobalPathsListElement *sample = new PathReporterReportTypePlannedGlobalPathsListElement();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypePlannedGlobalPathsListElement *sample) 
            {
                delete sample;
            }

            RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypePlannedGlobalPathsListElement *dst,
                const PathReporterReportTypePlannedGlobalPathsListElement *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            PathReporterReportTypePlannedGlobalPathsListElement *
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_key(void)
            {
                return PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data();
            }

            void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *key) 
            {
                PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_attached(
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedGlobalPathsListElement >::get().native()
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_detached(
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_attached(
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
                        PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
                        serializedSampleMaxSize = ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size, epd,
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData,
                PathReporterReportTypePlannedGlobalPathsListElement *dst,
                const PathReporterReportTypePlannedGlobalPathsListElement *src)
            {
                return ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypePlannedGlobalPathsListElement *sample,
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
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedGlobalPathsListElement >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    PathReporterReportTypePlannedGlobalPathsListElement, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypePlannedGlobalPathsListElement *sample,
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
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedGlobalPathsListElement >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                PathReporterReportTypePlannedGlobalPathsListElement, 
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement **sample, 
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size(
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *dst, 
                const PathReporterReportTypePlannedGlobalPathsListElement *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement *dst, const
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                PathReporterReportTypePlannedGlobalPathsListElement * sample = NULL;
                sample = (PathReporterReportTypePlannedGlobalPathsListElement *)
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
            struct PRESTypePlugin *PathReporterReportTypePlannedGlobalPathsListElementPlugin_new(void) 
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
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement >::get().native();
                } catch (...) {
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElementPlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedGlobalPathsListElement";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type PathReporterReportTypePlannedLocalPathsListElement
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PathReporterReportTypePlannedLocalPathsListElement *
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data(void)
            {
                try {
                    PathReporterReportTypePlannedLocalPathsListElement *sample = new PathReporterReportTypePlannedLocalPathsListElement();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypePlannedLocalPathsListElement *sample) 
            {
                delete sample;
            }

            RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypePlannedLocalPathsListElement *dst,
                const PathReporterReportTypePlannedLocalPathsListElement *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            PathReporterReportTypePlannedLocalPathsListElement *
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_key(void)
            {
                return PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data();
            }

            void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *key) 
            {
                PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_attached(
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
                        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedLocalPathsListElement >::get().native()
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_detached(
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_attached(
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
                        PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
                        serializedSampleMaxSize = ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size, epd,
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PathReporterReportTypePlannedLocalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "PathReporterReportTypePlannedLocalPathsListElementPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData,
                PathReporterReportTypePlannedLocalPathsListElement *dst,
                const PathReporterReportTypePlannedLocalPathsListElement *src)
            {
                return ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            PathReporterReportTypePlannedLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypePlannedLocalPathsListElement *sample,
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
                        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedLocalPathsListElement >::get().native()
                        ;
                    } catch (...) {
                        return RTI_FALSE;
                    }
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    PathReporterReportTypePlannedLocalPathsListElement, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypePlannedLocalPathsListElement *sample,
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
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< PathReporterReportTypePlannedLocalPathsListElement >::get().native()
                    ;
                } catch (...) {
                    return RTI_FALSE;
                }
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                PathReporterReportTypePlannedLocalPathsListElement, 
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size(
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement **sample, 
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size(
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
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
            PathReporterReportTypePlannedLocalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *dst, 
                const PathReporterReportTypePlannedLocalPathsListElement *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement *dst, const
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->listID() = src->listID();
                    dst->elementID() = src->elementID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                PathReporterReportTypePlannedLocalPathsListElement * sample = NULL;
                sample = (PathReporterReportTypePlannedLocalPathsListElement *)
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
            struct PRESTypePlugin *PathReporterReportTypePlannedLocalPathsListElementPlugin_new(void) 
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
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                try {
                    plugin->typeCode = (struct RTICdrTypeCode *)
                    &::rti::topic::dynamic_type< ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement >::get().native();
                } catch (...) {
                    ::UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElementPlugin_delete(plugin);
                    return NULL;
                }
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PathReporterReportTypePlannedLocalPathsListElementPlugin_return_buffer;
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

                static const char * TYPE_NAME = "UMAA::SA::PathReporterStatus::PathReporterReportTypePlannedLocalPathsListElement";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            PathReporterReportTypePlannedLocalPathsListElementPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace PathReporterStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */
#undef RTI_CDR_CURRENT_SUBMODULE 