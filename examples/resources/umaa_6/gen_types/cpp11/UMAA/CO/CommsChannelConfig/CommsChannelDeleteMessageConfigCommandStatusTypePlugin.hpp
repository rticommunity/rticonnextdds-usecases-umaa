

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDeleteMessageConfigCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelDeleteMessageConfigCommandStatusTypePlugin_345621175_h
#define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_345621175_h

#include "CommsChannelDeleteMessageConfigCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
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
            * By default, this type is struct CommsChannelDeleteMessageConfigCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelDeleteMessageConfigCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelDeleteMessageConfigCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelDeleteMessageConfigCommandStatusType.
            */
            typedef class CommsChannelDeleteMessageConfigCommandStatusType CommsChannelDeleteMessageConfigCommandStatusTypeKeyHolder;

            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelDeleteMessageConfigCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandStatusType*
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandStatusType*
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandStatusType*
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_copy_data(
                CommsChannelDeleteMessageConfigCommandStatusType *out,
                const CommsChannelDeleteMessageConfigCommandStatusType *in);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_destroy_data_w_params(
                CommsChannelDeleteMessageConfigCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_destroy_data_ex(
                CommsChannelDeleteMessageConfigCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_destroy_data(
                CommsChannelDeleteMessageConfigCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_print_data(
                const CommsChannelDeleteMessageConfigCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandStatusType*
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigCommandStatusType*
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_destroy_key_ex(
                CommsChannelDeleteMessageConfigCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePluginSupport_destroy_key(
                CommsChannelDeleteMessageConfigCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusType *out,
                const CommsChannelDeleteMessageConfigCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelDeleteMessageConfigCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelDeleteMessageConfigCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusTypeKeyHolder *key, 
                const CommsChannelDeleteMessageConfigCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigCommandStatusType *instance, 
                const CommsChannelDeleteMessageConfigCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelDeleteMessageConfigCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelDeleteMessageConfigCommandStatusTypePlugin_345621175_h */

