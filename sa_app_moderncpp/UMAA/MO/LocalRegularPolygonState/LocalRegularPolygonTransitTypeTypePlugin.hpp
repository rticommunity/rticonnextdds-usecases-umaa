

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonTransitTypeType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonTransitTypeTypePlugin_845881518_h
#define LocalRegularPolygonTransitTypeTypePlugin_845881518_h

#include "LocalRegularPolygonTransitTypeType.hpp"

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
        namespace LocalRegularPolygonState {

            #define LocalRegularPolygonTransitTypeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRegularPolygonTransitTypeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRegularPolygonTransitTypeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRegularPolygonTransitTypeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRegularPolygonTransitTypeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRegularPolygonTransitTypeType*
            LocalRegularPolygonTransitTypeTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRegularPolygonTransitTypeType*
            LocalRegularPolygonTransitTypeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegularPolygonTransitTypeType*
            LocalRegularPolygonTransitTypeTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonTransitTypeTypePluginSupport_copy_data(
                LocalRegularPolygonTransitTypeType *out,
                const LocalRegularPolygonTransitTypeType *in);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePluginSupport_destroy_data_w_params(
                LocalRegularPolygonTransitTypeType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePluginSupport_destroy_data_ex(
                LocalRegularPolygonTransitTypeType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePluginSupport_destroy_data(
                LocalRegularPolygonTransitTypeType *sample);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePluginSupport_print_data(
                const LocalRegularPolygonTransitTypeType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRegularPolygonTransitTypeTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRegularPolygonTransitTypeTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonTransitTypeTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRegularPolygonTransitTypeTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonTransitTypeType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonTransitTypeTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonTransitTypeType *out,
                const LocalRegularPolygonTransitTypeType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonTransitTypeTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRegularPolygonTransitTypeType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonTransitTypeTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonTransitTypeType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonTransitTypeTypePlugin_deserialize_from_cdr_buffer(
                LocalRegularPolygonTransitTypeType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonTransitTypeTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRegularPolygonTransitTypeTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonTransitTypeTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonTransitTypeTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonTransitTypeTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonTransitTypeType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRegularPolygonTransitTypeTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRegularPolygonTransitTypeTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRegularPolygonTransitTypeTypePlugin_845881518_h */

