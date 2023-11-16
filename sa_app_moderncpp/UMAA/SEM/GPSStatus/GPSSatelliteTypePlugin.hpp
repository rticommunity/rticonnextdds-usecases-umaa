

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSSatelliteTypePlugin_1384633428_h
#define GPSSatelliteTypePlugin_1384633428_h

#include "GPSSatelliteType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace GPSStatus {

            #define GPSSatelliteTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSSatelliteTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSSatelliteTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSSatelliteTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSSatelliteTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSSatelliteType*
            GPSSatelliteTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSSatelliteType*
            GPSSatelliteTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSSatelliteType*
            GPSSatelliteTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSSatelliteTypePluginSupport_copy_data(
                GPSSatelliteType *out,
                const GPSSatelliteType *in);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePluginSupport_destroy_data_w_params(
                GPSSatelliteType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePluginSupport_destroy_data_ex(
                GPSSatelliteType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePluginSupport_destroy_data(
                GPSSatelliteType *sample);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePluginSupport_print_data(
                const GPSSatelliteType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSSatelliteTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSSatelliteTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSSatelliteTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSSatelliteTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSSatelliteType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSSatelliteTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSSatelliteType *out,
                const GPSSatelliteType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSSatelliteTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSSatelliteType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSSatelliteTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSSatelliteType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSSatelliteTypePlugin_deserialize_from_cdr_buffer(
                GPSSatelliteType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSSatelliteTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSSatelliteTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSSatelliteTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSSatelliteTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSSatelliteTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSSatelliteType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSSatelliteTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSSatelliteTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSSatelliteTypePlugin_1384633428_h */

