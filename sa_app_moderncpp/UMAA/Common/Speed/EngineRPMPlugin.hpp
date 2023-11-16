

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPM.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineRPMPlugin_509754702_h
#define EngineRPMPlugin_509754702_h

#include "EngineRPM.hpp"

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
    namespace Common {
        namespace Speed {

            #define EngineRPMPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineRPMPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineRPMPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineRPMPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineRPMPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineRPM*
            EngineRPMPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineRPM*
            EngineRPMPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineRPM*
            EngineRPMPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMPluginSupport_copy_data(
                EngineRPM *out,
                const EngineRPM *in);

            NDDSUSERDllExport extern void 
            EngineRPMPluginSupport_destroy_data_w_params(
                EngineRPM *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineRPMPluginSupport_destroy_data_ex(
                EngineRPM *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineRPMPluginSupport_destroy_data(
                EngineRPM *sample);

            NDDSUSERDllExport extern void 
            EngineRPMPluginSupport_print_data(
                const EngineRPM *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineRPMPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineRPMPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineRPMPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineRPMPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineRPMPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPM *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineRPMPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPM *out,
                const EngineRPM *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineRPMPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineRPM *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineRPMPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPM **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineRPMPlugin_deserialize_from_cdr_buffer(
                EngineRPM *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineRPMPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineRPMPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPM ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineRPMPlugin_new(void);

            NDDSUSERDllExport extern void
            EngineRPMPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineRPMPlugin_509754702_h */

