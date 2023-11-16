

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RequiredSpeedControlPlugin_1864756473_h
#define RequiredSpeedControlPlugin_1864756473_h

#include "RequiredSpeedControl.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/SpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {

            #define RequiredSpeedControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RequiredSpeedControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RequiredSpeedControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RequiredSpeedControlPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RequiredSpeedControlPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RequiredSpeedControl*
            RequiredSpeedControlPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RequiredSpeedControl*
            RequiredSpeedControlPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RequiredSpeedControl*
            RequiredSpeedControlPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedControlPluginSupport_copy_data(
                RequiredSpeedControl *out,
                const RequiredSpeedControl *in);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPluginSupport_destroy_data_w_params(
                RequiredSpeedControl *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPluginSupport_destroy_data_ex(
                RequiredSpeedControl *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPluginSupport_destroy_data(
                RequiredSpeedControl *sample);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPluginSupport_print_data(
                const RequiredSpeedControl *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RequiredSpeedControlPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RequiredSpeedControlPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RequiredSpeedControlPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RequiredSpeedControlPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedControl *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedControlPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedControl *out,
                const RequiredSpeedControl *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RequiredSpeedControlPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RequiredSpeedControl *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedControlPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedControl **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RequiredSpeedControlPlugin_deserialize_from_cdr_buffer(
                RequiredSpeedControl *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedControlPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RequiredSpeedControlPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedControlPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedControlPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedControlPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedControl ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RequiredSpeedControlPlugin_new(void);

            NDDSUSERDllExport extern void
            RequiredSpeedControlPlugin_delete(struct PRESTypePlugin *);

        } /* namespace VariableSpeedControl  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RequiredSpeedControlPlugin_1864756473_h */

