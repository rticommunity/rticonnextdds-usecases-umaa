

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TerrainReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TerrainReportTypePlugin_2010706603_h
#define TerrainReportTypePlugin_2010706603_h

#include "TerrainReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
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
        namespace TerrainReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TerrainReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TerrainReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TerrainReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TerrainReportType.
            */
            typedef class TerrainReportType TerrainReportTypeKeyHolder;

            #define TerrainReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TerrainReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TerrainReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TerrainReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TerrainReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TerrainReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TerrainReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TerrainReportType*
            TerrainReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TerrainReportType*
            TerrainReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TerrainReportType*
            TerrainReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePluginSupport_copy_data(
                TerrainReportType *out,
                const TerrainReportType *in);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_destroy_data_w_params(
                TerrainReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_destroy_data_ex(
                TerrainReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_destroy_data(
                TerrainReportType *sample);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_print_data(
                const TerrainReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TerrainReportType*
            TerrainReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TerrainReportType*
            TerrainReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_destroy_key_ex(
                TerrainReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TerrainReportTypePluginSupport_destroy_key(
                TerrainReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TerrainReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TerrainReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TerrainReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TerrainReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TerrainReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportType *out,
                const TerrainReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TerrainReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TerrainReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TerrainReportTypePlugin_deserialize_from_cdr_buffer(
                TerrainReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TerrainReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TerrainReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TerrainReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TerrainReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportTypeKeyHolder *key, 
                const TerrainReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TerrainReportType *instance, 
                const TerrainReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TerrainReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TerrainReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TerrainReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TerrainReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TerrainReportTypePlugin_2010706603_h */

