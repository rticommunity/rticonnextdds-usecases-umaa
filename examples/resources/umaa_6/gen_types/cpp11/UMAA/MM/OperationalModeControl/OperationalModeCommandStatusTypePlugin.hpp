

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OperationalModeCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OperationalModeCommandStatusTypePlugin_1168846479_h
#define OperationalModeCommandStatusTypePlugin_1168846479_h

#include "OperationalModeCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace OperationalModeControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct OperationalModeCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct OperationalModeCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * OperationalModeCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct OperationalModeCommandStatusType.
            */
            typedef class OperationalModeCommandStatusType OperationalModeCommandStatusTypeKeyHolder;

            #define OperationalModeCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OperationalModeCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OperationalModeCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OperationalModeCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define OperationalModeCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define OperationalModeCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OperationalModeCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OperationalModeCommandStatusType*
            OperationalModeCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OperationalModeCommandStatusType*
            OperationalModeCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeCommandStatusType*
            OperationalModeCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePluginSupport_copy_data(
                OperationalModeCommandStatusType *out,
                const OperationalModeCommandStatusType *in);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_destroy_data_w_params(
                OperationalModeCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_destroy_data_ex(
                OperationalModeCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_destroy_data(
                OperationalModeCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_print_data(
                const OperationalModeCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern OperationalModeCommandStatusType*
            OperationalModeCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeCommandStatusType*
            OperationalModeCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_destroy_key_ex(
                OperationalModeCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePluginSupport_destroy_key(
                OperationalModeCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OperationalModeCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OperationalModeCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OperationalModeCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OperationalModeCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusType *out,
                const OperationalModeCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OperationalModeCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OperationalModeCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OperationalModeCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                OperationalModeCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OperationalModeCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusTypeKeyHolder *key, 
                const OperationalModeCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandStatusType *instance, 
                const OperationalModeCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OperationalModeCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            OperationalModeCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace OperationalModeControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OperationalModeCommandStatusTypePlugin_1168846479_h */

