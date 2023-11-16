

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinearEffort.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LinearEffortPlugin_957272876_h
#define LinearEffortPlugin_957272876_h

#include "LinearEffort.hpp"

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

            #define LinearEffortPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LinearEffortPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LinearEffortPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LinearEffortPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LinearEffortPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LinearEffort*
            LinearEffortPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LinearEffort*
            LinearEffortPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LinearEffort*
            LinearEffortPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LinearEffortPluginSupport_copy_data(
                LinearEffort *out,
                const LinearEffort *in);

            NDDSUSERDllExport extern void 
            LinearEffortPluginSupport_destroy_data_w_params(
                LinearEffort *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LinearEffortPluginSupport_destroy_data_ex(
                LinearEffort *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LinearEffortPluginSupport_destroy_data(
                LinearEffort *sample);

            NDDSUSERDllExport extern void 
            LinearEffortPluginSupport_print_data(
                const LinearEffort *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LinearEffortPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LinearEffortPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LinearEffortPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LinearEffortPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LinearEffortPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LinearEffort *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LinearEffortPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LinearEffort *out,
                const LinearEffort *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LinearEffortPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LinearEffort *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LinearEffortPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LinearEffort **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LinearEffortPlugin_deserialize_from_cdr_buffer(
                LinearEffort *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LinearEffortPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LinearEffortPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LinearEffortPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LinearEffortPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LinearEffortPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LinearEffort ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LinearEffortPlugin_new(void);

            NDDSUSERDllExport extern void
            LinearEffortPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LinearEffortPlugin_957272876_h */

