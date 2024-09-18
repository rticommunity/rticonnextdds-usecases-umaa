

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSPreCalcCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSPreCalcCommandAckReportTypePlugin_702439837_h
#define FLSPreCalcCommandAckReportTypePlugin_702439837_h

#include "FLSPreCalcCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/FLSPreCalcControl/FLSPreCalcCommandTypePlugin.hpp"

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
            * By default, this type is struct FLSPreCalcCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FLSPreCalcCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FLSPreCalcCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FLSPreCalcCommandAckReportType.
            */
            typedef class FLSPreCalcCommandAckReportType FLSPreCalcCommandAckReportTypeKeyHolder;

            #define FLSPreCalcCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSPreCalcCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSPreCalcCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSPreCalcCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FLSPreCalcCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FLSPreCalcCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSPreCalcCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSPreCalcCommandAckReportType*
            FLSPreCalcCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSPreCalcCommandAckReportType*
            FLSPreCalcCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSPreCalcCommandAckReportType*
            FLSPreCalcCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePluginSupport_copy_data(
                FLSPreCalcCommandAckReportType *out,
                const FLSPreCalcCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_destroy_data_w_params(
                FLSPreCalcCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_destroy_data_ex(
                FLSPreCalcCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_destroy_data(
                FLSPreCalcCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_print_data(
                const FLSPreCalcCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FLSPreCalcCommandAckReportType*
            FLSPreCalcCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSPreCalcCommandAckReportType*
            FLSPreCalcCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_destroy_key_ex(
                FLSPreCalcCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePluginSupport_destroy_key(
                FLSPreCalcCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FLSPreCalcCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FLSPreCalcCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FLSPreCalcCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FLSPreCalcCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportType *out,
                const FLSPreCalcCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSPreCalcCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSPreCalcCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSPreCalcCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                FLSPreCalcCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSPreCalcCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSPreCalcCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportTypeKeyHolder *key, 
                const FLSPreCalcCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FLSPreCalcCommandAckReportType *instance, 
                const FLSPreCalcCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FLSPreCalcCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FLSPreCalcCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FLSPreCalcCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FLSPreCalcControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FLSPreCalcCommandAckReportTypePlugin_702439837_h */
