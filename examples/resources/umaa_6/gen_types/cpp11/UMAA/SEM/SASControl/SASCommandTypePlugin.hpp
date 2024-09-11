

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SASCommandTypePlugin_920127516_h
#define SASCommandTypePlugin_920127516_h

#include "SASCommandType.hpp"

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
    namespace SEM {
        namespace SASControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SASCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SASCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SASCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SASCommandType.
            */
            typedef class SASCommandType SASCommandTypeKeyHolder;

            #define SASCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SASCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SASCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SASCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SASCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SASCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SASCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SASCommandType*
            SASCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SASCommandType*
            SASCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCommandType*
            SASCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePluginSupport_copy_data(
                SASCommandType *out,
                const SASCommandType *in);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_destroy_data_w_params(
                SASCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_destroy_data_ex(
                SASCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_destroy_data(
                SASCommandType *sample);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_print_data(
                const SASCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SASCommandType*
            SASCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCommandType*
            SASCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_destroy_key_ex(
                SASCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCommandTypePluginSupport_destroy_key(
                SASCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SASCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SASCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SASCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SASCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SASCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandType *out,
                const SASCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SASCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SASCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SASCommandTypePlugin_deserialize_from_cdr_buffer(
                SASCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SASCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SASCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SASCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SASCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandTypeKeyHolder *key, 
                const SASCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandType *instance, 
                const SASCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SASCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SASCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SASCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SASControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SASCommandTypePlugin_920127516_h */

