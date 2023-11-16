

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeodeticLongitude.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeodeticLongitudePlugin_1012816534_h
#define GeodeticLongitudePlugin_1012816534_h

#include "GeodeticLongitude.hpp"

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

            #define GeodeticLongitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeodeticLongitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeodeticLongitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeodeticLongitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeodeticLongitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePluginSupport_copy_data(
                GeodeticLongitude *out,
                const GeodeticLongitude *in);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data_w_params(
                GeodeticLongitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data_ex(
                GeodeticLongitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data(
                GeodeticLongitude *sample);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_print_data(
                const GeodeticLongitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GeodeticLongitudePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GeodeticLongitudePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GeodeticLongitudePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLongitude *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLongitude *out,
                const GeodeticLongitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeodeticLongitudePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeodeticLongitude *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLongitude **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeodeticLongitudePlugin_deserialize_from_cdr_buffer(
                GeodeticLongitude *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeodeticLongitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLongitude ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GeodeticLongitudePlugin_new(void);

            NDDSUSERDllExport extern void
            GeodeticLongitudePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeodeticLongitudePlugin_1012816534_h */

