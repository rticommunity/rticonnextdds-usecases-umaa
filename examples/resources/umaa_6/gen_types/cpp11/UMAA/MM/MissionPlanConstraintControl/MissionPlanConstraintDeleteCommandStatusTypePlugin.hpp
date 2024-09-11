

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanConstraintDeleteCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanConstraintDeleteCommandStatusTypePlugin_1249823802_h
#define MissionPlanConstraintDeleteCommandStatusTypePlugin_1249823802_h

#include "MissionPlanConstraintDeleteCommandStatusType.hpp"

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
        namespace MissionPlanConstraintControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanConstraintDeleteCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanConstraintDeleteCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanConstraintDeleteCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanConstraintDeleteCommandStatusType.
            */
            typedef class MissionPlanConstraintDeleteCommandStatusType MissionPlanConstraintDeleteCommandStatusTypeKeyHolder;

            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanConstraintDeleteCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanConstraintDeleteCommandStatusType*
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanConstraintDeleteCommandStatusType*
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanConstraintDeleteCommandStatusType*
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_copy_data(
                MissionPlanConstraintDeleteCommandStatusType *out,
                const MissionPlanConstraintDeleteCommandStatusType *in);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_destroy_data_w_params(
                MissionPlanConstraintDeleteCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_destroy_data_ex(
                MissionPlanConstraintDeleteCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_destroy_data(
                MissionPlanConstraintDeleteCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_print_data(
                const MissionPlanConstraintDeleteCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanConstraintDeleteCommandStatusType*
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanConstraintDeleteCommandStatusType*
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_destroy_key_ex(
                MissionPlanConstraintDeleteCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePluginSupport_destroy_key(
                MissionPlanConstraintDeleteCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanConstraintDeleteCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusType *out,
                const MissionPlanConstraintDeleteCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanConstraintDeleteCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanConstraintDeleteCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanConstraintDeleteCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanConstraintDeleteCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusTypeKeyHolder *key, 
                const MissionPlanConstraintDeleteCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintDeleteCommandStatusType *instance, 
                const MissionPlanConstraintDeleteCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintDeleteCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanConstraintDeleteCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanConstraintDeleteCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanConstraintControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanConstraintDeleteCommandStatusTypePlugin_1249823802_h */

