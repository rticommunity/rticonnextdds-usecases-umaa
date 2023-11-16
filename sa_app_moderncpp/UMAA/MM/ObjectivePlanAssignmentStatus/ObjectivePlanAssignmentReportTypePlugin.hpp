

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectivePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectivePlanAssignmentReportTypePlugin_1700869516_h
#define ObjectivePlanAssignmentReportTypePlugin_1700869516_h

#include "ObjectivePlanAssignmentReportType.hpp"

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
        namespace ObjectivePlanAssignmentStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectivePlanAssignmentReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectivePlanAssignmentReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectivePlanAssignmentReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectivePlanAssignmentReportType.
            */
            typedef  class ObjectivePlanAssignmentReportType ObjectivePlanAssignmentReportTypeKeyHolder;

            #define ObjectivePlanAssignmentReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectivePlanAssignmentReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectivePlanAssignmentReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectivePlanAssignmentReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectivePlanAssignmentReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectivePlanAssignmentReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectivePlanAssignmentReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectivePlanAssignmentReportType*
            ObjectivePlanAssignmentReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectivePlanAssignmentReportType*
            ObjectivePlanAssignmentReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectivePlanAssignmentReportType*
            ObjectivePlanAssignmentReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePluginSupport_copy_data(
                ObjectivePlanAssignmentReportType *out,
                const ObjectivePlanAssignmentReportType *in);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_destroy_data_w_params(
                ObjectivePlanAssignmentReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_destroy_data_ex(
                ObjectivePlanAssignmentReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_destroy_data(
                ObjectivePlanAssignmentReportType *sample);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_print_data(
                const ObjectivePlanAssignmentReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectivePlanAssignmentReportType*
            ObjectivePlanAssignmentReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectivePlanAssignmentReportType*
            ObjectivePlanAssignmentReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_destroy_key_ex(
                ObjectivePlanAssignmentReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePluginSupport_destroy_key(
                ObjectivePlanAssignmentReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectivePlanAssignmentReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectivePlanAssignmentReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectivePlanAssignmentReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectivePlanAssignmentReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportType *out,
                const ObjectivePlanAssignmentReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectivePlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectivePlanAssignmentReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectivePlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                ObjectivePlanAssignmentReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectivePlanAssignmentReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectivePlanAssignmentReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectivePlanAssignmentReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectivePlanAssignmentReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportTypeKeyHolder *key, 
                const ObjectivePlanAssignmentReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectivePlanAssignmentReportType *instance, 
                const ObjectivePlanAssignmentReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectivePlanAssignmentReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectivePlanAssignmentReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectivePlanAssignmentReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectivePlanAssignmentStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectivePlanAssignmentReportTypePlugin_1700869516_h */

