

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicySpecsReportTypePlugin_1168129046_h
#define CommsLostPolicySpecsReportTypePlugin_1168129046_h

#include "CommsLostPolicySpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsLostPolicySpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsLostPolicySpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsLostPolicySpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsLostPolicySpecsReportType.
            */
            typedef class CommsLostPolicySpecsReportType CommsLostPolicySpecsReportTypeKeyHolder;

            #define CommsLostPolicySpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsLostPolicySpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsLostPolicySpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsLostPolicySpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsLostPolicySpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsLostPolicySpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsLostPolicySpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsLostPolicySpecsReportType*
            CommsLostPolicySpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsLostPolicySpecsReportType*
            CommsLostPolicySpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsLostPolicySpecsReportType*
            CommsLostPolicySpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePluginSupport_copy_data(
                CommsLostPolicySpecsReportType *out,
                const CommsLostPolicySpecsReportType *in);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_destroy_data_w_params(
                CommsLostPolicySpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_destroy_data_ex(
                CommsLostPolicySpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_destroy_data(
                CommsLostPolicySpecsReportType *sample);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_print_data(
                const CommsLostPolicySpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsLostPolicySpecsReportType*
            CommsLostPolicySpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsLostPolicySpecsReportType*
            CommsLostPolicySpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_destroy_key_ex(
                CommsLostPolicySpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePluginSupport_destroy_key(
                CommsLostPolicySpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsLostPolicySpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsLostPolicySpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsLostPolicySpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsLostPolicySpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportType *out,
                const CommsLostPolicySpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsLostPolicySpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsLostPolicySpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsLostPolicySpecsReportTypePlugin_deserialize_from_cdr_buffer(
                CommsLostPolicySpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicySpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsLostPolicySpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicySpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicySpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportTypeKeyHolder *key, 
                const CommsLostPolicySpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicySpecsReportType *instance, 
                const CommsLostPolicySpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicySpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsLostPolicySpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsLostPolicySpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsLostPolicy  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsLostPolicySpecsReportTypePlugin_1168129046_h */

