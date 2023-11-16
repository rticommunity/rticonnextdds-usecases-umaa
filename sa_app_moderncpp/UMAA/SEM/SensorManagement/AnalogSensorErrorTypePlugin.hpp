

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogSensorErrorTypePlugin_187040144_h
#define AnalogSensorErrorTypePlugin_187040144_h

#include "AnalogSensorErrorType.hpp"

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

            #define AnalogSensorErrorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnalogSensorErrorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnalogSensorErrorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnalogSensorErrorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnalogSensorErrorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnalogSensorErrorType*
            AnalogSensorErrorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnalogSensorErrorType*
            AnalogSensorErrorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnalogSensorErrorType*
            AnalogSensorErrorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnalogSensorErrorTypePluginSupport_copy_data(
                AnalogSensorErrorType *out,
                const AnalogSensorErrorType *in);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePluginSupport_destroy_data_w_params(
                AnalogSensorErrorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePluginSupport_destroy_data_ex(
                AnalogSensorErrorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePluginSupport_destroy_data(
                AnalogSensorErrorType *sample);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePluginSupport_print_data(
                const AnalogSensorErrorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnalogSensorErrorTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnalogSensorErrorTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnalogSensorErrorTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnalogSensorErrorTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogSensorErrorType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnalogSensorErrorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnalogSensorErrorType *out,
                const AnalogSensorErrorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnalogSensorErrorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnalogSensorErrorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnalogSensorErrorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnalogSensorErrorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnalogSensorErrorTypePlugin_deserialize_from_cdr_buffer(
                AnalogSensorErrorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnalogSensorErrorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnalogSensorErrorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnalogSensorErrorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnalogSensorErrorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnalogSensorErrorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnalogSensorErrorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnalogSensorErrorTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnalogSensorErrorTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SensorManagement  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnalogSensorErrorTypePlugin_187040144_h */

