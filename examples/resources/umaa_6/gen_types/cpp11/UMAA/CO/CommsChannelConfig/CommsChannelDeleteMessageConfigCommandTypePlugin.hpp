

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDeleteMessageConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelDeleteMessageConfigCommandTypePlugin_188763986_h
#define CommsChannelDeleteMessageConfigCommandTypePlugin_188763986_h

#include "CommsChannelDeleteMessageConfigCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace CommsChannelConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelDeleteMessageConfigCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelDeleteMessageConfigCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelDeleteMessageConfigCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelDeleteMessageConfigCommandType.
            */
            typedef class CommsChannelDeleteMessageConfigCommandType CommsChannelDeleteMessageConfigCommandTypeKeyHolder;

            #define CommsChannelDeleteMessageConfigCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelDeleteMessageConfigCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelDeleteMessageConfigCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelDeleteMessageConfigCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelDeleteMessageConfigCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelDeleteMessageConfigCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelDeleteMessageConfigCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandType*
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandType*
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandType*
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_copy_data(
                CommsChannelDeleteMessageConfigCommandType *out,
                const CommsChannelDeleteMessageConfigCommandType *in);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_destroy_data_w_params(
                CommsChannelDeleteMessageConfigCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_destroy_data_ex(
                CommsChannelDeleteMessageConfigCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_destroy_data(
                CommsChannelDeleteMessageConfigCommandType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_print_data(
                const CommsChannelDeleteMessageConfigCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandType*
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandType*
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_destroy_key_ex(
                CommsChannelDeleteMessageConfigCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePluginSupport_destroy_key(
                CommsChannelDeleteMessageConfigCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelDeleteMessageConfigCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelDeleteMessageConfigCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelDeleteMessageConfigCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandType *out,
                const CommsChannelDeleteMessageConfigCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelDeleteMessageConfigCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelDeleteMessageConfigCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelDeleteMessageConfigCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandTypeKeyHolder *key, 
                const CommsChannelDeleteMessageConfigCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandType *instance, 
                const CommsChannelDeleteMessageConfigCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelDeleteMessageConfigCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelDeleteMessageConfigCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelDeleteMessageConfigCommandTypePlugin_188763986_h */

