

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RenderUselessCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RenderUselessCommandTypePlugin_1383175741_h
#define RenderUselessCommandTypePlugin_1383175741_h

#include "RenderUselessCommandType.hpp"

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
    namespace SO {
        namespace RenderUselessControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RenderUselessCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RenderUselessCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RenderUselessCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RenderUselessCommandType.
            */
            typedef class RenderUselessCommandType RenderUselessCommandTypeKeyHolder;

            #define RenderUselessCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RenderUselessCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RenderUselessCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RenderUselessCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RenderUselessCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RenderUselessCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RenderUselessCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RenderUselessCommandType*
            RenderUselessCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RenderUselessCommandType*
            RenderUselessCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RenderUselessCommandType*
            RenderUselessCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePluginSupport_copy_data(
                RenderUselessCommandType *out,
                const RenderUselessCommandType *in);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_destroy_data_w_params(
                RenderUselessCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_destroy_data_ex(
                RenderUselessCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_destroy_data(
                RenderUselessCommandType *sample);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_print_data(
                const RenderUselessCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RenderUselessCommandType*
            RenderUselessCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RenderUselessCommandType*
            RenderUselessCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_destroy_key_ex(
                RenderUselessCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePluginSupport_destroy_key(
                RenderUselessCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RenderUselessCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RenderUselessCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RenderUselessCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RenderUselessCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandType *out,
                const RenderUselessCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RenderUselessCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RenderUselessCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RenderUselessCommandTypePlugin_deserialize_from_cdr_buffer(
                RenderUselessCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RenderUselessCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandTypeKeyHolder *key, 
                const RenderUselessCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandType *instance, 
                const RenderUselessCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RenderUselessCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RenderUselessCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RenderUselessControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RenderUselessCommandTypePlugin_1383175741_h */

