

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelClearAllCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelClearAllCommandStatusTypePlugin_320269261_h
#define CommsChannelClearAllCommandStatusTypePlugin_320269261_h

#include "CommsChannelClearAllCommandStatusType.hpp"

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
        namespace CommsChannelControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelClearAllCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelClearAllCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelClearAllCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelClearAllCommandStatusType.
            */
            typedef class CommsChannelClearAllCommandStatusType CommsChannelClearAllCommandStatusTypeKeyHolder;

            #define CommsChannelClearAllCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelClearAllCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelClearAllCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelClearAllCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelClearAllCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelClearAllCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelClearAllCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelClearAllCommandStatusType*
            CommsChannelClearAllCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelClearAllCommandStatusType*
            CommsChannelClearAllCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearAllCommandStatusType*
            CommsChannelClearAllCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePluginSupport_copy_data(
                CommsChannelClearAllCommandStatusType *out,
                const CommsChannelClearAllCommandStatusType *in);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_destroy_data_w_params(
                CommsChannelClearAllCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_destroy_data_ex(
                CommsChannelClearAllCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_destroy_data(
                CommsChannelClearAllCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_print_data(
                const CommsChannelClearAllCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelClearAllCommandStatusType*
            CommsChannelClearAllCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearAllCommandStatusType*
            CommsChannelClearAllCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_destroy_key_ex(
                CommsChannelClearAllCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePluginSupport_destroy_key(
                CommsChannelClearAllCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelClearAllCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelClearAllCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelClearAllCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusType *out,
                const CommsChannelClearAllCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearAllCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelClearAllCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearAllCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelClearAllCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelClearAllCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusTypeKeyHolder *key, 
                const CommsChannelClearAllCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandStatusType *instance, 
                const CommsChannelClearAllCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelClearAllCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelClearAllCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelControl  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelClearAllCommandStatusTypePlugin_320269261_h */

