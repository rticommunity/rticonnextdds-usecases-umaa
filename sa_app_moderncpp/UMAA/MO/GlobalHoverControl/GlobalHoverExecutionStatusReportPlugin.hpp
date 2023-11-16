

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverExecutionStatusReportPlugin_460594257_h
#define GlobalHoverExecutionStatusReportPlugin_460594257_h

#include "GlobalHoverExecutionStatusReport.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/GlobalHoverState/GlobalHoverStateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalHoverControl {

            #define GlobalHoverExecutionStatusReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverExecutionStatusReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverExecutionStatusReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverExecutionStatusReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverExecutionStatusReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverExecutionStatusReport*
            GlobalHoverExecutionStatusReportPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverExecutionStatusReport*
            GlobalHoverExecutionStatusReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverExecutionStatusReport*
            GlobalHoverExecutionStatusReportPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverExecutionStatusReportPluginSupport_copy_data(
                GlobalHoverExecutionStatusReport *out,
                const GlobalHoverExecutionStatusReport *in);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPluginSupport_destroy_data_w_params(
                GlobalHoverExecutionStatusReport *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPluginSupport_destroy_data_ex(
                GlobalHoverExecutionStatusReport *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPluginSupport_destroy_data(
                GlobalHoverExecutionStatusReport *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPluginSupport_print_data(
                const GlobalHoverExecutionStatusReport *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalHoverExecutionStatusReportPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalHoverExecutionStatusReportPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalHoverExecutionStatusReportPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalHoverExecutionStatusReportPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverExecutionStatusReport *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverExecutionStatusReportPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverExecutionStatusReport *out,
                const GlobalHoverExecutionStatusReport *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverExecutionStatusReportPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverExecutionStatusReport *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverExecutionStatusReportPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverExecutionStatusReport **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverExecutionStatusReportPlugin_deserialize_from_cdr_buffer(
                GlobalHoverExecutionStatusReport *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverExecutionStatusReportPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverExecutionStatusReportPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverExecutionStatusReportPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverExecutionStatusReportPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverExecutionStatusReportPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverExecutionStatusReport ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalHoverExecutionStatusReportPlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalHoverExecutionStatusReportPlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalHoverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoverExecutionStatusReportPlugin_460594257_h */

