

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactFilterCancelConfigCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactFilterCancelConfigCommandStatusTypePlugin_640335895_h
#define ContactFilterCancelConfigCommandStatusTypePlugin_640335895_h

#include "ContactFilterCancelConfigCommandStatusType.hpp"

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
    namespace SA {
        namespace ContactFilterConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactFilterCancelConfigCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactFilterCancelConfigCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactFilterCancelConfigCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactFilterCancelConfigCommandStatusType.
            */
            typedef class ContactFilterCancelConfigCommandStatusType ContactFilterCancelConfigCommandStatusTypeKeyHolder;

            #define ContactFilterCancelConfigCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactFilterCancelConfigCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactFilterCancelConfigCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactFilterCancelConfigCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactFilterCancelConfigCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactFilterCancelConfigCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactFilterCancelConfigCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactFilterCancelConfigCommandStatusType*
            ContactFilterCancelConfigCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactFilterCancelConfigCommandStatusType*
            ContactFilterCancelConfigCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactFilterCancelConfigCommandStatusType*
            ContactFilterCancelConfigCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_copy_data(
                ContactFilterCancelConfigCommandStatusType *out,
                const ContactFilterCancelConfigCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_destroy_data_w_params(
                ContactFilterCancelConfigCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_destroy_data_ex(
                ContactFilterCancelConfigCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_destroy_data(
                ContactFilterCancelConfigCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_print_data(
                const ContactFilterCancelConfigCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactFilterCancelConfigCommandStatusType*
            ContactFilterCancelConfigCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactFilterCancelConfigCommandStatusType*
            ContactFilterCancelConfigCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_destroy_key_ex(
                ContactFilterCancelConfigCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePluginSupport_destroy_key(
                ContactFilterCancelConfigCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactFilterCancelConfigCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactFilterCancelConfigCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactFilterCancelConfigCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactFilterCancelConfigCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusType *out,
                const ContactFilterCancelConfigCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactFilterCancelConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactFilterCancelConfigCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactFilterCancelConfigCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ContactFilterCancelConfigCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactFilterCancelConfigCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactFilterCancelConfigCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactFilterCancelConfigCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactFilterCancelConfigCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusTypeKeyHolder *key, 
                const ContactFilterCancelConfigCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactFilterCancelConfigCommandStatusType *instance, 
                const ContactFilterCancelConfigCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactFilterCancelConfigCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactFilterCancelConfigCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactFilterCancelConfigCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactFilterConfig  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactFilterCancelConfigCommandStatusTypePlugin_640335895_h */

