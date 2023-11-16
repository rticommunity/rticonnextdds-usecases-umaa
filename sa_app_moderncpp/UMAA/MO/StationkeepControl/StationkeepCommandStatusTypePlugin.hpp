

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepCommandStatusTypePlugin_880907986_h
#define StationkeepCommandStatusTypePlugin_880907986_h

#include "StationkeepCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace StationkeepControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct StationkeepCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct StationkeepCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * StationkeepCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct StationkeepCommandStatusType.
            */
            typedef  class StationkeepCommandStatusType StationkeepCommandStatusTypeKeyHolder;

            #define StationkeepCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StationkeepCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StationkeepCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StationkeepCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define StationkeepCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define StationkeepCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StationkeepCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StationkeepCommandStatusType*
            StationkeepCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StationkeepCommandStatusType*
            StationkeepCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StationkeepCommandStatusType*
            StationkeepCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePluginSupport_copy_data(
                StationkeepCommandStatusType *out,
                const StationkeepCommandStatusType *in);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_destroy_data_w_params(
                StationkeepCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_destroy_data_ex(
                StationkeepCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_destroy_data(
                StationkeepCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_print_data(
                const StationkeepCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern StationkeepCommandStatusType*
            StationkeepCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StationkeepCommandStatusType*
            StationkeepCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_destroy_key_ex(
                StationkeepCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePluginSupport_destroy_key(
                StationkeepCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StationkeepCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StationkeepCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StationkeepCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StationkeepCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusType *out,
                const StationkeepCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StationkeepCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StationkeepCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StationkeepCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                StationkeepCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StationkeepCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusTypeKeyHolder *key, 
                const StationkeepCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandStatusType *instance, 
                const StationkeepCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StationkeepCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StationkeepCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StationkeepControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StationkeepCommandStatusTypePlugin_880907986_h */

