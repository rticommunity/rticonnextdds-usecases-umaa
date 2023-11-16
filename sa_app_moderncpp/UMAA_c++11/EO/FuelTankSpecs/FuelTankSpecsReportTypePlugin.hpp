

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FuelTankSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FuelTankSpecsReportTypePlugin_731841721_h
#define FuelTankSpecsReportTypePlugin_731841721_h

#include "FuelTankSpecsReportType.hpp"

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
        namespace FuelTankSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FuelTankSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FuelTankSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FuelTankSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FuelTankSpecsReportType.
            */
            typedef class FuelTankSpecsReportType FuelTankSpecsReportTypeKeyHolder;

            #define FuelTankSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FuelTankSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FuelTankSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FuelTankSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FuelTankSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FuelTankSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FuelTankSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FuelTankSpecsReportType*
            FuelTankSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FuelTankSpecsReportType*
            FuelTankSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FuelTankSpecsReportType*
            FuelTankSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePluginSupport_copy_data(
                FuelTankSpecsReportType *out,
                const FuelTankSpecsReportType *in);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_destroy_data_w_params(
                FuelTankSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_destroy_data_ex(
                FuelTankSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_destroy_data(
                FuelTankSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_print_data(
                const FuelTankSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FuelTankSpecsReportType*
            FuelTankSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FuelTankSpecsReportType*
            FuelTankSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_destroy_key_ex(
                FuelTankSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePluginSupport_destroy_key(
                FuelTankSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FuelTankSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FuelTankSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FuelTankSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FuelTankSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportType *out,
                const FuelTankSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FuelTankSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FuelTankSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FuelTankSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                FuelTankSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FuelTankSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FuelTankSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FuelTankSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FuelTankSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportTypeKeyHolder *key, 
                const FuelTankSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FuelTankSpecsReportType *instance, 
                const FuelTankSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FuelTankSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FuelTankSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FuelTankSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FuelTankSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FuelTankSpecsReportTypePlugin_731841721_h */

