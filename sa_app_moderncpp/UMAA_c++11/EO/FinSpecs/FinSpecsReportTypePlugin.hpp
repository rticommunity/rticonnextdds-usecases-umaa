

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinSpecsReportTypePlugin_944472035_h
#define FinSpecsReportTypePlugin_944472035_h

#include "FinSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinSpecsReportType.
            */
            typedef class FinSpecsReportType FinSpecsReportTypeKeyHolder;

            #define FinSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinSpecsReportType*
            FinSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinSpecsReportType*
            FinSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinSpecsReportType*
            FinSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePluginSupport_copy_data(
                FinSpecsReportType *out,
                const FinSpecsReportType *in);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_destroy_data_w_params(
                FinSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_destroy_data_ex(
                FinSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_destroy_data(
                FinSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_print_data(
                const FinSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinSpecsReportType*
            FinSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinSpecsReportType*
            FinSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_destroy_key_ex(
                FinSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePluginSupport_destroy_key(
                FinSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportType *out,
                const FinSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                FinSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportTypeKeyHolder *key, 
                const FinSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsReportType *instance, 
                const FinSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinSpecsReportTypePlugin_944472035_h */

