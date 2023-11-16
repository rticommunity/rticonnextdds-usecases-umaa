

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Altitude_AGL.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Altitude_AGLPlugin_1207832626_h
#define Altitude_AGLPlugin_1207832626_h

#include "Altitude_AGL.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_AxesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Altitude_AGLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Altitude_AGLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Altitude_AGLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Altitude_AGLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Altitude_AGLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Altitude_AGL*
            Altitude_AGLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Altitude_AGL*
            Altitude_AGLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Altitude_AGL*
            Altitude_AGLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Altitude_AGLPluginSupport_copy_data(
                Altitude_AGL *out,
                const Altitude_AGL *in);

            NDDSUSERDllExport extern void 
            Altitude_AGLPluginSupport_destroy_data_w_params(
                Altitude_AGL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Altitude_AGLPluginSupport_destroy_data_ex(
                Altitude_AGL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Altitude_AGLPluginSupport_destroy_data(
                Altitude_AGL *sample);

            NDDSUSERDllExport extern void 
            Altitude_AGLPluginSupport_print_data(
                const Altitude_AGL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Altitude_AGLPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Altitude_AGLPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Altitude_AGLPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Altitude_AGLPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Altitude_AGLPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_AGL *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Altitude_AGLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_AGL *out,
                const Altitude_AGL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Altitude_AGLPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Altitude_AGL *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Altitude_AGLPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_AGL **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Altitude_AGLPlugin_deserialize_from_cdr_buffer(
                Altitude_AGL *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Altitude_AGLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Altitude_AGLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Altitude_AGLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Altitude_AGLPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Altitude_AGLPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_AGL ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Altitude_AGLPlugin_new(void);

            NDDSUSERDllExport extern void
            Altitude_AGLPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Altitude_AGLPlugin_1207832626_h */

