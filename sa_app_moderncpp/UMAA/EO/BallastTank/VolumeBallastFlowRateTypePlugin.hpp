

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VolumeBallastFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VolumeBallastFlowRateTypePlugin_1129683267_h
#define VolumeBallastFlowRateTypePlugin_1129683267_h

#include "VolumeBallastFlowRateType.hpp"

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
    namespace EO {
        namespace BallastTank {

            #define VolumeBallastFlowRateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VolumeBallastFlowRateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VolumeBallastFlowRateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VolumeBallastFlowRateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VolumeBallastFlowRateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VolumeBallastFlowRateType*
            VolumeBallastFlowRateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VolumeBallastFlowRateType*
            VolumeBallastFlowRateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VolumeBallastFlowRateType*
            VolumeBallastFlowRateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VolumeBallastFlowRateTypePluginSupport_copy_data(
                VolumeBallastFlowRateType *out,
                const VolumeBallastFlowRateType *in);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePluginSupport_destroy_data_w_params(
                VolumeBallastFlowRateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePluginSupport_destroy_data_ex(
                VolumeBallastFlowRateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePluginSupport_destroy_data(
                VolumeBallastFlowRateType *sample);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePluginSupport_print_data(
                const VolumeBallastFlowRateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VolumeBallastFlowRateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VolumeBallastFlowRateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VolumeBallastFlowRateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VolumeBallastFlowRateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VolumeBallastFlowRateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VolumeBallastFlowRateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VolumeBallastFlowRateType *out,
                const VolumeBallastFlowRateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VolumeBallastFlowRateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VolumeBallastFlowRateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VolumeBallastFlowRateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VolumeBallastFlowRateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VolumeBallastFlowRateTypePlugin_deserialize_from_cdr_buffer(
                VolumeBallastFlowRateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VolumeBallastFlowRateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VolumeBallastFlowRateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VolumeBallastFlowRateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VolumeBallastFlowRateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VolumeBallastFlowRateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VolumeBallastFlowRateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VolumeBallastFlowRateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VolumeBallastFlowRateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VolumeBallastFlowRateTypePlugin_1129683267_h */

