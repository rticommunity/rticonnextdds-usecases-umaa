

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonTransitType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonTransitTypePlugin_240695990_h
#define GlobalRegularPolygonTransitTypePlugin_240695990_h

#include "GlobalRegularPolygonTransitType.hpp"

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
        namespace GlobalRegularPolygonState {

            #define GlobalRegularPolygonTransitTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRegularPolygonTransitTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRegularPolygonTransitTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRegularPolygonTransitTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRegularPolygonTransitTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRegularPolygonTransitType*
            GlobalRegularPolygonTransitTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRegularPolygonTransitType*
            GlobalRegularPolygonTransitTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRegularPolygonTransitType*
            GlobalRegularPolygonTransitTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonTransitTypePluginSupport_copy_data(
                GlobalRegularPolygonTransitType *out,
                const GlobalRegularPolygonTransitType *in);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePluginSupport_destroy_data_w_params(
                GlobalRegularPolygonTransitType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePluginSupport_destroy_data_ex(
                GlobalRegularPolygonTransitType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePluginSupport_destroy_data(
                GlobalRegularPolygonTransitType *sample);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePluginSupport_print_data(
                const GlobalRegularPolygonTransitType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRegularPolygonTransitTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRegularPolygonTransitTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonTransitTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRegularPolygonTransitTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonTransitType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonTransitTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonTransitType *out,
                const GlobalRegularPolygonTransitType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonTransitTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRegularPolygonTransitType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonTransitTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonTransitType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonTransitTypePlugin_deserialize_from_cdr_buffer(
                GlobalRegularPolygonTransitType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonTransitTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRegularPolygonTransitTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonTransitTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonTransitTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonTransitTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonTransitType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRegularPolygonTransitTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRegularPolygonTransitTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRegularPolygonTransitTypePlugin_240695990_h */

