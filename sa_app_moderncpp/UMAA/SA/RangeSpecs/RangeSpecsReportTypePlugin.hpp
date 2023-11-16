

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeSpecsReportTypePlugin_1677860349_h
#define RangeSpecsReportTypePlugin_1677860349_h

#include "RangeSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace RangeSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RangeSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RangeSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RangeSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RangeSpecsReportType.
            */
            typedef  class RangeSpecsReportType RangeSpecsReportTypeKeyHolder;

            #define RangeSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RangeSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RangeSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RangeSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RangeSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RangeSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RangeSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RangeSpecsReportType*
            RangeSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RangeSpecsReportType*
            RangeSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeSpecsReportType*
            RangeSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePluginSupport_copy_data(
                RangeSpecsReportType *out,
                const RangeSpecsReportType *in);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_destroy_data_w_params(
                RangeSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_destroy_data_ex(
                RangeSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_destroy_data(
                RangeSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_print_data(
                const RangeSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RangeSpecsReportType*
            RangeSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeSpecsReportType*
            RangeSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_destroy_key_ex(
                RangeSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePluginSupport_destroy_key(
                RangeSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RangeSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RangeSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RangeSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RangeSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportType *out,
                const RangeSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RangeSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RangeSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RangeSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                RangeSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RangeSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RangeSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RangeSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RangeSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportTypeKeyHolder *key, 
                const RangeSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RangeSpecsReportType *instance, 
                const RangeSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RangeSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RangeSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RangeSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RangeSpecs  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RangeSpecsReportTypePlugin_1677860349_h */

