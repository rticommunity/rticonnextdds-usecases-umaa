

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HoverObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HoverObjectiveTypePlugin_211750287_h
#define HoverObjectiveTypePlugin_211750287_h

#include "HoverObjectiveType.hpp"

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
#include "UMAA/Common/Orientation/DirectionRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
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
            * By default, this type is struct HoverObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HoverObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HoverObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HoverObjectiveType.
            */
            typedef class HoverObjectiveType HoverObjectiveTypeKeyHolder;

            #define HoverObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HoverObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HoverObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HoverObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HoverObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HoverObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HoverObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HoverObjectiveType*
            HoverObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HoverObjectiveType*
            HoverObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HoverObjectiveType*
            HoverObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePluginSupport_copy_data(
                HoverObjectiveType *out,
                const HoverObjectiveType *in);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_destroy_data_w_params(
                HoverObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_destroy_data_ex(
                HoverObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_destroy_data(
                HoverObjectiveType *sample);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_print_data(
                const HoverObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HoverObjectiveType*
            HoverObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HoverObjectiveType*
            HoverObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_destroy_key_ex(
                HoverObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePluginSupport_destroy_key(
                HoverObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HoverObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HoverObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HoverObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HoverObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveType *out,
                const HoverObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HoverObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HoverObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HoverObjectiveTypePlugin_deserialize_from_cdr_buffer(
                HoverObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HoverObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveTypeKeyHolder *key, 
                const HoverObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveType *instance, 
                const HoverObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HoverObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HoverObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HoverObjectiveTypePlugin_211750287_h */

