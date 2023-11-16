

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BucketCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BucketCommandTypePlugin_1204821364_h
#define BucketCommandTypePlugin_1204821364_h

#include "BucketCommandType.hpp"

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
        namespace BucketControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BucketCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BucketCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BucketCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BucketCommandType.
            */
            typedef class BucketCommandType BucketCommandTypeKeyHolder;

            #define BucketCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BucketCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BucketCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BucketCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BucketCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BucketCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BucketCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BucketCommandType*
            BucketCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BucketCommandType*
            BucketCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BucketCommandType*
            BucketCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePluginSupport_copy_data(
                BucketCommandType *out,
                const BucketCommandType *in);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_destroy_data_w_params(
                BucketCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_destroy_data_ex(
                BucketCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_destroy_data(
                BucketCommandType *sample);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_print_data(
                const BucketCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BucketCommandType*
            BucketCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BucketCommandType*
            BucketCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_destroy_key_ex(
                BucketCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BucketCommandTypePluginSupport_destroy_key(
                BucketCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BucketCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BucketCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BucketCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BucketCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BucketCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandType *out,
                const BucketCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BucketCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BucketCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BucketCommandTypePlugin_deserialize_from_cdr_buffer(
                BucketCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BucketCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BucketCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BucketCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BucketCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandTypeKeyHolder *key, 
                const BucketCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandType *instance, 
                const BucketCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BucketCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BucketCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BucketControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BucketCommandTypePlugin_1204821364_h */

