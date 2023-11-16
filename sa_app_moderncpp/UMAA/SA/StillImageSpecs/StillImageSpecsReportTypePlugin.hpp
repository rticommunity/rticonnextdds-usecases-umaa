

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageSpecsReportTypePlugin_1083537659_h
#define StillImageSpecsReportTypePlugin_1083537659_h

#include "StillImageSpecsReportType.hpp"

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
    namespace SA {
        namespace StillImageSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct StillImageSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct StillImageSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * StillImageSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct StillImageSpecsReportType.
            */
            typedef  class StillImageSpecsReportType StillImageSpecsReportTypeKeyHolder;

            #define StillImageSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StillImageSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StillImageSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StillImageSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define StillImageSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define StillImageSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StillImageSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StillImageSpecsReportType*
            StillImageSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StillImageSpecsReportType*
            StillImageSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StillImageSpecsReportType*
            StillImageSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePluginSupport_copy_data(
                StillImageSpecsReportType *out,
                const StillImageSpecsReportType *in);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_destroy_data_w_params(
                StillImageSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_destroy_data_ex(
                StillImageSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_destroy_data(
                StillImageSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_print_data(
                const StillImageSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern StillImageSpecsReportType*
            StillImageSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StillImageSpecsReportType*
            StillImageSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_destroy_key_ex(
                StillImageSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePluginSupport_destroy_key(
                StillImageSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StillImageSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StillImageSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StillImageSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StillImageSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportType *out,
                const StillImageSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StillImageSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StillImageSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StillImageSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                StillImageSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StillImageSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StillImageSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StillImageSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StillImageSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportTypeKeyHolder *key, 
                const StillImageSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                StillImageSpecsReportType *instance, 
                const StillImageSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            StillImageSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StillImageSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StillImageSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StillImageSpecs  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StillImageSpecsReportTypePlugin_1083537659_h */

