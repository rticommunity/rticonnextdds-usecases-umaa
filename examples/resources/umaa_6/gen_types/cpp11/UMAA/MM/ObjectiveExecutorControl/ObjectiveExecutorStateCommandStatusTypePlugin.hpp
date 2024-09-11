

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutorStateCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutorStateCommandStatusTypePlugin_2000783147_h
#define ObjectiveExecutorStateCommandStatusTypePlugin_2000783147_h

#include "ObjectiveExecutorStateCommandStatusType.hpp"

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
            * By default, this type is struct ObjectiveExecutorStateCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveExecutorStateCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveExecutorStateCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveExecutorStateCommandStatusType.
            */
            typedef class ObjectiveExecutorStateCommandStatusType ObjectiveExecutorStateCommandStatusTypeKeyHolder;

            #define ObjectiveExecutorStateCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveExecutorStateCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveExecutorStateCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveExecutorStateCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveExecutorStateCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveExecutorStateCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveExecutorStateCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandStatusType*
            ObjectiveExecutorStateCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandStatusType*
            ObjectiveExecutorStateCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandStatusType*
            ObjectiveExecutorStateCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_copy_data(
                ObjectiveExecutorStateCommandStatusType *out,
                const ObjectiveExecutorStateCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_destroy_data_w_params(
                ObjectiveExecutorStateCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_destroy_data_ex(
                ObjectiveExecutorStateCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_destroy_data(
                ObjectiveExecutorStateCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_print_data(
                const ObjectiveExecutorStateCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandStatusType*
            ObjectiveExecutorStateCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorStateCommandStatusType*
            ObjectiveExecutorStateCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_destroy_key_ex(
                ObjectiveExecutorStateCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePluginSupport_destroy_key(
                ObjectiveExecutorStateCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveExecutorStateCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveExecutorStateCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorStateCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveExecutorStateCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusType *out,
                const ObjectiveExecutorStateCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorStateCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveExecutorStateCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorStateCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveExecutorStateCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveExecutorStateCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorStateCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusTypeKeyHolder *key, 
                const ObjectiveExecutorStateCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorStateCommandStatusType *instance, 
                const ObjectiveExecutorStateCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorStateCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveExecutorStateCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveExecutorStateCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveExecutorControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveExecutorStateCommandStatusTypePlugin_2000783147_h */

