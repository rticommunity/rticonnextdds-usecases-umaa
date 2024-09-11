

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorsCommandStatusTypePlugin_1801749195_h
#define PropulsorsCommandStatusTypePlugin_1801749195_h

#include "PropulsorsCommandStatusType.hpp"

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
    namespace EO {
        namespace PropulsorsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorsCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorsCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorsCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorsCommandStatusType.
            */
            typedef class PropulsorsCommandStatusType PropulsorsCommandStatusTypeKeyHolder;

            #define PropulsorsCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorsCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorsCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorsCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorsCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorsCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorsCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorsCommandStatusType*
            PropulsorsCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorsCommandStatusType*
            PropulsorsCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandStatusType*
            PropulsorsCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePluginSupport_copy_data(
                PropulsorsCommandStatusType *out,
                const PropulsorsCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_destroy_data_w_params(
                PropulsorsCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_destroy_data_ex(
                PropulsorsCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_destroy_data(
                PropulsorsCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_print_data(
                const PropulsorsCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorsCommandStatusType*
            PropulsorsCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandStatusType*
            PropulsorsCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_destroy_key_ex(
                PropulsorsCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePluginSupport_destroy_key(
                PropulsorsCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorsCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorsCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorsCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorsCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusType *out,
                const PropulsorsCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorsCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PropulsorsCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorsCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusTypeKeyHolder *key, 
                const PropulsorsCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandStatusType *instance, 
                const PropulsorsCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorsCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorsCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorsControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorsCommandStatusTypePlugin_1801749195_h */

