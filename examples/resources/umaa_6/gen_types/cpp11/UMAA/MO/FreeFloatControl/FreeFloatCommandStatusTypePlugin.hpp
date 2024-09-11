

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FreeFloatCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FreeFloatCommandStatusTypePlugin_834201590_h
#define FreeFloatCommandStatusTypePlugin_834201590_h

#include "FreeFloatCommandStatusType.hpp"

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
    namespace MO {
        namespace FreeFloatControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FreeFloatCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FreeFloatCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FreeFloatCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FreeFloatCommandStatusType.
            */
            typedef class FreeFloatCommandStatusType FreeFloatCommandStatusTypeKeyHolder;

            #define FreeFloatCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FreeFloatCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FreeFloatCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FreeFloatCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FreeFloatCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FreeFloatCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FreeFloatCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FreeFloatCommandStatusType*
            FreeFloatCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FreeFloatCommandStatusType*
            FreeFloatCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FreeFloatCommandStatusType*
            FreeFloatCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePluginSupport_copy_data(
                FreeFloatCommandStatusType *out,
                const FreeFloatCommandStatusType *in);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_destroy_data_w_params(
                FreeFloatCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_destroy_data_ex(
                FreeFloatCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_destroy_data(
                FreeFloatCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_print_data(
                const FreeFloatCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FreeFloatCommandStatusType*
            FreeFloatCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FreeFloatCommandStatusType*
            FreeFloatCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_destroy_key_ex(
                FreeFloatCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePluginSupport_destroy_key(
                FreeFloatCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FreeFloatCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FreeFloatCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FreeFloatCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FreeFloatCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusType *out,
                const FreeFloatCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FreeFloatCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FreeFloatCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FreeFloatCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                FreeFloatCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FreeFloatCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusTypeKeyHolder *key, 
                const FreeFloatCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandStatusType *instance, 
                const FreeFloatCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FreeFloatCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FreeFloatCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FreeFloatControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FreeFloatCommandStatusTypePlugin_834201590_h */

