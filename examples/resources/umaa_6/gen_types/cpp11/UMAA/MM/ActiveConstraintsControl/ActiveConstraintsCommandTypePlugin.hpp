

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ActiveConstraintsCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ActiveConstraintsCommandTypePlugin_1776981339_h
#define ActiveConstraintsCommandTypePlugin_1776981339_h

#include "ActiveConstraintsCommandType.hpp"

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
    namespace MM {
        namespace ActiveConstraintsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ActiveConstraintsCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ActiveConstraintsCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ActiveConstraintsCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ActiveConstraintsCommandType.
            */
            typedef class ActiveConstraintsCommandType ActiveConstraintsCommandTypeKeyHolder;

            #define ActiveConstraintsCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ActiveConstraintsCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ActiveConstraintsCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ActiveConstraintsCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ActiveConstraintsCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ActiveConstraintsCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ActiveConstraintsCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ActiveConstraintsCommandType*
            ActiveConstraintsCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ActiveConstraintsCommandType*
            ActiveConstraintsCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ActiveConstraintsCommandType*
            ActiveConstraintsCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePluginSupport_copy_data(
                ActiveConstraintsCommandType *out,
                const ActiveConstraintsCommandType *in);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_destroy_data_w_params(
                ActiveConstraintsCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_destroy_data_ex(
                ActiveConstraintsCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_destroy_data(
                ActiveConstraintsCommandType *sample);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_print_data(
                const ActiveConstraintsCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ActiveConstraintsCommandType*
            ActiveConstraintsCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ActiveConstraintsCommandType*
            ActiveConstraintsCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_destroy_key_ex(
                ActiveConstraintsCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePluginSupport_destroy_key(
                ActiveConstraintsCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ActiveConstraintsCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ActiveConstraintsCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ActiveConstraintsCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandType *out,
                const ActiveConstraintsCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ActiveConstraintsCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ActiveConstraintsCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ActiveConstraintsCommandTypePlugin_deserialize_from_cdr_buffer(
                ActiveConstraintsCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ActiveConstraintsCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandTypeKeyHolder *key, 
                const ActiveConstraintsCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandType *instance, 
                const ActiveConstraintsCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ActiveConstraintsCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ActiveConstraintsCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ActiveConstraintsControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ActiveConstraintsCommandTypePlugin_1776981339_h */

