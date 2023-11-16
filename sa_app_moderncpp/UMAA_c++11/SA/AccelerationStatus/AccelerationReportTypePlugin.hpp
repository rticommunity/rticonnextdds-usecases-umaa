

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelerationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AccelerationReportTypePlugin_494470366_h
#define AccelerationReportTypePlugin_494470366_h

#include "AccelerationReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/Acceleration3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceNEDAccelerationAccelerationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationAccelerationAccelerationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationAcceleration3DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace AccelerationStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AccelerationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AccelerationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AccelerationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AccelerationReportType.
            */
            typedef class AccelerationReportType AccelerationReportTypeKeyHolder;

            #define AccelerationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AccelerationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AccelerationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AccelerationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AccelerationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AccelerationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AccelerationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AccelerationReportType*
            AccelerationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AccelerationReportType*
            AccelerationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AccelerationReportType*
            AccelerationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePluginSupport_copy_data(
                AccelerationReportType *out,
                const AccelerationReportType *in);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_destroy_data_w_params(
                AccelerationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_destroy_data_ex(
                AccelerationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_destroy_data(
                AccelerationReportType *sample);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_print_data(
                const AccelerationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AccelerationReportType*
            AccelerationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AccelerationReportType*
            AccelerationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_destroy_key_ex(
                AccelerationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePluginSupport_destroy_key(
                AccelerationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AccelerationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AccelerationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AccelerationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AccelerationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportType *out,
                const AccelerationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AccelerationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AccelerationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AccelerationReportTypePlugin_deserialize_from_cdr_buffer(
                AccelerationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AccelerationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AccelerationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AccelerationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AccelerationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportTypeKeyHolder *key, 
                const AccelerationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationReportType *instance, 
                const AccelerationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AccelerationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AccelerationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AccelerationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AccelerationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AccelerationReportTypePlugin_494470366_h */

