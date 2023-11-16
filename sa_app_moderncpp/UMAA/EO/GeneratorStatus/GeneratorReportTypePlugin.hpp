

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeneratorReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeneratorReportTypePlugin_368607235_h
#define GeneratorReportTypePlugin_368607235_h

#include "GeneratorReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace GeneratorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GeneratorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GeneratorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GeneratorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GeneratorReportType.
            */
            typedef  class GeneratorReportType GeneratorReportTypeKeyHolder;

            #define GeneratorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeneratorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeneratorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeneratorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GeneratorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GeneratorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeneratorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeneratorReportType*
            GeneratorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeneratorReportType*
            GeneratorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeneratorReportType*
            GeneratorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePluginSupport_copy_data(
                GeneratorReportType *out,
                const GeneratorReportType *in);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_destroy_data_w_params(
                GeneratorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_destroy_data_ex(
                GeneratorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_destroy_data(
                GeneratorReportType *sample);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_print_data(
                const GeneratorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GeneratorReportType*
            GeneratorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeneratorReportType*
            GeneratorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_destroy_key_ex(
                GeneratorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePluginSupport_destroy_key(
                GeneratorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GeneratorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GeneratorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GeneratorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GeneratorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportType *out,
                const GeneratorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeneratorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeneratorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeneratorReportTypePlugin_deserialize_from_cdr_buffer(
                GeneratorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeneratorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeneratorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeneratorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeneratorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportTypeKeyHolder *key, 
                const GeneratorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorReportType *instance, 
                const GeneratorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GeneratorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GeneratorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GeneratorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GeneratorStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeneratorReportTypePlugin_368607235_h */

