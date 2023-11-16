

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverExecutionStatusReportPlugin_2136264107_h
#define LocalHoverExecutionStatusReportPlugin_2136264107_h

#include "LocalHoverExecutionStatusReport.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/LocalHoverState/LocalHoverStateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalHoverControl {

            #define LocalHoverExecutionStatusReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalHoverExecutionStatusReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalHoverExecutionStatusReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalHoverExecutionStatusReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalHoverExecutionStatusReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalHoverExecutionStatusReport*
            LocalHoverExecutionStatusReportPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalHoverExecutionStatusReport*
            LocalHoverExecutionStatusReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalHoverExecutionStatusReport*
            LocalHoverExecutionStatusReportPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverExecutionStatusReportPluginSupport_copy_data(
                LocalHoverExecutionStatusReport *out,
                const LocalHoverExecutionStatusReport *in);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPluginSupport_destroy_data_w_params(
                LocalHoverExecutionStatusReport *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPluginSupport_destroy_data_ex(
                LocalHoverExecutionStatusReport *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPluginSupport_destroy_data(
                LocalHoverExecutionStatusReport *sample);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPluginSupport_print_data(
                const LocalHoverExecutionStatusReport *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalHoverExecutionStatusReportPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalHoverExecutionStatusReportPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalHoverExecutionStatusReportPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalHoverExecutionStatusReportPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverExecutionStatusReport *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalHoverExecutionStatusReportPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverExecutionStatusReport *out,
                const LocalHoverExecutionStatusReport *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalHoverExecutionStatusReportPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalHoverExecutionStatusReport *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalHoverExecutionStatusReportPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverExecutionStatusReport **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalHoverExecutionStatusReportPlugin_deserialize_from_cdr_buffer(
                LocalHoverExecutionStatusReport *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalHoverExecutionStatusReportPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalHoverExecutionStatusReportPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverExecutionStatusReportPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverExecutionStatusReportPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverExecutionStatusReportPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverExecutionStatusReport ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalHoverExecutionStatusReportPlugin_new(void);

            NDDSUSERDllExport extern void
            LocalHoverExecutionStatusReportPlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalHoverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalHoverExecutionStatusReportPlugin_2136264107_h */

