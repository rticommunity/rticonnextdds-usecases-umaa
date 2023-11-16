

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ReminderStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ReminderStatusTypePlugin_784038570_h
#define ReminderStatusTypePlugin_784038570_h

#include "ReminderStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

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
            * By default, this type is struct ReminderStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ReminderStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ReminderStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ReminderStatusType.
            */
            typedef  class ReminderStatusType ReminderStatusTypeKeyHolder;

            #define ReminderStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ReminderStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ReminderStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ReminderStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ReminderStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ReminderStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ReminderStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ReminderStatusType*
            ReminderStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ReminderStatusType*
            ReminderStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ReminderStatusType*
            ReminderStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePluginSupport_copy_data(
                ReminderStatusType *out,
                const ReminderStatusType *in);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_destroy_data_w_params(
                ReminderStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_destroy_data_ex(
                ReminderStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_destroy_data(
                ReminderStatusType *sample);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_print_data(
                const ReminderStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ReminderStatusType*
            ReminderStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ReminderStatusType*
            ReminderStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_destroy_key_ex(
                ReminderStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePluginSupport_destroy_key(
                ReminderStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ReminderStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ReminderStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ReminderStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ReminderStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusType *out,
                const ReminderStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ReminderStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ReminderStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ReminderStatusTypePlugin_deserialize_from_cdr_buffer(
                ReminderStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ReminderStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ReminderStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ReminderStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ReminderStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusTypeKeyHolder *key, 
                const ReminderStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ReminderStatusType *instance, 
                const ReminderStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ReminderStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ReminderStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ReminderStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ReminderStatusTypePlugin_784038570_h */

