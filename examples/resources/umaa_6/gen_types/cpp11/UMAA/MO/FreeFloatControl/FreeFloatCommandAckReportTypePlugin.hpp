

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FreeFloatCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FreeFloatCommandAckReportTypePlugin_308724472_h
#define FreeFloatCommandAckReportTypePlugin_308724472_h

#include "FreeFloatCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/FreeFloatControl/FreeFloatCommandTypePlugin.hpp"

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
            * By default, this type is struct FreeFloatCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FreeFloatCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FreeFloatCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FreeFloatCommandAckReportType.
            */
            typedef class FreeFloatCommandAckReportType FreeFloatCommandAckReportTypeKeyHolder;

            #define FreeFloatCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FreeFloatCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FreeFloatCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FreeFloatCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FreeFloatCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FreeFloatCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FreeFloatCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FreeFloatCommandAckReportType*
            FreeFloatCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FreeFloatCommandAckReportType*
            FreeFloatCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FreeFloatCommandAckReportType*
            FreeFloatCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePluginSupport_copy_data(
                FreeFloatCommandAckReportType *out,
                const FreeFloatCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_destroy_data_w_params(
                FreeFloatCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_destroy_data_ex(
                FreeFloatCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_destroy_data(
                FreeFloatCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_print_data(
                const FreeFloatCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FreeFloatCommandAckReportType*
            FreeFloatCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FreeFloatCommandAckReportType*
            FreeFloatCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_destroy_key_ex(
                FreeFloatCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePluginSupport_destroy_key(
                FreeFloatCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FreeFloatCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FreeFloatCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FreeFloatCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FreeFloatCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportType *out,
                const FreeFloatCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FreeFloatCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FreeFloatCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FreeFloatCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                FreeFloatCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FreeFloatCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FreeFloatCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportTypeKeyHolder *key, 
                const FreeFloatCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FreeFloatCommandAckReportType *instance, 
                const FreeFloatCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FreeFloatCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FreeFloatCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FreeFloatCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FreeFloatControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FreeFloatCommandAckReportTypePlugin_308724472_h */

