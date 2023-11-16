

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HostManipulatorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HostManipulatorReportTypePlugin_487308305_h
#define HostManipulatorReportTypePlugin_487308305_h

#include "HostManipulatorReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace ExtendedPayloadStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HostManipulatorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HostManipulatorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HostManipulatorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HostManipulatorReportType.
            */
            typedef class HostManipulatorReportType HostManipulatorReportTypeKeyHolder;

            #define HostManipulatorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HostManipulatorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HostManipulatorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HostManipulatorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HostManipulatorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HostManipulatorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HostManipulatorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HostManipulatorReportType*
            HostManipulatorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HostManipulatorReportType*
            HostManipulatorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HostManipulatorReportType*
            HostManipulatorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePluginSupport_copy_data(
                HostManipulatorReportType *out,
                const HostManipulatorReportType *in);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_destroy_data_w_params(
                HostManipulatorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_destroy_data_ex(
                HostManipulatorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_destroy_data(
                HostManipulatorReportType *sample);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_print_data(
                const HostManipulatorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HostManipulatorReportType*
            HostManipulatorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HostManipulatorReportType*
            HostManipulatorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_destroy_key_ex(
                HostManipulatorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePluginSupport_destroy_key(
                HostManipulatorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HostManipulatorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HostManipulatorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HostManipulatorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HostManipulatorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportType *out,
                const HostManipulatorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HostManipulatorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HostManipulatorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HostManipulatorReportTypePlugin_deserialize_from_cdr_buffer(
                HostManipulatorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HostManipulatorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HostManipulatorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HostManipulatorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HostManipulatorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportTypeKeyHolder *key, 
                const HostManipulatorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HostManipulatorReportType *instance, 
                const HostManipulatorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HostManipulatorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HostManipulatorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HostManipulatorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ExtendedPayloadStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HostManipulatorReportTypePlugin_487308305_h */

