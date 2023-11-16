

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WeatherStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WeatherStatusReportTypePlugin_1246220673_h
#define WeatherStatusReportTypePlugin_1246220673_h

#include "WeatherStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/CloudCoverType_AllPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/PrecipitationType_AllPlugin.hpp"
#include "UMAA/Common/Measurement/WeatherSeverityType_AllPlugin.hpp"
#include "UMAA/Common/MeasurementConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WeatherStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WeatherStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WeatherStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WeatherStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WeatherStatusReportType.
            */
            typedef  class WeatherStatusReportType WeatherStatusReportTypeKeyHolder;

            #define WeatherStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WeatherStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WeatherStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WeatherStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WeatherStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WeatherStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WeatherStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WeatherStatusReportType*
            WeatherStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WeatherStatusReportType*
            WeatherStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WeatherStatusReportType*
            WeatherStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePluginSupport_copy_data(
                WeatherStatusReportType *out,
                const WeatherStatusReportType *in);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_destroy_data_w_params(
                WeatherStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_destroy_data_ex(
                WeatherStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_destroy_data(
                WeatherStatusReportType *sample);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_print_data(
                const WeatherStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WeatherStatusReportType*
            WeatherStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WeatherStatusReportType*
            WeatherStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_destroy_key_ex(
                WeatherStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePluginSupport_destroy_key(
                WeatherStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WeatherStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WeatherStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WeatherStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WeatherStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportType *out,
                const WeatherStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WeatherStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WeatherStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WeatherStatusReportTypePlugin_deserialize_from_cdr_buffer(
                WeatherStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WeatherStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WeatherStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WeatherStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WeatherStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportTypeKeyHolder *key, 
                const WeatherStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WeatherStatusReportType *instance, 
                const WeatherStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WeatherStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WeatherStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WeatherStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WeatherStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WeatherStatusReportTypePlugin_1246220673_h */

