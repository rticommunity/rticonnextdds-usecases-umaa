

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorCommandAckReportTypePlugin_1807970110_h
#define IlluminatorCommandAckReportTypePlugin_1807970110_h

#include "IlluminatorCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/IlluminatorControl/IlluminatorCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace IlluminatorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct IlluminatorCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct IlluminatorCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * IlluminatorCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct IlluminatorCommandAckReportType.
            */
            typedef class IlluminatorCommandAckReportType IlluminatorCommandAckReportTypeKeyHolder;

            #define IlluminatorCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define IlluminatorCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define IlluminatorCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorCommandAckReportType*
            IlluminatorCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorCommandAckReportType*
            IlluminatorCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorCommandAckReportType*
            IlluminatorCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePluginSupport_copy_data(
                IlluminatorCommandAckReportType *out,
                const IlluminatorCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_destroy_data_w_params(
                IlluminatorCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_destroy_data_ex(
                IlluminatorCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_destroy_data(
                IlluminatorCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_print_data(
                const IlluminatorCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern IlluminatorCommandAckReportType*
            IlluminatorCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorCommandAckReportType*
            IlluminatorCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_destroy_key_ex(
                IlluminatorCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePluginSupport_destroy_key(
                IlluminatorCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            IlluminatorCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            IlluminatorCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            IlluminatorCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            IlluminatorCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportType *out,
                const IlluminatorCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            IlluminatorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const IlluminatorCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            IlluminatorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                IlluminatorCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportTypeKeyHolder *key, 
                const IlluminatorCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandAckReportType *instance, 
                const IlluminatorCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            IlluminatorCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            IlluminatorCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace IlluminatorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* IlluminatorCommandAckReportTypePlugin_1807970110_h */
