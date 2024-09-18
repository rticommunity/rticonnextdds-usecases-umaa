

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorCommandTypePlugin_1827045264_h
#define PropulsorCommandTypePlugin_1827045264_h

#include "PropulsorCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Angle/GammaAnglePropulsorRequirementTypePlugin.hpp"
#include "UMAA/Common/Angle/PropellerPitchAnglePropulsorRequirementTypePlugin.hpp"
#include "UMAA/Common/Angle/RhoAnglePropulsorRequirementTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Speed/EngineRPMSpeedRequirementPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorCommandType.
            */
            typedef class PropulsorCommandType PropulsorCommandTypeKeyHolder;

            #define PropulsorCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorCommandType*
            PropulsorCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorCommandType*
            PropulsorCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorCommandType*
            PropulsorCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePluginSupport_copy_data(
                PropulsorCommandType *out,
                const PropulsorCommandType *in);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_destroy_data_w_params(
                PropulsorCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_destroy_data_ex(
                PropulsorCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_destroy_data(
                PropulsorCommandType *sample);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_print_data(
                const PropulsorCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorCommandType*
            PropulsorCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorCommandType*
            PropulsorCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_destroy_key_ex(
                PropulsorCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePluginSupport_destroy_key(
                PropulsorCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandType *out,
                const PropulsorCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorCommandTypePlugin_deserialize_from_cdr_buffer(
                PropulsorCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandTypeKeyHolder *key, 
                const PropulsorCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorCommandType *instance, 
                const PropulsorCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorsControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorCommandTypePlugin_1827045264_h */
