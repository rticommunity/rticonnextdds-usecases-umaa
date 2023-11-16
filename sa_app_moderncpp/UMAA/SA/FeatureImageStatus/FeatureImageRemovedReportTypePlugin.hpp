

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageRemovedReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImageRemovedReportTypePlugin_82163291_h
#define FeatureImageRemovedReportTypePlugin_82163291_h

#include "FeatureImageRemovedReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SA/FeatureImagePair/FeatureImagePairTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace FeatureImageStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FeatureImageRemovedReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FeatureImageRemovedReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FeatureImageRemovedReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FeatureImageRemovedReportType.
            */
            typedef  class FeatureImageRemovedReportType FeatureImageRemovedReportTypeKeyHolder;

            #define FeatureImageRemovedReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FeatureImageRemovedReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FeatureImageRemovedReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FeatureImageRemovedReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FeatureImageRemovedReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FeatureImageRemovedReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FeatureImageRemovedReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FeatureImageRemovedReportType*
            FeatureImageRemovedReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FeatureImageRemovedReportType*
            FeatureImageRemovedReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FeatureImageRemovedReportType*
            FeatureImageRemovedReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePluginSupport_copy_data(
                FeatureImageRemovedReportType *out,
                const FeatureImageRemovedReportType *in);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_destroy_data_w_params(
                FeatureImageRemovedReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_destroy_data_ex(
                FeatureImageRemovedReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_destroy_data(
                FeatureImageRemovedReportType *sample);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_print_data(
                const FeatureImageRemovedReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FeatureImageRemovedReportType*
            FeatureImageRemovedReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FeatureImageRemovedReportType*
            FeatureImageRemovedReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_destroy_key_ex(
                FeatureImageRemovedReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePluginSupport_destroy_key(
                FeatureImageRemovedReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FeatureImageRemovedReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FeatureImageRemovedReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FeatureImageRemovedReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FeatureImageRemovedReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportType *out,
                const FeatureImageRemovedReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FeatureImageRemovedReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FeatureImageRemovedReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FeatureImageRemovedReportTypePlugin_deserialize_from_cdr_buffer(
                FeatureImageRemovedReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FeatureImageRemovedReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FeatureImageRemovedReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FeatureImageRemovedReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FeatureImageRemovedReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportTypeKeyHolder *key, 
                const FeatureImageRemovedReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FeatureImageRemovedReportType *instance, 
                const FeatureImageRemovedReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FeatureImageRemovedReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FeatureImageRemovedReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FeatureImageRemovedReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FeatureImageStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FeatureImageRemovedReportTypePlugin_82163291_h */

