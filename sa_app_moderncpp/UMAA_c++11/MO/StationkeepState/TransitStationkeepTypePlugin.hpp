

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransitStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TransitStationkeepTypePlugin_1107227602_h
#define TransitStationkeepTypePlugin_1107227602_h

#include "TransitStationkeepType.hpp"

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

            #define TransitStationkeepTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TransitStationkeepTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TransitStationkeepTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TransitStationkeepTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TransitStationkeepTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TransitStationkeepType*
            TransitStationkeepTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TransitStationkeepType*
            TransitStationkeepTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TransitStationkeepType*
            TransitStationkeepTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TransitStationkeepTypePluginSupport_copy_data(
                TransitStationkeepType *out,
                const TransitStationkeepType *in);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePluginSupport_destroy_data_w_params(
                TransitStationkeepType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePluginSupport_destroy_data_ex(
                TransitStationkeepType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePluginSupport_destroy_data(
                TransitStationkeepType *sample);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePluginSupport_print_data(
                const TransitStationkeepType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TransitStationkeepTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TransitStationkeepTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TransitStationkeepTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TransitStationkeepTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TransitStationkeepType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TransitStationkeepTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TransitStationkeepType *out,
                const TransitStationkeepType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TransitStationkeepTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TransitStationkeepType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TransitStationkeepTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TransitStationkeepType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TransitStationkeepTypePlugin_deserialize_from_cdr_buffer(
                TransitStationkeepType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TransitStationkeepTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TransitStationkeepTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TransitStationkeepTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TransitStationkeepTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TransitStationkeepTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TransitStationkeepType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TransitStationkeepTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TransitStationkeepTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StationkeepState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TransitStationkeepTypePlugin_1107227602_h */

