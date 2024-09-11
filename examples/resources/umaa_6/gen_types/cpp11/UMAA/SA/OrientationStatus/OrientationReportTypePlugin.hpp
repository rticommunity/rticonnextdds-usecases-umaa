

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationReportTypePlugin_1771252905_h
#define OrientationReportTypePlugin_1771252905_h

#include "OrientationReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationVelocityNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationVel3DPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DNEDTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace OrientationStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct OrientationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct OrientationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * OrientationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct OrientationReportType.
            */
            typedef class OrientationReportType OrientationReportTypeKeyHolder;

            #define OrientationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define OrientationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define OrientationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationReportType*
            OrientationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationReportType*
            OrientationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationReportType*
            OrientationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePluginSupport_copy_data(
                OrientationReportType *out,
                const OrientationReportType *in);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_destroy_data_w_params(
                OrientationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_destroy_data_ex(
                OrientationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_destroy_data(
                OrientationReportType *sample);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_print_data(
                const OrientationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern OrientationReportType*
            OrientationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationReportType*
            OrientationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_destroy_key_ex(
                OrientationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationReportTypePluginSupport_destroy_key(
                OrientationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OrientationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OrientationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OrientationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OrientationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OrientationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportType *out,
                const OrientationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OrientationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OrientationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OrientationReportTypePlugin_deserialize_from_cdr_buffer(
                OrientationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OrientationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportTypeKeyHolder *key, 
                const OrientationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                OrientationReportType *instance, 
                const OrientationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            OrientationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OrientationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            OrientationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace OrientationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OrientationReportTypePlugin_1771252905_h */

