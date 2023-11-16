

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspacePlanAssignmentReportTypePlugin_1559617949_h
#define WaterspacePlanAssignmentReportTypePlugin_1559617949_h

#include "WaterspacePlanAssignmentReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace WaterspacePlanAssignmentStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterspacePlanAssignmentReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterspacePlanAssignmentReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterspacePlanAssignmentReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterspacePlanAssignmentReportType.
            */
            typedef class WaterspacePlanAssignmentReportType WaterspacePlanAssignmentReportTypeKeyHolder;

            #define WaterspacePlanAssignmentReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterspacePlanAssignmentReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterspacePlanAssignmentReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterspacePlanAssignmentReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterspacePlanAssignmentReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterspacePlanAssignmentReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterspacePlanAssignmentReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterspacePlanAssignmentReportType*
            WaterspacePlanAssignmentReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterspacePlanAssignmentReportType*
            WaterspacePlanAssignmentReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspacePlanAssignmentReportType*
            WaterspacePlanAssignmentReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePluginSupport_copy_data(
                WaterspacePlanAssignmentReportType *out,
                const WaterspacePlanAssignmentReportType *in);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_destroy_data_w_params(
                WaterspacePlanAssignmentReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_destroy_data_ex(
                WaterspacePlanAssignmentReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_destroy_data(
                WaterspacePlanAssignmentReportType *sample);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_print_data(
                const WaterspacePlanAssignmentReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterspacePlanAssignmentReportType*
            WaterspacePlanAssignmentReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspacePlanAssignmentReportType*
            WaterspacePlanAssignmentReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_destroy_key_ex(
                WaterspacePlanAssignmentReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePluginSupport_destroy_key(
                WaterspacePlanAssignmentReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterspacePlanAssignmentReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterspacePlanAssignmentReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterspacePlanAssignmentReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterspacePlanAssignmentReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportType *out,
                const WaterspacePlanAssignmentReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterspacePlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterspacePlanAssignmentReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterspacePlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                WaterspacePlanAssignmentReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanAssignmentReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterspacePlanAssignmentReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanAssignmentReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterspacePlanAssignmentReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportTypeKeyHolder *key, 
                const WaterspacePlanAssignmentReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterspacePlanAssignmentReportType *instance, 
                const WaterspacePlanAssignmentReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterspacePlanAssignmentReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterspacePlanAssignmentReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterspacePlanAssignmentReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WaterspacePlanAssignmentStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterspacePlanAssignmentReportTypePlugin_1559617949_h */

