

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalAddCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalAddCommandTypePlugin_1445404524_h
#define ConditionalAddCommandTypePlugin_1445404524_h

#include "ConditionalAddCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/Conditional/ConditionalTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ConditionalControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalAddCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalAddCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalAddCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalAddCommandType.
            */
            typedef class ConditionalAddCommandType ConditionalAddCommandTypeKeyHolder;

            #define ConditionalAddCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalAddCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalAddCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalAddCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalAddCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalAddCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalAddCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalAddCommandType*
            ConditionalAddCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalAddCommandType*
            ConditionalAddCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalAddCommandType*
            ConditionalAddCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePluginSupport_copy_data(
                ConditionalAddCommandType *out,
                const ConditionalAddCommandType *in);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_destroy_data_w_params(
                ConditionalAddCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_destroy_data_ex(
                ConditionalAddCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_destroy_data(
                ConditionalAddCommandType *sample);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_print_data(
                const ConditionalAddCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalAddCommandType*
            ConditionalAddCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalAddCommandType*
            ConditionalAddCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_destroy_key_ex(
                ConditionalAddCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePluginSupport_destroy_key(
                ConditionalAddCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalAddCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalAddCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalAddCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalAddCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandType *out,
                const ConditionalAddCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalAddCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalAddCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalAddCommandTypePlugin_deserialize_from_cdr_buffer(
                ConditionalAddCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalAddCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalAddCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalAddCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalAddCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandTypeKeyHolder *key, 
                const ConditionalAddCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalAddCommandType *instance, 
                const ConditionalAddCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalAddCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalAddCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalAddCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ConditionalControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConditionalAddCommandTypePlugin_1445404524_h */
