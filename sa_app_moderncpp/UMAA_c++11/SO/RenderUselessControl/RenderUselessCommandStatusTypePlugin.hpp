

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RenderUselessCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RenderUselessCommandStatusTypePlugin_1479300433_h
#define RenderUselessCommandStatusTypePlugin_1479300433_h

#include "RenderUselessCommandStatusType.hpp"

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
        namespace RenderUselessControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RenderUselessCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RenderUselessCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RenderUselessCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RenderUselessCommandStatusType.
            */
            typedef class RenderUselessCommandStatusType RenderUselessCommandStatusTypeKeyHolder;

            #define RenderUselessCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RenderUselessCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RenderUselessCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RenderUselessCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RenderUselessCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RenderUselessCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RenderUselessCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RenderUselessCommandStatusType*
            RenderUselessCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RenderUselessCommandStatusType*
            RenderUselessCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RenderUselessCommandStatusType*
            RenderUselessCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePluginSupport_copy_data(
                RenderUselessCommandStatusType *out,
                const RenderUselessCommandStatusType *in);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_destroy_data_w_params(
                RenderUselessCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_destroy_data_ex(
                RenderUselessCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_destroy_data(
                RenderUselessCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_print_data(
                const RenderUselessCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RenderUselessCommandStatusType*
            RenderUselessCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RenderUselessCommandStatusType*
            RenderUselessCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_destroy_key_ex(
                RenderUselessCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePluginSupport_destroy_key(
                RenderUselessCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RenderUselessCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RenderUselessCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RenderUselessCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RenderUselessCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusType *out,
                const RenderUselessCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RenderUselessCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RenderUselessCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RenderUselessCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                RenderUselessCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RenderUselessCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RenderUselessCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusTypeKeyHolder *key, 
                const RenderUselessCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RenderUselessCommandStatusType *instance, 
                const RenderUselessCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RenderUselessCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RenderUselessCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RenderUselessCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RenderUselessControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RenderUselessCommandStatusTypePlugin_1479300433_h */

