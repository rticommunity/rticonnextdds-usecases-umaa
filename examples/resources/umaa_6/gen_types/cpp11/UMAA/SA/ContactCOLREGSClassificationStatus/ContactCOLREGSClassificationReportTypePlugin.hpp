

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCOLREGSClassificationReportTypePlugin_2064986226_h
#define ContactCOLREGSClassificationReportTypePlugin_2064986226_h

#include "ContactCOLREGSClassificationReportType.hpp"

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
        namespace ContactCOLREGSClassificationStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactCOLREGSClassificationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactCOLREGSClassificationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactCOLREGSClassificationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactCOLREGSClassificationReportType.
            */
            typedef class ContactCOLREGSClassificationReportType ContactCOLREGSClassificationReportTypeKeyHolder;

            #define ContactCOLREGSClassificationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactCOLREGSClassificationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactCOLREGSClassificationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactCOLREGSClassificationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactCOLREGSClassificationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactCOLREGSClassificationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactCOLREGSClassificationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactCOLREGSClassificationReportType*
            ContactCOLREGSClassificationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactCOLREGSClassificationReportType*
            ContactCOLREGSClassificationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCOLREGSClassificationReportType*
            ContactCOLREGSClassificationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePluginSupport_copy_data(
                ContactCOLREGSClassificationReportType *out,
                const ContactCOLREGSClassificationReportType *in);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_destroy_data_w_params(
                ContactCOLREGSClassificationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_destroy_data_ex(
                ContactCOLREGSClassificationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_destroy_data(
                ContactCOLREGSClassificationReportType *sample);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_print_data(
                const ContactCOLREGSClassificationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactCOLREGSClassificationReportType*
            ContactCOLREGSClassificationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCOLREGSClassificationReportType*
            ContactCOLREGSClassificationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_destroy_key_ex(
                ContactCOLREGSClassificationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePluginSupport_destroy_key(
                ContactCOLREGSClassificationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactCOLREGSClassificationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactCOLREGSClassificationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactCOLREGSClassificationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportType *out,
                const ContactCOLREGSClassificationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactCOLREGSClassificationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactCOLREGSClassificationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactCOLREGSClassificationReportTypePlugin_deserialize_from_cdr_buffer(
                ContactCOLREGSClassificationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactCOLREGSClassificationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportTypeKeyHolder *key, 
                const ContactCOLREGSClassificationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationReportType *instance, 
                const ContactCOLREGSClassificationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactCOLREGSClassificationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactCOLREGSClassificationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactCOLREGSClassificationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactCOLREGSClassificationReportTypePlugin_2064986226_h */

