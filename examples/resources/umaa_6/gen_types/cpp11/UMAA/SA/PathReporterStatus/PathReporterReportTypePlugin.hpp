

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterReportTypePlugin_588385953_h
#define PathReporterReportTypePlugin_588385953_h

#include "PathReporterReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeListMetadataPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/WaypointTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace PathReporterStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PathReporterReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PathReporterReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PathReporterReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PathReporterReportType.
            */
            typedef class PathReporterReportType PathReporterReportTypeKeyHolder;

            #define PathReporterReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PathReporterReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PathReporterReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterReportType*
            PathReporterReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterReportType*
            PathReporterReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportType*
            PathReporterReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePluginSupport_copy_data(
                PathReporterReportType *out,
                const PathReporterReportType *in);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_destroy_data_w_params(
                PathReporterReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_destroy_data_ex(
                PathReporterReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_destroy_data(
                PathReporterReportType *sample);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_print_data(
                const PathReporterReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PathReporterReportType*
            PathReporterReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportType*
            PathReporterReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_destroy_key_ex(
                PathReporterReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePluginSupport_destroy_key(
                PathReporterReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PathReporterReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PathReporterReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PathReporterReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType *out,
                const PathReporterReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlugin_deserialize_from_cdr_buffer(
                PathReporterReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeKeyHolder *key, 
                const PathReporterReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportType *instance, 
                const PathReporterReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PathReporterReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PathReporterReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PathReporterReportTypeHistoricalGlobalPathsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PathReporterReportTypeHistoricalGlobalPathsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PathReporterReportTypeHistoricalGlobalPathsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PathReporterReportTypeHistoricalGlobalPathsListElement.
            */
            typedef class PathReporterReportTypeHistoricalGlobalPathsListElement PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder;

            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalGlobalPathsListElement*
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalGlobalPathsListElement*
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalGlobalPathsListElement*
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypeHistoricalGlobalPathsListElement *out,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *in);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data_w_params(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data_ex(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_print_data(
                const PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalGlobalPathsListElement*
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalGlobalPathsListElement*
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_key_ex(
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement *out,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypeHistoricalGlobalPathsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *key, 
                const PathReporterReportTypeHistoricalGlobalPathsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalGlobalPathsListElement *instance, 
                const PathReporterReportTypeHistoricalGlobalPathsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            PathReporterReportTypeHistoricalGlobalPathsListElementPlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PathReporterReportTypeHistoricalLocalPathsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PathReporterReportTypeHistoricalLocalPathsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PathReporterReportTypeHistoricalLocalPathsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PathReporterReportTypeHistoricalLocalPathsListElement.
            */
            typedef class PathReporterReportTypeHistoricalLocalPathsListElement PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder;

            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterReportTypeHistoricalLocalPathsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalLocalPathsListElement*
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalLocalPathsListElement*
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalLocalPathsListElement*
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypeHistoricalLocalPathsListElement *out,
                const PathReporterReportTypeHistoricalLocalPathsListElement *in);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data_w_params(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data_ex(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_print_data(
                const PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalLocalPathsListElement*
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypeHistoricalLocalPathsListElement*
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_key_ex(
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement *out,
                const PathReporterReportTypeHistoricalLocalPathsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypeHistoricalLocalPathsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *key, 
                const PathReporterReportTypeHistoricalLocalPathsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypeHistoricalLocalPathsListElement *instance, 
                const PathReporterReportTypeHistoricalLocalPathsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            PathReporterReportTypeHistoricalLocalPathsListElementPlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PathReporterReportTypePlannedGlobalPathsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PathReporterReportTypePlannedGlobalPathsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PathReporterReportTypePlannedGlobalPathsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PathReporterReportTypePlannedGlobalPathsListElement.
            */
            typedef class PathReporterReportTypePlannedGlobalPathsListElement PathReporterReportTypePlannedGlobalPathsListElementKeyHolder;

            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterReportTypePlannedGlobalPathsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterReportTypePlannedGlobalPathsListElement*
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterReportTypePlannedGlobalPathsListElement*
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypePlannedGlobalPathsListElement*
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypePlannedGlobalPathsListElement *out,
                const PathReporterReportTypePlannedGlobalPathsListElement *in);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data_w_params(
                PathReporterReportTypePlannedGlobalPathsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data_ex(
                PathReporterReportTypePlannedGlobalPathsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypePlannedGlobalPathsListElement *sample);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_print_data(
                const PathReporterReportTypePlannedGlobalPathsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PathReporterReportTypePlannedGlobalPathsListElement*
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypePlannedGlobalPathsListElement*
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_key_ex(
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement *out,
                const PathReporterReportTypePlannedGlobalPathsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypePlannedGlobalPathsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypePlannedGlobalPathsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *key, 
                const PathReporterReportTypePlannedGlobalPathsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedGlobalPathsListElement *instance, 
                const PathReporterReportTypePlannedGlobalPathsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            PathReporterReportTypePlannedGlobalPathsListElementPlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PathReporterReportTypePlannedLocalPathsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PathReporterReportTypePlannedLocalPathsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PathReporterReportTypePlannedLocalPathsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PathReporterReportTypePlannedLocalPathsListElement.
            */
            typedef class PathReporterReportTypePlannedLocalPathsListElement PathReporterReportTypePlannedLocalPathsListElementKeyHolder;

            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterReportTypePlannedLocalPathsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterReportTypePlannedLocalPathsListElement*
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterReportTypePlannedLocalPathsListElement*
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypePlannedLocalPathsListElement*
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_copy_data(
                PathReporterReportTypePlannedLocalPathsListElement *out,
                const PathReporterReportTypePlannedLocalPathsListElement *in);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data_w_params(
                PathReporterReportTypePlannedLocalPathsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data_ex(
                PathReporterReportTypePlannedLocalPathsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_data(
                PathReporterReportTypePlannedLocalPathsListElement *sample);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_print_data(
                const PathReporterReportTypePlannedLocalPathsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PathReporterReportTypePlannedLocalPathsListElement*
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterReportTypePlannedLocalPathsListElement*
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_key_ex(
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPluginSupport_destroy_key(
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PathReporterReportTypePlannedLocalPathsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement *out,
                const PathReporterReportTypePlannedLocalPathsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlannedLocalPathsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterReportTypePlannedLocalPathsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_from_cdr_buffer(
                PathReporterReportTypePlannedLocalPathsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElementKeyHolder *key, 
                const PathReporterReportTypePlannedLocalPathsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterReportTypePlannedLocalPathsListElement *instance, 
                const PathReporterReportTypePlannedLocalPathsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PathReporterReportTypePlannedLocalPathsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PathReporterReportTypePlannedLocalPathsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            PathReporterReportTypePlannedLocalPathsListElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace PathReporterStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PathReporterReportTypePlugin_588385953_h */

