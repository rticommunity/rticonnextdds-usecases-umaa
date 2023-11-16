

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceCommandStatusTypePlugin_398591324_h
#define SelfCollisionAvoidanceCommandStatusTypePlugin_398591324_h

#include "SelfCollisionAvoidanceCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

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
            * By default, this type is struct SelfCollisionAvoidanceCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SelfCollisionAvoidanceCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SelfCollisionAvoidanceCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SelfCollisionAvoidanceCommandStatusType.
            */
            typedef class SelfCollisionAvoidanceCommandStatusType SelfCollisionAvoidanceCommandStatusTypeKeyHolder;

            #define SelfCollisionAvoidanceCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SelfCollisionAvoidanceCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SelfCollisionAvoidanceCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SelfCollisionAvoidanceCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SelfCollisionAvoidanceCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SelfCollisionAvoidanceCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SelfCollisionAvoidanceCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandStatusType*
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandStatusType*
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandStatusType*
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_copy_data(
                SelfCollisionAvoidanceCommandStatusType *out,
                const SelfCollisionAvoidanceCommandStatusType *in);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_destroy_data_w_params(
                SelfCollisionAvoidanceCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_destroy_data_ex(
                SelfCollisionAvoidanceCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_destroy_data(
                SelfCollisionAvoidanceCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_print_data(
                const SelfCollisionAvoidanceCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandStatusType*
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandStatusType*
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_destroy_key_ex(
                SelfCollisionAvoidanceCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePluginSupport_destroy_key(
                SelfCollisionAvoidanceCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SelfCollisionAvoidanceCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SelfCollisionAvoidanceCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SelfCollisionAvoidanceCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusType *out,
                const SelfCollisionAvoidanceCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SelfCollisionAvoidanceCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                SelfCollisionAvoidanceCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SelfCollisionAvoidanceCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusTypeKeyHolder *key, 
                const SelfCollisionAvoidanceCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandStatusType *instance, 
                const SelfCollisionAvoidanceCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SelfCollisionAvoidanceCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SelfCollisionAvoidanceCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SelfCollisionAvoidanceControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SelfCollisionAvoidanceCommandStatusTypePlugin_398591324_h */

