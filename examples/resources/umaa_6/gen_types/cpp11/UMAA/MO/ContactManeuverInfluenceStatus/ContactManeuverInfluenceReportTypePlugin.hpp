

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactManeuverInfluenceReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactManeuverInfluenceReportTypePlugin_1722538097_h
#define ContactManeuverInfluenceReportTypePlugin_1722538097_h

#include "ContactManeuverInfluenceReportType.hpp"

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
    namespace MO {
        namespace ContactManeuverInfluenceStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactManeuverInfluenceReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactManeuverInfluenceReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactManeuverInfluenceReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactManeuverInfluenceReportType.
            */
            typedef class ContactManeuverInfluenceReportType ContactManeuverInfluenceReportTypeKeyHolder;

            #define ContactManeuverInfluenceReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactManeuverInfluenceReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactManeuverInfluenceReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactManeuverInfluenceReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactManeuverInfluenceReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactManeuverInfluenceReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactManeuverInfluenceReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactManeuverInfluenceReportType*
            ContactManeuverInfluenceReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactManeuverInfluenceReportType*
            ContactManeuverInfluenceReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactManeuverInfluenceReportType*
            ContactManeuverInfluenceReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePluginSupport_copy_data(
                ContactManeuverInfluenceReportType *out,
                const ContactManeuverInfluenceReportType *in);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_destroy_data_w_params(
                ContactManeuverInfluenceReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_destroy_data_ex(
                ContactManeuverInfluenceReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_destroy_data(
                ContactManeuverInfluenceReportType *sample);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_print_data(
                const ContactManeuverInfluenceReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactManeuverInfluenceReportType*
            ContactManeuverInfluenceReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactManeuverInfluenceReportType*
            ContactManeuverInfluenceReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_destroy_key_ex(
                ContactManeuverInfluenceReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePluginSupport_destroy_key(
                ContactManeuverInfluenceReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactManeuverInfluenceReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactManeuverInfluenceReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactManeuverInfluenceReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactManeuverInfluenceReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportType *out,
                const ContactManeuverInfluenceReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactManeuverInfluenceReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactManeuverInfluenceReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactManeuverInfluenceReportTypePlugin_deserialize_from_cdr_buffer(
                ContactManeuverInfluenceReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactManeuverInfluenceReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactManeuverInfluenceReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactManeuverInfluenceReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactManeuverInfluenceReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportTypeKeyHolder *key, 
                const ContactManeuverInfluenceReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactManeuverInfluenceReportType *instance, 
                const ContactManeuverInfluenceReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactManeuverInfluenceReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactManeuverInfluenceReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactManeuverInfluenceReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactManeuverInfluenceStatus  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactManeuverInfluenceReportTypePlugin_1722538097_h */

