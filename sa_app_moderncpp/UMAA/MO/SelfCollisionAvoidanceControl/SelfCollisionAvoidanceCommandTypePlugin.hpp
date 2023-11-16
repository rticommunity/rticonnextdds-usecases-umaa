

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceCommandTypePlugin_2078732767_h
#define SelfCollisionAvoidanceCommandTypePlugin_2078732767_h

#include "SelfCollisionAvoidanceCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace SelfCollisionAvoidanceControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SelfCollisionAvoidanceCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SelfCollisionAvoidanceCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SelfCollisionAvoidanceCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SelfCollisionAvoidanceCommandType.
            */
            typedef  class SelfCollisionAvoidanceCommandType SelfCollisionAvoidanceCommandTypeKeyHolder;

            #define SelfCollisionAvoidanceCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SelfCollisionAvoidanceCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SelfCollisionAvoidanceCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SelfCollisionAvoidanceCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SelfCollisionAvoidanceCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SelfCollisionAvoidanceCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SelfCollisionAvoidanceCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandType*
            SelfCollisionAvoidanceCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandType*
            SelfCollisionAvoidanceCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandType*
            SelfCollisionAvoidanceCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePluginSupport_copy_data(
                SelfCollisionAvoidanceCommandType *out,
                const SelfCollisionAvoidanceCommandType *in);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_destroy_data_w_params(
                SelfCollisionAvoidanceCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_destroy_data_ex(
                SelfCollisionAvoidanceCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_destroy_data(
                SelfCollisionAvoidanceCommandType *sample);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_print_data(
                const SelfCollisionAvoidanceCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandType*
            SelfCollisionAvoidanceCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandType*
            SelfCollisionAvoidanceCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_destroy_key_ex(
                SelfCollisionAvoidanceCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePluginSupport_destroy_key(
                SelfCollisionAvoidanceCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SelfCollisionAvoidanceCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SelfCollisionAvoidanceCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SelfCollisionAvoidanceCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandType *out,
                const SelfCollisionAvoidanceCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SelfCollisionAvoidanceCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandTypePlugin_deserialize_from_cdr_buffer(
                SelfCollisionAvoidanceCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SelfCollisionAvoidanceCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandTypeKeyHolder *key, 
                const SelfCollisionAvoidanceCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandType *instance, 
                const SelfCollisionAvoidanceCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SelfCollisionAvoidanceCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SelfCollisionAvoidanceCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SelfCollisionAvoidanceControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SelfCollisionAvoidanceCommandTypePlugin_2078732767_h */

