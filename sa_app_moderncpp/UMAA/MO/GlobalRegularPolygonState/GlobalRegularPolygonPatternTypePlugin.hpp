

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonPatternType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonPatternTypePlugin_1692088385_h
#define GlobalRegularPolygonPatternTypePlugin_1692088385_h

#include "GlobalRegularPolygonPatternType.hpp"

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

            #define GlobalRegularPolygonPatternTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRegularPolygonPatternTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRegularPolygonPatternTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRegularPolygonPatternTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRegularPolygonPatternTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRegularPolygonPatternType*
            GlobalRegularPolygonPatternTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRegularPolygonPatternType*
            GlobalRegularPolygonPatternTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRegularPolygonPatternType*
            GlobalRegularPolygonPatternTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonPatternTypePluginSupport_copy_data(
                GlobalRegularPolygonPatternType *out,
                const GlobalRegularPolygonPatternType *in);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePluginSupport_destroy_data_w_params(
                GlobalRegularPolygonPatternType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePluginSupport_destroy_data_ex(
                GlobalRegularPolygonPatternType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePluginSupport_destroy_data(
                GlobalRegularPolygonPatternType *sample);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePluginSupport_print_data(
                const GlobalRegularPolygonPatternType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRegularPolygonPatternTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRegularPolygonPatternTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonPatternTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRegularPolygonPatternTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonPatternType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonPatternTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonPatternType *out,
                const GlobalRegularPolygonPatternType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonPatternTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRegularPolygonPatternType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonPatternTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonPatternType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonPatternTypePlugin_deserialize_from_cdr_buffer(
                GlobalRegularPolygonPatternType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonPatternTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRegularPolygonPatternTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonPatternTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonPatternTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonPatternTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonPatternType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRegularPolygonPatternTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRegularPolygonPatternTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRegularPolygonPatternTypePlugin_1692088385_h */

