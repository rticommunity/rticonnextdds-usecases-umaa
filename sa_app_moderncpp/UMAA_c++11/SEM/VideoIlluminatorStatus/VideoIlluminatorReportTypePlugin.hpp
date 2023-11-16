

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorReportTypePlugin_1020678115_h
#define VideoIlluminatorReportTypePlugin_1020678115_h

#include "VideoIlluminatorReportType.hpp"

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
    namespace SEM {
        namespace VideoIlluminatorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VideoIlluminatorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VideoIlluminatorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VideoIlluminatorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VideoIlluminatorReportType.
            */
            typedef class VideoIlluminatorReportType VideoIlluminatorReportTypeKeyHolder;

            #define VideoIlluminatorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VideoIlluminatorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VideoIlluminatorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VideoIlluminatorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VideoIlluminatorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VideoIlluminatorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VideoIlluminatorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VideoIlluminatorReportType*
            VideoIlluminatorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VideoIlluminatorReportType*
            VideoIlluminatorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorReportType*
            VideoIlluminatorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePluginSupport_copy_data(
                VideoIlluminatorReportType *out,
                const VideoIlluminatorReportType *in);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_destroy_data_w_params(
                VideoIlluminatorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_destroy_data_ex(
                VideoIlluminatorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_destroy_data(
                VideoIlluminatorReportType *sample);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_print_data(
                const VideoIlluminatorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VideoIlluminatorReportType*
            VideoIlluminatorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorReportType*
            VideoIlluminatorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_destroy_key_ex(
                VideoIlluminatorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePluginSupport_destroy_key(
                VideoIlluminatorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VideoIlluminatorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VideoIlluminatorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VideoIlluminatorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VideoIlluminatorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportType *out,
                const VideoIlluminatorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VideoIlluminatorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorReportTypePlugin_deserialize_from_cdr_buffer(
                VideoIlluminatorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VideoIlluminatorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportTypeKeyHolder *key, 
                const VideoIlluminatorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorReportType *instance, 
                const VideoIlluminatorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VideoIlluminatorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VideoIlluminatorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VideoIlluminatorStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VideoIlluminatorReportTypePlugin_1020678115_h */

