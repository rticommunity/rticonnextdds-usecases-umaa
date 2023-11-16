

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemIDCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemIDCommandReportTypePlugin_982994837_h
#define ControlSystemIDCommandReportTypePlugin_982994837_h

#include "ControlSystemIDCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ControlSystemID {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ControlSystemIDCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ControlSystemIDCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ControlSystemIDCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ControlSystemIDCommandReportType.
            */
            typedef class ControlSystemIDCommandReportType ControlSystemIDCommandReportTypeKeyHolder;

            #define ControlSystemIDCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ControlSystemIDCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ControlSystemIDCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ControlSystemIDCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ControlSystemIDCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ControlSystemIDCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ControlSystemIDCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ControlSystemIDCommandReportType*
            ControlSystemIDCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ControlSystemIDCommandReportType*
            ControlSystemIDCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemIDCommandReportType*
            ControlSystemIDCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePluginSupport_copy_data(
                ControlSystemIDCommandReportType *out,
                const ControlSystemIDCommandReportType *in);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_destroy_data_w_params(
                ControlSystemIDCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_destroy_data_ex(
                ControlSystemIDCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_destroy_data(
                ControlSystemIDCommandReportType *sample);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_print_data(
                const ControlSystemIDCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ControlSystemIDCommandReportType*
            ControlSystemIDCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemIDCommandReportType*
            ControlSystemIDCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_destroy_key_ex(
                ControlSystemIDCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePluginSupport_destroy_key(
                ControlSystemIDCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ControlSystemIDCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ControlSystemIDCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ControlSystemIDCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportType *out,
                const ControlSystemIDCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ControlSystemIDCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ControlSystemIDCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ControlSystemIDCommandReportTypePlugin_deserialize_from_cdr_buffer(
                ControlSystemIDCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ControlSystemIDCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportTypeKeyHolder *key, 
                const ControlSystemIDCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandReportType *instance, 
                const ControlSystemIDCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ControlSystemIDCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ControlSystemIDCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ControlSystemID  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlSystemIDCommandReportTypePlugin_982994837_h */

