

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManagementStateReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ManagementStateReportTypePlugin_762201397_h
#define ManagementStateReportTypePlugin_762201397_h

#include "ManagementStateReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ManagementState {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ManagementStateReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ManagementStateReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ManagementStateReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ManagementStateReportType.
            */
            typedef  class ManagementStateReportType ManagementStateReportTypeKeyHolder;

            #define ManagementStateReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ManagementStateReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ManagementStateReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ManagementStateReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ManagementStateReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ManagementStateReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ManagementStateReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ManagementStateReportType*
            ManagementStateReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ManagementStateReportType*
            ManagementStateReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ManagementStateReportType*
            ManagementStateReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePluginSupport_copy_data(
                ManagementStateReportType *out,
                const ManagementStateReportType *in);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_destroy_data_w_params(
                ManagementStateReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_destroy_data_ex(
                ManagementStateReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_destroy_data(
                ManagementStateReportType *sample);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_print_data(
                const ManagementStateReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ManagementStateReportType*
            ManagementStateReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ManagementStateReportType*
            ManagementStateReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_destroy_key_ex(
                ManagementStateReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePluginSupport_destroy_key(
                ManagementStateReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ManagementStateReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ManagementStateReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ManagementStateReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ManagementStateReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportType *out,
                const ManagementStateReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ManagementStateReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ManagementStateReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ManagementStateReportTypePlugin_deserialize_from_cdr_buffer(
                ManagementStateReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ManagementStateReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ManagementStateReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ManagementStateReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ManagementStateReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportTypeKeyHolder *key, 
                const ManagementStateReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateReportType *instance, 
                const ManagementStateReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ManagementStateReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ManagementStateReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ManagementState  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ManagementStateReportTypePlugin_762201397_h */

