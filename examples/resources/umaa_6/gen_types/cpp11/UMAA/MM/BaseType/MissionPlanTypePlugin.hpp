

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanTypePlugin_1407961942_h
#define MissionPlanTypePlugin_1407961942_h

#include "MissionPlanType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/StateTriggerTypePlugin.hpp"
#include "UMAA/MM/BaseType/TaskPlanTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define MissionPlanTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanType*
            MissionPlanTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanType*
            MissionPlanTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanType*
            MissionPlanTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypePluginSupport_copy_data(
                MissionPlanType *out,
                const MissionPlanType *in);

            NDDSUSERDllExport extern void 
            MissionPlanTypePluginSupport_destroy_data_w_params(
                MissionPlanType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanTypePluginSupport_destroy_data_ex(
                MissionPlanType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTypePluginSupport_destroy_data(
                MissionPlanType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanTypePluginSupport_print_data(
                const MissionPlanType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanType *out,
                const MissionPlanType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanTypeTaskPlansSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanTypeTaskPlansSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanTypeTaskPlansSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanTypeTaskPlansSetElement.
            */
            typedef class MissionPlanTypeTaskPlansSetElement MissionPlanTypeTaskPlansSetElementKeyHolder;

            #define MissionPlanTypeTaskPlansSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanTypeTaskPlansSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanTypeTaskPlansSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanTypeTaskPlansSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanTypeTaskPlansSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanTypeTaskPlansSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanTypeTaskPlansSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanTypeTaskPlansSetElement*
            MissionPlanTypeTaskPlansSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanTypeTaskPlansSetElement*
            MissionPlanTypeTaskPlansSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTypeTaskPlansSetElement*
            MissionPlanTypeTaskPlansSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPluginSupport_copy_data(
                MissionPlanTypeTaskPlansSetElement *out,
                const MissionPlanTypeTaskPlansSetElement *in);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_destroy_data_w_params(
                MissionPlanTypeTaskPlansSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_destroy_data_ex(
                MissionPlanTypeTaskPlansSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_destroy_data(
                MissionPlanTypeTaskPlansSetElement *sample);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_print_data(
                const MissionPlanTypeTaskPlansSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanTypeTaskPlansSetElement*
            MissionPlanTypeTaskPlansSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTypeTaskPlansSetElement*
            MissionPlanTypeTaskPlansSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_destroy_key_ex(
                MissionPlanTypeTaskPlansSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPluginSupport_destroy_key(
                MissionPlanTypeTaskPlansSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanTypeTaskPlansSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanTypeTaskPlansSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanTypeTaskPlansSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanTypeTaskPlansSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElement *out,
                const MissionPlanTypeTaskPlansSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanTypeTaskPlansSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanTypeTaskPlansSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanTypeTaskPlansSetElementPlugin_deserialize_from_cdr_buffer(
                MissionPlanTypeTaskPlansSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypeTaskPlansSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanTypeTaskPlansSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypeTaskPlansSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTypeTaskPlansSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElementKeyHolder *key, 
                const MissionPlanTypeTaskPlansSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTypeTaskPlansSetElement *instance, 
                const MissionPlanTypeTaskPlansSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTypeTaskPlansSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanTypeTaskPlansSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanTypeTaskPlansSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanTypePlugin_1407961942_h */

