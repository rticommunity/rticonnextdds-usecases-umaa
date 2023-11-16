

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandTypePlugin_2004822265_h
#define GongControlCommandTypePlugin_2004822265_h

#include "GongControlCommandType.hpp"

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
        namespace GongControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GongControlCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GongControlCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GongControlCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GongControlCommandType.
            */
            typedef class GongControlCommandType GongControlCommandTypeKeyHolder;

            #define GongControlCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GongControlCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GongControlCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GongControlCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GongControlCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GongControlCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GongControlCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GongControlCommandType*
            GongControlCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GongControlCommandType*
            GongControlCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandType*
            GongControlCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePluginSupport_copy_data(
                GongControlCommandType *out,
                const GongControlCommandType *in);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_destroy_data_w_params(
                GongControlCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_destroy_data_ex(
                GongControlCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_destroy_data(
                GongControlCommandType *sample);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_print_data(
                const GongControlCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GongControlCommandType*
            GongControlCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandType*
            GongControlCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_destroy_key_ex(
                GongControlCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePluginSupport_destroy_key(
                GongControlCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GongControlCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GongControlCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GongControlCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GongControlCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandType *out,
                const GongControlCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GongControlCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GongControlCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GongControlCommandTypePlugin_deserialize_from_cdr_buffer(
                GongControlCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GongControlCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandTypeKeyHolder *key, 
                const GongControlCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandType *instance, 
                const GongControlCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GongControlCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GongControlCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GongControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GongControlCommandTypePlugin_2004822265_h */

