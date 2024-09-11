

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Figure8ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Figure8ObjectiveTypePlugin_778661166_h
#define Figure8ObjectiveTypePlugin_778661166_h

#include "Figure8ObjectiveType.hpp"

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
            * By default, this type is struct Figure8ObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct Figure8ObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * Figure8ObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct Figure8ObjectiveType.
            */
            typedef class Figure8ObjectiveType Figure8ObjectiveTypeKeyHolder;

            #define Figure8ObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Figure8ObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Figure8ObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Figure8ObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define Figure8ObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define Figure8ObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Figure8ObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Figure8ObjectiveType*
            Figure8ObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Figure8ObjectiveType*
            Figure8ObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Figure8ObjectiveType*
            Figure8ObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePluginSupport_copy_data(
                Figure8ObjectiveType *out,
                const Figure8ObjectiveType *in);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_destroy_data_w_params(
                Figure8ObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_destroy_data_ex(
                Figure8ObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_destroy_data(
                Figure8ObjectiveType *sample);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_print_data(
                const Figure8ObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern Figure8ObjectiveType*
            Figure8ObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Figure8ObjectiveType*
            Figure8ObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_destroy_key_ex(
                Figure8ObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePluginSupport_destroy_key(
                Figure8ObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Figure8ObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Figure8ObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Figure8ObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveType *out,
                const Figure8ObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Figure8ObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Figure8ObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Figure8ObjectiveTypePlugin_deserialize_from_cdr_buffer(
                Figure8ObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Figure8ObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveTypeKeyHolder *key, 
                const Figure8ObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveType *instance, 
                const Figure8ObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Figure8ObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            Figure8ObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Figure8ObjectiveTypePlugin_778661166_h */

