

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RacetrackObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RacetrackObjectiveTypePlugin_1109209021_h
#define RacetrackObjectiveTypePlugin_1109209021_h

#include "RacetrackObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Distance/DistanceRequirementTypePlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/DirectionVariantTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Speed/SpeedRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/SpeedVariantTypePlugin.hpp"
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
            * By default, this type is struct RacetrackObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RacetrackObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RacetrackObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RacetrackObjectiveType.
            */
            typedef class RacetrackObjectiveType RacetrackObjectiveTypeKeyHolder;

            #define RacetrackObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RacetrackObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RacetrackObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RacetrackObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RacetrackObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RacetrackObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RacetrackObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RacetrackObjectiveType*
            RacetrackObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RacetrackObjectiveType*
            RacetrackObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RacetrackObjectiveType*
            RacetrackObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePluginSupport_copy_data(
                RacetrackObjectiveType *out,
                const RacetrackObjectiveType *in);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_destroy_data_w_params(
                RacetrackObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_destroy_data_ex(
                RacetrackObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_destroy_data(
                RacetrackObjectiveType *sample);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_print_data(
                const RacetrackObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RacetrackObjectiveType*
            RacetrackObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RacetrackObjectiveType*
            RacetrackObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_destroy_key_ex(
                RacetrackObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePluginSupport_destroy_key(
                RacetrackObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RacetrackObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RacetrackObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RacetrackObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveType *out,
                const RacetrackObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RacetrackObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RacetrackObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RacetrackObjectiveTypePlugin_deserialize_from_cdr_buffer(
                RacetrackObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RacetrackObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveTypeKeyHolder *key, 
                const RacetrackObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveType *instance, 
                const RacetrackObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RacetrackObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RacetrackObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RacetrackObjectiveTypePlugin_1109209021_h */

