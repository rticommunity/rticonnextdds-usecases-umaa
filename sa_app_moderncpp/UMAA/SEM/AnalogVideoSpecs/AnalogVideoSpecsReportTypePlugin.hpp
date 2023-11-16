

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogVideoSpecsReportTypePlugin_1380392845_h
#define AnalogVideoSpecsReportTypePlugin_1380392845_h

#include "AnalogVideoSpecsReportType.hpp"

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
    namespace SEM {
        namespace AnalogVideoSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AnalogVideoSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AnalogVideoSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AnalogVideoSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AnalogVideoSpecsReportType.
            */
            typedef  class AnalogVideoSpecsReportType AnalogVideoSpecsReportTypeKeyHolder;

            #define AnalogVideoSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnalogVideoSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnalogVideoSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnalogVideoSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AnalogVideoSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AnalogVideoSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnalogVideoSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnalogVideoSpecsReportType*
            AnalogVideoSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnalogVideoSpecsReportType*
            AnalogVideoSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnalogVideoSpecsReportType*
            AnalogVideoSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePluginSupport_copy_data(
                AnalogVideoSpecsReportType *out,
                const AnalogVideoSpecsReportType *in);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_destroy_data_w_params(
                AnalogVideoSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_destroy_data_ex(
                AnalogVideoSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_destroy_data(
                AnalogVideoSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_print_data(
                const AnalogVideoSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AnalogVideoSpecsReportType*
            AnalogVideoSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnalogVideoSpecsReportType*
            AnalogVideoSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_destroy_key_ex(
                AnalogVideoSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePluginSupport_destroy_key(
                AnalogVideoSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnalogVideoSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnalogVideoSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnalogVideoSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnalogVideoSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportType *out,
                const AnalogVideoSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnalogVideoSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnalogVideoSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnalogVideoSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                AnalogVideoSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnalogVideoSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnalogVideoSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportTypeKeyHolder *key, 
                const AnalogVideoSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AnalogVideoSpecsReportType *instance, 
                const AnalogVideoSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AnalogVideoSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnalogVideoSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnalogVideoSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AnalogVideoSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnalogVideoSpecsReportTypePlugin_1380392845_h */

