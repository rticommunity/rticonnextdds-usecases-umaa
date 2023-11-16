

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandTypePlugin_1079252020_h
#define GuardedTeleopCommandTypePlugin_1079252020_h

#include "GuardedTeleopCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
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
        namespace GuardedTeleopControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GuardedTeleopCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GuardedTeleopCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GuardedTeleopCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GuardedTeleopCommandType.
            */
            typedef class GuardedTeleopCommandType GuardedTeleopCommandTypeKeyHolder;

            #define GuardedTeleopCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GuardedTeleopCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GuardedTeleopCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GuardedTeleopCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GuardedTeleopCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GuardedTeleopCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GuardedTeleopCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GuardedTeleopCommandType*
            GuardedTeleopCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GuardedTeleopCommandType*
            GuardedTeleopCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopCommandType*
            GuardedTeleopCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePluginSupport_copy_data(
                GuardedTeleopCommandType *out,
                const GuardedTeleopCommandType *in);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_destroy_data_w_params(
                GuardedTeleopCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_destroy_data_ex(
                GuardedTeleopCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_destroy_data(
                GuardedTeleopCommandType *sample);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_print_data(
                const GuardedTeleopCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GuardedTeleopCommandType*
            GuardedTeleopCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopCommandType*
            GuardedTeleopCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_destroy_key_ex(
                GuardedTeleopCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePluginSupport_destroy_key(
                GuardedTeleopCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GuardedTeleopCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GuardedTeleopCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GuardedTeleopCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandType *out,
                const GuardedTeleopCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GuardedTeleopCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopCommandTypePlugin_deserialize_from_cdr_buffer(
                GuardedTeleopCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GuardedTeleopCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandTypeKeyHolder *key, 
                const GuardedTeleopCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandType *instance, 
                const GuardedTeleopCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GuardedTeleopCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GuardedTeleopCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GuardedTeleopControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GuardedTeleopCommandTypePlugin_1079252020_h */

