

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RMSDistanceErrorType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RMSDistanceErrorTypePlugin_1579109256_h
#define RMSDistanceErrorTypePlugin_1579109256_h

#include "RMSDistanceErrorType.hpp"

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

            #define RMSDistanceErrorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RMSDistanceErrorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RMSDistanceErrorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RMSDistanceErrorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RMSDistanceErrorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RMSDistanceErrorType*
            RMSDistanceErrorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RMSDistanceErrorType*
            RMSDistanceErrorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RMSDistanceErrorType*
            RMSDistanceErrorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RMSDistanceErrorTypePluginSupport_copy_data(
                RMSDistanceErrorType *out,
                const RMSDistanceErrorType *in);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePluginSupport_destroy_data_w_params(
                RMSDistanceErrorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePluginSupport_destroy_data_ex(
                RMSDistanceErrorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePluginSupport_destroy_data(
                RMSDistanceErrorType *sample);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePluginSupport_print_data(
                const RMSDistanceErrorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RMSDistanceErrorTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RMSDistanceErrorTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RMSDistanceErrorTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RMSDistanceErrorTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RMSDistanceErrorType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RMSDistanceErrorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RMSDistanceErrorType *out,
                const RMSDistanceErrorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RMSDistanceErrorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RMSDistanceErrorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RMSDistanceErrorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RMSDistanceErrorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RMSDistanceErrorTypePlugin_deserialize_from_cdr_buffer(
                RMSDistanceErrorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RMSDistanceErrorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RMSDistanceErrorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RMSDistanceErrorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RMSDistanceErrorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RMSDistanceErrorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RMSDistanceErrorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RMSDistanceErrorTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RMSDistanceErrorTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RMSDistanceErrorTypePlugin_1579109256_h */

