

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SASConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SASConfigReportTypePlugin_1859947992_h
#define SASConfigReportTypePlugin_1859947992_h

#include "SASConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace SASConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SASConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SASConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SASConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SASConfigReportType.
            */
            typedef class SASConfigReportType SASConfigReportTypeKeyHolder;

            #define SASConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SASConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SASConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SASConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SASConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SASConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SASConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SASConfigReportType*
            SASConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SASConfigReportType*
            SASConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASConfigReportType*
            SASConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePluginSupport_copy_data(
                SASConfigReportType *out,
                const SASConfigReportType *in);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_destroy_data_w_params(
                SASConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_destroy_data_ex(
                SASConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_destroy_data(
                SASConfigReportType *sample);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_print_data(
                const SASConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SASConfigReportType*
            SASConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SASConfigReportType*
            SASConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_destroy_key_ex(
                SASConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePluginSupport_destroy_key(
                SASConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SASConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SASConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SASConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SASConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportType *out,
                const SASConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SASConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SASConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SASConfigReportTypePlugin_deserialize_from_cdr_buffer(
                SASConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SASConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SASConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SASConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SASConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportTypeKeyHolder *key, 
                const SASConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SASConfigReportType *instance, 
                const SASConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SASConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SASConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SASConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SASConfig  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SASConfigReportTypePlugin_1859947992_h */

