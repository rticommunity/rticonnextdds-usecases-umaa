

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineCommandStatusTypePlugin_536687262_h
#define EngineCommandStatusTypePlugin_536687262_h

#include "EngineCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace EngineControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EngineCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EngineCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EngineCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EngineCommandStatusType.
            */
            typedef class EngineCommandStatusType EngineCommandStatusTypeKeyHolder;

            #define EngineCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EngineCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EngineCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineCommandStatusType*
            EngineCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineCommandStatusType*
            EngineCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandStatusType*
            EngineCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePluginSupport_copy_data(
                EngineCommandStatusType *out,
                const EngineCommandStatusType *in);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_destroy_data_w_params(
                EngineCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_destroy_data_ex(
                EngineCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_destroy_data(
                EngineCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_print_data(
                const EngineCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EngineCommandStatusType*
            EngineCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandStatusType*
            EngineCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_destroy_key_ex(
                EngineCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePluginSupport_destroy_key(
                EngineCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusType *out,
                const EngineCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                EngineCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusTypeKeyHolder *key, 
                const EngineCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandStatusType *instance, 
                const EngineCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EngineCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EngineControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineCommandStatusTypePlugin_536687262_h */

