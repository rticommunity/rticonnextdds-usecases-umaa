

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalPoseConfigAckReportTypePlugin_816116635_h
#define GlobalPoseConfigAckReportTypePlugin_816116635_h

#include "GlobalPoseConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SA/GlobalPoseConfig/GlobalPoseConfigCommandTypePlugin.hpp"

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
            * By default, this type is struct GlobalPoseConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalPoseConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalPoseConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalPoseConfigAckReportType.
            */
            typedef class GlobalPoseConfigAckReportType GlobalPoseConfigAckReportTypeKeyHolder;

            #define GlobalPoseConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalPoseConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalPoseConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalPoseConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalPoseConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalPoseConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalPoseConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalPoseConfigAckReportType*
            GlobalPoseConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalPoseConfigAckReportType*
            GlobalPoseConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseConfigAckReportType*
            GlobalPoseConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePluginSupport_copy_data(
                GlobalPoseConfigAckReportType *out,
                const GlobalPoseConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_destroy_data_w_params(
                GlobalPoseConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_destroy_data_ex(
                GlobalPoseConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_destroy_data(
                GlobalPoseConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_print_data(
                const GlobalPoseConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalPoseConfigAckReportType*
            GlobalPoseConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseConfigAckReportType*
            GlobalPoseConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_destroy_key_ex(
                GlobalPoseConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePluginSupport_destroy_key(
                GlobalPoseConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalPoseConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalPoseConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalPoseConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalPoseConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportType *out,
                const GlobalPoseConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalPoseConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalPoseConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalPoseConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalPoseConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalPoseConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportTypeKeyHolder *key, 
                const GlobalPoseConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseConfigAckReportType *instance, 
                const GlobalPoseConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalPoseConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalPoseConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalPoseConfig  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalPoseConfigAckReportTypePlugin_816116635_h */

