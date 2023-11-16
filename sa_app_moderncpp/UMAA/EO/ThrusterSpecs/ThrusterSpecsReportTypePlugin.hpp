

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterSpecsReportTypePlugin_1296256014_h
#define ThrusterSpecsReportTypePlugin_1296256014_h

#include "ThrusterSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/ThrusterSpecs/ThrusterSpecsTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace ThrusterSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ThrusterSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ThrusterSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ThrusterSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ThrusterSpecsReportType.
            */
            typedef  class ThrusterSpecsReportType ThrusterSpecsReportTypeKeyHolder;

            #define ThrusterSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ThrusterSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ThrusterSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ThrusterSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ThrusterSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ThrusterSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ThrusterSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ThrusterSpecsReportType*
            ThrusterSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ThrusterSpecsReportType*
            ThrusterSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterSpecsReportType*
            ThrusterSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePluginSupport_copy_data(
                ThrusterSpecsReportType *out,
                const ThrusterSpecsReportType *in);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_destroy_data_w_params(
                ThrusterSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_destroy_data_ex(
                ThrusterSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_destroy_data(
                ThrusterSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_print_data(
                const ThrusterSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ThrusterSpecsReportType*
            ThrusterSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterSpecsReportType*
            ThrusterSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_destroy_key_ex(
                ThrusterSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePluginSupport_destroy_key(
                ThrusterSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ThrusterSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ThrusterSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ThrusterSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ThrusterSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportType *out,
                const ThrusterSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ThrusterSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ThrusterSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ThrusterSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                ThrusterSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ThrusterSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ThrusterSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ThrusterSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ThrusterSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportTypeKeyHolder *key, 
                const ThrusterSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterSpecsReportType *instance, 
                const ThrusterSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ThrusterSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ThrusterSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ThrusterSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ThrusterSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrusterSpecsReportTypePlugin_1296256014_h */

