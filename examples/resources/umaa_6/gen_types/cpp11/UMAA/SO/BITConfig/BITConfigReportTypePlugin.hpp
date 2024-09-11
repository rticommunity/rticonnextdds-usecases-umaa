

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BITConfigReportTypePlugin_459338120_h
#define BITConfigReportTypePlugin_459338120_h

#include "BITConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace BITConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BITConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BITConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BITConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BITConfigReportType.
            */
            typedef class BITConfigReportType BITConfigReportTypeKeyHolder;

            #define BITConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BITConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BITConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BITConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BITConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BITConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BITConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BITConfigReportType*
            BITConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BITConfigReportType*
            BITConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITConfigReportType*
            BITConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePluginSupport_copy_data(
                BITConfigReportType *out,
                const BITConfigReportType *in);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_destroy_data_w_params(
                BITConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_destroy_data_ex(
                BITConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_destroy_data(
                BITConfigReportType *sample);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_print_data(
                const BITConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BITConfigReportType*
            BITConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITConfigReportType*
            BITConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_destroy_key_ex(
                BITConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePluginSupport_destroy_key(
                BITConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BITConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BITConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BITConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BITConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportType *out,
                const BITConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BITConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BITConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BITConfigReportTypePlugin_deserialize_from_cdr_buffer(
                BITConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BITConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BITConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BITConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BITConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportTypeKeyHolder *key, 
                const BITConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigReportType *instance, 
                const BITConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BITConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BITConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BITConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BITConfig  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BITConfigReportTypePlugin_459338120_h */

