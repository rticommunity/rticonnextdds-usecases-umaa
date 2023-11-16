

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmergencyStateCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmergencyStateCommandStatusTypePlugin_1080562032_h
#define EmergencyStateCommandStatusTypePlugin_1080562032_h

#include "EmergencyStateCommandStatusType.hpp"

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
    namespace SO {
        namespace ManagementState {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmergencyStateCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmergencyStateCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmergencyStateCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmergencyStateCommandStatusType.
            */
            typedef class EmergencyStateCommandStatusType EmergencyStateCommandStatusTypeKeyHolder;

            #define EmergencyStateCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmergencyStateCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmergencyStateCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmergencyStateCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmergencyStateCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmergencyStateCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmergencyStateCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmergencyStateCommandStatusType*
            EmergencyStateCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmergencyStateCommandStatusType*
            EmergencyStateCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandStatusType*
            EmergencyStateCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePluginSupport_copy_data(
                EmergencyStateCommandStatusType *out,
                const EmergencyStateCommandStatusType *in);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_destroy_data_w_params(
                EmergencyStateCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_destroy_data_ex(
                EmergencyStateCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_destroy_data(
                EmergencyStateCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_print_data(
                const EmergencyStateCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmergencyStateCommandStatusType*
            EmergencyStateCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandStatusType*
            EmergencyStateCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_destroy_key_ex(
                EmergencyStateCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePluginSupport_destroy_key(
                EmergencyStateCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmergencyStateCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmergencyStateCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmergencyStateCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusType *out,
                const EmergencyStateCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmergencyStateCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                EmergencyStateCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmergencyStateCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusTypeKeyHolder *key, 
                const EmergencyStateCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandStatusType *instance, 
                const EmergencyStateCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmergencyStateCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmergencyStateCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ManagementState  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmergencyStateCommandStatusTypePlugin_1080562032_h */

