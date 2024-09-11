

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingSectorConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingSectorConditionalTypePlugin_972964677_h
#define HeadingSectorConditionalTypePlugin_972964677_h

#include "HeadingSectorConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/Conditional/HeadingSectorTypePlugin.hpp"

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
            * By default, this type is struct HeadingSectorConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HeadingSectorConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HeadingSectorConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HeadingSectorConditionalType.
            */
            typedef class HeadingSectorConditionalType HeadingSectorConditionalTypeKeyHolder;

            #define HeadingSectorConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingSectorConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingSectorConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingSectorConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HeadingSectorConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HeadingSectorConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingSectorConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingSectorConditionalType*
            HeadingSectorConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingSectorConditionalType*
            HeadingSectorConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingSectorConditionalType*
            HeadingSectorConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePluginSupport_copy_data(
                HeadingSectorConditionalType *out,
                const HeadingSectorConditionalType *in);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_destroy_data_w_params(
                HeadingSectorConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_destroy_data_ex(
                HeadingSectorConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_destroy_data(
                HeadingSectorConditionalType *sample);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_print_data(
                const HeadingSectorConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HeadingSectorConditionalType*
            HeadingSectorConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingSectorConditionalType*
            HeadingSectorConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_destroy_key_ex(
                HeadingSectorConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePluginSupport_destroy_key(
                HeadingSectorConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeadingSectorConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeadingSectorConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeadingSectorConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeadingSectorConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalType *out,
                const HeadingSectorConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingSectorConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingSectorConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingSectorConditionalTypePlugin_deserialize_from_cdr_buffer(
                HeadingSectorConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingSectorConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalTypeKeyHolder *key, 
                const HeadingSectorConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorConditionalType *instance, 
                const HeadingSectorConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeadingSectorConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeadingSectorConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingSectorConditionalTypePlugin_972964677_h */

