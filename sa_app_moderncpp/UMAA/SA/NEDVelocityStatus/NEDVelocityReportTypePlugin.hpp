

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NEDVelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NEDVelocityReportTypePlugin_227656961_h
#define NEDVelocityReportTypePlugin_227656961_h

#include "NEDVelocityReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceVelocityVelocityTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationVelocity3DPlugin.hpp"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNEDPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace NEDVelocityStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct NEDVelocityReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct NEDVelocityReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * NEDVelocityReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct NEDVelocityReportType.
            */
            typedef  class NEDVelocityReportType NEDVelocityReportTypeKeyHolder;

            #define NEDVelocityReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NEDVelocityReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NEDVelocityReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NEDVelocityReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define NEDVelocityReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define NEDVelocityReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NEDVelocityReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NEDVelocityReportType*
            NEDVelocityReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NEDVelocityReportType*
            NEDVelocityReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NEDVelocityReportType*
            NEDVelocityReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePluginSupport_copy_data(
                NEDVelocityReportType *out,
                const NEDVelocityReportType *in);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_destroy_data_w_params(
                NEDVelocityReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_destroy_data_ex(
                NEDVelocityReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_destroy_data(
                NEDVelocityReportType *sample);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_print_data(
                const NEDVelocityReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern NEDVelocityReportType*
            NEDVelocityReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NEDVelocityReportType*
            NEDVelocityReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_destroy_key_ex(
                NEDVelocityReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePluginSupport_destroy_key(
                NEDVelocityReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NEDVelocityReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NEDVelocityReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NEDVelocityReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NEDVelocityReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportType *out,
                const NEDVelocityReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            NEDVelocityReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NEDVelocityReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NEDVelocityReportTypePlugin_deserialize_from_cdr_buffer(
                NEDVelocityReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            NEDVelocityReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NEDVelocityReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NEDVelocityReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NEDVelocityReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportTypeKeyHolder *key, 
                const NEDVelocityReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                NEDVelocityReportType *instance, 
                const NEDVelocityReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            NEDVelocityReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NEDVelocityReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            NEDVelocityReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace NEDVelocityStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NEDVelocityReportTypePlugin_227656961_h */

