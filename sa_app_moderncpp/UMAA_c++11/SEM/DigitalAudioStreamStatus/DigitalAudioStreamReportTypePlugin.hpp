

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioStreamReportTypePlugin_2058115766_h
#define DigitalAudioStreamReportTypePlugin_2058115766_h

#include "DigitalAudioStreamReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalAudioStreamStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalAudioStreamReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalAudioStreamReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalAudioStreamReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalAudioStreamReportType.
            */
            typedef class DigitalAudioStreamReportType DigitalAudioStreamReportTypeKeyHolder;

            #define DigitalAudioStreamReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalAudioStreamReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalAudioStreamReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalAudioStreamReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalAudioStreamReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalAudioStreamReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalAudioStreamReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalAudioStreamReportType*
            DigitalAudioStreamReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalAudioStreamReportType*
            DigitalAudioStreamReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamReportType*
            DigitalAudioStreamReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePluginSupport_copy_data(
                DigitalAudioStreamReportType *out,
                const DigitalAudioStreamReportType *in);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_destroy_data_w_params(
                DigitalAudioStreamReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_destroy_data_ex(
                DigitalAudioStreamReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_destroy_data(
                DigitalAudioStreamReportType *sample);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_print_data(
                const DigitalAudioStreamReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalAudioStreamReportType*
            DigitalAudioStreamReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamReportType*
            DigitalAudioStreamReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_destroy_key_ex(
                DigitalAudioStreamReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePluginSupport_destroy_key(
                DigitalAudioStreamReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalAudioStreamReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalAudioStreamReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalAudioStreamReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportType *out,
                const DigitalAudioStreamReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalAudioStreamReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamReportTypePlugin_deserialize_from_cdr_buffer(
                DigitalAudioStreamReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalAudioStreamReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportTypeKeyHolder *key, 
                const DigitalAudioStreamReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamReportType *instance, 
                const DigitalAudioStreamReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalAudioStreamReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalAudioStreamReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalAudioStreamStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalAudioStreamReportTypePlugin_2058115766_h */

