

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ImageReportTypePlugin_1344238249_h
#define ImageReportTypePlugin_1344238249_h

#include "ImageReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_WGS84Plugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SA/WorldTransform/WorldTransformTypePlugin.hpp"

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
            * By default, this type is struct ImageReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ImageReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ImageReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ImageReportType.
            */
            typedef class ImageReportType ImageReportTypeKeyHolder;

            #define ImageReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ImageReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ImageReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ImageReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ImageReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ImageReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ImageReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ImageReportType*
            ImageReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ImageReportType*
            ImageReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ImageReportType*
            ImageReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePluginSupport_copy_data(
                ImageReportType *out,
                const ImageReportType *in);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_destroy_data_w_params(
                ImageReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_destroy_data_ex(
                ImageReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_destroy_data(
                ImageReportType *sample);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_print_data(
                const ImageReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ImageReportType*
            ImageReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ImageReportType*
            ImageReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_destroy_key_ex(
                ImageReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ImageReportTypePluginSupport_destroy_key(
                ImageReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ImageReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ImageReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ImageReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ImageReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ImageReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportType *out,
                const ImageReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ImageReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ImageReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ImageReportTypePlugin_deserialize_from_cdr_buffer(
                ImageReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ImageReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ImageReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ImageReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ImageReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportTypeKeyHolder *key, 
                const ImageReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ImageReportType *instance, 
                const ImageReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ImageReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ImageReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ImageReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ImageStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ImageReportTypePlugin_1344238249_h */

