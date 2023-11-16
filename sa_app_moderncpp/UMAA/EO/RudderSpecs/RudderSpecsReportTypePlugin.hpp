

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RudderSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RudderSpecsReportTypePlugin_1997718508_h
#define RudderSpecsReportTypePlugin_1997718508_h

#include "RudderSpecsReportType.hpp"

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
        namespace RudderSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RudderSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RudderSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RudderSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RudderSpecsReportType.
            */
            typedef  class RudderSpecsReportType RudderSpecsReportTypeKeyHolder;

            #define RudderSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RudderSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RudderSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RudderSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RudderSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RudderSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RudderSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RudderSpecsReportType*
            RudderSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RudderSpecsReportType*
            RudderSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderSpecsReportType*
            RudderSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePluginSupport_copy_data(
                RudderSpecsReportType *out,
                const RudderSpecsReportType *in);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_destroy_data_w_params(
                RudderSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_destroy_data_ex(
                RudderSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_destroy_data(
                RudderSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_print_data(
                const RudderSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RudderSpecsReportType*
            RudderSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderSpecsReportType*
            RudderSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_destroy_key_ex(
                RudderSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePluginSupport_destroy_key(
                RudderSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RudderSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RudderSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RudderSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RudderSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportType *out,
                const RudderSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RudderSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RudderSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RudderSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                RudderSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RudderSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RudderSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RudderSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RudderSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportTypeKeyHolder *key, 
                const RudderSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RudderSpecsReportType *instance, 
                const RudderSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RudderSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RudderSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RudderSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RudderSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RudderSpecsReportTypePlugin_1997718508_h */

