

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RotationalEffort.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RotationalEffortPlugin_1076163407_h
#define RotationalEffortPlugin_1076163407_h

#include "RotationalEffort.hpp"

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

            #define RotationalEffortPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RotationalEffortPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RotationalEffortPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RotationalEffortPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RotationalEffortPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RotationalEffort*
            RotationalEffortPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RotationalEffort*
            RotationalEffortPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RotationalEffort*
            RotationalEffortPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RotationalEffortPluginSupport_copy_data(
                RotationalEffort *out,
                const RotationalEffort *in);

            NDDSUSERDllExport extern void 
            RotationalEffortPluginSupport_destroy_data_w_params(
                RotationalEffort *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RotationalEffortPluginSupport_destroy_data_ex(
                RotationalEffort *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RotationalEffortPluginSupport_destroy_data(
                RotationalEffort *sample);

            NDDSUSERDllExport extern void 
            RotationalEffortPluginSupport_print_data(
                const RotationalEffort *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RotationalEffortPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RotationalEffortPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RotationalEffortPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RotationalEffortPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RotationalEffortPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RotationalEffort *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RotationalEffortPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RotationalEffort *out,
                const RotationalEffort *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RotationalEffortPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RotationalEffort *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RotationalEffortPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RotationalEffort **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RotationalEffortPlugin_deserialize_from_cdr_buffer(
                RotationalEffort *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RotationalEffortPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RotationalEffortPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RotationalEffortPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RotationalEffortPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RotationalEffortPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RotationalEffort ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RotationalEffortPlugin_new(void);

            NDDSUSERDllExport extern void
            RotationalEffortPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RotationalEffortPlugin_1076163407_h */

