

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterCharacteristicsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterCharacteristicsReportTypePlugin_388898857_h
#define WaterCharacteristicsReportTypePlugin_388898857_h

#include "WaterCharacteristicsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WaterCharacteristicsStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterCharacteristicsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterCharacteristicsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterCharacteristicsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterCharacteristicsReportType.
            */
            typedef class WaterCharacteristicsReportType WaterCharacteristicsReportTypeKeyHolder;

            #define WaterCharacteristicsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterCharacteristicsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterCharacteristicsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterCharacteristicsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterCharacteristicsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterCharacteristicsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterCharacteristicsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterCharacteristicsReportType*
            WaterCharacteristicsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterCharacteristicsReportType*
            WaterCharacteristicsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterCharacteristicsReportType*
            WaterCharacteristicsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePluginSupport_copy_data(
                WaterCharacteristicsReportType *out,
                const WaterCharacteristicsReportType *in);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_destroy_data_w_params(
                WaterCharacteristicsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_destroy_data_ex(
                WaterCharacteristicsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_destroy_data(
                WaterCharacteristicsReportType *sample);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_print_data(
                const WaterCharacteristicsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterCharacteristicsReportType*
            WaterCharacteristicsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterCharacteristicsReportType*
            WaterCharacteristicsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_destroy_key_ex(
                WaterCharacteristicsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePluginSupport_destroy_key(
                WaterCharacteristicsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterCharacteristicsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterCharacteristicsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterCharacteristicsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterCharacteristicsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportType *out,
                const WaterCharacteristicsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterCharacteristicsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterCharacteristicsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterCharacteristicsReportTypePlugin_deserialize_from_cdr_buffer(
                WaterCharacteristicsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterCharacteristicsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterCharacteristicsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterCharacteristicsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterCharacteristicsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportTypeKeyHolder *key, 
                const WaterCharacteristicsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterCharacteristicsReportType *instance, 
                const WaterCharacteristicsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterCharacteristicsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterCharacteristicsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterCharacteristicsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WaterCharacteristicsStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterCharacteristicsReportTypePlugin_388898857_h */

