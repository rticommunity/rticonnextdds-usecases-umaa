

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SituationalSignalCommandTypePlugin_749721745_h
#define SituationalSignalCommandTypePlugin_749721745_h

#include "SituationalSignalCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace SituationalSignalControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SituationalSignalCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SituationalSignalCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SituationalSignalCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SituationalSignalCommandType.
            */
            typedef  class SituationalSignalCommandType SituationalSignalCommandTypeKeyHolder;

            #define SituationalSignalCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SituationalSignalCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SituationalSignalCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SituationalSignalCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SituationalSignalCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SituationalSignalCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SituationalSignalCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SituationalSignalCommandType*
            SituationalSignalCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SituationalSignalCommandType*
            SituationalSignalCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SituationalSignalCommandType*
            SituationalSignalCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePluginSupport_copy_data(
                SituationalSignalCommandType *out,
                const SituationalSignalCommandType *in);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_destroy_data_w_params(
                SituationalSignalCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_destroy_data_ex(
                SituationalSignalCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_destroy_data(
                SituationalSignalCommandType *sample);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_print_data(
                const SituationalSignalCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SituationalSignalCommandType*
            SituationalSignalCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SituationalSignalCommandType*
            SituationalSignalCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_destroy_key_ex(
                SituationalSignalCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePluginSupport_destroy_key(
                SituationalSignalCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SituationalSignalCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SituationalSignalCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SituationalSignalCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandType *out,
                const SituationalSignalCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SituationalSignalCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SituationalSignalCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SituationalSignalCommandTypePlugin_deserialize_from_cdr_buffer(
                SituationalSignalCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SituationalSignalCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandTypeKeyHolder *key, 
                const SituationalSignalCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandType *instance, 
                const SituationalSignalCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SituationalSignalCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SituationalSignalCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SituationalSignalControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SituationalSignalCommandTypePlugin_749721745_h */

