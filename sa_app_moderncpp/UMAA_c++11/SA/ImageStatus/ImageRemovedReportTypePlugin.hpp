

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageRemovedReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ImageRemovedReportTypePlugin_354871192_h
#define ImageRemovedReportTypePlugin_354871192_h

#include "ImageRemovedReportType.hpp"

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
    namespace SA {
        namespace ImageStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ImageRemovedReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ImageRemovedReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ImageRemovedReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ImageRemovedReportType.
            */
            typedef class ImageRemovedReportType ImageRemovedReportTypeKeyHolder;

            #define ImageRemovedReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ImageRemovedReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ImageRemovedReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ImageRemovedReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ImageRemovedReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ImageRemovedReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ImageRemovedReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ImageRemovedReportType*
            ImageRemovedReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ImageRemovedReportType*
            ImageRemovedReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ImageRemovedReportType*
            ImageRemovedReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePluginSupport_copy_data(
                ImageRemovedReportType *out,
                const ImageRemovedReportType *in);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_destroy_data_w_params(
                ImageRemovedReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_destroy_data_ex(
                ImageRemovedReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_destroy_data(
                ImageRemovedReportType *sample);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_print_data(
                const ImageRemovedReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ImageRemovedReportType*
            ImageRemovedReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ImageRemovedReportType*
            ImageRemovedReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_destroy_key_ex(
                ImageRemovedReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePluginSupport_destroy_key(
                ImageRemovedReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ImageRemovedReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ImageRemovedReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ImageRemovedReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ImageRemovedReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportType *out,
                const ImageRemovedReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ImageRemovedReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ImageRemovedReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ImageRemovedReportTypePlugin_deserialize_from_cdr_buffer(
                ImageRemovedReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ImageRemovedReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ImageRemovedReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ImageRemovedReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ImageRemovedReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportTypeKeyHolder *key, 
                const ImageRemovedReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ImageRemovedReportType *instance, 
                const ImageRemovedReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ImageRemovedReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ImageRemovedReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ImageRemovedReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ImageStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ImageRemovedReportTypePlugin_354871192_h */

