

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveAssignmentCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveAssignmentCommandAckReportTypePlugin_236516100_h
#define ObjectiveAssignmentCommandAckReportTypePlugin_236516100_h

#include "ObjectiveAssignmentCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/ObjectiveAssignmentControl/ObjectiveAssignmentCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ObjectiveAssignmentControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveAssignmentCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveAssignmentCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveAssignmentCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveAssignmentCommandAckReportType.
            */
            typedef class ObjectiveAssignmentCommandAckReportType ObjectiveAssignmentCommandAckReportTypeKeyHolder;

            #define ObjectiveAssignmentCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveAssignmentCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveAssignmentCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveAssignmentCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveAssignmentCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveAssignmentCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveAssignmentCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveAssignmentCommandAckReportType*
            ObjectiveAssignmentCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveAssignmentCommandAckReportType*
            ObjectiveAssignmentCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveAssignmentCommandAckReportType*
            ObjectiveAssignmentCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_copy_data(
                ObjectiveAssignmentCommandAckReportType *out,
                const ObjectiveAssignmentCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_destroy_data_w_params(
                ObjectiveAssignmentCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_destroy_data_ex(
                ObjectiveAssignmentCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_destroy_data(
                ObjectiveAssignmentCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_print_data(
                const ObjectiveAssignmentCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveAssignmentCommandAckReportType*
            ObjectiveAssignmentCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveAssignmentCommandAckReportType*
            ObjectiveAssignmentCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_destroy_key_ex(
                ObjectiveAssignmentCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePluginSupport_destroy_key(
                ObjectiveAssignmentCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveAssignmentCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveAssignmentCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveAssignmentCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveAssignmentCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportType *out,
                const ObjectiveAssignmentCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveAssignmentCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveAssignmentCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveAssignmentCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveAssignmentCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveAssignmentCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveAssignmentCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportTypeKeyHolder *key, 
                const ObjectiveAssignmentCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveAssignmentCommandAckReportType *instance, 
                const ObjectiveAssignmentCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveAssignmentCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveAssignmentCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveAssignmentCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveAssignmentControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveAssignmentCommandAckReportTypePlugin_236516100_h */

