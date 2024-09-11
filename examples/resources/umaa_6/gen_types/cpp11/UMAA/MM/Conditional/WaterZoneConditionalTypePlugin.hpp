

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterZoneConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterZoneConditionalTypePlugin_528298905_h
#define WaterZoneConditionalTypePlugin_528298905_h

#include "WaterZoneConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/BaseType/ShapeVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace Conditional {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterZoneConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterZoneConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterZoneConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterZoneConditionalType.
            */
            typedef class WaterZoneConditionalType WaterZoneConditionalTypeKeyHolder;

            #define WaterZoneConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterZoneConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterZoneConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterZoneConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterZoneConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterZoneConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterZoneConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterZoneConditionalType*
            WaterZoneConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterZoneConditionalType*
            WaterZoneConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterZoneConditionalType*
            WaterZoneConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePluginSupport_copy_data(
                WaterZoneConditionalType *out,
                const WaterZoneConditionalType *in);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_destroy_data_w_params(
                WaterZoneConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_destroy_data_ex(
                WaterZoneConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_destroy_data(
                WaterZoneConditionalType *sample);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_print_data(
                const WaterZoneConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterZoneConditionalType*
            WaterZoneConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterZoneConditionalType*
            WaterZoneConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_destroy_key_ex(
                WaterZoneConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePluginSupport_destroy_key(
                WaterZoneConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterZoneConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterZoneConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterZoneConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterZoneConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalType *out,
                const WaterZoneConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterZoneConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterZoneConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterZoneConditionalTypePlugin_deserialize_from_cdr_buffer(
                WaterZoneConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterZoneConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterZoneConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterZoneConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterZoneConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalTypeKeyHolder *key, 
                const WaterZoneConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterZoneConditionalType *instance, 
                const WaterZoneConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterZoneConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterZoneConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterZoneConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterZoneConditionalTypePlugin_528298905_h */

