

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleNavigationModeReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleNavigationModeReportTypePlugin_963483659_h
#define VehicleNavigationModeReportTypePlugin_963483659_h

#include "VehicleNavigationModeReportType.hpp"

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
    namespace SA {
        namespace VehicleNavigationModeStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VehicleNavigationModeReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VehicleNavigationModeReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VehicleNavigationModeReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VehicleNavigationModeReportType.
            */
            typedef  class VehicleNavigationModeReportType VehicleNavigationModeReportTypeKeyHolder;

            #define VehicleNavigationModeReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VehicleNavigationModeReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VehicleNavigationModeReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VehicleNavigationModeReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VehicleNavigationModeReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VehicleNavigationModeReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VehicleNavigationModeReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VehicleNavigationModeReportType*
            VehicleNavigationModeReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VehicleNavigationModeReportType*
            VehicleNavigationModeReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleNavigationModeReportType*
            VehicleNavigationModeReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePluginSupport_copy_data(
                VehicleNavigationModeReportType *out,
                const VehicleNavigationModeReportType *in);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_destroy_data_w_params(
                VehicleNavigationModeReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_destroy_data_ex(
                VehicleNavigationModeReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_destroy_data(
                VehicleNavigationModeReportType *sample);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_print_data(
                const VehicleNavigationModeReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VehicleNavigationModeReportType*
            VehicleNavigationModeReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleNavigationModeReportType*
            VehicleNavigationModeReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_destroy_key_ex(
                VehicleNavigationModeReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePluginSupport_destroy_key(
                VehicleNavigationModeReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VehicleNavigationModeReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VehicleNavigationModeReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VehicleNavigationModeReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VehicleNavigationModeReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportType *out,
                const VehicleNavigationModeReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VehicleNavigationModeReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VehicleNavigationModeReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VehicleNavigationModeReportTypePlugin_deserialize_from_cdr_buffer(
                VehicleNavigationModeReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VehicleNavigationModeReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VehicleNavigationModeReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VehicleNavigationModeReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VehicleNavigationModeReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportTypeKeyHolder *key, 
                const VehicleNavigationModeReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VehicleNavigationModeReportType *instance, 
                const VehicleNavigationModeReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VehicleNavigationModeReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VehicleNavigationModeReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VehicleNavigationModeReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VehicleNavigationModeStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VehicleNavigationModeReportTypePlugin_963483659_h */

