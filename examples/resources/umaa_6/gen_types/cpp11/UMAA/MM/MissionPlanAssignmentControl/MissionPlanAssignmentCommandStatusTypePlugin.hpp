

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanAssignmentCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanAssignmentCommandStatusTypePlugin_1838096229_h
#define MissionPlanAssignmentCommandStatusTypePlugin_1838096229_h

#include "MissionPlanAssignmentCommandStatusType.hpp"

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
        namespace MissionPlanAssignmentControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanAssignmentCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanAssignmentCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanAssignmentCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanAssignmentCommandStatusType.
            */
            typedef class MissionPlanAssignmentCommandStatusType MissionPlanAssignmentCommandStatusTypeKeyHolder;

            #define MissionPlanAssignmentCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanAssignmentCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanAssignmentCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanAssignmentCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanAssignmentCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanAssignmentCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanAssignmentCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanAssignmentCommandStatusType*
            MissionPlanAssignmentCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanAssignmentCommandStatusType*
            MissionPlanAssignmentCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanAssignmentCommandStatusType*
            MissionPlanAssignmentCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePluginSupport_copy_data(
                MissionPlanAssignmentCommandStatusType *out,
                const MissionPlanAssignmentCommandStatusType *in);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_destroy_data_w_params(
                MissionPlanAssignmentCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_destroy_data_ex(
                MissionPlanAssignmentCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_destroy_data(
                MissionPlanAssignmentCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_print_data(
                const MissionPlanAssignmentCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanAssignmentCommandStatusType*
            MissionPlanAssignmentCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanAssignmentCommandStatusType*
            MissionPlanAssignmentCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_destroy_key_ex(
                MissionPlanAssignmentCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePluginSupport_destroy_key(
                MissionPlanAssignmentCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanAssignmentCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanAssignmentCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanAssignmentCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanAssignmentCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusType *out,
                const MissionPlanAssignmentCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanAssignmentCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanAssignmentCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanAssignmentCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanAssignmentCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanAssignmentCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanAssignmentCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanAssignmentCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanAssignmentCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusTypeKeyHolder *key, 
                const MissionPlanAssignmentCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanAssignmentCommandStatusType *instance, 
                const MissionPlanAssignmentCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanAssignmentCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanAssignmentCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanAssignmentCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanAssignmentControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanAssignmentCommandStatusTypePlugin_1838096229_h */

