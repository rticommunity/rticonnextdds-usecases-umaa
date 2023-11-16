

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandAckReportTypePlugin_1735772377_h
#define PanTiltJointVelocityCommandAckReportTypePlugin_1735772377_h

#include "PanTiltJointVelocityCommandAckReportType.hpp"

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
        namespace PanTiltJointVelocityControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointVelocityCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointVelocityCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointVelocityCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointVelocityCommandAckReportType.
            */
            typedef  class PanTiltJointVelocityCommandAckReportType PanTiltJointVelocityCommandAckReportTypeKeyHolder;

            #define PanTiltJointVelocityCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointVelocityCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointVelocityCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointVelocityCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointVelocityCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointVelocityCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointVelocityCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointVelocityCommandAckReportType*
            PanTiltJointVelocityCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandAckReportType*
            PanTiltJointVelocityCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandAckReportType*
            PanTiltJointVelocityCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_copy_data(
                PanTiltJointVelocityCommandAckReportType *out,
                const PanTiltJointVelocityCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_destroy_data_w_params(
                PanTiltJointVelocityCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_destroy_data_ex(
                PanTiltJointVelocityCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_destroy_data(
                PanTiltJointVelocityCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_print_data(
                const PanTiltJointVelocityCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandAckReportType*
            PanTiltJointVelocityCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandAckReportType*
            PanTiltJointVelocityCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_destroy_key_ex(
                PanTiltJointVelocityCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePluginSupport_destroy_key(
                PanTiltJointVelocityCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointVelocityCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointVelocityCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointVelocityCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportType *out,
                const PanTiltJointVelocityCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointVelocityCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointVelocityCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointVelocityCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportTypeKeyHolder *key, 
                const PanTiltJointVelocityCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandAckReportType *instance, 
                const PanTiltJointVelocityCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointVelocityCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointVelocityCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointVelocityControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointVelocityCommandAckReportTypePlugin_1735772377_h */

