

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanConstraintAddCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanConstraintAddCommandTypePlugin_1341094622_h
#define MissionPlanConstraintAddCommandTypePlugin_1341094622_h

#include "MissionPlanConstraintAddCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/Constraint/ConstraintTypePlugin.hpp"

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
            * By default, this type is struct MissionPlanConstraintAddCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanConstraintAddCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanConstraintAddCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanConstraintAddCommandType.
            */
            typedef class MissionPlanConstraintAddCommandType MissionPlanConstraintAddCommandTypeKeyHolder;

            #define MissionPlanConstraintAddCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanConstraintAddCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanConstraintAddCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanConstraintAddCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanConstraintAddCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanConstraintAddCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanConstraintAddCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanConstraintAddCommandType*
            MissionPlanConstraintAddCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanConstraintAddCommandType*
            MissionPlanConstraintAddCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanConstraintAddCommandType*
            MissionPlanConstraintAddCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePluginSupport_copy_data(
                MissionPlanConstraintAddCommandType *out,
                const MissionPlanConstraintAddCommandType *in);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_destroy_data_w_params(
                MissionPlanConstraintAddCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_destroy_data_ex(
                MissionPlanConstraintAddCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_destroy_data(
                MissionPlanConstraintAddCommandType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_print_data(
                const MissionPlanConstraintAddCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanConstraintAddCommandType*
            MissionPlanConstraintAddCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanConstraintAddCommandType*
            MissionPlanConstraintAddCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_destroy_key_ex(
                MissionPlanConstraintAddCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePluginSupport_destroy_key(
                MissionPlanConstraintAddCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanConstraintAddCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanConstraintAddCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanConstraintAddCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanConstraintAddCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandType *out,
                const MissionPlanConstraintAddCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanConstraintAddCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanConstraintAddCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanConstraintAddCommandTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanConstraintAddCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintAddCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanConstraintAddCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintAddCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanConstraintAddCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandTypeKeyHolder *key, 
                const MissionPlanConstraintAddCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanConstraintAddCommandType *instance, 
                const MissionPlanConstraintAddCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanConstraintAddCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanConstraintAddCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanConstraintAddCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanConstraintControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanConstraintAddCommandTypePlugin_1341094622_h */

