

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineSpecsReportTypePlugin_166603692_h
#define EngineSpecsReportTypePlugin_166603692_h

#include "EngineSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace EngineSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EngineSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EngineSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EngineSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EngineSpecsReportType.
            */
            typedef  class EngineSpecsReportType EngineSpecsReportTypeKeyHolder;

            #define EngineSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EngineSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EngineSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineSpecsReportType*
            EngineSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineSpecsReportType*
            EngineSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineSpecsReportType*
            EngineSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePluginSupport_copy_data(
                EngineSpecsReportType *out,
                const EngineSpecsReportType *in);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_destroy_data_w_params(
                EngineSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_destroy_data_ex(
                EngineSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_destroy_data(
                EngineSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_print_data(
                const EngineSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EngineSpecsReportType*
            EngineSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineSpecsReportType*
            EngineSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_destroy_key_ex(
                EngineSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePluginSupport_destroy_key(
                EngineSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportType *out,
                const EngineSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                EngineSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportTypeKeyHolder *key, 
                const EngineSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpecsReportType *instance, 
                const EngineSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EngineSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EngineSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EngineSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineSpecsReportTypePlugin_166603692_h */

