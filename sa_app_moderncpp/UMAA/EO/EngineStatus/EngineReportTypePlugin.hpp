

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineReportTypePlugin_1925252964_h
#define EngineReportTypePlugin_1925252964_h

#include "EngineReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
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
        namespace EngineStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EngineReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EngineReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EngineReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EngineReportType.
            */
            typedef  class EngineReportType EngineReportTypeKeyHolder;

            #define EngineReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EngineReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EngineReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineReportType*
            EngineReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineReportType*
            EngineReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineReportType*
            EngineReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePluginSupport_copy_data(
                EngineReportType *out,
                const EngineReportType *in);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_destroy_data_w_params(
                EngineReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_destroy_data_ex(
                EngineReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_destroy_data(
                EngineReportType *sample);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_print_data(
                const EngineReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EngineReportType*
            EngineReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineReportType*
            EngineReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_destroy_key_ex(
                EngineReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineReportTypePluginSupport_destroy_key(
                EngineReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportType *out,
                const EngineReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineReportTypePlugin_deserialize_from_cdr_buffer(
                EngineReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportTypeKeyHolder *key, 
                const EngineReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EngineReportType *instance, 
                const EngineReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EngineReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EngineReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EngineStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineReportTypePlugin_1925252964_h */

