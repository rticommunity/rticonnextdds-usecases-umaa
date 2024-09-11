

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageFilterConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MessageFilterConfigCommandTypePlugin_1026875283_h
#define MessageFilterConfigCommandTypePlugin_1026875283_h

#include "MessageFilterConfigCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/Filter/MessageFilterTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace MessageFilterConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MessageFilterConfigCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MessageFilterConfigCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MessageFilterConfigCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MessageFilterConfigCommandType.
            */
            typedef class MessageFilterConfigCommandType MessageFilterConfigCommandTypeKeyHolder;

            #define MessageFilterConfigCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MessageFilterConfigCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MessageFilterConfigCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MessageFilterConfigCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MessageFilterConfigCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MessageFilterConfigCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MessageFilterConfigCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MessageFilterConfigCommandType*
            MessageFilterConfigCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MessageFilterConfigCommandType*
            MessageFilterConfigCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterConfigCommandType*
            MessageFilterConfigCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePluginSupport_copy_data(
                MessageFilterConfigCommandType *out,
                const MessageFilterConfigCommandType *in);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_destroy_data_w_params(
                MessageFilterConfigCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_destroy_data_ex(
                MessageFilterConfigCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_destroy_data(
                MessageFilterConfigCommandType *sample);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_print_data(
                const MessageFilterConfigCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MessageFilterConfigCommandType*
            MessageFilterConfigCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterConfigCommandType*
            MessageFilterConfigCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_destroy_key_ex(
                MessageFilterConfigCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePluginSupport_destroy_key(
                MessageFilterConfigCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MessageFilterConfigCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MessageFilterConfigCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MessageFilterConfigCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MessageFilterConfigCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandType *out,
                const MessageFilterConfigCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MessageFilterConfigCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MessageFilterConfigCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MessageFilterConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                MessageFilterConfigCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MessageFilterConfigCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandTypeKeyHolder *key, 
                const MessageFilterConfigCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigCommandType *instance, 
                const MessageFilterConfigCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MessageFilterConfigCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MessageFilterConfigCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MessageFilterConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MessageFilterConfigCommandTypePlugin_1026875283_h */

