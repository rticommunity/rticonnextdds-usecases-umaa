

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YawRateConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef YawRateConditionalTypePlugin_657467121_h
#define YawRateConditionalTypePlugin_657467121_h

#include "YawRateConditionalType.hpp"

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
            * By default, this type is struct YawRateConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct YawRateConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * YawRateConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct YawRateConditionalType.
            */
            typedef class YawRateConditionalType YawRateConditionalTypeKeyHolder;

            #define YawRateConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YawRateConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YawRateConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YawRateConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define YawRateConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define YawRateConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YawRateConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YawRateConditionalType*
            YawRateConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YawRateConditionalType*
            YawRateConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawRateConditionalType*
            YawRateConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePluginSupport_copy_data(
                YawRateConditionalType *out,
                const YawRateConditionalType *in);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_destroy_data_w_params(
                YawRateConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_destroy_data_ex(
                YawRateConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_destroy_data(
                YawRateConditionalType *sample);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_print_data(
                const YawRateConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern YawRateConditionalType*
            YawRateConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawRateConditionalType*
            YawRateConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_destroy_key_ex(
                YawRateConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePluginSupport_destroy_key(
                YawRateConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            YawRateConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            YawRateConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            YawRateConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            YawRateConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalType *out,
                const YawRateConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            YawRateConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const YawRateConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            YawRateConditionalTypePlugin_deserialize_from_cdr_buffer(
                YawRateConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            YawRateConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YawRateConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YawRateConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YawRateConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalTypeKeyHolder *key, 
                const YawRateConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                YawRateConditionalType *instance, 
                const YawRateConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            YawRateConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            YawRateConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            YawRateConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* YawRateConditionalTypePlugin_657467121_h */

