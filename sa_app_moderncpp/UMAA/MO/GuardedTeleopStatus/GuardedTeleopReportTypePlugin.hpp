

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopReportTypePlugin_1033789746_h
#define GuardedTeleopReportTypePlugin_1033789746_h

#include "GuardedTeleopReportType.hpp"

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
    namespace MO {
        namespace GuardedTeleopStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GuardedTeleopReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GuardedTeleopReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GuardedTeleopReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GuardedTeleopReportType.
            */
            typedef  class GuardedTeleopReportType GuardedTeleopReportTypeKeyHolder;

            #define GuardedTeleopReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GuardedTeleopReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GuardedTeleopReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GuardedTeleopReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GuardedTeleopReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GuardedTeleopReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GuardedTeleopReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GuardedTeleopReportType*
            GuardedTeleopReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GuardedTeleopReportType*
            GuardedTeleopReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopReportType*
            GuardedTeleopReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePluginSupport_copy_data(
                GuardedTeleopReportType *out,
                const GuardedTeleopReportType *in);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_destroy_data_w_params(
                GuardedTeleopReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_destroy_data_ex(
                GuardedTeleopReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_destroy_data(
                GuardedTeleopReportType *sample);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_print_data(
                const GuardedTeleopReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GuardedTeleopReportType*
            GuardedTeleopReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopReportType*
            GuardedTeleopReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_destroy_key_ex(
                GuardedTeleopReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePluginSupport_destroy_key(
                GuardedTeleopReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GuardedTeleopReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GuardedTeleopReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GuardedTeleopReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GuardedTeleopReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportType *out,
                const GuardedTeleopReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GuardedTeleopReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopReportTypePlugin_deserialize_from_cdr_buffer(
                GuardedTeleopReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GuardedTeleopReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportTypeKeyHolder *key, 
                const GuardedTeleopReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopReportType *instance, 
                const GuardedTeleopReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GuardedTeleopReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GuardedTeleopReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GuardedTeleopStatus  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GuardedTeleopReportTypePlugin_1033789746_h */

