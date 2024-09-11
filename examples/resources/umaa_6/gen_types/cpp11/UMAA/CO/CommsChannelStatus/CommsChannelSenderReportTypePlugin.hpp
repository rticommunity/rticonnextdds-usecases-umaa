

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSenderReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSenderReportTypePlugin_1814187374_h
#define CommsChannelSenderReportTypePlugin_1814187374_h

#include "CommsChannelSenderReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeListMetadataPlugin.hpp"
#include "UMAA/CO/CommsChannel/CommsChannelMessageTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace CommsChannelStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelSenderReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelSenderReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelSenderReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelSenderReportType.
            */
            typedef class CommsChannelSenderReportType CommsChannelSenderReportTypeKeyHolder;

            #define CommsChannelSenderReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelSenderReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelSenderReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelSenderReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelSenderReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelSenderReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelSenderReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelSenderReportType*
            CommsChannelSenderReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelSenderReportType*
            CommsChannelSenderReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSenderReportType*
            CommsChannelSenderReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePluginSupport_copy_data(
                CommsChannelSenderReportType *out,
                const CommsChannelSenderReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_destroy_data_w_params(
                CommsChannelSenderReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_destroy_data_ex(
                CommsChannelSenderReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_destroy_data(
                CommsChannelSenderReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_print_data(
                const CommsChannelSenderReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelSenderReportType*
            CommsChannelSenderReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSenderReportType*
            CommsChannelSenderReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_destroy_key_ex(
                CommsChannelSenderReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePluginSupport_destroy_key(
                CommsChannelSenderReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelSenderReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelSenderReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelSenderReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportType *out,
                const CommsChannelSenderReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelSenderReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelSenderReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelSenderReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeKeyHolder *key, 
                const CommsChannelSenderReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportType *instance, 
                const CommsChannelSenderReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelSenderReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelSenderReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelSenderReportTypeQueuedMessagesListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelSenderReportTypeQueuedMessagesListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelSenderReportTypeQueuedMessagesListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelSenderReportTypeQueuedMessagesListElement.
            */
            typedef class CommsChannelSenderReportTypeQueuedMessagesListElement CommsChannelSenderReportTypeQueuedMessagesListElementKeyHolder;

            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelSenderReportTypeQueuedMessagesListElement*
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelSenderReportTypeQueuedMessagesListElement*
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSenderReportTypeQueuedMessagesListElement*
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_copy_data(
                CommsChannelSenderReportTypeQueuedMessagesListElement *out,
                const CommsChannelSenderReportTypeQueuedMessagesListElement *in);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_destroy_data_w_params(
                CommsChannelSenderReportTypeQueuedMessagesListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_destroy_data_ex(
                CommsChannelSenderReportTypeQueuedMessagesListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_destroy_data(
                CommsChannelSenderReportTypeQueuedMessagesListElement *sample);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_print_data(
                const CommsChannelSenderReportTypeQueuedMessagesListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelSenderReportTypeQueuedMessagesListElement*
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSenderReportTypeQueuedMessagesListElement*
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_destroy_key_ex(
                CommsChannelSenderReportTypeQueuedMessagesListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPluginSupport_destroy_key(
                CommsChannelSenderReportTypeQueuedMessagesListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElement *out,
                const CommsChannelSenderReportTypeQueuedMessagesListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelSenderReportTypeQueuedMessagesListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_deserialize_from_cdr_buffer(
                CommsChannelSenderReportTypeQueuedMessagesListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElementKeyHolder *key, 
                const CommsChannelSenderReportTypeQueuedMessagesListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderReportTypeQueuedMessagesListElement *instance, 
                const CommsChannelSenderReportTypeQueuedMessagesListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelSenderReportTypeQueuedMessagesListElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelStatus  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelSenderReportTypePlugin_1814187374_h */

