

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASCancelConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SASCancelConfigTypePlugin_1182362394_h
#define SASCancelConfigTypePlugin_1182362394_h

#include "SASCancelConfigType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct SASCancelConfigType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SASCancelConfigType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SASCancelConfigType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SASCancelConfigType.
            */
            typedef class SASCancelConfigType SASCancelConfigTypeKeyHolder;

            #define SASCancelConfigTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SASCancelConfigTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SASCancelConfigTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SASCancelConfigTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SASCancelConfigTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SASCancelConfigTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SASCancelConfigTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SASCancelConfigType*
            SASCancelConfigTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SASCancelConfigType*
            SASCancelConfigTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCancelConfigType*
            SASCancelConfigTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePluginSupport_copy_data(
                SASCancelConfigType *out,
                const SASCancelConfigType *in);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_destroy_data_w_params(
                SASCancelConfigType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_destroy_data_ex(
                SASCancelConfigType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_destroy_data(
                SASCancelConfigType *sample);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_print_data(
                const SASCancelConfigType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SASCancelConfigType*
            SASCancelConfigTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCancelConfigType*
            SASCancelConfigTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_destroy_key_ex(
                SASCancelConfigTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePluginSupport_destroy_key(
                SASCancelConfigTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SASCancelConfigTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SASCancelConfigTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SASCancelConfigTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SASCancelConfigTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigType *out,
                const SASCancelConfigType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SASCancelConfigTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SASCancelConfigType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SASCancelConfigTypePlugin_deserialize_from_cdr_buffer(
                SASCancelConfigType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SASCancelConfigTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SASCancelConfigTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SASCancelConfigTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SASCancelConfigTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigTypeKeyHolder *key, 
                const SASCancelConfigType *instance);

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SASCancelConfigType *instance, 
                const SASCancelConfigTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SASCancelConfigTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SASCancelConfigTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SASCancelConfigTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SASConfig  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SASCancelConfigTypePlugin_1182362394_h */

