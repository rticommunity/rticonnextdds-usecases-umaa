

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CompartmentConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CompartmentConfigReportTypePlugin_2128143234_h
#define CompartmentConfigReportTypePlugin_2128143234_h

#include "CompartmentConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace CompartmentConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CompartmentConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CompartmentConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CompartmentConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CompartmentConfigReportType.
            */
            typedef  class CompartmentConfigReportType CompartmentConfigReportTypeKeyHolder;

            #define CompartmentConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CompartmentConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CompartmentConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CompartmentConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CompartmentConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CompartmentConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CompartmentConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CompartmentConfigReportType*
            CompartmentConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CompartmentConfigReportType*
            CompartmentConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CompartmentConfigReportType*
            CompartmentConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePluginSupport_copy_data(
                CompartmentConfigReportType *out,
                const CompartmentConfigReportType *in);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_destroy_data_w_params(
                CompartmentConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_destroy_data_ex(
                CompartmentConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_destroy_data(
                CompartmentConfigReportType *sample);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_print_data(
                const CompartmentConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CompartmentConfigReportType*
            CompartmentConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CompartmentConfigReportType*
            CompartmentConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_destroy_key_ex(
                CompartmentConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePluginSupport_destroy_key(
                CompartmentConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CompartmentConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CompartmentConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CompartmentConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CompartmentConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportType *out,
                const CompartmentConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CompartmentConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CompartmentConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CompartmentConfigReportTypePlugin_deserialize_from_cdr_buffer(
                CompartmentConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CompartmentConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CompartmentConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CompartmentConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CompartmentConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportTypeKeyHolder *key, 
                const CompartmentConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentConfigReportType *instance, 
                const CompartmentConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CompartmentConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CompartmentConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CompartmentConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CompartmentConfig  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CompartmentConfigReportTypePlugin_2128143234_h */

