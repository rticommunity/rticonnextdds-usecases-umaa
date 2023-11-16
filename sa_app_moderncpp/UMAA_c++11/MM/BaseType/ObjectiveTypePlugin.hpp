

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveTypePlugin_1323830816_h
#define ObjectiveTypePlugin_1323830816_h

#include "ObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/DateTime_TolerancePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/BaseType/ChargingObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/CommsLinkObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/ContingencyObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/DeploymentObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/LoiterObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/PassiveLoiterObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/ProductDisseminateFileObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/ProductExploitationObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/RecoveryObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/RouteObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/StationkeepObjectiveTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {
            namespace ObjectiveType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ObjectiveType_SelectorsPluginSupport_print_data(
                    const ObjectiveType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define ObjectiveType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define ObjectiveType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define ObjectiveType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define ObjectiveType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define ObjectiveType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern ObjectiveType_Union*
                ObjectiveType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern ObjectiveType_Union*
                ObjectiveType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern ObjectiveType_Union*
                ObjectiveType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                ObjectiveType_UnionPluginSupport_copy_data(
                    ObjectiveType_Union *out,
                    const ObjectiveType_Union *in);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPluginSupport_destroy_data_w_params(
                    ObjectiveType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPluginSupport_destroy_data_ex(
                    ObjectiveType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPluginSupport_destroy_data(
                    ObjectiveType_Union *sample);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPluginSupport_print_data(
                    const ObjectiveType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                ObjectiveType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                ObjectiveType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                ObjectiveType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                ObjectiveType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ObjectiveType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                ObjectiveType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ObjectiveType_Union *out,
                    const ObjectiveType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                ObjectiveType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const ObjectiveType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                ObjectiveType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    ObjectiveType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                ObjectiveType_UnionPlugin_deserialize_from_cdr_buffer(
                    ObjectiveType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                ObjectiveType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                ObjectiveType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    ObjectiveType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                ObjectiveType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                ObjectiveType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace ObjectiveType_Specializations  */

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveType.
            */
            typedef class ObjectiveType ObjectiveTypeKeyHolder;

            #define ObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveType*
            ObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveType*
            ObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveType*
            ObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePluginSupport_copy_data(
                ObjectiveType *out,
                const ObjectiveType *in);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_destroy_data_w_params(
                ObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_destroy_data_ex(
                ObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_destroy_data(
                ObjectiveType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_print_data(
                const ObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveType*
            ObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveType*
            ObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_destroy_key_ex(
                ObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveTypePluginSupport_destroy_key(
                ObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveType *out,
                const ObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveTypeKeyHolder *key, 
                const ObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveType *instance, 
                const ObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveTypePlugin_1323830816_h */

