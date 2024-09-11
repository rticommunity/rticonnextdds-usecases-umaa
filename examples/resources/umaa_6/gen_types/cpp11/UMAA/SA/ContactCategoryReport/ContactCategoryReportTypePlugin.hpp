

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCategoryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCategoryReportTypePlugin_512658482_h
#define ContactCategoryReportTypePlugin_512658482_h

#include "ContactCategoryReportType.hpp"

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
        namespace ContactCategoryReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactCategoryReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactCategoryReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactCategoryReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactCategoryReportType.
            */
            typedef class ContactCategoryReportType ContactCategoryReportTypeKeyHolder;

            #define ContactCategoryReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactCategoryReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactCategoryReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactCategoryReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactCategoryReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactCategoryReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactCategoryReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactCategoryReportType*
            ContactCategoryReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactCategoryReportType*
            ContactCategoryReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCategoryReportType*
            ContactCategoryReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePluginSupport_copy_data(
                ContactCategoryReportType *out,
                const ContactCategoryReportType *in);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_destroy_data_w_params(
                ContactCategoryReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_destroy_data_ex(
                ContactCategoryReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_destroy_data(
                ContactCategoryReportType *sample);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_print_data(
                const ContactCategoryReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactCategoryReportType*
            ContactCategoryReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCategoryReportType*
            ContactCategoryReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_destroy_key_ex(
                ContactCategoryReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePluginSupport_destroy_key(
                ContactCategoryReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactCategoryReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactCategoryReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactCategoryReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactCategoryReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportType *out,
                const ContactCategoryReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactCategoryReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactCategoryReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactCategoryReportTypePlugin_deserialize_from_cdr_buffer(
                ContactCategoryReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactCategoryReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactCategoryReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactCategoryReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactCategoryReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportTypeKeyHolder *key, 
                const ContactCategoryReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactCategoryReportType *instance, 
                const ContactCategoryReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactCategoryReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactCategoryReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactCategoryReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactCategoryReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactCategoryReportTypePlugin_512658482_h */

