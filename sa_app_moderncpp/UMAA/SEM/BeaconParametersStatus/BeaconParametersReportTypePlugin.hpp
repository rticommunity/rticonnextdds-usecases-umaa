

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeaconParametersReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeaconParametersReportTypePlugin_1276118028_h
#define BeaconParametersReportTypePlugin_1276118028_h

#include "BeaconParametersReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace BeaconParametersStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BeaconParametersReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BeaconParametersReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BeaconParametersReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BeaconParametersReportType.
            */
            typedef  class BeaconParametersReportType BeaconParametersReportTypeKeyHolder;

            #define BeaconParametersReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BeaconParametersReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BeaconParametersReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BeaconParametersReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BeaconParametersReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BeaconParametersReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BeaconParametersReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BeaconParametersReportType*
            BeaconParametersReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BeaconParametersReportType*
            BeaconParametersReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BeaconParametersReportType*
            BeaconParametersReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePluginSupport_copy_data(
                BeaconParametersReportType *out,
                const BeaconParametersReportType *in);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_destroy_data_w_params(
                BeaconParametersReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_destroy_data_ex(
                BeaconParametersReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_destroy_data(
                BeaconParametersReportType *sample);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_print_data(
                const BeaconParametersReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BeaconParametersReportType*
            BeaconParametersReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BeaconParametersReportType*
            BeaconParametersReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_destroy_key_ex(
                BeaconParametersReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePluginSupport_destroy_key(
                BeaconParametersReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BeaconParametersReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BeaconParametersReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BeaconParametersReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BeaconParametersReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportType *out,
                const BeaconParametersReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BeaconParametersReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BeaconParametersReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BeaconParametersReportTypePlugin_deserialize_from_cdr_buffer(
                BeaconParametersReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BeaconParametersReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BeaconParametersReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportTypeKeyHolder *key, 
                const BeaconParametersReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BeaconParametersReportType *instance, 
                const BeaconParametersReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BeaconParametersReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BeaconParametersReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BeaconParametersReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BeaconParametersStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BeaconParametersReportTypePlugin_1276118028_h */

