

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTime_Tolerance.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTime_TolerancePlugin_391452469_h
#define DateTime_TolerancePlugin_391452469_h

#include "DateTime_Tolerance.hpp"

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

            #define DateTime_TolerancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTime_TolerancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTime_TolerancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTime_TolerancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTime_TolerancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTime_Tolerance*
            DateTime_TolerancePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTime_Tolerance*
            DateTime_TolerancePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTime_Tolerance*
            DateTime_TolerancePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTime_TolerancePluginSupport_copy_data(
                DateTime_Tolerance *out,
                const DateTime_Tolerance *in);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePluginSupport_destroy_data_w_params(
                DateTime_Tolerance *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePluginSupport_destroy_data_ex(
                DateTime_Tolerance *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePluginSupport_destroy_data(
                DateTime_Tolerance *sample);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePluginSupport_print_data(
                const DateTime_Tolerance *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DateTime_TolerancePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DateTime_TolerancePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DateTime_TolerancePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DateTime_TolerancePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTime_Tolerance *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DateTime_TolerancePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTime_Tolerance *out,
                const DateTime_Tolerance *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DateTime_TolerancePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DateTime_Tolerance *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DateTime_TolerancePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DateTime_Tolerance **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DateTime_TolerancePlugin_deserialize_from_cdr_buffer(
                DateTime_Tolerance *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DateTime_TolerancePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTime_TolerancePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTime_TolerancePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTime_TolerancePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DateTime_TolerancePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DateTime_Tolerance ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DateTime_TolerancePlugin_new(void);

            NDDSUSERDllExport extern void
            DateTime_TolerancePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DateTime_TolerancePlugin_391452469_h */

