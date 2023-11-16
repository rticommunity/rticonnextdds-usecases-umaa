

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlCommandTypePlugin_850798814_h
#define WhistleControlCommandTypePlugin_850798814_h

#include "WhistleControlCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Propulsion/WhistlePropertiesTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace WhistleControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WhistleControlCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WhistleControlCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WhistleControlCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WhistleControlCommandType.
            */
            typedef  class WhistleControlCommandType WhistleControlCommandTypeKeyHolder;

            #define WhistleControlCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WhistleControlCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WhistleControlCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WhistleControlCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WhistleControlCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WhistleControlCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WhistleControlCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WhistleControlCommandType*
            WhistleControlCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WhistleControlCommandType*
            WhistleControlCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WhistleControlCommandType*
            WhistleControlCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePluginSupport_copy_data(
                WhistleControlCommandType *out,
                const WhistleControlCommandType *in);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_destroy_data_w_params(
                WhistleControlCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_destroy_data_ex(
                WhistleControlCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_destroy_data(
                WhistleControlCommandType *sample);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_print_data(
                const WhistleControlCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WhistleControlCommandType*
            WhistleControlCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WhistleControlCommandType*
            WhistleControlCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_destroy_key_ex(
                WhistleControlCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePluginSupport_destroy_key(
                WhistleControlCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WhistleControlCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WhistleControlCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WhistleControlCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WhistleControlCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandType *out,
                const WhistleControlCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WhistleControlCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WhistleControlCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WhistleControlCommandTypePlugin_deserialize_from_cdr_buffer(
                WhistleControlCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WhistleControlCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandTypeKeyHolder *key, 
                const WhistleControlCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandType *instance, 
                const WhistleControlCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WhistleControlCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WhistleControlCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WhistleControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WhistleControlCommandTypePlugin_850798814_h */

