

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalTransitHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalTransitHoverTypePlugin_822264774_h
#define GlobalTransitHoverTypePlugin_822264774_h

#include "GlobalTransitHoverType.hpp"

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
        namespace GlobalHoverState {

            #define GlobalTransitHoverTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalTransitHoverTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalTransitHoverTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalTransitHoverTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalTransitHoverTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalTransitHoverType*
            GlobalTransitHoverTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalTransitHoverType*
            GlobalTransitHoverTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalTransitHoverType*
            GlobalTransitHoverTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitHoverTypePluginSupport_copy_data(
                GlobalTransitHoverType *out,
                const GlobalTransitHoverType *in);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePluginSupport_destroy_data_w_params(
                GlobalTransitHoverType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePluginSupport_destroy_data_ex(
                GlobalTransitHoverType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePluginSupport_destroy_data(
                GlobalTransitHoverType *sample);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePluginSupport_print_data(
                const GlobalTransitHoverType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalTransitHoverTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalTransitHoverTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalTransitHoverTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalTransitHoverTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitHoverType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitHoverTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitHoverType *out,
                const GlobalTransitHoverType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalTransitHoverTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalTransitHoverType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitHoverTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitHoverType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalTransitHoverTypePlugin_deserialize_from_cdr_buffer(
                GlobalTransitHoverType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitHoverTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalTransitHoverTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitHoverTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitHoverTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitHoverTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitHoverType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalTransitHoverTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalTransitHoverTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalTransitHoverTypePlugin_822264774_h */

