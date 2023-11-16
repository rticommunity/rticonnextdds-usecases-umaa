

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityVelocityType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceVelocityVelocityTypePlugin_542407613_h
#define CovarianceVelocityVelocityTypePlugin_542407613_h

#include "CovarianceVelocityVelocityType.hpp"

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

            #define CovarianceVelocityVelocityTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarianceVelocityVelocityTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarianceVelocityVelocityTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarianceVelocityVelocityTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarianceVelocityVelocityTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarianceVelocityVelocityType*
            CovarianceVelocityVelocityTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarianceVelocityVelocityType*
            CovarianceVelocityVelocityTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarianceVelocityVelocityType*
            CovarianceVelocityVelocityTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarianceVelocityVelocityTypePluginSupport_copy_data(
                CovarianceVelocityVelocityType *out,
                const CovarianceVelocityVelocityType *in);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePluginSupport_destroy_data_w_params(
                CovarianceVelocityVelocityType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePluginSupport_destroy_data_ex(
                CovarianceVelocityVelocityType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePluginSupport_destroy_data(
                CovarianceVelocityVelocityType *sample);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePluginSupport_print_data(
                const CovarianceVelocityVelocityType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CovarianceVelocityVelocityTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CovarianceVelocityVelocityTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CovarianceVelocityVelocityTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CovarianceVelocityVelocityTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceVelocityVelocityType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CovarianceVelocityVelocityTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceVelocityVelocityType *out,
                const CovarianceVelocityVelocityType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovarianceVelocityVelocityTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovarianceVelocityVelocityType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovarianceVelocityVelocityTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceVelocityVelocityType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovarianceVelocityVelocityTypePlugin_deserialize_from_cdr_buffer(
                CovarianceVelocityVelocityType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovarianceVelocityVelocityTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarianceVelocityVelocityTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarianceVelocityVelocityTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarianceVelocityVelocityTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovarianceVelocityVelocityTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceVelocityVelocityType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CovarianceVelocityVelocityTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CovarianceVelocityVelocityTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CovarianceVelocityVelocityTypePlugin_542407613_h */

