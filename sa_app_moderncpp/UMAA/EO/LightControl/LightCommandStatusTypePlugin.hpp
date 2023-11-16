

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightCommandStatusTypePlugin_1555011253_h
#define LightCommandStatusTypePlugin_1555011253_h

#include "LightCommandStatusType.hpp"

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
        namespace LightControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LightCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LightCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LightCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LightCommandStatusType.
            */
            typedef  class LightCommandStatusType LightCommandStatusTypeKeyHolder;

            #define LightCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LightCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LightCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LightCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LightCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LightCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LightCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LightCommandStatusType*
            LightCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LightCommandStatusType*
            LightCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LightCommandStatusType*
            LightCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePluginSupport_copy_data(
                LightCommandStatusType *out,
                const LightCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_destroy_data_w_params(
                LightCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_destroy_data_ex(
                LightCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_destroy_data(
                LightCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_print_data(
                const LightCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LightCommandStatusType*
            LightCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LightCommandStatusType*
            LightCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_destroy_key_ex(
                LightCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePluginSupport_destroy_key(
                LightCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LightCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LightCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LightCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LightCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusType *out,
                const LightCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LightCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LightCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LightCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LightCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LightCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LightCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LightCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LightCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusTypeKeyHolder *key, 
                const LightCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LightCommandStatusType *instance, 
                const LightCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LightCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LightCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LightCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LightControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LightCommandStatusTypePlugin_1555011253_h */

