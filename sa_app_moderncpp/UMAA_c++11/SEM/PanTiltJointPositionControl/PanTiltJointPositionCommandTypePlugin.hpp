

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionCommandTypePlugin_794783564_h
#define PanTiltJointPositionCommandTypePlugin_794783564_h

#include "PanTiltJointPositionCommandType.hpp"

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
        namespace PanTiltJointPositionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointPositionCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointPositionCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointPositionCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointPositionCommandType.
            */
            typedef class PanTiltJointPositionCommandType PanTiltJointPositionCommandTypeKeyHolder;

            #define PanTiltJointPositionCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointPositionCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointPositionCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointPositionCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointPositionCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointPositionCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointPositionCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointPositionCommandType*
            PanTiltJointPositionCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointPositionCommandType*
            PanTiltJointPositionCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointPositionCommandType*
            PanTiltJointPositionCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePluginSupport_copy_data(
                PanTiltJointPositionCommandType *out,
                const PanTiltJointPositionCommandType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_destroy_data_w_params(
                PanTiltJointPositionCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_destroy_data_ex(
                PanTiltJointPositionCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_destroy_data(
                PanTiltJointPositionCommandType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_print_data(
                const PanTiltJointPositionCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointPositionCommandType*
            PanTiltJointPositionCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointPositionCommandType*
            PanTiltJointPositionCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_destroy_key_ex(
                PanTiltJointPositionCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePluginSupport_destroy_key(
                PanTiltJointPositionCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointPositionCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointPositionCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointPositionCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandType *out,
                const PanTiltJointPositionCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointPositionCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointPositionCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointPositionCommandTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointPositionCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointPositionCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandTypeKeyHolder *key, 
                const PanTiltJointPositionCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandType *instance, 
                const PanTiltJointPositionCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointPositionCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointPositionCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointPositionControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointPositionCommandTypePlugin_794783564_h */

