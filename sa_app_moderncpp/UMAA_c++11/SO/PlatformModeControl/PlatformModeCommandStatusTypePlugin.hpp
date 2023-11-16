

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeCommandStatusTypePlugin_1455169261_h
#define PlatformModeCommandStatusTypePlugin_1455169261_h

#include "PlatformModeCommandStatusType.hpp"

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
    namespace SO {
        namespace PlatformModeControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PlatformModeCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PlatformModeCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PlatformModeCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PlatformModeCommandStatusType.
            */
            typedef class PlatformModeCommandStatusType PlatformModeCommandStatusTypeKeyHolder;

            #define PlatformModeCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PlatformModeCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PlatformModeCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PlatformModeCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PlatformModeCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PlatformModeCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PlatformModeCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PlatformModeCommandStatusType*
            PlatformModeCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PlatformModeCommandStatusType*
            PlatformModeCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlatformModeCommandStatusType*
            PlatformModeCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePluginSupport_copy_data(
                PlatformModeCommandStatusType *out,
                const PlatformModeCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_destroy_data_w_params(
                PlatformModeCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_destroy_data_ex(
                PlatformModeCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_destroy_data(
                PlatformModeCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_print_data(
                const PlatformModeCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PlatformModeCommandStatusType*
            PlatformModeCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlatformModeCommandStatusType*
            PlatformModeCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_destroy_key_ex(
                PlatformModeCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePluginSupport_destroy_key(
                PlatformModeCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PlatformModeCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PlatformModeCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PlatformModeCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PlatformModeCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusType *out,
                const PlatformModeCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PlatformModeCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PlatformModeCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PlatformModeCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PlatformModeCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PlatformModeCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PlatformModeCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PlatformModeCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PlatformModeCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusTypeKeyHolder *key, 
                const PlatformModeCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PlatformModeCommandStatusType *instance, 
                const PlatformModeCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PlatformModeCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PlatformModeCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PlatformModeCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PlatformModeControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PlatformModeCommandStatusTypePlugin_1455169261_h */

