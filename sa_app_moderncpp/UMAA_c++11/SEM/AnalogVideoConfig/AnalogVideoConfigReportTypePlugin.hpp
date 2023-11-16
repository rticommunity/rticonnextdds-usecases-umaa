

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogVideoConfigReportTypePlugin_2964399_h
#define AnalogVideoConfigReportTypePlugin_2964399_h

#include "AnalogVideoConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/SensorManagement/AnalogSensorErrorTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace AnalogVideoConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AnalogVideoConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AnalogVideoConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AnalogVideoConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AnalogVideoConfigReportType.
            */
            typedef class AnalogVideoConfigReportType AnalogVideoConfigReportTypeKeyHolder;

            #define AnalogVideoConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnalogVideoConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnalogVideoConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnalogVideoConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AnalogVideoConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AnalogVideoConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnalogVideoConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnalogVideoConfigReportType*
            AnalogVideoConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnalogVideoConfigReportType*
            AnalogVideoConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnalogVideoConfigReportType*
            AnalogVideoConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePluginSupport_copy_data(
                AnalogVideoConfigReportType *out,
                const AnalogVideoConfigReportType *in);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_destroy_data_w_params(
                AnalogVideoConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_destroy_data_ex(
                AnalogVideoConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_destroy_data(
                AnalogVideoConfigReportType *sample);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_print_data(
                const AnalogVideoConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AnalogVideoConfigReportType*
            AnalogVideoConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnalogVideoConfigReportType*
            AnalogVideoConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_destroy_key_ex(
                AnalogVideoConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePluginSupport_destroy_key(
                AnalogVideoConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnalogVideoConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnalogVideoConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnalogVideoConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnalogVideoConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportType *out,
                const AnalogVideoConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnalogVideoConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnalogVideoConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnalogVideoConfigReportTypePlugin_deserialize_from_cdr_buffer(
                AnalogVideoConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnalogVideoConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportTypeKeyHolder *key, 
                const AnalogVideoConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoConfigReportType *instance, 
                const AnalogVideoConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnalogVideoConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnalogVideoConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AnalogVideoConfig  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnalogVideoConfigReportTypePlugin_2964399_h */

