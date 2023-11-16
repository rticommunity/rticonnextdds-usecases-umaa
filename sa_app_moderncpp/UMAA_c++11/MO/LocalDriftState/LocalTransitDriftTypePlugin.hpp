

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalTransitDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalTransitDriftTypePlugin_98748119_h
#define LocalTransitDriftTypePlugin_98748119_h

#include "LocalTransitDriftType.hpp"

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
        namespace LocalDriftState {

            #define LocalTransitDriftTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalTransitDriftTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalTransitDriftTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalTransitDriftTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalTransitDriftTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalTransitDriftType*
            LocalTransitDriftTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalTransitDriftType*
            LocalTransitDriftTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalTransitDriftType*
            LocalTransitDriftTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalTransitDriftTypePluginSupport_copy_data(
                LocalTransitDriftType *out,
                const LocalTransitDriftType *in);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePluginSupport_destroy_data_w_params(
                LocalTransitDriftType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePluginSupport_destroy_data_ex(
                LocalTransitDriftType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePluginSupport_destroy_data(
                LocalTransitDriftType *sample);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePluginSupport_print_data(
                const LocalTransitDriftType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalTransitDriftTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalTransitDriftTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalTransitDriftTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalTransitDriftTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalTransitDriftType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalTransitDriftTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalTransitDriftType *out,
                const LocalTransitDriftType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalTransitDriftTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalTransitDriftType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalTransitDriftTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalTransitDriftType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalTransitDriftTypePlugin_deserialize_from_cdr_buffer(
                LocalTransitDriftType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalTransitDriftTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalTransitDriftTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalTransitDriftTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalTransitDriftTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalTransitDriftTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalTransitDriftType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalTransitDriftTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalTransitDriftTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalTransitDriftTypePlugin_98748119_h */

