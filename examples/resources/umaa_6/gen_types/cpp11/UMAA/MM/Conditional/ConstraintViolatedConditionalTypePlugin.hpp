

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstraintViolatedConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstraintViolatedConditionalTypePlugin_1048388755_h
#define ConstraintViolatedConditionalTypePlugin_1048388755_h

#include "ConstraintViolatedConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
            * By default, this type is struct ConstraintViolatedConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConstraintViolatedConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConstraintViolatedConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConstraintViolatedConditionalType.
            */
            typedef class ConstraintViolatedConditionalType ConstraintViolatedConditionalTypeKeyHolder;

            #define ConstraintViolatedConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConstraintViolatedConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConstraintViolatedConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConstraintViolatedConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConstraintViolatedConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConstraintViolatedConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConstraintViolatedConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConstraintViolatedConditionalType*
            ConstraintViolatedConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConstraintViolatedConditionalType*
            ConstraintViolatedConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConstraintViolatedConditionalType*
            ConstraintViolatedConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePluginSupport_copy_data(
                ConstraintViolatedConditionalType *out,
                const ConstraintViolatedConditionalType *in);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_destroy_data_w_params(
                ConstraintViolatedConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_destroy_data_ex(
                ConstraintViolatedConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_destroy_data(
                ConstraintViolatedConditionalType *sample);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_print_data(
                const ConstraintViolatedConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConstraintViolatedConditionalType*
            ConstraintViolatedConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConstraintViolatedConditionalType*
            ConstraintViolatedConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_destroy_key_ex(
                ConstraintViolatedConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePluginSupport_destroy_key(
                ConstraintViolatedConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConstraintViolatedConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConstraintViolatedConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConstraintViolatedConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConstraintViolatedConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalType *out,
                const ConstraintViolatedConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConstraintViolatedConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConstraintViolatedConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConstraintViolatedConditionalTypePlugin_deserialize_from_cdr_buffer(
                ConstraintViolatedConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConstraintViolatedConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConstraintViolatedConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConstraintViolatedConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConstraintViolatedConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalTypeKeyHolder *key, 
                const ConstraintViolatedConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConstraintViolatedConditionalType *instance, 
                const ConstraintViolatedConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConstraintViolatedConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConstraintViolatedConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConstraintViolatedConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConstraintViolatedConditionalTypePlugin_1048388755_h */

