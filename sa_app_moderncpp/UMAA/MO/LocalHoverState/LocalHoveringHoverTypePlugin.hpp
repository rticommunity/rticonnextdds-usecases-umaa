

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoveringHoverTypePlugin_1077787621_h
#define LocalHoveringHoverTypePlugin_1077787621_h

#include "LocalHoveringHoverType.hpp"

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
        namespace LocalHoverState {

            #define LocalHoveringHoverTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalHoveringHoverTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalHoveringHoverTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalHoveringHoverTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalHoveringHoverTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalHoveringHoverType*
            LocalHoveringHoverTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalHoveringHoverType*
            LocalHoveringHoverTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalHoveringHoverType*
            LocalHoveringHoverTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalHoveringHoverTypePluginSupport_copy_data(
                LocalHoveringHoverType *out,
                const LocalHoveringHoverType *in);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePluginSupport_destroy_data_w_params(
                LocalHoveringHoverType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePluginSupport_destroy_data_ex(
                LocalHoveringHoverType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePluginSupport_destroy_data(
                LocalHoveringHoverType *sample);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePluginSupport_print_data(
                const LocalHoveringHoverType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalHoveringHoverTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalHoveringHoverTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalHoveringHoverTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalHoveringHoverTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoveringHoverType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalHoveringHoverTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoveringHoverType *out,
                const LocalHoveringHoverType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalHoveringHoverTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalHoveringHoverType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalHoveringHoverTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoveringHoverType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalHoveringHoverTypePlugin_deserialize_from_cdr_buffer(
                LocalHoveringHoverType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalHoveringHoverTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalHoveringHoverTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalHoveringHoverTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalHoveringHoverTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalHoveringHoverTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoveringHoverType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalHoveringHoverTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalHoveringHoverTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalHoveringHoverTypePlugin_1077787621_h */

