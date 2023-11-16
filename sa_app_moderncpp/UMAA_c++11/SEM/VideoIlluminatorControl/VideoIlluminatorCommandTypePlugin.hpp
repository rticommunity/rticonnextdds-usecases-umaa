

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandTypePlugin_1485715203_h
#define VideoIlluminatorCommandTypePlugin_1485715203_h

#include "VideoIlluminatorCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace VideoIlluminatorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VideoIlluminatorCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VideoIlluminatorCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VideoIlluminatorCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VideoIlluminatorCommandType.
            */
            typedef class VideoIlluminatorCommandType VideoIlluminatorCommandTypeKeyHolder;

            #define VideoIlluminatorCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VideoIlluminatorCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VideoIlluminatorCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VideoIlluminatorCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VideoIlluminatorCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VideoIlluminatorCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VideoIlluminatorCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VideoIlluminatorCommandType*
            VideoIlluminatorCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VideoIlluminatorCommandType*
            VideoIlluminatorCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandType*
            VideoIlluminatorCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePluginSupport_copy_data(
                VideoIlluminatorCommandType *out,
                const VideoIlluminatorCommandType *in);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_destroy_data_w_params(
                VideoIlluminatorCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_destroy_data_ex(
                VideoIlluminatorCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_destroy_data(
                VideoIlluminatorCommandType *sample);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_print_data(
                const VideoIlluminatorCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VideoIlluminatorCommandType*
            VideoIlluminatorCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandType*
            VideoIlluminatorCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_destroy_key_ex(
                VideoIlluminatorCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePluginSupport_destroy_key(
                VideoIlluminatorCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VideoIlluminatorCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VideoIlluminatorCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VideoIlluminatorCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandType *out,
                const VideoIlluminatorCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VideoIlluminatorCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandTypePlugin_deserialize_from_cdr_buffer(
                VideoIlluminatorCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VideoIlluminatorCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandTypeKeyHolder *key, 
                const VideoIlluminatorCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandType *instance, 
                const VideoIlluminatorCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VideoIlluminatorCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VideoIlluminatorCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VideoIlluminatorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VideoIlluminatorCommandTypePlugin_1485715203_h */

