

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3D_PlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3D_PlatformXYZPlugin_329832500_h
#define Orientation3D_PlatformXYZPlugin_329832500_h

#include "Orientation3D_PlatformXYZ.hpp"

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
        namespace Measurement {

            #define Orientation3D_PlatformXYZPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Orientation3D_PlatformXYZPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Orientation3D_PlatformXYZPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Orientation3D_PlatformXYZPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Orientation3D_PlatformXYZPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Orientation3D_PlatformXYZ*
            Orientation3D_PlatformXYZPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Orientation3D_PlatformXYZ*
            Orientation3D_PlatformXYZPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Orientation3D_PlatformXYZ*
            Orientation3D_PlatformXYZPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_PlatformXYZPluginSupport_copy_data(
                Orientation3D_PlatformXYZ *out,
                const Orientation3D_PlatformXYZ *in);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPluginSupport_destroy_data_w_params(
                Orientation3D_PlatformXYZ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPluginSupport_destroy_data_ex(
                Orientation3D_PlatformXYZ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPluginSupport_destroy_data(
                Orientation3D_PlatformXYZ *sample);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPluginSupport_print_data(
                const Orientation3D_PlatformXYZ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Orientation3D_PlatformXYZPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Orientation3D_PlatformXYZPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Orientation3D_PlatformXYZPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Orientation3D_PlatformXYZPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_PlatformXYZ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_PlatformXYZPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_PlatformXYZ *out,
                const Orientation3D_PlatformXYZ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Orientation3D_PlatformXYZPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Orientation3D_PlatformXYZ *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_PlatformXYZPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_PlatformXYZ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Orientation3D_PlatformXYZPlugin_deserialize_from_cdr_buffer(
                Orientation3D_PlatformXYZ *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_PlatformXYZPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Orientation3D_PlatformXYZPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_PlatformXYZPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_PlatformXYZPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_PlatformXYZPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_PlatformXYZ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Orientation3D_PlatformXYZPlugin_new(void);

            NDDSUSERDllExport extern void
            Orientation3D_PlatformXYZPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Orientation3D_PlatformXYZPlugin_329832500_h */

