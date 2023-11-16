

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PowerReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PowerReportTypePlugin_881172067_h
#define PowerReportTypePlugin_881172067_h

#include "PowerReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
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
        namespace PowerStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PowerReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PowerReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PowerReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PowerReportType.
            */
            typedef class PowerReportType PowerReportTypeKeyHolder;

            #define PowerReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PowerReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PowerReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PowerReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PowerReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PowerReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PowerReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PowerReportType*
            PowerReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PowerReportType*
            PowerReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerReportType*
            PowerReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePluginSupport_copy_data(
                PowerReportType *out,
                const PowerReportType *in);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_destroy_data_w_params(
                PowerReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_destroy_data_ex(
                PowerReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_destroy_data(
                PowerReportType *sample);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_print_data(
                const PowerReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PowerReportType*
            PowerReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerReportType*
            PowerReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_destroy_key_ex(
                PowerReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerReportTypePluginSupport_destroy_key(
                PowerReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PowerReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PowerReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PowerReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PowerReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PowerReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportType *out,
                const PowerReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PowerReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PowerReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PowerReportTypePlugin_deserialize_from_cdr_buffer(
                PowerReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PowerReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PowerReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PowerReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PowerReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportTypeKeyHolder *key, 
                const PowerReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PowerReportType *instance, 
                const PowerReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PowerReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PowerReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PowerReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PowerStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PowerReportTypePlugin_881172067_h */

