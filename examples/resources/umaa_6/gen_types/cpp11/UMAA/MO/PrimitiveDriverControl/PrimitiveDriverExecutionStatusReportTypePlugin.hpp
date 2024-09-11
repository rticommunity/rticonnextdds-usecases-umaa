

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverExecutionStatusReportTypePlugin_623024333_h
#define PrimitiveDriverExecutionStatusReportTypePlugin_623024333_h

#include "PrimitiveDriverExecutionStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
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
            * By default, this type is struct PrimitiveDriverExecutionStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PrimitiveDriverExecutionStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PrimitiveDriverExecutionStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PrimitiveDriverExecutionStatusReportType.
            */
            typedef class PrimitiveDriverExecutionStatusReportType PrimitiveDriverExecutionStatusReportTypeKeyHolder;

            #define PrimitiveDriverExecutionStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PrimitiveDriverExecutionStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PrimitiveDriverExecutionStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PrimitiveDriverExecutionStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PrimitiveDriverExecutionStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PrimitiveDriverExecutionStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PrimitiveDriverExecutionStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PrimitiveDriverExecutionStatusReportType*
            PrimitiveDriverExecutionStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PrimitiveDriverExecutionStatusReportType*
            PrimitiveDriverExecutionStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverExecutionStatusReportType*
            PrimitiveDriverExecutionStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_copy_data(
                PrimitiveDriverExecutionStatusReportType *out,
                const PrimitiveDriverExecutionStatusReportType *in);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_destroy_data_w_params(
                PrimitiveDriverExecutionStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_destroy_data_ex(
                PrimitiveDriverExecutionStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_destroy_data(
                PrimitiveDriverExecutionStatusReportType *sample);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_print_data(
                const PrimitiveDriverExecutionStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PrimitiveDriverExecutionStatusReportType*
            PrimitiveDriverExecutionStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverExecutionStatusReportType*
            PrimitiveDriverExecutionStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_destroy_key_ex(
                PrimitiveDriverExecutionStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePluginSupport_destroy_key(
                PrimitiveDriverExecutionStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PrimitiveDriverExecutionStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PrimitiveDriverExecutionStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PrimitiveDriverExecutionStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PrimitiveDriverExecutionStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportType *out,
                const PrimitiveDriverExecutionStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PrimitiveDriverExecutionStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                PrimitiveDriverExecutionStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverExecutionStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PrimitiveDriverExecutionStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverExecutionStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverExecutionStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportTypeKeyHolder *key, 
                const PrimitiveDriverExecutionStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverExecutionStatusReportType *instance, 
                const PrimitiveDriverExecutionStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverExecutionStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PrimitiveDriverExecutionStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PrimitiveDriverExecutionStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PrimitiveDriverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PrimitiveDriverExecutionStatusReportTypePlugin_623024333_h */

