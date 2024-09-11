

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSCommandTypePlugin_1158420609_h
#define FLSCommandTypePlugin_1158420609_h

#include "FLSCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/BaseType/FLSAdditionalConfigTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace FLSControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FLSCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FLSCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FLSCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FLSCommandType.
            */
            typedef class FLSCommandType FLSCommandTypeKeyHolder;

            #define FLSCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FLSCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FLSCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSCommandType*
            FLSCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSCommandType*
            FLSCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSCommandType*
            FLSCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePluginSupport_copy_data(
                FLSCommandType *out,
                const FLSCommandType *in);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_destroy_data_w_params(
                FLSCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_destroy_data_ex(
                FLSCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_destroy_data(
                FLSCommandType *sample);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_print_data(
                const FLSCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FLSCommandType*
            FLSCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSCommandType*
            FLSCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_destroy_key_ex(
                FLSCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSCommandTypePluginSupport_destroy_key(
                FLSCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FLSCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FLSCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FLSCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FLSCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FLSCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandType *out,
                const FLSCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSCommandTypePlugin_deserialize_from_cdr_buffer(
                FLSCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandTypeKeyHolder *key, 
                const FLSCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FLSCommandType *instance, 
                const FLSCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FLSCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FLSCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FLSCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FLSControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FLSCommandTypePlugin_1158420609_h */

