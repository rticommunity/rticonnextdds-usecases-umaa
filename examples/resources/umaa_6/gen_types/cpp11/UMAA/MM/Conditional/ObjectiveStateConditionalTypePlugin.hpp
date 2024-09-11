

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveStateConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveStateConditionalTypePlugin_150502082_h
#define ObjectiveStateConditionalTypePlugin_150502082_h

#include "ObjectiveStateConditionalType.hpp"

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
            * By default, this type is struct ObjectiveStateConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveStateConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveStateConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveStateConditionalType.
            */
            typedef class ObjectiveStateConditionalType ObjectiveStateConditionalTypeKeyHolder;

            #define ObjectiveStateConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveStateConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveStateConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveStateConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveStateConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveStateConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveStateConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveStateConditionalType*
            ObjectiveStateConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveStateConditionalType*
            ObjectiveStateConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveStateConditionalType*
            ObjectiveStateConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePluginSupport_copy_data(
                ObjectiveStateConditionalType *out,
                const ObjectiveStateConditionalType *in);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_destroy_data_w_params(
                ObjectiveStateConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_destroy_data_ex(
                ObjectiveStateConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_destroy_data(
                ObjectiveStateConditionalType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_print_data(
                const ObjectiveStateConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveStateConditionalType*
            ObjectiveStateConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveStateConditionalType*
            ObjectiveStateConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_destroy_key_ex(
                ObjectiveStateConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePluginSupport_destroy_key(
                ObjectiveStateConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveStateConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveStateConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveStateConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveStateConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalType *out,
                const ObjectiveStateConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveStateConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveStateConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveStateConditionalTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveStateConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveStateConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveStateConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveStateConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveStateConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalTypeKeyHolder *key, 
                const ObjectiveStateConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveStateConditionalType *instance, 
                const ObjectiveStateConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveStateConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveStateConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveStateConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveStateConditionalTypePlugin_150502082_h */

