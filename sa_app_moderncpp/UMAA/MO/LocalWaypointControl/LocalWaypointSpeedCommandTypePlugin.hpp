

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointSpeedCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointSpeedCommandTypePlugin_1450997073_h
#define LocalWaypointSpeedCommandTypePlugin_1450997073_h

#include "LocalWaypointSpeedCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

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
            * By default, this type is struct LocalWaypointSpeedCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalWaypointSpeedCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalWaypointSpeedCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalWaypointSpeedCommandType.
            */
            typedef  class LocalWaypointSpeedCommandType LocalWaypointSpeedCommandTypeKeyHolder;

            #define LocalWaypointSpeedCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalWaypointSpeedCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalWaypointSpeedCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalWaypointSpeedCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalWaypointSpeedCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalWaypointSpeedCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalWaypointSpeedCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalWaypointSpeedCommandType*
            LocalWaypointSpeedCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandType*
            LocalWaypointSpeedCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandType*
            LocalWaypointSpeedCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePluginSupport_copy_data(
                LocalWaypointSpeedCommandType *out,
                const LocalWaypointSpeedCommandType *in);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_destroy_data_w_params(
                LocalWaypointSpeedCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_destroy_data_ex(
                LocalWaypointSpeedCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_destroy_data(
                LocalWaypointSpeedCommandType *sample);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_print_data(
                const LocalWaypointSpeedCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandType*
            LocalWaypointSpeedCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandType*
            LocalWaypointSpeedCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_destroy_key_ex(
                LocalWaypointSpeedCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePluginSupport_destroy_key(
                LocalWaypointSpeedCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalWaypointSpeedCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalWaypointSpeedCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalWaypointSpeedCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandType *out,
                const LocalWaypointSpeedCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalWaypointSpeedCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandTypePlugin_deserialize_from_cdr_buffer(
                LocalWaypointSpeedCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalWaypointSpeedCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandTypeKeyHolder *key, 
                const LocalWaypointSpeedCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandType *instance, 
                const LocalWaypointSpeedCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalWaypointSpeedCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalWaypointSpeedCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalWaypointSpeedCommandTypePlugin_1450997073_h */

