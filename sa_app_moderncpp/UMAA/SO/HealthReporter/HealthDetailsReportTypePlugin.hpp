

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthDetailsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthDetailsReportTypePlugin_1126741314_h
#define HealthDetailsReportTypePlugin_1126741314_h

#include "HealthDetailsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/HealthReporter/HealthDetailsStatusTypePlugin.hpp"

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
            * By default, this type is struct HealthDetailsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthDetailsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthDetailsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthDetailsReportType.
            */
            typedef  class HealthDetailsReportType HealthDetailsReportTypeKeyHolder;

            #define HealthDetailsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthDetailsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthDetailsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthDetailsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthDetailsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthDetailsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthDetailsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthDetailsReportType*
            HealthDetailsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthDetailsReportType*
            HealthDetailsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthDetailsReportType*
            HealthDetailsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePluginSupport_copy_data(
                HealthDetailsReportType *out,
                const HealthDetailsReportType *in);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_destroy_data_w_params(
                HealthDetailsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_destroy_data_ex(
                HealthDetailsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_destroy_data(
                HealthDetailsReportType *sample);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_print_data(
                const HealthDetailsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthDetailsReportType*
            HealthDetailsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthDetailsReportType*
            HealthDetailsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_destroy_key_ex(
                HealthDetailsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePluginSupport_destroy_key(
                HealthDetailsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthDetailsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthDetailsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthDetailsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthDetailsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportType *out,
                const HealthDetailsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthDetailsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthDetailsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthDetailsReportTypePlugin_deserialize_from_cdr_buffer(
                HealthDetailsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthDetailsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthDetailsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthDetailsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthDetailsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportTypeKeyHolder *key, 
                const HealthDetailsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthDetailsReportType *instance, 
                const HealthDetailsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthDetailsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthDetailsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthDetailsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthDetailsReportTypePlugin_1126741314_h */

