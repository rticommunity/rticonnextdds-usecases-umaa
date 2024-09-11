

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelClearMessageCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelClearMessageCommandTypePlugin_1996891346_h
#define CommsChannelClearMessageCommandTypePlugin_1996891346_h

#include "CommsChannelClearMessageCommandType.hpp"

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
        namespace CommsChannelControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelClearMessageCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelClearMessageCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelClearMessageCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelClearMessageCommandType.
            */
            typedef class CommsChannelClearMessageCommandType CommsChannelClearMessageCommandTypeKeyHolder;

            #define CommsChannelClearMessageCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelClearMessageCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelClearMessageCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelClearMessageCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelClearMessageCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelClearMessageCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelClearMessageCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelClearMessageCommandType*
            CommsChannelClearMessageCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandType*
            CommsChannelClearMessageCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandType*
            CommsChannelClearMessageCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePluginSupport_copy_data(
                CommsChannelClearMessageCommandType *out,
                const CommsChannelClearMessageCommandType *in);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_destroy_data_w_params(
                CommsChannelClearMessageCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_destroy_data_ex(
                CommsChannelClearMessageCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_destroy_data(
                CommsChannelClearMessageCommandType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_print_data(
                const CommsChannelClearMessageCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandType*
            CommsChannelClearMessageCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandType*
            CommsChannelClearMessageCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_destroy_key_ex(
                CommsChannelClearMessageCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePluginSupport_destroy_key(
                CommsChannelClearMessageCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelClearMessageCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelClearMessageCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelClearMessageCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandType *out,
                const CommsChannelClearMessageCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearMessageCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelClearMessageCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearMessageCommandTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelClearMessageCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelClearMessageCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandTypeKeyHolder *key, 
                const CommsChannelClearMessageCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandType *instance, 
                const CommsChannelClearMessageCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelClearMessageCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelClearMessageCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelControl  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelClearMessageCommandTypePlugin_1996891346_h */

