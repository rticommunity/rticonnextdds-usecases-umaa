

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSPreCalcCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSPreCalcCommandTypePlugin_249660928_h
#define FLSPreCalcCommandTypePlugin_249660928_h

#include "FLSPreCalcCommandType.hpp"

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
        namespace FLSPreCalcControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FLSPreCalcCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FLSPreCalcCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FLSPreCalcCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FLSPreCalcCommandType.
            */
            typedef class FLSPreCalcCommandType FLSPreCalcCommandTypeKeyHolder;

            #define FLSPreCalcCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSPreCalcCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSPreCalcCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSPreCalcCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FLSPreCalcCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FLSPreCalcCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSPreCalcCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSPreCalcCommandType*
            FLSPreCalcCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSPreCalcCommandType*
            FLSPreCalcCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSPreCalcCommandType*
            FLSPreCalcCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePluginSupport_copy_data(
                FLSPreCalcCommandType *out,
                const FLSPreCalcCommandType *in);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_destroy_data_w_params(
                FLSPreCalcCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_destroy_data_ex(
                FLSPreCalcCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_destroy_data(
                FLSPreCalcCommandType *sample);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_print_data(
                const FLSPreCalcCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FLSPreCalcCommandType*
            FLSPreCalcCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSPreCalcCommandType*
            FLSPreCalcCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_destroy_key_ex(
                FLSPreCalcCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePluginSupport_destroy_key(
                FLSPreCalcCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FLSPreCalcCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FLSPreCalcCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FLSPreCalcCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandType *out,
                const FLSPreCalcCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSPreCalcCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSPreCalcCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSPreCalcCommandTypePlugin_deserialize_from_cdr_buffer(
                FLSPreCalcCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSPreCalcCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandTypeKeyHolder *key, 
                const FLSPreCalcCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandType *instance, 
                const FLSPreCalcCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FLSPreCalcCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FLSPreCalcCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FLSPreCalcControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FLSPreCalcCommandTypePlugin_249660928_h */

