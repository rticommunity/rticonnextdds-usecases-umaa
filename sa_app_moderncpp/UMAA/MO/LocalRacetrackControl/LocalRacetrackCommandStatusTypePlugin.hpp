

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackCommandStatusTypePlugin_968008003_h
#define LocalRacetrackCommandStatusTypePlugin_968008003_h

#include "LocalRacetrackCommandStatusType.hpp"

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
        namespace LocalRacetrackControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalRacetrackCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalRacetrackCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalRacetrackCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalRacetrackCommandStatusType.
            */
            typedef  class LocalRacetrackCommandStatusType LocalRacetrackCommandStatusTypeKeyHolder;

            #define LocalRacetrackCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRacetrackCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRacetrackCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRacetrackCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalRacetrackCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalRacetrackCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRacetrackCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRacetrackCommandStatusType*
            LocalRacetrackCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRacetrackCommandStatusType*
            LocalRacetrackCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRacetrackCommandStatusType*
            LocalRacetrackCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePluginSupport_copy_data(
                LocalRacetrackCommandStatusType *out,
                const LocalRacetrackCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_destroy_data_w_params(
                LocalRacetrackCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_destroy_data_ex(
                LocalRacetrackCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_destroy_data(
                LocalRacetrackCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_print_data(
                const LocalRacetrackCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalRacetrackCommandStatusType*
            LocalRacetrackCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRacetrackCommandStatusType*
            LocalRacetrackCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_destroy_key_ex(
                LocalRacetrackCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePluginSupport_destroy_key(
                LocalRacetrackCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRacetrackCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRacetrackCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRacetrackCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRacetrackCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusType *out,
                const LocalRacetrackCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRacetrackCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRacetrackCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRacetrackCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LocalRacetrackCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRacetrackCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusTypeKeyHolder *key, 
                const LocalRacetrackCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackCommandStatusType *instance, 
                const LocalRacetrackCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRacetrackCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRacetrackCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRacetrackControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRacetrackCommandStatusTypePlugin_968008003_h */

