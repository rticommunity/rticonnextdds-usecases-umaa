

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CoordinationSituationalSignalReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CoordinationSituationalSignalReportTypePlugin_2072512847_h
#define CoordinationSituationalSignalReportTypePlugin_2072512847_h

#include "CoordinationSituationalSignalReportType.hpp"

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
    namespace MO {
        namespace CoordinationSituationalSignalStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CoordinationSituationalSignalReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CoordinationSituationalSignalReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CoordinationSituationalSignalReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CoordinationSituationalSignalReportType.
            */
            typedef class CoordinationSituationalSignalReportType CoordinationSituationalSignalReportTypeKeyHolder;

            #define CoordinationSituationalSignalReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CoordinationSituationalSignalReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CoordinationSituationalSignalReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CoordinationSituationalSignalReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CoordinationSituationalSignalReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CoordinationSituationalSignalReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CoordinationSituationalSignalReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CoordinationSituationalSignalReportType*
            CoordinationSituationalSignalReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CoordinationSituationalSignalReportType*
            CoordinationSituationalSignalReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CoordinationSituationalSignalReportType*
            CoordinationSituationalSignalReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePluginSupport_copy_data(
                CoordinationSituationalSignalReportType *out,
                const CoordinationSituationalSignalReportType *in);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_destroy_data_w_params(
                CoordinationSituationalSignalReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_destroy_data_ex(
                CoordinationSituationalSignalReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_destroy_data(
                CoordinationSituationalSignalReportType *sample);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_print_data(
                const CoordinationSituationalSignalReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CoordinationSituationalSignalReportType*
            CoordinationSituationalSignalReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CoordinationSituationalSignalReportType*
            CoordinationSituationalSignalReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_destroy_key_ex(
                CoordinationSituationalSignalReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePluginSupport_destroy_key(
                CoordinationSituationalSignalReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CoordinationSituationalSignalReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CoordinationSituationalSignalReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CoordinationSituationalSignalReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CoordinationSituationalSignalReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportType *out,
                const CoordinationSituationalSignalReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CoordinationSituationalSignalReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CoordinationSituationalSignalReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CoordinationSituationalSignalReportTypePlugin_deserialize_from_cdr_buffer(
                CoordinationSituationalSignalReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CoordinationSituationalSignalReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CoordinationSituationalSignalReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CoordinationSituationalSignalReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CoordinationSituationalSignalReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportTypeKeyHolder *key, 
                const CoordinationSituationalSignalReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CoordinationSituationalSignalReportType *instance, 
                const CoordinationSituationalSignalReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CoordinationSituationalSignalReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CoordinationSituationalSignalReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CoordinationSituationalSignalReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CoordinationSituationalSignalStatus  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CoordinationSituationalSignalReportTypePlugin_2072512847_h */

