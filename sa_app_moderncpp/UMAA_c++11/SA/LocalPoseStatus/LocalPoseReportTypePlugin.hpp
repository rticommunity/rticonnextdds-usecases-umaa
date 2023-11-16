

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalPoseReportTypePlugin_607343734_h
#define LocalPoseReportTypePlugin_607343734_h

#include "LocalPoseReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/Altitude_AGLPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_MSLPlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionVelocityTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3DPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace LocalPoseStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalPoseReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalPoseReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalPoseReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalPoseReportType.
            */
            typedef class LocalPoseReportType LocalPoseReportTypeKeyHolder;

            #define LocalPoseReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalPoseReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalPoseReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalPoseReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalPoseReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalPoseReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalPoseReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalPoseReportType*
            LocalPoseReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalPoseReportType*
            LocalPoseReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalPoseReportType*
            LocalPoseReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePluginSupport_copy_data(
                LocalPoseReportType *out,
                const LocalPoseReportType *in);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_destroy_data_w_params(
                LocalPoseReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_destroy_data_ex(
                LocalPoseReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_destroy_data(
                LocalPoseReportType *sample);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_print_data(
                const LocalPoseReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalPoseReportType*
            LocalPoseReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalPoseReportType*
            LocalPoseReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_destroy_key_ex(
                LocalPoseReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePluginSupport_destroy_key(
                LocalPoseReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalPoseReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalPoseReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalPoseReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalPoseReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportType *out,
                const LocalPoseReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalPoseReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalPoseReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalPoseReportTypePlugin_deserialize_from_cdr_buffer(
                LocalPoseReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalPoseReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalPoseReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalPoseReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalPoseReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportTypeKeyHolder *key, 
                const LocalPoseReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalPoseReportType *instance, 
                const LocalPoseReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalPoseReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalPoseReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalPoseReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalPoseStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalPoseReportTypePlugin_607343734_h */

