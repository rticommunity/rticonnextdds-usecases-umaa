

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RecoveryObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RecoveryObjectiveTypePlugin_933869106_h
#define RecoveryObjectiveTypePlugin_933869106_h

#include "RecoveryObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Position/GeoPosition2DRequirementPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
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
            * By default, this type is struct RecoveryObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RecoveryObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RecoveryObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RecoveryObjectiveType.
            */
            typedef class RecoveryObjectiveType RecoveryObjectiveTypeKeyHolder;

            #define RecoveryObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RecoveryObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RecoveryObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RecoveryObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RecoveryObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RecoveryObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RecoveryObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RecoveryObjectiveType*
            RecoveryObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RecoveryObjectiveType*
            RecoveryObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RecoveryObjectiveType*
            RecoveryObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePluginSupport_copy_data(
                RecoveryObjectiveType *out,
                const RecoveryObjectiveType *in);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_destroy_data_w_params(
                RecoveryObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_destroy_data_ex(
                RecoveryObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_destroy_data(
                RecoveryObjectiveType *sample);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_print_data(
                const RecoveryObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RecoveryObjectiveType*
            RecoveryObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RecoveryObjectiveType*
            RecoveryObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_destroy_key_ex(
                RecoveryObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePluginSupport_destroy_key(
                RecoveryObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RecoveryObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RecoveryObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RecoveryObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RecoveryObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveType *out,
                const RecoveryObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RecoveryObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RecoveryObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RecoveryObjectiveTypePlugin_deserialize_from_cdr_buffer(
                RecoveryObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RecoveryObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RecoveryObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RecoveryObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RecoveryObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveTypeKeyHolder *key, 
                const RecoveryObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RecoveryObjectiveType *instance, 
                const RecoveryObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RecoveryObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RecoveryObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RecoveryObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RecoveryObjectiveTypePlugin_933869106_h */

