

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatterySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatterySpecsReportTypePlugin_692210194_h
#define BatterySpecsReportTypePlugin_692210194_h

#include "BatterySpecsReportType.hpp"

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
        namespace BatterySpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BatterySpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BatterySpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BatterySpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BatterySpecsReportType.
            */
            typedef  class BatterySpecsReportType BatterySpecsReportTypeKeyHolder;

            #define BatterySpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatterySpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatterySpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatterySpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BatterySpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BatterySpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatterySpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatterySpecsReportType*
            BatterySpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatterySpecsReportType*
            BatterySpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatterySpecsReportType*
            BatterySpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePluginSupport_copy_data(
                BatterySpecsReportType *out,
                const BatterySpecsReportType *in);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_destroy_data_w_params(
                BatterySpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_destroy_data_ex(
                BatterySpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_destroy_data(
                BatterySpecsReportType *sample);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_print_data(
                const BatterySpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BatterySpecsReportType*
            BatterySpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatterySpecsReportType*
            BatterySpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_destroy_key_ex(
                BatterySpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePluginSupport_destroy_key(
                BatterySpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BatterySpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BatterySpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BatterySpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BatterySpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportType *out,
                const BatterySpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BatterySpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BatterySpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BatterySpecsReportTypePlugin_deserialize_from_cdr_buffer(
                BatterySpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BatterySpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatterySpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatterySpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatterySpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportTypeKeyHolder *key, 
                const BatterySpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BatterySpecsReportType *instance, 
                const BatterySpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BatterySpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BatterySpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BatterySpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BatterySpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BatterySpecsReportTypePlugin_692210194_h */

