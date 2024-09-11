

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ECEFPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ECEFPoseReportTypePlugin_1687389105_h
#define ECEFPoseReportTypePlugin_1687389105_h

#include "ECEFPoseReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionECEFTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DNEDTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace ECEFPoseStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ECEFPoseReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ECEFPoseReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ECEFPoseReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ECEFPoseReportType.
            */
            typedef class ECEFPoseReportType ECEFPoseReportTypeKeyHolder;

            #define ECEFPoseReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ECEFPoseReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ECEFPoseReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ECEFPoseReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ECEFPoseReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ECEFPoseReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ECEFPoseReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ECEFPoseReportType*
            ECEFPoseReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ECEFPoseReportType*
            ECEFPoseReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ECEFPoseReportType*
            ECEFPoseReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePluginSupport_copy_data(
                ECEFPoseReportType *out,
                const ECEFPoseReportType *in);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_destroy_data_w_params(
                ECEFPoseReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_destroy_data_ex(
                ECEFPoseReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_destroy_data(
                ECEFPoseReportType *sample);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_print_data(
                const ECEFPoseReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ECEFPoseReportType*
            ECEFPoseReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ECEFPoseReportType*
            ECEFPoseReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_destroy_key_ex(
                ECEFPoseReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePluginSupport_destroy_key(
                ECEFPoseReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ECEFPoseReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ECEFPoseReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ECEFPoseReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ECEFPoseReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportType *out,
                const ECEFPoseReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ECEFPoseReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ECEFPoseReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ECEFPoseReportTypePlugin_deserialize_from_cdr_buffer(
                ECEFPoseReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ECEFPoseReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ECEFPoseReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ECEFPoseReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ECEFPoseReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportTypeKeyHolder *key, 
                const ECEFPoseReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ECEFPoseReportType *instance, 
                const ECEFPoseReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ECEFPoseReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ECEFPoseReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ECEFPoseReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ECEFPoseStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ECEFPoseReportTypePlugin_1687389105_h */

