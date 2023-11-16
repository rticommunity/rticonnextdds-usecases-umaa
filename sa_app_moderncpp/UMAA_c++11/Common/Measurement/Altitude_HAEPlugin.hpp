

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Altitude_HAE.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Altitude_HAEPlugin_1347817305_h
#define Altitude_HAEPlugin_1347817305_h

#include "Altitude_HAE.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Geographic_Coordinate_AxesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Altitude_HAEPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Altitude_HAEPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Altitude_HAEPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Altitude_HAEPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Altitude_HAEPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Altitude_HAE*
            Altitude_HAEPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Altitude_HAE*
            Altitude_HAEPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Altitude_HAE*
            Altitude_HAEPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Altitude_HAEPluginSupport_copy_data(
                Altitude_HAE *out,
                const Altitude_HAE *in);

            NDDSUSERDllExport extern void 
            Altitude_HAEPluginSupport_destroy_data_w_params(
                Altitude_HAE *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Altitude_HAEPluginSupport_destroy_data_ex(
                Altitude_HAE *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Altitude_HAEPluginSupport_destroy_data(
                Altitude_HAE *sample);

            NDDSUSERDllExport extern void 
            Altitude_HAEPluginSupport_print_data(
                const Altitude_HAE *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Altitude_HAEPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Altitude_HAEPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Altitude_HAEPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Altitude_HAEPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Altitude_HAEPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_HAE *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Altitude_HAEPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_HAE *out,
                const Altitude_HAE *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Altitude_HAEPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Altitude_HAE *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Altitude_HAEPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_HAE **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Altitude_HAEPlugin_deserialize_from_cdr_buffer(
                Altitude_HAE *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Altitude_HAEPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Altitude_HAEPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Altitude_HAEPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Altitude_HAEPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Altitude_HAEPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Altitude_HAE ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Altitude_HAEPlugin_new(void);

            NDDSUSERDllExport extern void
            Altitude_HAEPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Altitude_HAEPlugin_1347817305_h */

