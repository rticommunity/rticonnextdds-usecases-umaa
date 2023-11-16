

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandStatusTypePlugin_2018604370_h
#define VideoIlluminatorCommandStatusTypePlugin_2018604370_h

#include "VideoIlluminatorCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

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
            * By default, this type is struct VideoIlluminatorCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VideoIlluminatorCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VideoIlluminatorCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VideoIlluminatorCommandStatusType.
            */
            typedef  class VideoIlluminatorCommandStatusType VideoIlluminatorCommandStatusTypeKeyHolder;

            #define VideoIlluminatorCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VideoIlluminatorCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VideoIlluminatorCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VideoIlluminatorCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VideoIlluminatorCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VideoIlluminatorCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VideoIlluminatorCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VideoIlluminatorCommandStatusType*
            VideoIlluminatorCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VideoIlluminatorCommandStatusType*
            VideoIlluminatorCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandStatusType*
            VideoIlluminatorCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePluginSupport_copy_data(
                VideoIlluminatorCommandStatusType *out,
                const VideoIlluminatorCommandStatusType *in);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_destroy_data_w_params(
                VideoIlluminatorCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_destroy_data_ex(
                VideoIlluminatorCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_destroy_data(
                VideoIlluminatorCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_print_data(
                const VideoIlluminatorCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VideoIlluminatorCommandStatusType*
            VideoIlluminatorCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandStatusType*
            VideoIlluminatorCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_destroy_key_ex(
                VideoIlluminatorCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePluginSupport_destroy_key(
                VideoIlluminatorCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VideoIlluminatorCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VideoIlluminatorCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VideoIlluminatorCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusType *out,
                const VideoIlluminatorCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VideoIlluminatorCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                VideoIlluminatorCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VideoIlluminatorCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusTypeKeyHolder *key, 
                const VideoIlluminatorCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandStatusType *instance, 
                const VideoIlluminatorCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VideoIlluminatorCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VideoIlluminatorCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VideoIlluminatorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VideoIlluminatorCommandStatusTypePlugin_2018604370_h */

