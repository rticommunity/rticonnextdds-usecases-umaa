

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RelativeSpeedConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RelativeSpeedConditionalTypePlugin_1185334121_h
#define RelativeSpeedConditionalTypePlugin_1185334121_h

#include "RelativeSpeedConditionalType.hpp"

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
            * By default, this type is struct RelativeSpeedConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RelativeSpeedConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RelativeSpeedConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RelativeSpeedConditionalType.
            */
            typedef class RelativeSpeedConditionalType RelativeSpeedConditionalTypeKeyHolder;

            #define RelativeSpeedConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RelativeSpeedConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RelativeSpeedConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RelativeSpeedConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RelativeSpeedConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RelativeSpeedConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RelativeSpeedConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RelativeSpeedConditionalType*
            RelativeSpeedConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RelativeSpeedConditionalType*
            RelativeSpeedConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeSpeedConditionalType*
            RelativeSpeedConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePluginSupport_copy_data(
                RelativeSpeedConditionalType *out,
                const RelativeSpeedConditionalType *in);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_destroy_data_w_params(
                RelativeSpeedConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_destroy_data_ex(
                RelativeSpeedConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_destroy_data(
                RelativeSpeedConditionalType *sample);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_print_data(
                const RelativeSpeedConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RelativeSpeedConditionalType*
            RelativeSpeedConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeSpeedConditionalType*
            RelativeSpeedConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_destroy_key_ex(
                RelativeSpeedConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePluginSupport_destroy_key(
                RelativeSpeedConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RelativeSpeedConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RelativeSpeedConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RelativeSpeedConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RelativeSpeedConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalType *out,
                const RelativeSpeedConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RelativeSpeedConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RelativeSpeedConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RelativeSpeedConditionalTypePlugin_deserialize_from_cdr_buffer(
                RelativeSpeedConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RelativeSpeedConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RelativeSpeedConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RelativeSpeedConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RelativeSpeedConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalTypeKeyHolder *key, 
                const RelativeSpeedConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RelativeSpeedConditionalType *instance, 
                const RelativeSpeedConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RelativeSpeedConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RelativeSpeedConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RelativeSpeedConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RelativeSpeedConditionalTypePlugin_1185334121_h */

