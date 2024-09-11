

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogicalORConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LogicalORConditionalTypePlugin_640503104_h
#define LogicalORConditionalTypePlugin_640503104_h

#include "LogicalORConditionalType.hpp"

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
            * By default, this type is struct LogicalORConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LogicalORConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LogicalORConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LogicalORConditionalType.
            */
            typedef class LogicalORConditionalType LogicalORConditionalTypeKeyHolder;

            #define LogicalORConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LogicalORConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LogicalORConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LogicalORConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LogicalORConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LogicalORConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LogicalORConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LogicalORConditionalType*
            LogicalORConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LogicalORConditionalType*
            LogicalORConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LogicalORConditionalType*
            LogicalORConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePluginSupport_copy_data(
                LogicalORConditionalType *out,
                const LogicalORConditionalType *in);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_destroy_data_w_params(
                LogicalORConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_destroy_data_ex(
                LogicalORConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_destroy_data(
                LogicalORConditionalType *sample);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_print_data(
                const LogicalORConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LogicalORConditionalType*
            LogicalORConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LogicalORConditionalType*
            LogicalORConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_destroy_key_ex(
                LogicalORConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePluginSupport_destroy_key(
                LogicalORConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LogicalORConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LogicalORConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LogicalORConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LogicalORConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalType *out,
                const LogicalORConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LogicalORConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LogicalORConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LogicalORConditionalTypePlugin_deserialize_from_cdr_buffer(
                LogicalORConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LogicalORConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LogicalORConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LogicalORConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LogicalORConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalTypeKeyHolder *key, 
                const LogicalORConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LogicalORConditionalType *instance, 
                const LogicalORConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LogicalORConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LogicalORConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LogicalORConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LogicalORConditionalTypePlugin_640503104_h */

