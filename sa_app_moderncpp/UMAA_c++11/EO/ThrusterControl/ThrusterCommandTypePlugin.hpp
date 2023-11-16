

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterCommandTypePlugin_1547991630_h
#define ThrusterCommandTypePlugin_1547991630_h

#include "ThrusterCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/ThrusterControl/ThrusterControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace ThrusterControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ThrusterCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ThrusterCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ThrusterCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ThrusterCommandType.
            */
            typedef class ThrusterCommandType ThrusterCommandTypeKeyHolder;

            #define ThrusterCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ThrusterCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ThrusterCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ThrusterCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ThrusterCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ThrusterCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ThrusterCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ThrusterCommandType*
            ThrusterCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ThrusterCommandType*
            ThrusterCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterCommandType*
            ThrusterCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePluginSupport_copy_data(
                ThrusterCommandType *out,
                const ThrusterCommandType *in);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_destroy_data_w_params(
                ThrusterCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_destroy_data_ex(
                ThrusterCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_destroy_data(
                ThrusterCommandType *sample);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_print_data(
                const ThrusterCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ThrusterCommandType*
            ThrusterCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterCommandType*
            ThrusterCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_destroy_key_ex(
                ThrusterCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePluginSupport_destroy_key(
                ThrusterCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ThrusterCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ThrusterCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ThrusterCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ThrusterCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandType *out,
                const ThrusterCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ThrusterCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ThrusterCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ThrusterCommandTypePlugin_deserialize_from_cdr_buffer(
                ThrusterCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ThrusterCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandTypeKeyHolder *key, 
                const ThrusterCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandType *instance, 
                const ThrusterCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ThrusterCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ThrusterCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ThrusterControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrusterCommandTypePlugin_1547991630_h */

