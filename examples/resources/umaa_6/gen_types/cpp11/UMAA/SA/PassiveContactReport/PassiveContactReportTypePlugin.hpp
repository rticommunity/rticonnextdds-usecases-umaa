

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveContactReportTypePlugin_1272703042_h
#define PassiveContactReportTypePlugin_1272703042_h

#include "PassiveContactReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/Environment/PoseTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SA/PassiveContactReport/PassiveContactTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace PassiveContactReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PassiveContactReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PassiveContactReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PassiveContactReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PassiveContactReportType.
            */
            typedef class PassiveContactReportType PassiveContactReportTypeKeyHolder;

            #define PassiveContactReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PassiveContactReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PassiveContactReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PassiveContactReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PassiveContactReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PassiveContactReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PassiveContactReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PassiveContactReportType*
            PassiveContactReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PassiveContactReportType*
            PassiveContactReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PassiveContactReportType*
            PassiveContactReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePluginSupport_copy_data(
                PassiveContactReportType *out,
                const PassiveContactReportType *in);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_destroy_data_w_params(
                PassiveContactReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_destroy_data_ex(
                PassiveContactReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_destroy_data(
                PassiveContactReportType *sample);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_print_data(
                const PassiveContactReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PassiveContactReportType*
            PassiveContactReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PassiveContactReportType*
            PassiveContactReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_destroy_key_ex(
                PassiveContactReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePluginSupport_destroy_key(
                PassiveContactReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PassiveContactReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PassiveContactReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PassiveContactReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportType *out,
                const PassiveContactReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PassiveContactReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PassiveContactReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PassiveContactReportTypePlugin_deserialize_from_cdr_buffer(
                PassiveContactReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PassiveContactReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeKeyHolder *key, 
                const PassiveContactReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportType *instance, 
                const PassiveContactReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PassiveContactReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PassiveContactReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PassiveContactReportTypeContactsSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PassiveContactReportTypeContactsSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PassiveContactReportTypeContactsSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PassiveContactReportTypeContactsSetElement.
            */
            typedef class PassiveContactReportTypeContactsSetElement PassiveContactReportTypeContactsSetElementKeyHolder;

            #define PassiveContactReportTypeContactsSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PassiveContactReportTypeContactsSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PassiveContactReportTypeContactsSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PassiveContactReportTypeContactsSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PassiveContactReportTypeContactsSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PassiveContactReportTypeContactsSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PassiveContactReportTypeContactsSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PassiveContactReportTypeContactsSetElement*
            PassiveContactReportTypeContactsSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PassiveContactReportTypeContactsSetElement*
            PassiveContactReportTypeContactsSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PassiveContactReportTypeContactsSetElement*
            PassiveContactReportTypeContactsSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPluginSupport_copy_data(
                PassiveContactReportTypeContactsSetElement *out,
                const PassiveContactReportTypeContactsSetElement *in);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_destroy_data_w_params(
                PassiveContactReportTypeContactsSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_destroy_data_ex(
                PassiveContactReportTypeContactsSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_destroy_data(
                PassiveContactReportTypeContactsSetElement *sample);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_print_data(
                const PassiveContactReportTypeContactsSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PassiveContactReportTypeContactsSetElement*
            PassiveContactReportTypeContactsSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PassiveContactReportTypeContactsSetElement*
            PassiveContactReportTypeContactsSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_destroy_key_ex(
                PassiveContactReportTypeContactsSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPluginSupport_destroy_key(
                PassiveContactReportTypeContactsSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PassiveContactReportTypeContactsSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PassiveContactReportTypeContactsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PassiveContactReportTypeContactsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PassiveContactReportTypeContactsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElement *out,
                const PassiveContactReportTypeContactsSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PassiveContactReportTypeContactsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PassiveContactReportTypeContactsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PassiveContactReportTypeContactsSetElementPlugin_deserialize_from_cdr_buffer(
                PassiveContactReportTypeContactsSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypeContactsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PassiveContactReportTypeContactsSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypeContactsSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactReportTypeContactsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElementKeyHolder *key, 
                const PassiveContactReportTypeContactsSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactReportTypeContactsSetElement *instance, 
                const PassiveContactReportTypeContactsSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactReportTypeContactsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PassiveContactReportTypeContactsSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            PassiveContactReportTypeContactsSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace PassiveContactReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PassiveContactReportTypePlugin_1272703042_h */

