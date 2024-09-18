

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalDeleteCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalDeleteCommandStatusTypePlugin_461509722_h
#define ConditionalDeleteCommandStatusTypePlugin_461509722_h

#include "ConditionalDeleteCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ConditionalControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalDeleteCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalDeleteCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalDeleteCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalDeleteCommandStatusType.
            */
            typedef class ConditionalDeleteCommandStatusType ConditionalDeleteCommandStatusTypeKeyHolder;

            #define ConditionalDeleteCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalDeleteCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalDeleteCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalDeleteCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalDeleteCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalDeleteCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalDeleteCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalDeleteCommandStatusType*
            ConditionalDeleteCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalDeleteCommandStatusType*
            ConditionalDeleteCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalDeleteCommandStatusType*
            ConditionalDeleteCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePluginSupport_copy_data(
                ConditionalDeleteCommandStatusType *out,
                const ConditionalDeleteCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_destroy_data_w_params(
                ConditionalDeleteCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_destroy_data_ex(
                ConditionalDeleteCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_destroy_data(
                ConditionalDeleteCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_print_data(
                const ConditionalDeleteCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalDeleteCommandStatusType*
            ConditionalDeleteCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalDeleteCommandStatusType*
            ConditionalDeleteCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_destroy_key_ex(
                ConditionalDeleteCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePluginSupport_destroy_key(
                ConditionalDeleteCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalDeleteCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalDeleteCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalDeleteCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusType *out,
                const ConditionalDeleteCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalDeleteCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalDeleteCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalDeleteCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ConditionalDeleteCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalDeleteCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusTypeKeyHolder *key, 
                const ConditionalDeleteCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandStatusType *instance, 
                const ConditionalDeleteCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalDeleteCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalDeleteCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ConditionalControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConditionalDeleteCommandStatusTypePlugin_461509722_h */
