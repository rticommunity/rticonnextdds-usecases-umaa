

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManagementStateCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ManagementStateCommandReportTypePlugin_1794630772_h
#define ManagementStateCommandReportTypePlugin_1794630772_h

#include "ManagementStateCommandReportType.hpp"

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
            * By default, this type is struct ManagementStateCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ManagementStateCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ManagementStateCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ManagementStateCommandReportType.
            */
            typedef class ManagementStateCommandReportType ManagementStateCommandReportTypeKeyHolder;

            #define ManagementStateCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ManagementStateCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ManagementStateCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ManagementStateCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ManagementStateCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ManagementStateCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ManagementStateCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ManagementStateCommandReportType*
            ManagementStateCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ManagementStateCommandReportType*
            ManagementStateCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ManagementStateCommandReportType*
            ManagementStateCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePluginSupport_copy_data(
                ManagementStateCommandReportType *out,
                const ManagementStateCommandReportType *in);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_destroy_data_w_params(
                ManagementStateCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_destroy_data_ex(
                ManagementStateCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_destroy_data(
                ManagementStateCommandReportType *sample);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_print_data(
                const ManagementStateCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ManagementStateCommandReportType*
            ManagementStateCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ManagementStateCommandReportType*
            ManagementStateCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_destroy_key_ex(
                ManagementStateCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePluginSupport_destroy_key(
                ManagementStateCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ManagementStateCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ManagementStateCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ManagementStateCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ManagementStateCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportType *out,
                const ManagementStateCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ManagementStateCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ManagementStateCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ManagementStateCommandReportTypePlugin_deserialize_from_cdr_buffer(
                ManagementStateCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ManagementStateCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ManagementStateCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ManagementStateCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ManagementStateCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportTypeKeyHolder *key, 
                const ManagementStateCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ManagementStateCommandReportType *instance, 
                const ManagementStateCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ManagementStateCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ManagementStateCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ManagementStateCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ManagementState  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ManagementStateCommandReportTypePlugin_1794630772_h */

