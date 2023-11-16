

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Velocity3D_PlatformNED.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Velocity3D_PlatformNEDPlugin_992756190_h
#define Velocity3D_PlatformNEDPlugin_992756190_h

#include "Velocity3D_PlatformNED.hpp"

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

            #define Velocity3D_PlatformNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Velocity3D_PlatformNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Velocity3D_PlatformNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Velocity3D_PlatformNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Velocity3D_PlatformNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Velocity3D_PlatformNED*
            Velocity3D_PlatformNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Velocity3D_PlatformNED*
            Velocity3D_PlatformNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Velocity3D_PlatformNED*
            Velocity3D_PlatformNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Velocity3D_PlatformNEDPluginSupport_copy_data(
                Velocity3D_PlatformNED *out,
                const Velocity3D_PlatformNED *in);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPluginSupport_destroy_data_w_params(
                Velocity3D_PlatformNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPluginSupport_destroy_data_ex(
                Velocity3D_PlatformNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPluginSupport_destroy_data(
                Velocity3D_PlatformNED *sample);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPluginSupport_print_data(
                const Velocity3D_PlatformNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Velocity3D_PlatformNEDPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Velocity3D_PlatformNEDPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Velocity3D_PlatformNEDPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Velocity3D_PlatformNEDPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3D_PlatformNED *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Velocity3D_PlatformNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3D_PlatformNED *out,
                const Velocity3D_PlatformNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Velocity3D_PlatformNEDPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Velocity3D_PlatformNED *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Velocity3D_PlatformNEDPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3D_PlatformNED **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Velocity3D_PlatformNEDPlugin_deserialize_from_cdr_buffer(
                Velocity3D_PlatformNED *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Velocity3D_PlatformNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Velocity3D_PlatformNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Velocity3D_PlatformNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Velocity3D_PlatformNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Velocity3D_PlatformNEDPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3D_PlatformNED ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Velocity3D_PlatformNEDPlugin_new(void);

            NDDSUSERDllExport extern void
            Velocity3D_PlatformNEDPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Velocity3D_PlatformNEDPlugin_992756190_h */

