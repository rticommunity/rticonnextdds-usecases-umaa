

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingSpecsReportTypePlugin_1030733027_h
#define H264VideoEncodingSpecsReportTypePlugin_1030733027_h

#include "H264VideoEncodingSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace H264VideoEncodingSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct H264VideoEncodingSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct H264VideoEncodingSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * H264VideoEncodingSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct H264VideoEncodingSpecsReportType.
            */
            typedef class H264VideoEncodingSpecsReportType H264VideoEncodingSpecsReportTypeKeyHolder;

            #define H264VideoEncodingSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define H264VideoEncodingSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define H264VideoEncodingSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define H264VideoEncodingSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define H264VideoEncodingSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define H264VideoEncodingSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define H264VideoEncodingSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern H264VideoEncodingSpecsReportType*
            H264VideoEncodingSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern H264VideoEncodingSpecsReportType*
            H264VideoEncodingSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingSpecsReportType*
            H264VideoEncodingSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePluginSupport_copy_data(
                H264VideoEncodingSpecsReportType *out,
                const H264VideoEncodingSpecsReportType *in);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_destroy_data_w_params(
                H264VideoEncodingSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_destroy_data_ex(
                H264VideoEncodingSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_destroy_data(
                H264VideoEncodingSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_print_data(
                const H264VideoEncodingSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern H264VideoEncodingSpecsReportType*
            H264VideoEncodingSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingSpecsReportType*
            H264VideoEncodingSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_destroy_key_ex(
                H264VideoEncodingSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePluginSupport_destroy_key(
                H264VideoEncodingSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            H264VideoEncodingSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            H264VideoEncodingSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            H264VideoEncodingSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            H264VideoEncodingSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportType *out,
                const H264VideoEncodingSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const H264VideoEncodingSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                H264VideoEncodingSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            H264VideoEncodingSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportTypeKeyHolder *key, 
                const H264VideoEncodingSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingSpecsReportType *instance, 
                const H264VideoEncodingSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            H264VideoEncodingSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            H264VideoEncodingSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace H264VideoEncodingSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* H264VideoEncodingSpecsReportTypePlugin_1030733027_h */

