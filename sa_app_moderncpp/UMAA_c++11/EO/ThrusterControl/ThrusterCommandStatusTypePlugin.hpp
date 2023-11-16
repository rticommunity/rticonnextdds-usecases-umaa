

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterCommandStatusTypePlugin_491705771_h
#define ThrusterCommandStatusTypePlugin_491705771_h

#include "ThrusterCommandStatusType.hpp"

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
    namespace EO {
        namespace ThrusterControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ThrusterCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ThrusterCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ThrusterCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ThrusterCommandStatusType.
            */
            typedef class ThrusterCommandStatusType ThrusterCommandStatusTypeKeyHolder;

            #define ThrusterCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ThrusterCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ThrusterCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ThrusterCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ThrusterCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ThrusterCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ThrusterCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ThrusterCommandStatusType*
            ThrusterCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ThrusterCommandStatusType*
            ThrusterCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterCommandStatusType*
            ThrusterCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePluginSupport_copy_data(
                ThrusterCommandStatusType *out,
                const ThrusterCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_destroy_data_w_params(
                ThrusterCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_destroy_data_ex(
                ThrusterCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_destroy_data(
                ThrusterCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_print_data(
                const ThrusterCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ThrusterCommandStatusType*
            ThrusterCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterCommandStatusType*
            ThrusterCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_destroy_key_ex(
                ThrusterCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePluginSupport_destroy_key(
                ThrusterCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ThrusterCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ThrusterCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ThrusterCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ThrusterCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusType *out,
                const ThrusterCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ThrusterCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ThrusterCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ThrusterCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ThrusterCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ThrusterCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ThrusterCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusTypeKeyHolder *key, 
                const ThrusterCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterCommandStatusType *instance, 
                const ThrusterCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ThrusterCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ThrusterCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ThrusterCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ThrusterControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrusterCommandStatusTypePlugin_491705771_h */

