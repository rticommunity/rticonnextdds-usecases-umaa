

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanTaskAddCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanTaskAddCommandStatusTypePlugin_1226657645_h
#define MissionPlanTaskAddCommandStatusTypePlugin_1226657645_h

#include "MissionPlanTaskAddCommandStatusType.hpp"

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
        namespace MissionPlanTaskControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanTaskAddCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanTaskAddCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanTaskAddCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanTaskAddCommandStatusType.
            */
            typedef class MissionPlanTaskAddCommandStatusType MissionPlanTaskAddCommandStatusTypeKeyHolder;

            #define MissionPlanTaskAddCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanTaskAddCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanTaskAddCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanTaskAddCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanTaskAddCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanTaskAddCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanTaskAddCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanTaskAddCommandStatusType*
            MissionPlanTaskAddCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandStatusType*
            MissionPlanTaskAddCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandStatusType*
            MissionPlanTaskAddCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePluginSupport_copy_data(
                MissionPlanTaskAddCommandStatusType *out,
                const MissionPlanTaskAddCommandStatusType *in);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_destroy_data_w_params(
                MissionPlanTaskAddCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_destroy_data_ex(
                MissionPlanTaskAddCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_destroy_data(
                MissionPlanTaskAddCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_print_data(
                const MissionPlanTaskAddCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandStatusType*
            MissionPlanTaskAddCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandStatusType*
            MissionPlanTaskAddCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_destroy_key_ex(
                MissionPlanTaskAddCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePluginSupport_destroy_key(
                MissionPlanTaskAddCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanTaskAddCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanTaskAddCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanTaskAddCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusType *out,
                const MissionPlanTaskAddCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskAddCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanTaskAddCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskAddCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanTaskAddCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanTaskAddCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusTypeKeyHolder *key, 
                const MissionPlanTaskAddCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandStatusType *instance, 
                const MissionPlanTaskAddCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanTaskAddCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanTaskAddCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanTaskControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanTaskAddCommandStatusTypePlugin_1226657645_h */

