

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyCommandReportTypePlugin_510865992_h
#define CommsLostPolicyCommandReportTypePlugin_510865992_h

#include "CommsLostPolicyCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/CommsLostPolicy/MoveToPosPolicyTypePlugin.hpp"
#include "UMAA/MM/CommsLostPolicy/RetrotraversePolicyTypePlugin.hpp"

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
            * By default, this type is struct CommsLostPolicyCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsLostPolicyCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsLostPolicyCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsLostPolicyCommandReportType.
            */
            typedef  class CommsLostPolicyCommandReportType CommsLostPolicyCommandReportTypeKeyHolder;

            #define CommsLostPolicyCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsLostPolicyCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsLostPolicyCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsLostPolicyCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsLostPolicyCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsLostPolicyCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsLostPolicyCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsLostPolicyCommandReportType*
            CommsLostPolicyCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsLostPolicyCommandReportType*
            CommsLostPolicyCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsLostPolicyCommandReportType*
            CommsLostPolicyCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePluginSupport_copy_data(
                CommsLostPolicyCommandReportType *out,
                const CommsLostPolicyCommandReportType *in);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_destroy_data_w_params(
                CommsLostPolicyCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_destroy_data_ex(
                CommsLostPolicyCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_destroy_data(
                CommsLostPolicyCommandReportType *sample);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_print_data(
                const CommsLostPolicyCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsLostPolicyCommandReportType*
            CommsLostPolicyCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsLostPolicyCommandReportType*
            CommsLostPolicyCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_destroy_key_ex(
                CommsLostPolicyCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePluginSupport_destroy_key(
                CommsLostPolicyCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsLostPolicyCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsLostPolicyCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsLostPolicyCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsLostPolicyCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportType *out,
                const CommsLostPolicyCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsLostPolicyCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsLostPolicyCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsLostPolicyCommandReportTypePlugin_deserialize_from_cdr_buffer(
                CommsLostPolicyCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicyCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsLostPolicyCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicyCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsLostPolicyCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportTypeKeyHolder *key, 
                const CommsLostPolicyCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsLostPolicyCommandReportType *instance, 
                const CommsLostPolicyCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsLostPolicyCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsLostPolicyCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsLostPolicyCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsLostPolicy  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsLostPolicyCommandReportTypePlugin_510865992_h */

