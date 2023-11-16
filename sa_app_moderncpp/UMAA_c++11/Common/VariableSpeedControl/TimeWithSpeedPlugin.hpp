

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWithSpeed.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TimeWithSpeedPlugin_1557317722_h
#define TimeWithSpeedPlugin_1557317722_h

#include "TimeWithSpeed.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/SpeedControlTypePlugin.hpp"
#include "UMAA/Common/TimeWindow/TimeWindowTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {

            #define TimeWithSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TimeWithSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TimeWithSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TimeWithSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TimeWithSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TimeWithSpeed*
            TimeWithSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TimeWithSpeed*
            TimeWithSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TimeWithSpeed*
            TimeWithSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TimeWithSpeedPluginSupport_copy_data(
                TimeWithSpeed *out,
                const TimeWithSpeed *in);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPluginSupport_destroy_data_w_params(
                TimeWithSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPluginSupport_destroy_data_ex(
                TimeWithSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPluginSupport_destroy_data(
                TimeWithSpeed *sample);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPluginSupport_print_data(
                const TimeWithSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TimeWithSpeedPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TimeWithSpeedPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TimeWithSpeedPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TimeWithSpeedPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TimeWithSpeed *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TimeWithSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TimeWithSpeed *out,
                const TimeWithSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TimeWithSpeedPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TimeWithSpeed *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TimeWithSpeedPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TimeWithSpeed **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TimeWithSpeedPlugin_deserialize_from_cdr_buffer(
                TimeWithSpeed *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TimeWithSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TimeWithSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TimeWithSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TimeWithSpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TimeWithSpeedPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TimeWithSpeed ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TimeWithSpeedPlugin_new(void);

            NDDSUSERDllExport extern void
            TimeWithSpeedPlugin_delete(struct PRESTypePlugin *);

        } /* namespace VariableSpeedControl  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TimeWithSpeedPlugin_1557317722_h */

