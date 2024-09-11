

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SyncDataCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SyncDataCommandTypePlugin_852427250_h
#define SyncDataCommandTypePlugin_852427250_h

#include "SyncDataCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace SyncDataControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SyncDataCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SyncDataCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SyncDataCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SyncDataCommandType.
            */
            typedef class SyncDataCommandType SyncDataCommandTypeKeyHolder;

            #define SyncDataCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SyncDataCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SyncDataCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SyncDataCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SyncDataCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SyncDataCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SyncDataCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SyncDataCommandType*
            SyncDataCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SyncDataCommandType*
            SyncDataCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SyncDataCommandType*
            SyncDataCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePluginSupport_copy_data(
                SyncDataCommandType *out,
                const SyncDataCommandType *in);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_destroy_data_w_params(
                SyncDataCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_destroy_data_ex(
                SyncDataCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_destroy_data(
                SyncDataCommandType *sample);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_print_data(
                const SyncDataCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SyncDataCommandType*
            SyncDataCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SyncDataCommandType*
            SyncDataCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_destroy_key_ex(
                SyncDataCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePluginSupport_destroy_key(
                SyncDataCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SyncDataCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SyncDataCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SyncDataCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SyncDataCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandType *out,
                const SyncDataCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SyncDataCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SyncDataCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SyncDataCommandTypePlugin_deserialize_from_cdr_buffer(
                SyncDataCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SyncDataCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SyncDataCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SyncDataCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SyncDataCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandTypeKeyHolder *key, 
                const SyncDataCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SyncDataCommandType *instance, 
                const SyncDataCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SyncDataCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SyncDataCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SyncDataCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SyncDataControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SyncDataCommandTypePlugin_852427250_h */

