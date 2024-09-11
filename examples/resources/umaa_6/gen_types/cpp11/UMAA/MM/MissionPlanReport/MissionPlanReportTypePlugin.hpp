

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanReportTypePlugin_1757477173_h
#define MissionPlanReportTypePlugin_1757477173_h

#include "MissionPlanReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/MissionPlanTypePlugin.hpp"
#include "UMAA/MM/Constraint/ConstraintTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionPlanReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanReportType.
            */
            typedef class MissionPlanReportType MissionPlanReportTypeKeyHolder;

            #define MissionPlanReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanReportType*
            MissionPlanReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanReportType*
            MissionPlanReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportType*
            MissionPlanReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePluginSupport_copy_data(
                MissionPlanReportType *out,
                const MissionPlanReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_destroy_data_w_params(
                MissionPlanReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_destroy_data_ex(
                MissionPlanReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_destroy_data(
                MissionPlanReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_print_data(
                const MissionPlanReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanReportType*
            MissionPlanReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportType*
            MissionPlanReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_destroy_key_ex(
                MissionPlanReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePluginSupport_destroy_key(
                MissionPlanReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportType *out,
                const MissionPlanReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeKeyHolder *key, 
                const MissionPlanReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportType *instance, 
                const MissionPlanReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanReportTypeConstraintsSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanReportTypeConstraintsSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanReportTypeConstraintsSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanReportTypeConstraintsSetElement.
            */
            typedef class MissionPlanReportTypeConstraintsSetElement MissionPlanReportTypeConstraintsSetElementKeyHolder;

            #define MissionPlanReportTypeConstraintsSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanReportTypeConstraintsSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanReportTypeConstraintsSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanReportTypeConstraintsSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanReportTypeConstraintsSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanReportTypeConstraintsSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanReportTypeConstraintsSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanReportTypeConstraintsSetElement*
            MissionPlanReportTypeConstraintsSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanReportTypeConstraintsSetElement*
            MissionPlanReportTypeConstraintsSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportTypeConstraintsSetElement*
            MissionPlanReportTypeConstraintsSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_copy_data(
                MissionPlanReportTypeConstraintsSetElement *out,
                const MissionPlanReportTypeConstraintsSetElement *in);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_destroy_data_w_params(
                MissionPlanReportTypeConstraintsSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_destroy_data_ex(
                MissionPlanReportTypeConstraintsSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_destroy_data(
                MissionPlanReportTypeConstraintsSetElement *sample);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_print_data(
                const MissionPlanReportTypeConstraintsSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanReportTypeConstraintsSetElement*
            MissionPlanReportTypeConstraintsSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportTypeConstraintsSetElement*
            MissionPlanReportTypeConstraintsSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_destroy_key_ex(
                MissionPlanReportTypeConstraintsSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPluginSupport_destroy_key(
                MissionPlanReportTypeConstraintsSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanReportTypeConstraintsSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanReportTypeConstraintsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeConstraintsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanReportTypeConstraintsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElement *out,
                const MissionPlanReportTypeConstraintsSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypeConstraintsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanReportTypeConstraintsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypeConstraintsSetElementPlugin_deserialize_from_cdr_buffer(
                MissionPlanReportTypeConstraintsSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeConstraintsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanReportTypeConstraintsSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeConstraintsSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeConstraintsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElementKeyHolder *key, 
                const MissionPlanReportTypeConstraintsSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeConstraintsSetElement *instance, 
                const MissionPlanReportTypeConstraintsSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeConstraintsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanReportTypeConstraintsSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanReportTypeConstraintsSetElementPlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanReportTypeMissionPlanSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanReportTypeMissionPlanSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanReportTypeMissionPlanSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanReportTypeMissionPlanSetElement.
            */
            typedef class MissionPlanReportTypeMissionPlanSetElement MissionPlanReportTypeMissionPlanSetElementKeyHolder;

            #define MissionPlanReportTypeMissionPlanSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanReportTypeMissionPlanSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanReportTypeMissionPlanSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanReportTypeMissionPlanSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanReportTypeMissionPlanSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanReportTypeMissionPlanSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanReportTypeMissionPlanSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanReportTypeMissionPlanSetElement*
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanReportTypeMissionPlanSetElement*
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportTypeMissionPlanSetElement*
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_copy_data(
                MissionPlanReportTypeMissionPlanSetElement *out,
                const MissionPlanReportTypeMissionPlanSetElement *in);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_destroy_data_w_params(
                MissionPlanReportTypeMissionPlanSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_destroy_data_ex(
                MissionPlanReportTypeMissionPlanSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_destroy_data(
                MissionPlanReportTypeMissionPlanSetElement *sample);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_print_data(
                const MissionPlanReportTypeMissionPlanSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanReportTypeMissionPlanSetElement*
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanReportTypeMissionPlanSetElement*
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_destroy_key_ex(
                MissionPlanReportTypeMissionPlanSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPluginSupport_destroy_key(
                MissionPlanReportTypeMissionPlanSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanReportTypeMissionPlanSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanReportTypeMissionPlanSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanReportTypeMissionPlanSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanReportTypeMissionPlanSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElement *out,
                const MissionPlanReportTypeMissionPlanSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypeMissionPlanSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanReportTypeMissionPlanSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanReportTypeMissionPlanSetElementPlugin_deserialize_from_cdr_buffer(
                MissionPlanReportTypeMissionPlanSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeMissionPlanSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanReportTypeMissionPlanSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeMissionPlanSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanReportTypeMissionPlanSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElementKeyHolder *key, 
                const MissionPlanReportTypeMissionPlanSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanReportTypeMissionPlanSetElement *instance, 
                const MissionPlanReportTypeMissionPlanSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanReportTypeMissionPlanSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanReportTypeMissionPlanSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanReportTypeMissionPlanSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanReport  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanReportTypePlugin_1757477173_h */

