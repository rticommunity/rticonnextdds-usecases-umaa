

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DepthConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DepthConditionalTypePlugin_68105261_h
#define DepthConditionalTypePlugin_68105261_h

#include "DepthConditionalType.hpp"

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
            * By default, this type is struct DepthConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DepthConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DepthConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DepthConditionalType.
            */
            typedef class DepthConditionalType DepthConditionalTypeKeyHolder;

            #define DepthConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DepthConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DepthConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DepthConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DepthConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DepthConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DepthConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DepthConditionalType*
            DepthConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DepthConditionalType*
            DepthConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthConditionalType*
            DepthConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePluginSupport_copy_data(
                DepthConditionalType *out,
                const DepthConditionalType *in);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_destroy_data_w_params(
                DepthConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_destroy_data_ex(
                DepthConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_destroy_data(
                DepthConditionalType *sample);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_print_data(
                const DepthConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DepthConditionalType*
            DepthConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthConditionalType*
            DepthConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_destroy_key_ex(
                DepthConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePluginSupport_destroy_key(
                DepthConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DepthConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DepthConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DepthConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DepthConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalType *out,
                const DepthConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DepthConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DepthConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DepthConditionalTypePlugin_deserialize_from_cdr_buffer(
                DepthConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DepthConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DepthConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DepthConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DepthConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalTypeKeyHolder *key, 
                const DepthConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DepthConditionalType *instance, 
                const DepthConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DepthConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DepthConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DepthConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DepthConditionalTypePlugin_68105261_h */

