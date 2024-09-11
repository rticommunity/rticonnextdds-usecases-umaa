

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorsCommandTypePlugin_1465996216_h
#define PropulsorsCommandTypePlugin_1465996216_h

#include "PropulsorsCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/PropulsorsControl/PropulsorCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorsCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorsCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorsCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorsCommandType.
            */
            typedef class PropulsorsCommandType PropulsorsCommandTypeKeyHolder;

            #define PropulsorsCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorsCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorsCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorsCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorsCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorsCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorsCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorsCommandType*
            PropulsorsCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorsCommandType*
            PropulsorsCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandType*
            PropulsorsCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePluginSupport_copy_data(
                PropulsorsCommandType *out,
                const PropulsorsCommandType *in);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_destroy_data_w_params(
                PropulsorsCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_destroy_data_ex(
                PropulsorsCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_destroy_data(
                PropulsorsCommandType *sample);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_print_data(
                const PropulsorsCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorsCommandType*
            PropulsorsCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandType*
            PropulsorsCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_destroy_key_ex(
                PropulsorsCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePluginSupport_destroy_key(
                PropulsorsCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorsCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorsCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorsCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorsCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandType *out,
                const PropulsorsCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorsCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandTypePlugin_deserialize_from_cdr_buffer(
                PropulsorsCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorsCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandTypeKeyHolder *key, 
                const PropulsorsCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandType *instance, 
                const PropulsorsCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorsCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorsCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorsControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorsCommandTypePlugin_1465996216_h */

