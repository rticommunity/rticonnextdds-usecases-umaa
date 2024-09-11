

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactReportTypePlugin_494623360_h
#define ContactReportTypePlugin_494623360_h

#include "ContactReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SA/ContactReport/ContactTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace ContactReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactReportType.
            */
            typedef class ContactReportType ContactReportTypeKeyHolder;

            #define ContactReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactReportType*
            ContactReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactReportType*
            ContactReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactReportType*
            ContactReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePluginSupport_copy_data(
                ContactReportType *out,
                const ContactReportType *in);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_destroy_data_w_params(
                ContactReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_destroy_data_ex(
                ContactReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_destroy_data(
                ContactReportType *sample);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_print_data(
                const ContactReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactReportType*
            ContactReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactReportType*
            ContactReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_destroy_key_ex(
                ContactReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactReportTypePluginSupport_destroy_key(
                ContactReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportType *out,
                const ContactReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactReportTypePlugin_deserialize_from_cdr_buffer(
                ContactReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeKeyHolder *key, 
                const ContactReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportType *instance, 
                const ContactReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactReportTypeContactsSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactReportTypeContactsSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactReportTypeContactsSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactReportTypeContactsSetElement.
            */
            typedef class ContactReportTypeContactsSetElement ContactReportTypeContactsSetElementKeyHolder;

            #define ContactReportTypeContactsSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactReportTypeContactsSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactReportTypeContactsSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactReportTypeContactsSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactReportTypeContactsSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactReportTypeContactsSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactReportTypeContactsSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactReportTypeContactsSetElement*
            ContactReportTypeContactsSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactReportTypeContactsSetElement*
            ContactReportTypeContactsSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactReportTypeContactsSetElement*
            ContactReportTypeContactsSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPluginSupport_copy_data(
                ContactReportTypeContactsSetElement *out,
                const ContactReportTypeContactsSetElement *in);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_destroy_data_w_params(
                ContactReportTypeContactsSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_destroy_data_ex(
                ContactReportTypeContactsSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_destroy_data(
                ContactReportTypeContactsSetElement *sample);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_print_data(
                const ContactReportTypeContactsSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactReportTypeContactsSetElement*
            ContactReportTypeContactsSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactReportTypeContactsSetElement*
            ContactReportTypeContactsSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_destroy_key_ex(
                ContactReportTypeContactsSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPluginSupport_destroy_key(
                ContactReportTypeContactsSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactReportTypeContactsSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactReportTypeContactsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactReportTypeContactsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactReportTypeContactsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElement *out,
                const ContactReportTypeContactsSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactReportTypeContactsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactReportTypeContactsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactReportTypeContactsSetElementPlugin_deserialize_from_cdr_buffer(
                ContactReportTypeContactsSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypeContactsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactReportTypeContactsSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypeContactsSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactReportTypeContactsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElementKeyHolder *key, 
                const ContactReportTypeContactsSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactReportTypeContactsSetElement *instance, 
                const ContactReportTypeContactsSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactReportTypeContactsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactReportTypeContactsSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            ContactReportTypeContactsSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactReportTypePlugin_494623360_h */

