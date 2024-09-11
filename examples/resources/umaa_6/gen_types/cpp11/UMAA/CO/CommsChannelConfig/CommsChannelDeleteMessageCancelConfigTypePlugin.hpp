

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDeleteMessageCancelConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelDeleteMessageCancelConfigTypePlugin_1159980587_h
#define CommsChannelDeleteMessageCancelConfigTypePlugin_1159980587_h

#include "CommsChannelDeleteMessageCancelConfigType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace CommsChannelConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelDeleteMessageCancelConfigType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelDeleteMessageCancelConfigType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelDeleteMessageCancelConfigType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelDeleteMessageCancelConfigType.
            */
            typedef class CommsChannelDeleteMessageCancelConfigType CommsChannelDeleteMessageCancelConfigTypeKeyHolder;

            #define CommsChannelDeleteMessageCancelConfigTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelDeleteMessageCancelConfigTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelDeleteMessageCancelConfigTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelDeleteMessageCancelConfigTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelDeleteMessageCancelConfigTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelDeleteMessageCancelConfigTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelDeleteMessageCancelConfigTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelDeleteMessageCancelConfigType*
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelDeleteMessageCancelConfigType*
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageCancelConfigType*
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_copy_data(
                CommsChannelDeleteMessageCancelConfigType *out,
                const CommsChannelDeleteMessageCancelConfigType *in);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_destroy_data_w_params(
                CommsChannelDeleteMessageCancelConfigType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_destroy_data_ex(
                CommsChannelDeleteMessageCancelConfigType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_destroy_data(
                CommsChannelDeleteMessageCancelConfigType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_print_data(
                const CommsChannelDeleteMessageCancelConfigType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelDeleteMessageCancelConfigType*
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageCancelConfigType*
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_destroy_key_ex(
                CommsChannelDeleteMessageCancelConfigTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePluginSupport_destroy_key(
                CommsChannelDeleteMessageCancelConfigTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelDeleteMessageCancelConfigTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelDeleteMessageCancelConfigTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageCancelConfigTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelDeleteMessageCancelConfigTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigType *out,
                const CommsChannelDeleteMessageCancelConfigType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageCancelConfigTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelDeleteMessageCancelConfigType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageCancelConfigTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelDeleteMessageCancelConfigType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageCancelConfigTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelDeleteMessageCancelConfigTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageCancelConfigTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageCancelConfigTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigTypeKeyHolder *key, 
                const CommsChannelDeleteMessageCancelConfigType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageCancelConfigType *instance, 
                const CommsChannelDeleteMessageCancelConfigTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageCancelConfigTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelDeleteMessageCancelConfigTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelDeleteMessageCancelConfigTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelDeleteMessageCancelConfigTypePlugin_1159980587_h */

