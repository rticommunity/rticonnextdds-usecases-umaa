

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandTypePlugin_1563520374_h
#define PanTiltJointVelocityCommandTypePlugin_1563520374_h

#include "PanTiltJointVelocityCommandType.hpp"

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
            * By default, this type is struct PanTiltJointVelocityCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointVelocityCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointVelocityCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointVelocityCommandType.
            */
            typedef class PanTiltJointVelocityCommandType PanTiltJointVelocityCommandTypeKeyHolder;

            #define PanTiltJointVelocityCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointVelocityCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointVelocityCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointVelocityCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointVelocityCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointVelocityCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointVelocityCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointVelocityCommandType*
            PanTiltJointVelocityCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandType*
            PanTiltJointVelocityCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandType*
            PanTiltJointVelocityCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePluginSupport_copy_data(
                PanTiltJointVelocityCommandType *out,
                const PanTiltJointVelocityCommandType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_destroy_data_w_params(
                PanTiltJointVelocityCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_destroy_data_ex(
                PanTiltJointVelocityCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_destroy_data(
                PanTiltJointVelocityCommandType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_print_data(
                const PanTiltJointVelocityCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandType*
            PanTiltJointVelocityCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandType*
            PanTiltJointVelocityCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_destroy_key_ex(
                PanTiltJointVelocityCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePluginSupport_destroy_key(
                PanTiltJointVelocityCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointVelocityCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointVelocityCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointVelocityCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandType *out,
                const PanTiltJointVelocityCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointVelocityCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointVelocityCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointVelocityCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandTypeKeyHolder *key, 
                const PanTiltJointVelocityCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandType *instance, 
                const PanTiltJointVelocityCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointVelocityCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointVelocityCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointVelocityControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointVelocityCommandTypePlugin_1563520374_h */

