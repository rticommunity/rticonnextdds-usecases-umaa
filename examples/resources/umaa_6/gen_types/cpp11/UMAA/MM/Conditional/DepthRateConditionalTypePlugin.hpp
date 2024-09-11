

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DepthRateConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DepthRateConditionalTypePlugin_1554630212_h
#define DepthRateConditionalTypePlugin_1554630212_h

#include "DepthRateConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MeasurementCoordinate/EngineeringCoordinateAxesPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

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
            * By default, this type is struct DepthRateConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DepthRateConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DepthRateConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DepthRateConditionalType.
            */
            typedef class DepthRateConditionalType DepthRateConditionalTypeKeyHolder;

            #define DepthRateConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DepthRateConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DepthRateConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DepthRateConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DepthRateConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DepthRateConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DepthRateConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DepthRateConditionalType*
            DepthRateConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DepthRateConditionalType*
            DepthRateConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthRateConditionalType*
            DepthRateConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePluginSupport_copy_data(
                DepthRateConditionalType *out,
                const DepthRateConditionalType *in);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_destroy_data_w_params(
                DepthRateConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_destroy_data_ex(
                DepthRateConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_destroy_data(
                DepthRateConditionalType *sample);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_print_data(
                const DepthRateConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DepthRateConditionalType*
            DepthRateConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthRateConditionalType*
            DepthRateConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_destroy_key_ex(
                DepthRateConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePluginSupport_destroy_key(
                DepthRateConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DepthRateConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DepthRateConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DepthRateConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DepthRateConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalType *out,
                const DepthRateConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DepthRateConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DepthRateConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DepthRateConditionalTypePlugin_deserialize_from_cdr_buffer(
                DepthRateConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DepthRateConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DepthRateConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DepthRateConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DepthRateConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalTypeKeyHolder *key, 
                const DepthRateConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DepthRateConditionalType *instance, 
                const DepthRateConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DepthRateConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DepthRateConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DepthRateConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DepthRateConditionalTypePlugin_1554630212_h */

