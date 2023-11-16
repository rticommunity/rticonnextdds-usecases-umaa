

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeWindowType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TimeWindowTypePlugin_719347964_h
#define TimeWindowTypePlugin_719347964_h

#include "TimeWindowType.hpp"

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
        namespace TimeWindow {

            #define TimeWindowTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TimeWindowTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TimeWindowTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TimeWindowTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TimeWindowTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TimeWindowType*
            TimeWindowTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TimeWindowType*
            TimeWindowTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TimeWindowType*
            TimeWindowTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TimeWindowTypePluginSupport_copy_data(
                TimeWindowType *out,
                const TimeWindowType *in);

            NDDSUSERDllExport extern void 
            TimeWindowTypePluginSupport_destroy_data_w_params(
                TimeWindowType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TimeWindowTypePluginSupport_destroy_data_ex(
                TimeWindowType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TimeWindowTypePluginSupport_destroy_data(
                TimeWindowType *sample);

            NDDSUSERDllExport extern void 
            TimeWindowTypePluginSupport_print_data(
                const TimeWindowType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TimeWindowTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TimeWindowTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TimeWindowTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TimeWindowTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TimeWindowTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TimeWindowType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TimeWindowTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TimeWindowType *out,
                const TimeWindowType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TimeWindowTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TimeWindowType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TimeWindowTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TimeWindowType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TimeWindowTypePlugin_deserialize_from_cdr_buffer(
                TimeWindowType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TimeWindowTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TimeWindowTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TimeWindowTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TimeWindowTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TimeWindowTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TimeWindowType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TimeWindowTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TimeWindowTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TimeWindow  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TimeWindowTypePlugin_719347964_h */

