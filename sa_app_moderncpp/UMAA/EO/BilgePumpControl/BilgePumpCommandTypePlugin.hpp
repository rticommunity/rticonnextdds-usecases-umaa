

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BilgePumpCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BilgePumpCommandTypePlugin_806136968_h
#define BilgePumpCommandTypePlugin_806136968_h

#include "BilgePumpCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BilgePumpControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BilgePumpCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BilgePumpCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BilgePumpCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BilgePumpCommandType.
            */
            typedef  class BilgePumpCommandType BilgePumpCommandTypeKeyHolder;

            #define BilgePumpCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BilgePumpCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BilgePumpCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BilgePumpCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BilgePumpCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BilgePumpCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BilgePumpCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BilgePumpCommandType*
            BilgePumpCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BilgePumpCommandType*
            BilgePumpCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpCommandType*
            BilgePumpCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePluginSupport_copy_data(
                BilgePumpCommandType *out,
                const BilgePumpCommandType *in);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_destroy_data_w_params(
                BilgePumpCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_destroy_data_ex(
                BilgePumpCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_destroy_data(
                BilgePumpCommandType *sample);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_print_data(
                const BilgePumpCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BilgePumpCommandType*
            BilgePumpCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpCommandType*
            BilgePumpCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_destroy_key_ex(
                BilgePumpCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePluginSupport_destroy_key(
                BilgePumpCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BilgePumpCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BilgePumpCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BilgePumpCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BilgePumpCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandType *out,
                const BilgePumpCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BilgePumpCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BilgePumpCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BilgePumpCommandTypePlugin_deserialize_from_cdr_buffer(
                BilgePumpCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BilgePumpCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandTypeKeyHolder *key, 
                const BilgePumpCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandType *instance, 
                const BilgePumpCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BilgePumpCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BilgePumpCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BilgePumpControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BilgePumpCommandTypePlugin_806136968_h */

