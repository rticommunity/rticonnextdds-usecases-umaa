

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedConditionalTypePlugin_720677440_h
#define SpeedConditionalTypePlugin_720677440_h

#include "SpeedConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
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
            * By default, this type is struct SpeedConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SpeedConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SpeedConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SpeedConditionalType.
            */
            typedef class SpeedConditionalType SpeedConditionalTypeKeyHolder;

            #define SpeedConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SpeedConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SpeedConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedConditionalType*
            SpeedConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedConditionalType*
            SpeedConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedConditionalType*
            SpeedConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePluginSupport_copy_data(
                SpeedConditionalType *out,
                const SpeedConditionalType *in);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_destroy_data_w_params(
                SpeedConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_destroy_data_ex(
                SpeedConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_destroy_data(
                SpeedConditionalType *sample);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_print_data(
                const SpeedConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SpeedConditionalType*
            SpeedConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedConditionalType*
            SpeedConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_destroy_key_ex(
                SpeedConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePluginSupport_destroy_key(
                SpeedConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SpeedConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SpeedConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SpeedConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SpeedConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalType *out,
                const SpeedConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SpeedConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SpeedConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SpeedConditionalTypePlugin_deserialize_from_cdr_buffer(
                SpeedConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SpeedConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalTypeKeyHolder *key, 
                const SpeedConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SpeedConditionalType *instance, 
                const SpeedConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SpeedConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SpeedConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SpeedConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SpeedConditionalTypePlugin_720677440_h */

