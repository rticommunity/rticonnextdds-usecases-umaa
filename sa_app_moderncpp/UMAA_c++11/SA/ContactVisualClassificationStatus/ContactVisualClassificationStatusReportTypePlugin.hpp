

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactVisualClassificationStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactVisualClassificationStatusReportTypePlugin_675891174_h
#define ContactVisualClassificationStatusReportTypePlugin_675891174_h

#include "ContactVisualClassificationStatusReportType.hpp"

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
        namespace ContactVisualClassificationStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactVisualClassificationStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactVisualClassificationStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactVisualClassificationStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactVisualClassificationStatusReportType.
            */
            typedef class ContactVisualClassificationStatusReportType ContactVisualClassificationStatusReportTypeKeyHolder;

            #define ContactVisualClassificationStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactVisualClassificationStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactVisualClassificationStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactVisualClassificationStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactVisualClassificationStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactVisualClassificationStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactVisualClassificationStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactVisualClassificationStatusReportType*
            ContactVisualClassificationStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactVisualClassificationStatusReportType*
            ContactVisualClassificationStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactVisualClassificationStatusReportType*
            ContactVisualClassificationStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePluginSupport_copy_data(
                ContactVisualClassificationStatusReportType *out,
                const ContactVisualClassificationStatusReportType *in);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_destroy_data_w_params(
                ContactVisualClassificationStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_destroy_data_ex(
                ContactVisualClassificationStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_destroy_data(
                ContactVisualClassificationStatusReportType *sample);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_print_data(
                const ContactVisualClassificationStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactVisualClassificationStatusReportType*
            ContactVisualClassificationStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactVisualClassificationStatusReportType*
            ContactVisualClassificationStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_destroy_key_ex(
                ContactVisualClassificationStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePluginSupport_destroy_key(
                ContactVisualClassificationStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactVisualClassificationStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactVisualClassificationStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactVisualClassificationStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactVisualClassificationStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportType *out,
                const ContactVisualClassificationStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactVisualClassificationStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactVisualClassificationStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactVisualClassificationStatusReportTypePlugin_deserialize_from_cdr_buffer(
                ContactVisualClassificationStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactVisualClassificationStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactVisualClassificationStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactVisualClassificationStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactVisualClassificationStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportTypeKeyHolder *key, 
                const ContactVisualClassificationStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactVisualClassificationStatusReportType *instance, 
                const ContactVisualClassificationStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactVisualClassificationStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactVisualClassificationStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactVisualClassificationStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactVisualClassificationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactVisualClassificationStatusReportTypePlugin_675891174_h */

