

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersCommandTypePlugin_328169522_h
#define BeaconParametersCommandTypePlugin_328169522_h

#include "BeaconParametersCommandType.hpp"

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
    namespace SEM {
        namespace BeaconParametersControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BeaconParametersCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BeaconParametersCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BeaconParametersCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BeaconParametersCommandType.
            */
            typedef class BeaconParametersCommandType BeaconParametersCommandTypeKeyHolder;

            #define BeaconParametersCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BeaconParametersCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BeaconParametersCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BeaconParametersCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BeaconParametersCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BeaconParametersCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BeaconParametersCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BeaconParametersCommandType*
            BeaconParametersCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BeaconParametersCommandType*
            BeaconParametersCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BeaconParametersCommandType*
            BeaconParametersCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePluginSupport_copy_data(
                BeaconParametersCommandType *out,
                const BeaconParametersCommandType *in);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_destroy_data_w_params(
                BeaconParametersCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_destroy_data_ex(
                BeaconParametersCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_destroy_data(
                BeaconParametersCommandType *sample);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_print_data(
                const BeaconParametersCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BeaconParametersCommandType*
            BeaconParametersCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BeaconParametersCommandType*
            BeaconParametersCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_destroy_key_ex(
                BeaconParametersCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePluginSupport_destroy_key(
                BeaconParametersCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BeaconParametersCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BeaconParametersCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BeaconParametersCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BeaconParametersCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandType *out,
                const BeaconParametersCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BeaconParametersCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BeaconParametersCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BeaconParametersCommandTypePlugin_deserialize_from_cdr_buffer(
                BeaconParametersCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BeaconParametersCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandTypeKeyHolder *key, 
                const BeaconParametersCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersCommandType *instance, 
                const BeaconParametersCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BeaconParametersCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BeaconParametersCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BeaconParametersControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BeaconParametersCommandTypePlugin_328169522_h */

