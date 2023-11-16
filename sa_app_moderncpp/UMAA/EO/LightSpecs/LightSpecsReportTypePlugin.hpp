

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightSpecsReportTypePlugin_1091443327_h
#define LightSpecsReportTypePlugin_1091443327_h

#include "LightSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace LightSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LightSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LightSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LightSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LightSpecsReportType.
            */
            typedef  class LightSpecsReportType LightSpecsReportTypeKeyHolder;

            #define LightSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LightSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LightSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LightSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LightSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LightSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LightSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LightSpecsReportType*
            LightSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LightSpecsReportType*
            LightSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LightSpecsReportType*
            LightSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePluginSupport_copy_data(
                LightSpecsReportType *out,
                const LightSpecsReportType *in);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_destroy_data_w_params(
                LightSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_destroy_data_ex(
                LightSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_destroy_data(
                LightSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_print_data(
                const LightSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LightSpecsReportType*
            LightSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LightSpecsReportType*
            LightSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_destroy_key_ex(
                LightSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePluginSupport_destroy_key(
                LightSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LightSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LightSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LightSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LightSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportType *out,
                const LightSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LightSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LightSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LightSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                LightSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LightSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LightSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LightSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LightSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportTypeKeyHolder *key, 
                const LightSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LightSpecsReportType *instance, 
                const LightSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LightSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LightSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LightSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LightSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LightSpecsReportTypePlugin_1091443327_h */

