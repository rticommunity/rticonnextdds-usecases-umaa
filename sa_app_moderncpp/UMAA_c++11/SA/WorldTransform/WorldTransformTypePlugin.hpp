

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WorldTransformType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WorldTransformTypePlugin_1861464670_h
#define WorldTransformTypePlugin_1861464670_h

#include "WorldTransformType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WorldTransform {

            #define WorldTransformTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WorldTransformTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WorldTransformTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WorldTransformTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WorldTransformTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WorldTransformType*
            WorldTransformTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WorldTransformType*
            WorldTransformTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WorldTransformType*
            WorldTransformTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WorldTransformTypePluginSupport_copy_data(
                WorldTransformType *out,
                const WorldTransformType *in);

            NDDSUSERDllExport extern void 
            WorldTransformTypePluginSupport_destroy_data_w_params(
                WorldTransformType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WorldTransformTypePluginSupport_destroy_data_ex(
                WorldTransformType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WorldTransformTypePluginSupport_destroy_data(
                WorldTransformType *sample);

            NDDSUSERDllExport extern void 
            WorldTransformTypePluginSupport_print_data(
                const WorldTransformType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WorldTransformTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WorldTransformTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WorldTransformTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WorldTransformTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WorldTransformTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WorldTransformType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WorldTransformTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WorldTransformType *out,
                const WorldTransformType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WorldTransformTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WorldTransformType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WorldTransformTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WorldTransformType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WorldTransformTypePlugin_deserialize_from_cdr_buffer(
                WorldTransformType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WorldTransformTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WorldTransformTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WorldTransformTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WorldTransformTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WorldTransformTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WorldTransformType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WorldTransformTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WorldTransformTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WorldTransform  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WorldTransformTypePlugin_1861464670_h */

