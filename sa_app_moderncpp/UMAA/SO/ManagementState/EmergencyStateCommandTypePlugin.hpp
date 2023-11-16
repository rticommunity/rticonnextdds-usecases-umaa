

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmergencyStateCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmergencyStateCommandTypePlugin_1418905428_h
#define EmergencyStateCommandTypePlugin_1418905428_h

#include "EmergencyStateCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ManagementState {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmergencyStateCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmergencyStateCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmergencyStateCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmergencyStateCommandType.
            */
            typedef  class EmergencyStateCommandType EmergencyStateCommandTypeKeyHolder;

            #define EmergencyStateCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmergencyStateCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmergencyStateCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmergencyStateCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmergencyStateCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmergencyStateCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmergencyStateCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmergencyStateCommandType*
            EmergencyStateCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmergencyStateCommandType*
            EmergencyStateCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandType*
            EmergencyStateCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePluginSupport_copy_data(
                EmergencyStateCommandType *out,
                const EmergencyStateCommandType *in);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_destroy_data_w_params(
                EmergencyStateCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_destroy_data_ex(
                EmergencyStateCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_destroy_data(
                EmergencyStateCommandType *sample);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_print_data(
                const EmergencyStateCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmergencyStateCommandType*
            EmergencyStateCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandType*
            EmergencyStateCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_destroy_key_ex(
                EmergencyStateCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePluginSupport_destroy_key(
                EmergencyStateCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmergencyStateCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmergencyStateCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmergencyStateCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandType *out,
                const EmergencyStateCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmergencyStateCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandTypePlugin_deserialize_from_cdr_buffer(
                EmergencyStateCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmergencyStateCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandTypeKeyHolder *key, 
                const EmergencyStateCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandType *instance, 
                const EmergencyStateCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmergencyStateCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmergencyStateCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ManagementState  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmergencyStateCommandTypePlugin_1418905428_h */

