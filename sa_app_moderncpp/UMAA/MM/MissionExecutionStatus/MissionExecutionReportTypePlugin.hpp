

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionExecutionReportTypePlugin_860122263_h
#define MissionExecutionReportTypePlugin_860122263_h

#include "MissionExecutionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionExecutionStatus/MissionStatusTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionExecutionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionExecutionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionExecutionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionExecutionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionExecutionReportType.
            */
            typedef  class MissionExecutionReportType MissionExecutionReportTypeKeyHolder;

            #define MissionExecutionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionExecutionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionExecutionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionExecutionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionExecutionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionExecutionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionExecutionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionExecutionReportType*
            MissionExecutionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionExecutionReportType*
            MissionExecutionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionExecutionReportType*
            MissionExecutionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePluginSupport_copy_data(
                MissionExecutionReportType *out,
                const MissionExecutionReportType *in);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_destroy_data_w_params(
                MissionExecutionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_destroy_data_ex(
                MissionExecutionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_destroy_data(
                MissionExecutionReportType *sample);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_print_data(
                const MissionExecutionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionExecutionReportType*
            MissionExecutionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionExecutionReportType*
            MissionExecutionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_destroy_key_ex(
                MissionExecutionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePluginSupport_destroy_key(
                MissionExecutionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionExecutionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionExecutionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionExecutionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionExecutionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportType *out,
                const MissionExecutionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionExecutionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionExecutionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionExecutionReportTypePlugin_deserialize_from_cdr_buffer(
                MissionExecutionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionExecutionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportTypeKeyHolder *key, 
                const MissionExecutionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionReportType *instance, 
                const MissionExecutionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionExecutionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionExecutionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionExecutionStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionExecutionReportTypePlugin_860122263_h */

