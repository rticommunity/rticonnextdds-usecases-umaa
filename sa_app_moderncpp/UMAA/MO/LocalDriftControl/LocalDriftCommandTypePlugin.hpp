

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftCommandTypePlugin_72221213_h
#define LocalDriftCommandTypePlugin_72221213_h

#include "LocalDriftCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalDriftControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalDriftCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalDriftCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalDriftCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalDriftCommandType.
            */
            typedef  class LocalDriftCommandType LocalDriftCommandTypeKeyHolder;

            #define LocalDriftCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalDriftCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalDriftCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalDriftCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalDriftCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalDriftCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalDriftCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalDriftCommandType*
            LocalDriftCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalDriftCommandType*
            LocalDriftCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDriftCommandType*
            LocalDriftCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePluginSupport_copy_data(
                LocalDriftCommandType *out,
                const LocalDriftCommandType *in);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_destroy_data_w_params(
                LocalDriftCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_destroy_data_ex(
                LocalDriftCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_destroy_data(
                LocalDriftCommandType *sample);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_print_data(
                const LocalDriftCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalDriftCommandType*
            LocalDriftCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDriftCommandType*
            LocalDriftCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_destroy_key_ex(
                LocalDriftCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePluginSupport_destroy_key(
                LocalDriftCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalDriftCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalDriftCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalDriftCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalDriftCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandType *out,
                const LocalDriftCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalDriftCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalDriftCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalDriftCommandTypePlugin_deserialize_from_cdr_buffer(
                LocalDriftCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalDriftCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalDriftCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalDriftCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalDriftCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandTypeKeyHolder *key, 
                const LocalDriftCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftCommandType *instance, 
                const LocalDriftCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalDriftCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalDriftCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDriftControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalDriftCommandTypePlugin_72221213_h */

