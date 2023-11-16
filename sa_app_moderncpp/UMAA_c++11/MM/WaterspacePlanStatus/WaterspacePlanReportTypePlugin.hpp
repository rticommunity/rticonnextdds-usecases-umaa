

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspacePlanReportTypePlugin_774014636_h
#define WaterspacePlanReportTypePlugin_774014636_h

#include "WaterspacePlanReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/BaseType/PlanningZoneTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace WaterspacePlanStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterspacePlanReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterspacePlanReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterspacePlanReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterspacePlanReportType.
            */
            typedef class WaterspacePlanReportType WaterspacePlanReportTypeKeyHolder;

            #define WaterspacePlanReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterspacePlanReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterspacePlanReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterspacePlanReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterspacePlanReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterspacePlanReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterspacePlanReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterspacePlanReportType*
            WaterspacePlanReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterspacePlanReportType*
            WaterspacePlanReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspacePlanReportType*
            WaterspacePlanReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePluginSupport_copy_data(
                WaterspacePlanReportType *out,
                const WaterspacePlanReportType *in);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_destroy_data_w_params(
                WaterspacePlanReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_destroy_data_ex(
                WaterspacePlanReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_destroy_data(
                WaterspacePlanReportType *sample);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_print_data(
                const WaterspacePlanReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterspacePlanReportType*
            WaterspacePlanReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspacePlanReportType*
            WaterspacePlanReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_destroy_key_ex(
                WaterspacePlanReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePluginSupport_destroy_key(
                WaterspacePlanReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterspacePlanReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterspacePlanReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterspacePlanReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterspacePlanReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportType *out,
                const WaterspacePlanReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterspacePlanReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterspacePlanReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterspacePlanReportTypePlugin_deserialize_from_cdr_buffer(
                WaterspacePlanReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterspacePlanReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportTypeKeyHolder *key, 
                const WaterspacePlanReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanReportType *instance, 
                const WaterspacePlanReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterspacePlanReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterspacePlanReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WaterspacePlanStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterspacePlanReportTypePlugin_774014636_h */

