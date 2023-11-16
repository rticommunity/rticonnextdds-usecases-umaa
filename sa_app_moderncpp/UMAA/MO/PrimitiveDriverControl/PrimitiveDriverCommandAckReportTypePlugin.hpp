

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandAckReportTypePlugin_1072962277_h
#define PrimitiveDriverCommandAckReportTypePlugin_1072962277_h

#include "PrimitiveDriverCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/LinearEffortPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/RotationalEffortPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace PrimitiveDriverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PrimitiveDriverCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PrimitiveDriverCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PrimitiveDriverCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PrimitiveDriverCommandAckReportType.
            */
            typedef  class PrimitiveDriverCommandAckReportType PrimitiveDriverCommandAckReportTypeKeyHolder;

            #define PrimitiveDriverCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PrimitiveDriverCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PrimitiveDriverCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PrimitiveDriverCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PrimitiveDriverCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PrimitiveDriverCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PrimitiveDriverCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PrimitiveDriverCommandAckReportType*
            PrimitiveDriverCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PrimitiveDriverCommandAckReportType*
            PrimitiveDriverCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandAckReportType*
            PrimitiveDriverCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePluginSupport_copy_data(
                PrimitiveDriverCommandAckReportType *out,
                const PrimitiveDriverCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_destroy_data_w_params(
                PrimitiveDriverCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_destroy_data_ex(
                PrimitiveDriverCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_destroy_data(
                PrimitiveDriverCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_print_data(
                const PrimitiveDriverCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PrimitiveDriverCommandAckReportType*
            PrimitiveDriverCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandAckReportType*
            PrimitiveDriverCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_destroy_key_ex(
                PrimitiveDriverCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePluginSupport_destroy_key(
                PrimitiveDriverCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PrimitiveDriverCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PrimitiveDriverCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PrimitiveDriverCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportType *out,
                const PrimitiveDriverCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PrimitiveDriverCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                PrimitiveDriverCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PrimitiveDriverCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportTypeKeyHolder *key, 
                const PrimitiveDriverCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandAckReportType *instance, 
                const PrimitiveDriverCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PrimitiveDriverCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PrimitiveDriverCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PrimitiveDriverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PrimitiveDriverCommandAckReportTypePlugin_1072962277_h */

