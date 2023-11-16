

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactCOLREGSClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactCOLREGSClassificationStatusReportTypePlugin_167947414_h
#define ContactCOLREGSClassificationStatusReportTypePlugin_167947414_h

#include "ContactCOLREGSClassificationStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
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
            * By default, this type is struct ContactCOLREGSClassificationStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactCOLREGSClassificationStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactCOLREGSClassificationStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactCOLREGSClassificationStatusReportType.
            */
            typedef class ContactCOLREGSClassificationStatusReportType ContactCOLREGSClassificationStatusReportTypeKeyHolder;

            #define ContactCOLREGSClassificationStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactCOLREGSClassificationStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactCOLREGSClassificationStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactCOLREGSClassificationStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactCOLREGSClassificationStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactCOLREGSClassificationStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactCOLREGSClassificationStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactCOLREGSClassificationStatusReportType*
            ContactCOLREGSClassificationStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactCOLREGSClassificationStatusReportType*
            ContactCOLREGSClassificationStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCOLREGSClassificationStatusReportType*
            ContactCOLREGSClassificationStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_copy_data(
                ContactCOLREGSClassificationStatusReportType *out,
                const ContactCOLREGSClassificationStatusReportType *in);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_destroy_data_w_params(
                ContactCOLREGSClassificationStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_destroy_data_ex(
                ContactCOLREGSClassificationStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_destroy_data(
                ContactCOLREGSClassificationStatusReportType *sample);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_print_data(
                const ContactCOLREGSClassificationStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactCOLREGSClassificationStatusReportType*
            ContactCOLREGSClassificationStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactCOLREGSClassificationStatusReportType*
            ContactCOLREGSClassificationStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_destroy_key_ex(
                ContactCOLREGSClassificationStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePluginSupport_destroy_key(
                ContactCOLREGSClassificationStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactCOLREGSClassificationStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactCOLREGSClassificationStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactCOLREGSClassificationStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactCOLREGSClassificationStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportType *out,
                const ContactCOLREGSClassificationStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactCOLREGSClassificationStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactCOLREGSClassificationStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactCOLREGSClassificationStatusReportTypePlugin_deserialize_from_cdr_buffer(
                ContactCOLREGSClassificationStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactCOLREGSClassificationStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactCOLREGSClassificationStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportTypeKeyHolder *key, 
                const ContactCOLREGSClassificationStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactCOLREGSClassificationStatusReportType *instance, 
                const ContactCOLREGSClassificationStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactCOLREGSClassificationStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactCOLREGSClassificationStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactCOLREGSClassificationStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactCOLREGSClassificationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactCOLREGSClassificationStatusReportTypePlugin_167947414_h */

