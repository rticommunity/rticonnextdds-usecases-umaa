

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpObjectiveTypePlugin_624395999_h
#define ExpObjectiveTypePlugin_624395999_h

#include "ExpObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/KeyValueTypePlugin.hpp"
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
            * By default, this type is struct ExpObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ExpObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ExpObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ExpObjectiveType.
            */
            typedef class ExpObjectiveType ExpObjectiveTypeKeyHolder;

            #define ExpObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ExpObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ExpObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpObjectiveType*
            ExpObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpObjectiveType*
            ExpObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpObjectiveType*
            ExpObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePluginSupport_copy_data(
                ExpObjectiveType *out,
                const ExpObjectiveType *in);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_destroy_data_w_params(
                ExpObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_destroy_data_ex(
                ExpObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_destroy_data(
                ExpObjectiveType *sample);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_print_data(
                const ExpObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ExpObjectiveType*
            ExpObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpObjectiveType*
            ExpObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_destroy_key_ex(
                ExpObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePluginSupport_destroy_key(
                ExpObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ExpObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ExpObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ExpObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ExpObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveType *out,
                const ExpObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpObjectiveTypePlugin_deserialize_from_cdr_buffer(
                ExpObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveTypeKeyHolder *key, 
                const ExpObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveType *instance, 
                const ExpObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ExpObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ExpObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ExpObjectiveTypePlugin_624395999_h */

