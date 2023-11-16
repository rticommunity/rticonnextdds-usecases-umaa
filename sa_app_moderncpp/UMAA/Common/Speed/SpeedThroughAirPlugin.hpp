

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedThroughAir.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedThroughAirPlugin_1076865148_h
#define SpeedThroughAirPlugin_1076865148_h

#include "SpeedThroughAir.hpp"

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

            #define SpeedThroughAirPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedThroughAirPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedThroughAirPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedThroughAirPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedThroughAirPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedThroughAir*
            SpeedThroughAirPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedThroughAir*
            SpeedThroughAirPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedThroughAir*
            SpeedThroughAirPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedThroughAirPluginSupport_copy_data(
                SpeedThroughAir *out,
                const SpeedThroughAir *in);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPluginSupport_destroy_data_w_params(
                SpeedThroughAir *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPluginSupport_destroy_data_ex(
                SpeedThroughAir *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPluginSupport_destroy_data(
                SpeedThroughAir *sample);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPluginSupport_print_data(
                const SpeedThroughAir *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SpeedThroughAirPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SpeedThroughAirPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SpeedThroughAirPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SpeedThroughAirPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedThroughAir *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SpeedThroughAirPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedThroughAir *out,
                const SpeedThroughAir *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SpeedThroughAirPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SpeedThroughAir *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SpeedThroughAirPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SpeedThroughAir **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SpeedThroughAirPlugin_deserialize_from_cdr_buffer(
                SpeedThroughAir *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SpeedThroughAirPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedThroughAirPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedThroughAirPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedThroughAirPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SpeedThroughAirPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedThroughAir ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SpeedThroughAirPlugin_new(void);

            NDDSUSERDllExport extern void
            SpeedThroughAirPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SpeedThroughAirPlugin_1076865148_h */

