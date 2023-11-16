

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepingStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepingStationkeepTypePlugin_797128733_h
#define StationkeepingStationkeepTypePlugin_797128733_h

#include "StationkeepingStationkeepType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace StationkeepState {

            #define StationkeepingStationkeepTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StationkeepingStationkeepTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StationkeepingStationkeepTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StationkeepingStationkeepTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StationkeepingStationkeepTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StationkeepingStationkeepType*
            StationkeepingStationkeepTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StationkeepingStationkeepType*
            StationkeepingStationkeepTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StationkeepingStationkeepType*
            StationkeepingStationkeepTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StationkeepingStationkeepTypePluginSupport_copy_data(
                StationkeepingStationkeepType *out,
                const StationkeepingStationkeepType *in);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePluginSupport_destroy_data_w_params(
                StationkeepingStationkeepType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePluginSupport_destroy_data_ex(
                StationkeepingStationkeepType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePluginSupport_destroy_data(
                StationkeepingStationkeepType *sample);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePluginSupport_print_data(
                const StationkeepingStationkeepType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StationkeepingStationkeepTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StationkeepingStationkeepTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StationkeepingStationkeepTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StationkeepingStationkeepTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepingStationkeepType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StationkeepingStationkeepTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepingStationkeepType *out,
                const StationkeepingStationkeepType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StationkeepingStationkeepTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StationkeepingStationkeepType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StationkeepingStationkeepTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepingStationkeepType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StationkeepingStationkeepTypePlugin_deserialize_from_cdr_buffer(
                StationkeepingStationkeepType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StationkeepingStationkeepTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StationkeepingStationkeepTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StationkeepingStationkeepTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StationkeepingStationkeepTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StationkeepingStationkeepTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepingStationkeepType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StationkeepingStationkeepTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StationkeepingStationkeepTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StationkeepState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StationkeepingStationkeepTypePlugin_797128733_h */

