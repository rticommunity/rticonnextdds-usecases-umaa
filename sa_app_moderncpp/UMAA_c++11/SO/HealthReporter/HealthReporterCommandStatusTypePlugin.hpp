

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReporterCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthReporterCommandStatusTypePlugin_1460937511_h
#define HealthReporterCommandStatusTypePlugin_1460937511_h

#include "HealthReporterCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace HealthReporter {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HealthReporterCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthReporterCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthReporterCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthReporterCommandStatusType.
            */
            typedef class HealthReporterCommandStatusType HealthReporterCommandStatusTypeKeyHolder;

            #define HealthReporterCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthReporterCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthReporterCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthReporterCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthReporterCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthReporterCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthReporterCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthReporterCommandStatusType*
            HealthReporterCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthReporterCommandStatusType*
            HealthReporterCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthReporterCommandStatusType*
            HealthReporterCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePluginSupport_copy_data(
                HealthReporterCommandStatusType *out,
                const HealthReporterCommandStatusType *in);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_destroy_data_w_params(
                HealthReporterCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_destroy_data_ex(
                HealthReporterCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_destroy_data(
                HealthReporterCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_print_data(
                const HealthReporterCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthReporterCommandStatusType*
            HealthReporterCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthReporterCommandStatusType*
            HealthReporterCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_destroy_key_ex(
                HealthReporterCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePluginSupport_destroy_key(
                HealthReporterCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthReporterCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthReporterCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthReporterCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthReporterCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusType *out,
                const HealthReporterCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthReporterCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthReporterCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthReporterCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                HealthReporterCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthReporterCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusTypeKeyHolder *key, 
                const HealthReporterCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandStatusType *instance, 
                const HealthReporterCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthReporterCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthReporterCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthReporterCommandStatusTypePlugin_1460937511_h */

