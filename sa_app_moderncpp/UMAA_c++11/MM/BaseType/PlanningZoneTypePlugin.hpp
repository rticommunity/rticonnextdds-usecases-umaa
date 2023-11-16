

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlanningZoneType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlanningZoneTypePlugin_1408384440_h
#define PlanningZoneTypePlugin_1408384440_h

#include "PlanningZoneType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Polygon_VolumePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
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

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PlanningZoneType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PlanningZoneType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PlanningZoneType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PlanningZoneType.
            */
            typedef class PlanningZoneType PlanningZoneTypeKeyHolder;

            #define PlanningZoneTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PlanningZoneTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PlanningZoneTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PlanningZoneTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PlanningZoneTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PlanningZoneTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PlanningZoneTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PlanningZoneType*
            PlanningZoneTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PlanningZoneType*
            PlanningZoneTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlanningZoneType*
            PlanningZoneTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePluginSupport_copy_data(
                PlanningZoneType *out,
                const PlanningZoneType *in);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_destroy_data_w_params(
                PlanningZoneType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_destroy_data_ex(
                PlanningZoneType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_destroy_data(
                PlanningZoneType *sample);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_print_data(
                const PlanningZoneType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PlanningZoneType*
            PlanningZoneTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PlanningZoneType*
            PlanningZoneTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_destroy_key_ex(
                PlanningZoneTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePluginSupport_destroy_key(
                PlanningZoneTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PlanningZoneTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PlanningZoneTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PlanningZoneTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PlanningZoneTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneType *out,
                const PlanningZoneType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PlanningZoneTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PlanningZoneType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PlanningZoneTypePlugin_deserialize_from_cdr_buffer(
                PlanningZoneType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PlanningZoneTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PlanningZoneTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PlanningZoneTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PlanningZoneTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneTypeKeyHolder *key, 
                const PlanningZoneType *instance);

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PlanningZoneType *instance, 
                const PlanningZoneTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PlanningZoneTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PlanningZoneTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PlanningZoneTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PlanningZoneTypePlugin_1408384440_h */

