

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelStartupCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelStartupCommandTypePlugin_740706573_h
#define CommsChannelStartupCommandTypePlugin_740706573_h

#include "CommsChannelStartupCommandType.hpp"

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
        namespace CommsChannelControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelStartupCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelStartupCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelStartupCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelStartupCommandType.
            */
            typedef class CommsChannelStartupCommandType CommsChannelStartupCommandTypeKeyHolder;

            #define CommsChannelStartupCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelStartupCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelStartupCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelStartupCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelStartupCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelStartupCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelStartupCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelStartupCommandType*
            CommsChannelStartupCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelStartupCommandType*
            CommsChannelStartupCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelStartupCommandType*
            CommsChannelStartupCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePluginSupport_copy_data(
                CommsChannelStartupCommandType *out,
                const CommsChannelStartupCommandType *in);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_destroy_data_w_params(
                CommsChannelStartupCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_destroy_data_ex(
                CommsChannelStartupCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_destroy_data(
                CommsChannelStartupCommandType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_print_data(
                const CommsChannelStartupCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelStartupCommandType*
            CommsChannelStartupCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelStartupCommandType*
            CommsChannelStartupCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_destroy_key_ex(
                CommsChannelStartupCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePluginSupport_destroy_key(
                CommsChannelStartupCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelStartupCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelStartupCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelStartupCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelStartupCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandType *out,
                const CommsChannelStartupCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelStartupCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelStartupCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelStartupCommandTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelStartupCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelStartupCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelStartupCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelStartupCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelStartupCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandTypeKeyHolder *key, 
                const CommsChannelStartupCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelStartupCommandType *instance, 
                const CommsChannelStartupCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelStartupCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelStartupCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelStartupCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelControl  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelStartupCommandTypePlugin_740706573_h */

