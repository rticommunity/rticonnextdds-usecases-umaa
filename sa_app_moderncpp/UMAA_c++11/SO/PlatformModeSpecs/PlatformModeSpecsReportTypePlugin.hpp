

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeSpecsReportTypePlugin_1515919816_h
#define PlatformModeSpecsReportTypePlugin_1515919816_h

#include "PlatformModeSpecsReportType.hpp"

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
    namespace SO {
        namespace PlatformModeSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PlatformModeSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PlatformModeSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PlatformModeSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PlatformModeSpecsReportType.
            */
            typedef class PlatformModeSpecsReportType PlatformModeSpecsReportTypeKeyHolder;

            #define PlatformModeSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PlatformModeSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PlatformModeSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PlatformModeSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PlatformModeSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PlatformModeSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PlatformModeSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PlatformModeSpecsReportType*
            PlatformModeSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PlatformModeSpecsReportType*
            PlatformModeSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlatformModeSpecsReportType*
            PlatformModeSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePluginSupport_copy_data(
                PlatformModeSpecsReportType *out,
                const PlatformModeSpecsReportType *in);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_destroy_data_w_params(
                PlatformModeSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_destroy_data_ex(
                PlatformModeSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_destroy_data(
                PlatformModeSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_print_data(
                const PlatformModeSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PlatformModeSpecsReportType*
            PlatformModeSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlatformModeSpecsReportType*
            PlatformModeSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_destroy_key_ex(
                PlatformModeSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePluginSupport_destroy_key(
                PlatformModeSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PlatformModeSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PlatformModeSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PlatformModeSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PlatformModeSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportType *out,
                const PlatformModeSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PlatformModeSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PlatformModeSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PlatformModeSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                PlatformModeSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PlatformModeSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PlatformModeSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PlatformModeSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PlatformModeSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportTypeKeyHolder *key, 
                const PlatformModeSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeSpecsReportType *instance, 
                const PlatformModeSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PlatformModeSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PlatformModeSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PlatformModeSpecs  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PlatformModeSpecsReportTypePlugin_1515919816_h */

