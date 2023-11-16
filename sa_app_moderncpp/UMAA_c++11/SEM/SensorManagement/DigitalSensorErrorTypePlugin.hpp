

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalSensorErrorTypePlugin_1852074880_h
#define DigitalSensorErrorTypePlugin_1852074880_h

#include "DigitalSensorErrorType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace SensorManagement {

            #define DigitalSensorErrorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalSensorErrorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalSensorErrorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalSensorErrorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalSensorErrorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalSensorErrorType*
            DigitalSensorErrorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalSensorErrorType*
            DigitalSensorErrorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalSensorErrorType*
            DigitalSensorErrorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalSensorErrorTypePluginSupport_copy_data(
                DigitalSensorErrorType *out,
                const DigitalSensorErrorType *in);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePluginSupport_destroy_data_w_params(
                DigitalSensorErrorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePluginSupport_destroy_data_ex(
                DigitalSensorErrorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePluginSupport_destroy_data(
                DigitalSensorErrorType *sample);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePluginSupport_print_data(
                const DigitalSensorErrorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalSensorErrorTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalSensorErrorTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalSensorErrorTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalSensorErrorTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalSensorErrorType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalSensorErrorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalSensorErrorType *out,
                const DigitalSensorErrorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalSensorErrorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalSensorErrorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalSensorErrorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalSensorErrorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalSensorErrorTypePlugin_deserialize_from_cdr_buffer(
                DigitalSensorErrorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalSensorErrorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalSensorErrorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalSensorErrorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalSensorErrorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalSensorErrorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalSensorErrorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalSensorErrorTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalSensorErrorTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SensorManagement  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalSensorErrorTypePlugin_1852074880_h */

