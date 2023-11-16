

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandAckReportTypePlugin_1310512084_h
#define VideoIlluminatorCommandAckReportTypePlugin_1310512084_h

#include "VideoIlluminatorCommandAckReportType.hpp"

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
        namespace VideoIlluminatorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VideoIlluminatorCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VideoIlluminatorCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VideoIlluminatorCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VideoIlluminatorCommandAckReportType.
            */
            typedef class VideoIlluminatorCommandAckReportType VideoIlluminatorCommandAckReportTypeKeyHolder;

            #define VideoIlluminatorCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VideoIlluminatorCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VideoIlluminatorCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VideoIlluminatorCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VideoIlluminatorCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VideoIlluminatorCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VideoIlluminatorCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VideoIlluminatorCommandAckReportType*
            VideoIlluminatorCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VideoIlluminatorCommandAckReportType*
            VideoIlluminatorCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandAckReportType*
            VideoIlluminatorCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePluginSupport_copy_data(
                VideoIlluminatorCommandAckReportType *out,
                const VideoIlluminatorCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_destroy_data_w_params(
                VideoIlluminatorCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_destroy_data_ex(
                VideoIlluminatorCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_destroy_data(
                VideoIlluminatorCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_print_data(
                const VideoIlluminatorCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VideoIlluminatorCommandAckReportType*
            VideoIlluminatorCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VideoIlluminatorCommandAckReportType*
            VideoIlluminatorCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_destroy_key_ex(
                VideoIlluminatorCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePluginSupport_destroy_key(
                VideoIlluminatorCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VideoIlluminatorCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VideoIlluminatorCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VideoIlluminatorCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VideoIlluminatorCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportType *out,
                const VideoIlluminatorCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VideoIlluminatorCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VideoIlluminatorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                VideoIlluminatorCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VideoIlluminatorCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VideoIlluminatorCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportTypeKeyHolder *key, 
                const VideoIlluminatorCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VideoIlluminatorCommandAckReportType *instance, 
                const VideoIlluminatorCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VideoIlluminatorCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VideoIlluminatorCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VideoIlluminatorCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VideoIlluminatorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VideoIlluminatorCommandAckReportTypePlugin_1310512084_h */

