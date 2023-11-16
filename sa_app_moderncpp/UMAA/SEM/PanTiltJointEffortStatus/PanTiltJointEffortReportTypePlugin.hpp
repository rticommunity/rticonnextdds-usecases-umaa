

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortReportTypePlugin_1823357734_h
#define PanTiltJointEffortReportTypePlugin_1823357734_h

#include "PanTiltJointEffortReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace PanTiltJointEffortStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointEffortReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointEffortReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointEffortReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointEffortReportType.
            */
            typedef  class PanTiltJointEffortReportType PanTiltJointEffortReportTypeKeyHolder;

            #define PanTiltJointEffortReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointEffortReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointEffortReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointEffortReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointEffortReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointEffortReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointEffortReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointEffortReportType*
            PanTiltJointEffortReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointEffortReportType*
            PanTiltJointEffortReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortReportType*
            PanTiltJointEffortReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePluginSupport_copy_data(
                PanTiltJointEffortReportType *out,
                const PanTiltJointEffortReportType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_destroy_data_w_params(
                PanTiltJointEffortReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_destroy_data_ex(
                PanTiltJointEffortReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_destroy_data(
                PanTiltJointEffortReportType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_print_data(
                const PanTiltJointEffortReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointEffortReportType*
            PanTiltJointEffortReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortReportType*
            PanTiltJointEffortReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_destroy_key_ex(
                PanTiltJointEffortReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePluginSupport_destroy_key(
                PanTiltJointEffortReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointEffortReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointEffortReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointEffortReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportType *out,
                const PanTiltJointEffortReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointEffortReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortReportTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointEffortReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointEffortReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportTypeKeyHolder *key, 
                const PanTiltJointEffortReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortReportType *instance, 
                const PanTiltJointEffortReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointEffortReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointEffortReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointEffortStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointEffortReportTypePlugin_1823357734_h */

