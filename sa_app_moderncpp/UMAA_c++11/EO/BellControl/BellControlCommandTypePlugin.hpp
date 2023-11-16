

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BellControlCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BellControlCommandTypePlugin_1085122367_h
#define BellControlCommandTypePlugin_1085122367_h

#include "BellControlCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Propulsion/BlastPropertiesTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BellControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BellControlCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BellControlCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BellControlCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BellControlCommandType.
            */
            typedef class BellControlCommandType BellControlCommandTypeKeyHolder;

            #define BellControlCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BellControlCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BellControlCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BellControlCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BellControlCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BellControlCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BellControlCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BellControlCommandType*
            BellControlCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BellControlCommandType*
            BellControlCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlCommandType*
            BellControlCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePluginSupport_copy_data(
                BellControlCommandType *out,
                const BellControlCommandType *in);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_destroy_data_w_params(
                BellControlCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_destroy_data_ex(
                BellControlCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_destroy_data(
                BellControlCommandType *sample);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_print_data(
                const BellControlCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BellControlCommandType*
            BellControlCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlCommandType*
            BellControlCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_destroy_key_ex(
                BellControlCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePluginSupport_destroy_key(
                BellControlCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BellControlCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BellControlCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BellControlCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BellControlCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandType *out,
                const BellControlCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BellControlCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BellControlCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BellControlCommandTypePlugin_deserialize_from_cdr_buffer(
                BellControlCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BellControlCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandTypeKeyHolder *key, 
                const BellControlCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandType *instance, 
                const BellControlCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BellControlCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BellControlCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BellControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BellControlCommandTypePlugin_1085122367_h */

