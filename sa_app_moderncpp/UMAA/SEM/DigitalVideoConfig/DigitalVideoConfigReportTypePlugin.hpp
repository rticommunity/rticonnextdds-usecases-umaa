

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoConfigReportTypePlugin_612099485_h
#define DigitalVideoConfigReportTypePlugin_612099485_h

#include "DigitalVideoConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SEM/SensorManagement/DigitalSensorErrorTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalVideoConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalVideoConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalVideoConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalVideoConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalVideoConfigReportType.
            */
            typedef  class DigitalVideoConfigReportType DigitalVideoConfigReportTypeKeyHolder;

            #define DigitalVideoConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalVideoConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalVideoConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalVideoConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalVideoConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalVideoConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalVideoConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalVideoConfigReportType*
            DigitalVideoConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalVideoConfigReportType*
            DigitalVideoConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoConfigReportType*
            DigitalVideoConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePluginSupport_copy_data(
                DigitalVideoConfigReportType *out,
                const DigitalVideoConfigReportType *in);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_destroy_data_w_params(
                DigitalVideoConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_destroy_data_ex(
                DigitalVideoConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_destroy_data(
                DigitalVideoConfigReportType *sample);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_print_data(
                const DigitalVideoConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalVideoConfigReportType*
            DigitalVideoConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoConfigReportType*
            DigitalVideoConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_destroy_key_ex(
                DigitalVideoConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePluginSupport_destroy_key(
                DigitalVideoConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalVideoConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalVideoConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalVideoConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalVideoConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportType *out,
                const DigitalVideoConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalVideoConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalVideoConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalVideoConfigReportTypePlugin_deserialize_from_cdr_buffer(
                DigitalVideoConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalVideoConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportTypeKeyHolder *key, 
                const DigitalVideoConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoConfigReportType *instance, 
                const DigitalVideoConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalVideoConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalVideoConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalVideoConfig  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalVideoConfigReportTypePlugin_612099485_h */

