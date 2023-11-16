

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImagePairType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImagePairTypePlugin_734499926_h
#define FeatureImagePairTypePlugin_734499926_h

#include "FeatureImagePairType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace FeatureImagePair {

            #define FeatureImagePairTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FeatureImagePairTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FeatureImagePairTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FeatureImagePairTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FeatureImagePairTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FeatureImagePairType*
            FeatureImagePairTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FeatureImagePairType*
            FeatureImagePairTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FeatureImagePairType*
            FeatureImagePairTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FeatureImagePairTypePluginSupport_copy_data(
                FeatureImagePairType *out,
                const FeatureImagePairType *in);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePluginSupport_destroy_data_w_params(
                FeatureImagePairType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePluginSupport_destroy_data_ex(
                FeatureImagePairType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePluginSupport_destroy_data(
                FeatureImagePairType *sample);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePluginSupport_print_data(
                const FeatureImagePairType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FeatureImagePairTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FeatureImagePairTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FeatureImagePairTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FeatureImagePairTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImagePairType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FeatureImagePairTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImagePairType *out,
                const FeatureImagePairType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FeatureImagePairTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FeatureImagePairType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FeatureImagePairTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImagePairType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FeatureImagePairTypePlugin_deserialize_from_cdr_buffer(
                FeatureImagePairType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FeatureImagePairTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FeatureImagePairTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FeatureImagePairTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FeatureImagePairTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FeatureImagePairTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImagePairType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FeatureImagePairTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FeatureImagePairTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FeatureImagePair  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FeatureImagePairTypePlugin_734499926_h */

