

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalPoseConfigReportTypePlugin_149435858_h
#define GlobalPoseConfigReportTypePlugin_149435858_h

#include "GlobalPoseConfigReportType.hpp"

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
    namespace SA {
        namespace GlobalPoseConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalPoseConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalPoseConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalPoseConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalPoseConfigReportType.
            */
            typedef class GlobalPoseConfigReportType GlobalPoseConfigReportTypeKeyHolder;

            #define GlobalPoseConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalPoseConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalPoseConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalPoseConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalPoseConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalPoseConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalPoseConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalPoseConfigReportType*
            GlobalPoseConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalPoseConfigReportType*
            GlobalPoseConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseConfigReportType*
            GlobalPoseConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePluginSupport_copy_data(
                GlobalPoseConfigReportType *out,
                const GlobalPoseConfigReportType *in);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_destroy_data_w_params(
                GlobalPoseConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_destroy_data_ex(
                GlobalPoseConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_destroy_data(
                GlobalPoseConfigReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_print_data(
                const GlobalPoseConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalPoseConfigReportType*
            GlobalPoseConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseConfigReportType*
            GlobalPoseConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_destroy_key_ex(
                GlobalPoseConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePluginSupport_destroy_key(
                GlobalPoseConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalPoseConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalPoseConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalPoseConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportType *out,
                const GlobalPoseConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalPoseConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalPoseConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalPoseConfigReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalPoseConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalPoseConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportTypeKeyHolder *key, 
                const GlobalPoseConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigReportType *instance, 
                const GlobalPoseConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalPoseConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalPoseConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalPoseConfig  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalPoseConfigReportTypePlugin_149435858_h */

