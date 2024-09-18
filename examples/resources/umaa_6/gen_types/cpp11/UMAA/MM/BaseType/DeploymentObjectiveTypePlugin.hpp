

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeploymentObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DeploymentObjectiveTypePlugin_1526296806_h
#define DeploymentObjectiveTypePlugin_1526296806_h

#include "DeploymentObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/DirectionRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Position/GeoPosition2DRequirementPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Speed/SpeedRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/StateTriggerTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DeploymentObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DeploymentObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DeploymentObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DeploymentObjectiveType.
            */
            typedef class DeploymentObjectiveType DeploymentObjectiveTypeKeyHolder;

            #define DeploymentObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DeploymentObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DeploymentObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DeploymentObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DeploymentObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DeploymentObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DeploymentObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DeploymentObjectiveType*
            DeploymentObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DeploymentObjectiveType*
            DeploymentObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DeploymentObjectiveType*
            DeploymentObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePluginSupport_copy_data(
                DeploymentObjectiveType *out,
                const DeploymentObjectiveType *in);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_destroy_data_w_params(
                DeploymentObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_destroy_data_ex(
                DeploymentObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_destroy_data(
                DeploymentObjectiveType *sample);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_print_data(
                const DeploymentObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DeploymentObjectiveType*
            DeploymentObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DeploymentObjectiveType*
            DeploymentObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_destroy_key_ex(
                DeploymentObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePluginSupport_destroy_key(
                DeploymentObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DeploymentObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DeploymentObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DeploymentObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DeploymentObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveType *out,
                const DeploymentObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DeploymentObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DeploymentObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DeploymentObjectiveTypePlugin_deserialize_from_cdr_buffer(
                DeploymentObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DeploymentObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DeploymentObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DeploymentObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DeploymentObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveTypeKeyHolder *key, 
                const DeploymentObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DeploymentObjectiveType *instance, 
                const DeploymentObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DeploymentObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DeploymentObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DeploymentObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DeploymentObjectiveTypePlugin_1526296806_h */
