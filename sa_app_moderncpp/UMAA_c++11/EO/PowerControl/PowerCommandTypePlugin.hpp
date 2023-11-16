

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PowerCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PowerCommandTypePlugin_1515439281_h
#define PowerCommandTypePlugin_1515439281_h

#include "PowerCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PowerControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PowerCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PowerCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PowerCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PowerCommandType.
            */
            typedef class PowerCommandType PowerCommandTypeKeyHolder;

            #define PowerCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PowerCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PowerCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PowerCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PowerCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PowerCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PowerCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PowerCommandType*
            PowerCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PowerCommandType*
            PowerCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerCommandType*
            PowerCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePluginSupport_copy_data(
                PowerCommandType *out,
                const PowerCommandType *in);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_destroy_data_w_params(
                PowerCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_destroy_data_ex(
                PowerCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_destroy_data(
                PowerCommandType *sample);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_print_data(
                const PowerCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PowerCommandType*
            PowerCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerCommandType*
            PowerCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_destroy_key_ex(
                PowerCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerCommandTypePluginSupport_destroy_key(
                PowerCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PowerCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PowerCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PowerCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PowerCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PowerCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandType *out,
                const PowerCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PowerCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PowerCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PowerCommandTypePlugin_deserialize_from_cdr_buffer(
                PowerCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PowerCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PowerCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PowerCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PowerCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandTypeKeyHolder *key, 
                const PowerCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PowerCommandType *instance, 
                const PowerCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PowerCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PowerCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PowerCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PowerControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PowerCommandTypePlugin_1515439281_h */

