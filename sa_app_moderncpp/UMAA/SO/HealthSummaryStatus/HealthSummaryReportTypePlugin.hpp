

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthSummaryReportTypePlugin_1784270557_h
#define HealthSummaryReportTypePlugin_1784270557_h

#include "HealthSummaryReportType.hpp"

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
    namespace SO {
        namespace HealthSummaryStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HealthSummaryReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthSummaryReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthSummaryReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthSummaryReportType.
            */
            typedef  class HealthSummaryReportType HealthSummaryReportTypeKeyHolder;

            #define HealthSummaryReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthSummaryReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthSummaryReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthSummaryReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthSummaryReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthSummaryReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthSummaryReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthSummaryReportType*
            HealthSummaryReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthSummaryReportType*
            HealthSummaryReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryReportType*
            HealthSummaryReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePluginSupport_copy_data(
                HealthSummaryReportType *out,
                const HealthSummaryReportType *in);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_destroy_data_w_params(
                HealthSummaryReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_destroy_data_ex(
                HealthSummaryReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_destroy_data(
                HealthSummaryReportType *sample);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_print_data(
                const HealthSummaryReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthSummaryReportType*
            HealthSummaryReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryReportType*
            HealthSummaryReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_destroy_key_ex(
                HealthSummaryReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePluginSupport_destroy_key(
                HealthSummaryReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthSummaryReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthSummaryReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthSummaryReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthSummaryReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportType *out,
                const HealthSummaryReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthSummaryReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthSummaryReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthSummaryReportTypePlugin_deserialize_from_cdr_buffer(
                HealthSummaryReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthSummaryReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportTypeKeyHolder *key, 
                const HealthSummaryReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryReportType *instance, 
                const HealthSummaryReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthSummaryReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthSummaryReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthSummaryStatus  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthSummaryReportTypePlugin_1784270557_h */

