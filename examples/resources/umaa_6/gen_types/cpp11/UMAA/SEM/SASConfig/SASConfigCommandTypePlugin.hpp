

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SASConfigCommandTypePlugin_590694734_h
#define SASConfigCommandTypePlugin_590694734_h

#include "SASConfigCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace SASConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SASConfigCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SASConfigCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SASConfigCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SASConfigCommandType.
            */
            typedef class SASConfigCommandType SASConfigCommandTypeKeyHolder;

            #define SASConfigCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SASConfigCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SASConfigCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SASConfigCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SASConfigCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SASConfigCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SASConfigCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SASConfigCommandType*
            SASConfigCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SASConfigCommandType*
            SASConfigCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASConfigCommandType*
            SASConfigCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePluginSupport_copy_data(
                SASConfigCommandType *out,
                const SASConfigCommandType *in);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_destroy_data_w_params(
                SASConfigCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_destroy_data_ex(
                SASConfigCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_destroy_data(
                SASConfigCommandType *sample);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_print_data(
                const SASConfigCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SASConfigCommandType*
            SASConfigCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASConfigCommandType*
            SASConfigCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_destroy_key_ex(
                SASConfigCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePluginSupport_destroy_key(
                SASConfigCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SASConfigCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SASConfigCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SASConfigCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SASConfigCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandType *out,
                const SASConfigCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SASConfigCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SASConfigCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SASConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                SASConfigCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SASConfigCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SASConfigCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SASConfigCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SASConfigCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandTypeKeyHolder *key, 
                const SASConfigCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigCommandType *instance, 
                const SASConfigCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SASConfigCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SASConfigCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SASConfigCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SASConfig  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SASConfigCommandTypePlugin_590694734_h */

