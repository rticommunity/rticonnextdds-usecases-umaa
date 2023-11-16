

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortCommandAckReportTypePlugin_133801963_h
#define PanTiltJointEffortCommandAckReportTypePlugin_133801963_h

#include "PanTiltJointEffortCommandAckReportType.hpp"

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
    namespace SEM {
        namespace PanTiltJointEffortControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointEffortCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointEffortCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointEffortCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointEffortCommandAckReportType.
            */
            typedef  class PanTiltJointEffortCommandAckReportType PanTiltJointEffortCommandAckReportTypeKeyHolder;

            #define PanTiltJointEffortCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointEffortCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointEffortCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointEffortCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointEffortCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointEffortCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointEffortCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointEffortCommandAckReportType*
            PanTiltJointEffortCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointEffortCommandAckReportType*
            PanTiltJointEffortCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortCommandAckReportType*
            PanTiltJointEffortCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePluginSupport_copy_data(
                PanTiltJointEffortCommandAckReportType *out,
                const PanTiltJointEffortCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_destroy_data_w_params(
                PanTiltJointEffortCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_destroy_data_ex(
                PanTiltJointEffortCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_destroy_data(
                PanTiltJointEffortCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_print_data(
                const PanTiltJointEffortCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointEffortCommandAckReportType*
            PanTiltJointEffortCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortCommandAckReportType*
            PanTiltJointEffortCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_destroy_key_ex(
                PanTiltJointEffortCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePluginSupport_destroy_key(
                PanTiltJointEffortCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointEffortCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointEffortCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointEffortCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportType *out,
                const PanTiltJointEffortCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointEffortCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointEffortCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointEffortCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportTypeKeyHolder *key, 
                const PanTiltJointEffortCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandAckReportType *instance, 
                const PanTiltJointEffortCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointEffortCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointEffortCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointEffortControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointEffortCommandAckReportTypePlugin_133801963_h */

