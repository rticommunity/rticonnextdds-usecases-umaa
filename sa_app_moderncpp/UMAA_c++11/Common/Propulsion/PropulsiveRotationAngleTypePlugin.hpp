

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveRotationAngleType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsiveRotationAngleTypePlugin_2124430515_h
#define PropulsiveRotationAngleTypePlugin_2124430515_h

#include "PropulsiveRotationAngleType.hpp"

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
        namespace Propulsion {

            #define PropulsiveRotationAngleTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsiveRotationAngleTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsiveRotationAngleTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsiveRotationAngleTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsiveRotationAngleTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsiveRotationAngleType*
            PropulsiveRotationAngleTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsiveRotationAngleType*
            PropulsiveRotationAngleTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsiveRotationAngleType*
            PropulsiveRotationAngleTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsiveRotationAngleTypePluginSupport_copy_data(
                PropulsiveRotationAngleType *out,
                const PropulsiveRotationAngleType *in);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePluginSupport_destroy_data_w_params(
                PropulsiveRotationAngleType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePluginSupport_destroy_data_ex(
                PropulsiveRotationAngleType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePluginSupport_destroy_data(
                PropulsiveRotationAngleType *sample);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePluginSupport_print_data(
                const PropulsiveRotationAngleType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsiveRotationAngleTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsiveRotationAngleTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsiveRotationAngleTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsiveRotationAngleTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveRotationAngleType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsiveRotationAngleTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveRotationAngleType *out,
                const PropulsiveRotationAngleType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsiveRotationAngleTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsiveRotationAngleType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsiveRotationAngleTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveRotationAngleType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsiveRotationAngleTypePlugin_deserialize_from_cdr_buffer(
                PropulsiveRotationAngleType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsiveRotationAngleTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsiveRotationAngleTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsiveRotationAngleTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsiveRotationAngleTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsiveRotationAngleTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveRotationAngleType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsiveRotationAngleTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsiveRotationAngleTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsiveRotationAngleTypePlugin_2124430515_h */

