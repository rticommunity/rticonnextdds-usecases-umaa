

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineCommandTypePlugin_1679864777_h
#define EngineCommandTypePlugin_1679864777_h

#include "EngineCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Propulsion/PropulsionTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace EngineControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EngineCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EngineCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EngineCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EngineCommandType.
            */
            typedef class EngineCommandType EngineCommandTypeKeyHolder;

            #define EngineCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EngineCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EngineCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineCommandType*
            EngineCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineCommandType*
            EngineCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandType*
            EngineCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePluginSupport_copy_data(
                EngineCommandType *out,
                const EngineCommandType *in);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_destroy_data_w_params(
                EngineCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_destroy_data_ex(
                EngineCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_destroy_data(
                EngineCommandType *sample);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_print_data(
                const EngineCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EngineCommandType*
            EngineCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandType*
            EngineCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_destroy_key_ex(
                EngineCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandTypePluginSupport_destroy_key(
                EngineCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandType *out,
                const EngineCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineCommandTypePlugin_deserialize_from_cdr_buffer(
                EngineCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandTypeKeyHolder *key, 
                const EngineCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandType *instance, 
                const EngineCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EngineCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EngineControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineCommandTypePlugin_1679864777_h */

