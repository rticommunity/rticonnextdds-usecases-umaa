

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSpecsReportTypePlugin_74255873_h
#define CommsChannelSpecsReportTypePlugin_74255873_h

#include "CommsChannelSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannelSpecs/FrequencyRangeTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace CommsChannelSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelSpecsReportType.
            */
            typedef class CommsChannelSpecsReportType CommsChannelSpecsReportTypeKeyHolder;

            #define CommsChannelSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelSpecsReportType*
            CommsChannelSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelSpecsReportType*
            CommsChannelSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSpecsReportType*
            CommsChannelSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePluginSupport_copy_data(
                CommsChannelSpecsReportType *out,
                const CommsChannelSpecsReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_destroy_data_w_params(
                CommsChannelSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_destroy_data_ex(
                CommsChannelSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_destroy_data(
                CommsChannelSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_print_data(
                const CommsChannelSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelSpecsReportType*
            CommsChannelSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSpecsReportType*
            CommsChannelSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_destroy_key_ex(
                CommsChannelSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePluginSupport_destroy_key(
                CommsChannelSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportType *out,
                const CommsChannelSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportTypeKeyHolder *key, 
                const CommsChannelSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSpecsReportType *instance, 
                const CommsChannelSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelSpecs  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelSpecsReportTypePlugin_74255873_h */

