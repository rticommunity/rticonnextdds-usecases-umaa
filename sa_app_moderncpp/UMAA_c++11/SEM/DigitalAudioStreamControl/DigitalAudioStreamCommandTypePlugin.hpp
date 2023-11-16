

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioStreamCommandTypePlugin_1856036136_h
#define DigitalAudioStreamCommandTypePlugin_1856036136_h

#include "DigitalAudioStreamCommandType.hpp"

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
        namespace DigitalAudioStreamControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalAudioStreamCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalAudioStreamCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalAudioStreamCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalAudioStreamCommandType.
            */
            typedef class DigitalAudioStreamCommandType DigitalAudioStreamCommandTypeKeyHolder;

            #define DigitalAudioStreamCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalAudioStreamCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalAudioStreamCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalAudioStreamCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalAudioStreamCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalAudioStreamCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalAudioStreamCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalAudioStreamCommandType*
            DigitalAudioStreamCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalAudioStreamCommandType*
            DigitalAudioStreamCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamCommandType*
            DigitalAudioStreamCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePluginSupport_copy_data(
                DigitalAudioStreamCommandType *out,
                const DigitalAudioStreamCommandType *in);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_destroy_data_w_params(
                DigitalAudioStreamCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_destroy_data_ex(
                DigitalAudioStreamCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_destroy_data(
                DigitalAudioStreamCommandType *sample);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_print_data(
                const DigitalAudioStreamCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalAudioStreamCommandType*
            DigitalAudioStreamCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamCommandType*
            DigitalAudioStreamCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_destroy_key_ex(
                DigitalAudioStreamCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePluginSupport_destroy_key(
                DigitalAudioStreamCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalAudioStreamCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalAudioStreamCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalAudioStreamCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandType *out,
                const DigitalAudioStreamCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalAudioStreamCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamCommandTypePlugin_deserialize_from_cdr_buffer(
                DigitalAudioStreamCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalAudioStreamCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandTypeKeyHolder *key, 
                const DigitalAudioStreamCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandType *instance, 
                const DigitalAudioStreamCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalAudioStreamCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalAudioStreamCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalAudioStreamControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalAudioStreamCommandTypePlugin_1856036136_h */

