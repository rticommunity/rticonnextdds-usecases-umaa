

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RudderCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RudderCommandStatusTypePlugin_696276892_h
#define RudderCommandStatusTypePlugin_696276892_h

#include "RudderCommandStatusType.hpp"

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
        namespace RudderControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RudderCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RudderCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RudderCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RudderCommandStatusType.
            */
            typedef  class RudderCommandStatusType RudderCommandStatusTypeKeyHolder;

            #define RudderCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RudderCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RudderCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RudderCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RudderCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RudderCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RudderCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RudderCommandStatusType*
            RudderCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RudderCommandStatusType*
            RudderCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderCommandStatusType*
            RudderCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePluginSupport_copy_data(
                RudderCommandStatusType *out,
                const RudderCommandStatusType *in);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_destroy_data_w_params(
                RudderCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_destroy_data_ex(
                RudderCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_destroy_data(
                RudderCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_print_data(
                const RudderCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RudderCommandStatusType*
            RudderCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderCommandStatusType*
            RudderCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_destroy_key_ex(
                RudderCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePluginSupport_destroy_key(
                RudderCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RudderCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RudderCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RudderCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RudderCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusType *out,
                const RudderCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RudderCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RudderCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RudderCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                RudderCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RudderCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RudderCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RudderCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RudderCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusTypeKeyHolder *key, 
                const RudderCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RudderCommandStatusType *instance, 
                const RudderCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RudderCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RudderCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RudderCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RudderControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RudderCommandStatusTypePlugin_696276892_h */

