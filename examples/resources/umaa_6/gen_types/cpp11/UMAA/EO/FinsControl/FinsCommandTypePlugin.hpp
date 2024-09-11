

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinsCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinsCommandTypePlugin_1247802172_h
#define FinsCommandTypePlugin_1247802172_h

#include "FinsCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/FinsControl/FinCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinsCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinsCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinsCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinsCommandType.
            */
            typedef class FinsCommandType FinsCommandTypeKeyHolder;

            #define FinsCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinsCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinsCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinsCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinsCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinsCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinsCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinsCommandType*
            FinsCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinsCommandType*
            FinsCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinsCommandType*
            FinsCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePluginSupport_copy_data(
                FinsCommandType *out,
                const FinsCommandType *in);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_destroy_data_w_params(
                FinsCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_destroy_data_ex(
                FinsCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_destroy_data(
                FinsCommandType *sample);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_print_data(
                const FinsCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinsCommandType*
            FinsCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinsCommandType*
            FinsCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_destroy_key_ex(
                FinsCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinsCommandTypePluginSupport_destroy_key(
                FinsCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinsCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinsCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinsCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinsCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinsCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandType *out,
                const FinsCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinsCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinsCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinsCommandTypePlugin_deserialize_from_cdr_buffer(
                FinsCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinsCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinsCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinsCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinsCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandTypeKeyHolder *key, 
                const FinsCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinsCommandType *instance, 
                const FinsCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinsCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinsCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinsCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinsControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinsCommandTypePlugin_1247802172_h */

