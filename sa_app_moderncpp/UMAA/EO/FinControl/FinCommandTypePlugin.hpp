

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinCommandTypePlugin_850174333_h
#define FinCommandTypePlugin_850174333_h

#include "FinCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinCommandType.
            */
            typedef  class FinCommandType FinCommandTypeKeyHolder;

            #define FinCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinCommandType*
            FinCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinCommandType*
            FinCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinCommandType*
            FinCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePluginSupport_copy_data(
                FinCommandType *out,
                const FinCommandType *in);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_destroy_data_w_params(
                FinCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_destroy_data_ex(
                FinCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_destroy_data(
                FinCommandType *sample);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_print_data(
                const FinCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinCommandType*
            FinCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinCommandType*
            FinCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_destroy_key_ex(
                FinCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinCommandTypePluginSupport_destroy_key(
                FinCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandType *out,
                const FinCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinCommandTypePlugin_deserialize_from_cdr_buffer(
                FinCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandTypeKeyHolder *key, 
                const FinCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandType *instance, 
                const FinCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinCommandTypePlugin_850174333_h */

