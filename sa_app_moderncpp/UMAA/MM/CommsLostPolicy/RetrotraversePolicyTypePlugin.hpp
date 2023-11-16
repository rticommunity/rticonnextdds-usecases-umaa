

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraversePolicyType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraversePolicyTypePlugin_2092785694_h
#define RetrotraversePolicyTypePlugin_2092785694_h

#include "RetrotraversePolicyType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MM/BaseType/WaypointTypePlugin.hpp"
#include "UMAA/MM/Retrotraverse/RetrotraverseTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            #define RetrotraversePolicyTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RetrotraversePolicyTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RetrotraversePolicyTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RetrotraversePolicyTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RetrotraversePolicyTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RetrotraversePolicyType*
            RetrotraversePolicyTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RetrotraversePolicyType*
            RetrotraversePolicyTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RetrotraversePolicyType*
            RetrotraversePolicyTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RetrotraversePolicyTypePluginSupport_copy_data(
                RetrotraversePolicyType *out,
                const RetrotraversePolicyType *in);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePluginSupport_destroy_data_w_params(
                RetrotraversePolicyType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePluginSupport_destroy_data_ex(
                RetrotraversePolicyType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePluginSupport_destroy_data(
                RetrotraversePolicyType *sample);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePluginSupport_print_data(
                const RetrotraversePolicyType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RetrotraversePolicyTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RetrotraversePolicyTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RetrotraversePolicyTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RetrotraversePolicyTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraversePolicyType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RetrotraversePolicyTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraversePolicyType *out,
                const RetrotraversePolicyType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RetrotraversePolicyTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RetrotraversePolicyType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RetrotraversePolicyTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraversePolicyType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RetrotraversePolicyTypePlugin_deserialize_from_cdr_buffer(
                RetrotraversePolicyType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RetrotraversePolicyTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RetrotraversePolicyTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RetrotraversePolicyTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RetrotraversePolicyTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RetrotraversePolicyTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraversePolicyType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RetrotraversePolicyTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RetrotraversePolicyTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsLostPolicy  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RetrotraversePolicyTypePlugin_2092785694_h */

