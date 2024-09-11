

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SASCommandStatusTypePlugin_1978559367_h
#define SASCommandStatusTypePlugin_1978559367_h

#include "SASCommandStatusType.hpp"

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
            * By default, this type is struct SASCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SASCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SASCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SASCommandStatusType.
            */
            typedef class SASCommandStatusType SASCommandStatusTypeKeyHolder;

            #define SASCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SASCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SASCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SASCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SASCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SASCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SASCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SASCommandStatusType*
            SASCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SASCommandStatusType*
            SASCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCommandStatusType*
            SASCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePluginSupport_copy_data(
                SASCommandStatusType *out,
                const SASCommandStatusType *in);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_destroy_data_w_params(
                SASCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_destroy_data_ex(
                SASCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_destroy_data(
                SASCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_print_data(
                const SASCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SASCommandStatusType*
            SASCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASCommandStatusType*
            SASCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_destroy_key_ex(
                SASCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePluginSupport_destroy_key(
                SASCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SASCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SASCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SASCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SASCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusType *out,
                const SASCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SASCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SASCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SASCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                SASCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SASCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SASCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SASCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SASCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusTypeKeyHolder *key, 
                const SASCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SASCommandStatusType *instance, 
                const SASCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SASCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SASCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SASCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SASControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SASCommandStatusTypePlugin_1978559367_h */

