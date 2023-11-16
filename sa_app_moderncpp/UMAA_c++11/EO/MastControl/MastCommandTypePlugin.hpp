

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MastCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MastCommandTypePlugin_979157273_h
#define MastCommandTypePlugin_979157273_h

#include "MastCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace MastControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MastCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MastCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MastCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MastCommandType.
            */
            typedef class MastCommandType MastCommandTypeKeyHolder;

            #define MastCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MastCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MastCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MastCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MastCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MastCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MastCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MastCommandType*
            MastCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MastCommandType*
            MastCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MastCommandType*
            MastCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePluginSupport_copy_data(
                MastCommandType *out,
                const MastCommandType *in);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_destroy_data_w_params(
                MastCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_destroy_data_ex(
                MastCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_destroy_data(
                MastCommandType *sample);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_print_data(
                const MastCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MastCommandType*
            MastCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MastCommandType*
            MastCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_destroy_key_ex(
                MastCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MastCommandTypePluginSupport_destroy_key(
                MastCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MastCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MastCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MastCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MastCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MastCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandType *out,
                const MastCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MastCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MastCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MastCommandTypePlugin_deserialize_from_cdr_buffer(
                MastCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MastCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MastCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MastCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MastCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandTypeKeyHolder *key, 
                const MastCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MastCommandType *instance, 
                const MastCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MastCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MastCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MastCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MastControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MastCommandTypePlugin_979157273_h */

