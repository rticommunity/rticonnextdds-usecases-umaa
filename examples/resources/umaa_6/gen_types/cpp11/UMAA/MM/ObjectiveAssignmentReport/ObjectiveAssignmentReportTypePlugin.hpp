

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveAssignmentReportTypePlugin_1467914844_h
#define ObjectiveAssignmentReportTypePlugin_1467914844_h

#include "ObjectiveAssignmentReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ObjectiveAssignmentReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveAssignmentReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveAssignmentReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveAssignmentReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveAssignmentReportType.
            */
            typedef class ObjectiveAssignmentReportType ObjectiveAssignmentReportTypeKeyHolder;

            #define ObjectiveAssignmentReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveAssignmentReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveAssignmentReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveAssignmentReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveAssignmentReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveAssignmentReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveAssignmentReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveAssignmentReportType*
            ObjectiveAssignmentReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveAssignmentReportType*
            ObjectiveAssignmentReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveAssignmentReportType*
            ObjectiveAssignmentReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePluginSupport_copy_data(
                ObjectiveAssignmentReportType *out,
                const ObjectiveAssignmentReportType *in);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_destroy_data_w_params(
                ObjectiveAssignmentReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_destroy_data_ex(
                ObjectiveAssignmentReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_destroy_data(
                ObjectiveAssignmentReportType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_print_data(
                const ObjectiveAssignmentReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveAssignmentReportType*
            ObjectiveAssignmentReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveAssignmentReportType*
            ObjectiveAssignmentReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_destroy_key_ex(
                ObjectiveAssignmentReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePluginSupport_destroy_key(
                ObjectiveAssignmentReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveAssignmentReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveAssignmentReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveAssignmentReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportType *out,
                const ObjectiveAssignmentReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveAssignmentReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveAssignmentReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveAssignmentReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportTypeKeyHolder *key, 
                const ObjectiveAssignmentReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentReportType *instance, 
                const ObjectiveAssignmentReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveAssignmentReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveAssignmentReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveAssignmentReport  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveAssignmentReportTypePlugin_1467914844_h */

