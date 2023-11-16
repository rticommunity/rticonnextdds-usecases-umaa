

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthSummaryCommandStatusTypePlugin_799429841_h
#define HealthSummaryCommandStatusTypePlugin_799429841_h

#include "HealthSummaryCommandStatusType.hpp"

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
        namespace HealthSummaryControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HealthSummaryCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthSummaryCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthSummaryCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthSummaryCommandStatusType.
            */
            typedef  class HealthSummaryCommandStatusType HealthSummaryCommandStatusTypeKeyHolder;

            #define HealthSummaryCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthSummaryCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthSummaryCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthSummaryCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthSummaryCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthSummaryCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthSummaryCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthSummaryCommandStatusType*
            HealthSummaryCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthSummaryCommandStatusType*
            HealthSummaryCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryCommandStatusType*
            HealthSummaryCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePluginSupport_copy_data(
                HealthSummaryCommandStatusType *out,
                const HealthSummaryCommandStatusType *in);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_destroy_data_w_params(
                HealthSummaryCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_destroy_data_ex(
                HealthSummaryCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_destroy_data(
                HealthSummaryCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_print_data(
                const HealthSummaryCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthSummaryCommandStatusType*
            HealthSummaryCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryCommandStatusType*
            HealthSummaryCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_destroy_key_ex(
                HealthSummaryCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePluginSupport_destroy_key(
                HealthSummaryCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthSummaryCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthSummaryCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthSummaryCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusType *out,
                const HealthSummaryCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthSummaryCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthSummaryCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthSummaryCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                HealthSummaryCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthSummaryCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusTypeKeyHolder *key, 
                const HealthSummaryCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandStatusType *instance, 
                const HealthSummaryCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthSummaryCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthSummaryCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthSummaryControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthSummaryCommandStatusTypePlugin_799429841_h */

