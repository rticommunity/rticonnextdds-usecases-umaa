

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackTransitType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackTransitTypePlugin_1567699268_h
#define GlobalRacetrackTransitTypePlugin_1567699268_h

#include "GlobalRacetrackTransitType.hpp"

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
        namespace GlobalRacetrackState {

            #define GlobalRacetrackTransitTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRacetrackTransitTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRacetrackTransitTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRacetrackTransitTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRacetrackTransitTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRacetrackTransitType*
            GlobalRacetrackTransitTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRacetrackTransitType*
            GlobalRacetrackTransitTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRacetrackTransitType*
            GlobalRacetrackTransitTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackTransitTypePluginSupport_copy_data(
                GlobalRacetrackTransitType *out,
                const GlobalRacetrackTransitType *in);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePluginSupport_destroy_data_w_params(
                GlobalRacetrackTransitType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePluginSupport_destroy_data_ex(
                GlobalRacetrackTransitType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePluginSupport_destroy_data(
                GlobalRacetrackTransitType *sample);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePluginSupport_print_data(
                const GlobalRacetrackTransitType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRacetrackTransitTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRacetrackTransitTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRacetrackTransitTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRacetrackTransitTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackTransitType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackTransitTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackTransitType *out,
                const GlobalRacetrackTransitType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackTransitTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRacetrackTransitType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackTransitTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackTransitType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackTransitTypePlugin_deserialize_from_cdr_buffer(
                GlobalRacetrackTransitType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackTransitTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRacetrackTransitTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackTransitTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackTransitTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackTransitTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackTransitType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRacetrackTransitTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRacetrackTransitTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRacetrackState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRacetrackTransitTypePlugin_1567699268_h */

