

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationVelocity3D.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationVelocity3DPlugin_501483387_h
#define OrientationVelocity3DPlugin_501483387_h

#include "OrientationVelocity3D.hpp"

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

            #define OrientationVelocity3DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationVelocity3DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationVelocity3DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationVelocity3DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationVelocity3DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationVelocity3D*
            OrientationVelocity3DPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationVelocity3D*
            OrientationVelocity3DPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationVelocity3D*
            OrientationVelocity3DPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationVelocity3DPluginSupport_copy_data(
                OrientationVelocity3D *out,
                const OrientationVelocity3D *in);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPluginSupport_destroy_data_w_params(
                OrientationVelocity3D *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPluginSupport_destroy_data_ex(
                OrientationVelocity3D *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPluginSupport_destroy_data(
                OrientationVelocity3D *sample);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPluginSupport_print_data(
                const OrientationVelocity3D *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OrientationVelocity3DPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OrientationVelocity3DPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OrientationVelocity3DPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OrientationVelocity3DPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationVelocity3D *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OrientationVelocity3DPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationVelocity3D *out,
                const OrientationVelocity3D *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OrientationVelocity3DPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OrientationVelocity3D *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OrientationVelocity3DPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OrientationVelocity3D **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OrientationVelocity3DPlugin_deserialize_from_cdr_buffer(
                OrientationVelocity3D *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OrientationVelocity3DPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationVelocity3DPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationVelocity3DPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationVelocity3DPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OrientationVelocity3DPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationVelocity3D ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OrientationVelocity3DPlugin_new(void);

            NDDSUSERDllExport extern void
            OrientationVelocity3DPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OrientationVelocity3DPlugin_501483387_h */

