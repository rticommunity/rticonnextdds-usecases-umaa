

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinsSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinsSpecsReportTypePlugin_984806825_h
#define FinsSpecsReportTypePlugin_984806825_h

#include "FinsSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/FinsSpecs/FinSpecsTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinsSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinsSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinsSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinsSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinsSpecsReportType.
            */
            typedef class FinsSpecsReportType FinsSpecsReportTypeKeyHolder;

            #define FinsSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinsSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinsSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinsSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinsSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinsSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinsSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinsSpecsReportType*
            FinsSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinsSpecsReportType*
            FinsSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinsSpecsReportType*
            FinsSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePluginSupport_copy_data(
                FinsSpecsReportType *out,
                const FinsSpecsReportType *in);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_destroy_data_w_params(
                FinsSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_destroy_data_ex(
                FinsSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_destroy_data(
                FinsSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_print_data(
                const FinsSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinsSpecsReportType*
            FinsSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinsSpecsReportType*
            FinsSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_destroy_key_ex(
                FinsSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePluginSupport_destroy_key(
                FinsSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinsSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinsSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinsSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinsSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportType *out,
                const FinsSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinsSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinsSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinsSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                FinsSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinsSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinsSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinsSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinsSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportTypeKeyHolder *key, 
                const FinsSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinsSpecsReportType *instance, 
                const FinsSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinsSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinsSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinsSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinsSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinsSpecsReportTypePlugin_984806825_h */

