

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovariancePolarType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovariancePolarTypePlugin_35620070_h
#define CovariancePolarTypePlugin_35620070_h

#include "CovariancePolarType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define CovariancePolarTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovariancePolarTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovariancePolarTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovariancePolarTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovariancePolarTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovariancePolarType*
            CovariancePolarTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovariancePolarType*
            CovariancePolarTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovariancePolarType*
            CovariancePolarTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovariancePolarTypePluginSupport_copy_data(
                CovariancePolarType *out,
                const CovariancePolarType *in);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePluginSupport_destroy_data_w_params(
                CovariancePolarType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePluginSupport_destroy_data_ex(
                CovariancePolarType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePluginSupport_destroy_data(
                CovariancePolarType *sample);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePluginSupport_print_data(
                const CovariancePolarType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CovariancePolarTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CovariancePolarTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CovariancePolarTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CovariancePolarTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovariancePolarType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CovariancePolarTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovariancePolarType *out,
                const CovariancePolarType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovariancePolarTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovariancePolarType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovariancePolarTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovariancePolarType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovariancePolarTypePlugin_deserialize_from_cdr_buffer(
                CovariancePolarType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovariancePolarTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovariancePolarTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovariancePolarTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovariancePolarTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovariancePolarTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovariancePolarType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CovariancePolarTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CovariancePolarTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CovariancePolarTypePlugin_35620070_h */

