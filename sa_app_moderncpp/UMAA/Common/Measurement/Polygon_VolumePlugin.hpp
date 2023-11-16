

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_Volume.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Polygon_VolumePlugin_34458482_h
#define Polygon_VolumePlugin_34458482_h

#include "Polygon_Volume.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_MSLPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Polygon_VolumePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Polygon_VolumePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Polygon_VolumePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Polygon_VolumePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Polygon_VolumePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Polygon_Volume*
            Polygon_VolumePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Polygon_Volume*
            Polygon_VolumePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Polygon_Volume*
            Polygon_VolumePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Polygon_VolumePluginSupport_copy_data(
                Polygon_Volume *out,
                const Polygon_Volume *in);

            NDDSUSERDllExport extern void 
            Polygon_VolumePluginSupport_destroy_data_w_params(
                Polygon_Volume *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Polygon_VolumePluginSupport_destroy_data_ex(
                Polygon_Volume *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Polygon_VolumePluginSupport_destroy_data(
                Polygon_Volume *sample);

            NDDSUSERDllExport extern void 
            Polygon_VolumePluginSupport_print_data(
                const Polygon_Volume *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Polygon_VolumePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Polygon_VolumePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Polygon_VolumePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Polygon_VolumePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Polygon_VolumePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Polygon_Volume *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Polygon_VolumePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Polygon_Volume *out,
                const Polygon_Volume *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Polygon_VolumePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Polygon_Volume *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Polygon_VolumePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Polygon_Volume **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Polygon_VolumePlugin_deserialize_from_cdr_buffer(
                Polygon_Volume *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Polygon_VolumePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Polygon_VolumePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Polygon_VolumePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Polygon_VolumePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Polygon_VolumePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Polygon_Volume ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Polygon_VolumePlugin_new(void);

            NDDSUSERDllExport extern void
            Polygon_VolumePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Polygon_VolumePlugin_34458482_h */

