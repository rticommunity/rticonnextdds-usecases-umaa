

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterCommandAckReportTypePlugin_1236816370_h
#define EmitterCommandAckReportTypePlugin_1236816370_h

#include "EmitterCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/EmitterControl/EmitterCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace EmitterControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmitterCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterCommandAckReportType.
            */
            typedef class EmitterCommandAckReportType EmitterCommandAckReportTypeKeyHolder;

            #define EmitterCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterCommandAckReportType*
            EmitterCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterCommandAckReportType*
            EmitterCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterCommandAckReportType*
            EmitterCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePluginSupport_copy_data(
                EmitterCommandAckReportType *out,
                const EmitterCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_destroy_data_w_params(
                EmitterCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_destroy_data_ex(
                EmitterCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_destroy_data(
                EmitterCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_print_data(
                const EmitterCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterCommandAckReportType*
            EmitterCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterCommandAckReportType*
            EmitterCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_destroy_key_ex(
                EmitterCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePluginSupport_destroy_key(
                EmitterCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportType *out,
                const EmitterCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportTypeKeyHolder *key, 
                const EmitterCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterCommandAckReportType *instance, 
                const EmitterCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterCommandAckReportTypePlugin_1236816370_h */

