

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutorStateCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutorStateCommandTypePlugin_249953649_h
#define ObjectiveExecutorStateCommandTypePlugin_249953649_h

#include "ObjectiveExecutorStateCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ObjectiveExecutorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveExecutorStateCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveExecutorStateCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveExecutorStateCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveExecutorStateCommandType.
            */
            typedef class ObjectiveExecutorStateCommandType ObjectiveExecutorStateCommandTypeKeyHolder;

            #define ObjectiveExecutorStateCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveExecutorStateCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveExecutorStateCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveExecutorStateCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveExecutorStateCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveExecutorStateCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveExecutorStateCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandType*
            ObjectiveExecutorStateCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandType*
            ObjectiveExecutorStateCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandType*
            ObjectiveExecutorStateCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePluginSupport_copy_data(
                ObjectiveExecutorStateCommandType *out,
                const ObjectiveExecutorStateCommandType *in);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_destroy_data_w_params(
                ObjectiveExecutorStateCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_destroy_data_ex(
                ObjectiveExecutorStateCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_destroy_data(
                ObjectiveExecutorStateCommandType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_print_data(
                const ObjectiveExecutorStateCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandType*
            ObjectiveExecutorStateCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandType*
            ObjectiveExecutorStateCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_destroy_key_ex(
                ObjectiveExecutorStateCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePluginSupport_destroy_key(
                ObjectiveExecutorStateCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveExecutorStateCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveExecutorStateCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveExecutorStateCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandType *out,
                const ObjectiveExecutorStateCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorStateCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveExecutorStateCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorStateCommandTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveExecutorStateCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveExecutorStateCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandTypeKeyHolder *key, 
                const ObjectiveExecutorStateCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandType *instance, 
                const ObjectiveExecutorStateCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveExecutorStateCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveExecutorStateCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveExecutorControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveExecutorStateCommandTypePlugin_249953649_h */

