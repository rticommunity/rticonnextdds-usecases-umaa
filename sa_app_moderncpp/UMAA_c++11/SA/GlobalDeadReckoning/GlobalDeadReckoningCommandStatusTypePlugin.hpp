

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandStatusTypePlugin_1193906899_h
#define GlobalDeadReckoningCommandStatusTypePlugin_1193906899_h

#include "GlobalDeadReckoningCommandStatusType.hpp"

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
    namespace SA {
        namespace GlobalDeadReckoning {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalDeadReckoningCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalDeadReckoningCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalDeadReckoningCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalDeadReckoningCommandStatusType.
            */
            typedef class GlobalDeadReckoningCommandStatusType GlobalDeadReckoningCommandStatusTypeKeyHolder;

            #define GlobalDeadReckoningCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDeadReckoningCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDeadReckoningCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDeadReckoningCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalDeadReckoningCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalDeadReckoningCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDeadReckoningCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDeadReckoningCommandStatusType*
            GlobalDeadReckoningCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandStatusType*
            GlobalDeadReckoningCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandStatusType*
            GlobalDeadReckoningCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePluginSupport_copy_data(
                GlobalDeadReckoningCommandStatusType *out,
                const GlobalDeadReckoningCommandStatusType *in);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_destroy_data_w_params(
                GlobalDeadReckoningCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_destroy_data_ex(
                GlobalDeadReckoningCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_destroy_data(
                GlobalDeadReckoningCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_print_data(
                const GlobalDeadReckoningCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandStatusType*
            GlobalDeadReckoningCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandStatusType*
            GlobalDeadReckoningCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_destroy_key_ex(
                GlobalDeadReckoningCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePluginSupport_destroy_key(
                GlobalDeadReckoningCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDeadReckoningCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDeadReckoningCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDeadReckoningCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusType *out,
                const GlobalDeadReckoningCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDeadReckoningCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                GlobalDeadReckoningCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDeadReckoningCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusTypeKeyHolder *key, 
                const GlobalDeadReckoningCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandStatusType *instance, 
                const GlobalDeadReckoningCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDeadReckoningCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDeadReckoningCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDeadReckoningCommandStatusTypePlugin_1193906899_h */

