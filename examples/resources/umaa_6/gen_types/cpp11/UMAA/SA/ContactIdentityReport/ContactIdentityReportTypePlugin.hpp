

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactIdentityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactIdentityReportTypePlugin_292642931_h
#define ContactIdentityReportTypePlugin_292642931_h

#include "ContactIdentityReportType.hpp"

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
        namespace ContactIdentityReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactIdentityReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactIdentityReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactIdentityReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactIdentityReportType.
            */
            typedef class ContactIdentityReportType ContactIdentityReportTypeKeyHolder;

            #define ContactIdentityReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactIdentityReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactIdentityReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactIdentityReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactIdentityReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactIdentityReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactIdentityReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactIdentityReportType*
            ContactIdentityReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactIdentityReportType*
            ContactIdentityReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactIdentityReportType*
            ContactIdentityReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePluginSupport_copy_data(
                ContactIdentityReportType *out,
                const ContactIdentityReportType *in);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_destroy_data_w_params(
                ContactIdentityReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_destroy_data_ex(
                ContactIdentityReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_destroy_data(
                ContactIdentityReportType *sample);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_print_data(
                const ContactIdentityReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactIdentityReportType*
            ContactIdentityReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactIdentityReportType*
            ContactIdentityReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_destroy_key_ex(
                ContactIdentityReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePluginSupport_destroy_key(
                ContactIdentityReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactIdentityReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactIdentityReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactIdentityReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactIdentityReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportType *out,
                const ContactIdentityReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactIdentityReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactIdentityReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactIdentityReportTypePlugin_deserialize_from_cdr_buffer(
                ContactIdentityReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactIdentityReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactIdentityReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactIdentityReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactIdentityReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportTypeKeyHolder *key, 
                const ContactIdentityReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactIdentityReportType *instance, 
                const ContactIdentityReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactIdentityReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactIdentityReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactIdentityReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactIdentityReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactIdentityReportTypePlugin_292642931_h */

