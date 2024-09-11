

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalReportTypePlugin_1035213321_h
#define ConditionalReportTypePlugin_1035213321_h

#include "ConditionalReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/Conditional/ConditionalTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ConditionalReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalReportType.
            */
            typedef class ConditionalReportType ConditionalReportTypeKeyHolder;

            #define ConditionalReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalReportType*
            ConditionalReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalReportType*
            ConditionalReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalReportType*
            ConditionalReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePluginSupport_copy_data(
                ConditionalReportType *out,
                const ConditionalReportType *in);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_destroy_data_w_params(
                ConditionalReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_destroy_data_ex(
                ConditionalReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_destroy_data(
                ConditionalReportType *sample);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_print_data(
                const ConditionalReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalReportType*
            ConditionalReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalReportType*
            ConditionalReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_destroy_key_ex(
                ConditionalReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePluginSupport_destroy_key(
                ConditionalReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportType *out,
                const ConditionalReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalReportTypePlugin_deserialize_from_cdr_buffer(
                ConditionalReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeKeyHolder *key, 
                const ConditionalReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportType *instance, 
                const ConditionalReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalReportTypeConditionalsSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalReportTypeConditionalsSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalReportTypeConditionalsSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalReportTypeConditionalsSetElement.
            */
            typedef class ConditionalReportTypeConditionalsSetElement ConditionalReportTypeConditionalsSetElementKeyHolder;

            #define ConditionalReportTypeConditionalsSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalReportTypeConditionalsSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalReportTypeConditionalsSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalReportTypeConditionalsSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalReportTypeConditionalsSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalReportTypeConditionalsSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalReportTypeConditionalsSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalReportTypeConditionalsSetElement*
            ConditionalReportTypeConditionalsSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalReportTypeConditionalsSetElement*
            ConditionalReportTypeConditionalsSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalReportTypeConditionalsSetElement*
            ConditionalReportTypeConditionalsSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPluginSupport_copy_data(
                ConditionalReportTypeConditionalsSetElement *out,
                const ConditionalReportTypeConditionalsSetElement *in);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_destroy_data_w_params(
                ConditionalReportTypeConditionalsSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_destroy_data_ex(
                ConditionalReportTypeConditionalsSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_destroy_data(
                ConditionalReportTypeConditionalsSetElement *sample);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_print_data(
                const ConditionalReportTypeConditionalsSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalReportTypeConditionalsSetElement*
            ConditionalReportTypeConditionalsSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalReportTypeConditionalsSetElement*
            ConditionalReportTypeConditionalsSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_destroy_key_ex(
                ConditionalReportTypeConditionalsSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPluginSupport_destroy_key(
                ConditionalReportTypeConditionalsSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalReportTypeConditionalsSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalReportTypeConditionalsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalReportTypeConditionalsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalReportTypeConditionalsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElement *out,
                const ConditionalReportTypeConditionalsSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalReportTypeConditionalsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalReportTypeConditionalsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalReportTypeConditionalsSetElementPlugin_deserialize_from_cdr_buffer(
                ConditionalReportTypeConditionalsSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypeConditionalsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalReportTypeConditionalsSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypeConditionalsSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalReportTypeConditionalsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElementKeyHolder *key, 
                const ConditionalReportTypeConditionalsSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalReportTypeConditionalsSetElement *instance, 
                const ConditionalReportTypeConditionalsSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalReportTypeConditionalsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalReportTypeConditionalsSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalReportTypeConditionalsSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace ConditionalReport  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConditionalReportTypePlugin_1035213321_h */

