

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverReportTypePlugin_1656513768_h
#define PrimitiveDriverReportTypePlugin_1656513768_h

#include "PrimitiveDriverReportType.hpp"

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
        namespace PrimitiveDriverStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PrimitiveDriverReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PrimitiveDriverReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PrimitiveDriverReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PrimitiveDriverReportType.
            */
            typedef class PrimitiveDriverReportType PrimitiveDriverReportTypeKeyHolder;

            #define PrimitiveDriverReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PrimitiveDriverReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PrimitiveDriverReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PrimitiveDriverReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PrimitiveDriverReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PrimitiveDriverReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PrimitiveDriverReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PrimitiveDriverReportType*
            PrimitiveDriverReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PrimitiveDriverReportType*
            PrimitiveDriverReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverReportType*
            PrimitiveDriverReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePluginSupport_copy_data(
                PrimitiveDriverReportType *out,
                const PrimitiveDriverReportType *in);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_destroy_data_w_params(
                PrimitiveDriverReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_destroy_data_ex(
                PrimitiveDriverReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_destroy_data(
                PrimitiveDriverReportType *sample);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_print_data(
                const PrimitiveDriverReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PrimitiveDriverReportType*
            PrimitiveDriverReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverReportType*
            PrimitiveDriverReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_destroy_key_ex(
                PrimitiveDriverReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePluginSupport_destroy_key(
                PrimitiveDriverReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PrimitiveDriverReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PrimitiveDriverReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PrimitiveDriverReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PrimitiveDriverReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportType *out,
                const PrimitiveDriverReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PrimitiveDriverReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverReportTypePlugin_deserialize_from_cdr_buffer(
                PrimitiveDriverReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PrimitiveDriverReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportTypeKeyHolder *key, 
                const PrimitiveDriverReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverReportType *instance, 
                const PrimitiveDriverReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PrimitiveDriverReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PrimitiveDriverReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PrimitiveDriverStatus  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PrimitiveDriverReportTypePlugin_1656513768_h */

