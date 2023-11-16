

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointCommandTypePlugin_219227066_h
#define LocalWaypointCommandTypePlugin_219227066_h

#include "LocalWaypointCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/LocalWaypointControl/LocalWaypointTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalWaypointControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalWaypointCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalWaypointCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalWaypointCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalWaypointCommandType.
            */
            typedef  class LocalWaypointCommandType LocalWaypointCommandTypeKeyHolder;

            #define LocalWaypointCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalWaypointCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalWaypointCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalWaypointCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalWaypointCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalWaypointCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalWaypointCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalWaypointCommandType*
            LocalWaypointCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalWaypointCommandType*
            LocalWaypointCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointCommandType*
            LocalWaypointCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePluginSupport_copy_data(
                LocalWaypointCommandType *out,
                const LocalWaypointCommandType *in);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_destroy_data_w_params(
                LocalWaypointCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_destroy_data_ex(
                LocalWaypointCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_destroy_data(
                LocalWaypointCommandType *sample);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_print_data(
                const LocalWaypointCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalWaypointCommandType*
            LocalWaypointCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointCommandType*
            LocalWaypointCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_destroy_key_ex(
                LocalWaypointCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePluginSupport_destroy_key(
                LocalWaypointCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalWaypointCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalWaypointCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalWaypointCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalWaypointCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandType *out,
                const LocalWaypointCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalWaypointCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalWaypointCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalWaypointCommandTypePlugin_deserialize_from_cdr_buffer(
                LocalWaypointCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalWaypointCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandTypeKeyHolder *key, 
                const LocalWaypointCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointCommandType *instance, 
                const LocalWaypointCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalWaypointCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalWaypointCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalWaypointCommandTypePlugin_219227066_h */

