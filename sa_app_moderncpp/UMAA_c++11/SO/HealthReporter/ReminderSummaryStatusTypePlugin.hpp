

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReminderSummaryStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ReminderSummaryStatusTypePlugin_1349533115_h
#define ReminderSummaryStatusTypePlugin_1349533115_h

#include "ReminderSummaryStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct ReminderSummaryStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ReminderSummaryStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ReminderSummaryStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ReminderSummaryStatusType.
            */
            typedef class ReminderSummaryStatusType ReminderSummaryStatusTypeKeyHolder;

            #define ReminderSummaryStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ReminderSummaryStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ReminderSummaryStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ReminderSummaryStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ReminderSummaryStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ReminderSummaryStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ReminderSummaryStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ReminderSummaryStatusType*
            ReminderSummaryStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ReminderSummaryStatusType*
            ReminderSummaryStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ReminderSummaryStatusType*
            ReminderSummaryStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePluginSupport_copy_data(
                ReminderSummaryStatusType *out,
                const ReminderSummaryStatusType *in);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_destroy_data_w_params(
                ReminderSummaryStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_destroy_data_ex(
                ReminderSummaryStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_destroy_data(
                ReminderSummaryStatusType *sample);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_print_data(
                const ReminderSummaryStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ReminderSummaryStatusType*
            ReminderSummaryStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ReminderSummaryStatusType*
            ReminderSummaryStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_destroy_key_ex(
                ReminderSummaryStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePluginSupport_destroy_key(
                ReminderSummaryStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ReminderSummaryStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ReminderSummaryStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ReminderSummaryStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ReminderSummaryStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusType *out,
                const ReminderSummaryStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ReminderSummaryStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ReminderSummaryStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ReminderSummaryStatusTypePlugin_deserialize_from_cdr_buffer(
                ReminderSummaryStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ReminderSummaryStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ReminderSummaryStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ReminderSummaryStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ReminderSummaryStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusTypeKeyHolder *key, 
                const ReminderSummaryStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ReminderSummaryStatusType *instance, 
                const ReminderSummaryStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ReminderSummaryStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ReminderSummaryStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ReminderSummaryStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ReminderSummaryStatusTypePlugin_1349533115_h */

