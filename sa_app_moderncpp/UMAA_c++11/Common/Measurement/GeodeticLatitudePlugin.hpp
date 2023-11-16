

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeodeticLatitude.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeodeticLatitudePlugin_627305199_h
#define GeodeticLatitudePlugin_627305199_h

#include "GeodeticLatitude.hpp"

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

            #define GeodeticLatitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeodeticLatitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeodeticLatitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeodeticLatitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeodeticLatitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePluginSupport_copy_data(
                GeodeticLatitude *out,
                const GeodeticLatitude *in);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data_w_params(
                GeodeticLatitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data_ex(
                GeodeticLatitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data(
                GeodeticLatitude *sample);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_print_data(
                const GeodeticLatitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GeodeticLatitudePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GeodeticLatitudePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GeodeticLatitudePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLatitude *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLatitude *out,
                const GeodeticLatitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeodeticLatitudePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeodeticLatitude *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLatitude **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeodeticLatitudePlugin_deserialize_from_cdr_buffer(
                GeodeticLatitude *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeodeticLatitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLatitude ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GeodeticLatitudePlugin_new(void);

            NDDSUSERDllExport extern void
            GeodeticLatitudePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeodeticLatitudePlugin_627305199_h */

