

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalPoseReportTypePlugin_1111239035_h
#define GlobalPoseReportTypePlugin_1111239035_h

#include "GlobalPoseReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DNEDTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace GlobalPoseStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalPoseReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalPoseReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalPoseReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalPoseReportType.
            */
            typedef class GlobalPoseReportType GlobalPoseReportTypeKeyHolder;

            #define GlobalPoseReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalPoseReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalPoseReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalPoseReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalPoseReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalPoseReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalPoseReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalPoseReportType*
            GlobalPoseReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalPoseReportType*
            GlobalPoseReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseReportType*
            GlobalPoseReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePluginSupport_copy_data(
                GlobalPoseReportType *out,
                const GlobalPoseReportType *in);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_destroy_data_w_params(
                GlobalPoseReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_destroy_data_ex(
                GlobalPoseReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_destroy_data(
                GlobalPoseReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_print_data(
                const GlobalPoseReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalPoseReportType*
            GlobalPoseReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalPoseReportType*
            GlobalPoseReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_destroy_key_ex(
                GlobalPoseReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePluginSupport_destroy_key(
                GlobalPoseReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalPoseReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalPoseReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalPoseReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalPoseReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportType *out,
                const GlobalPoseReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalPoseReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalPoseReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalPoseReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalPoseReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalPoseReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalPoseReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportTypeKeyHolder *key, 
                const GlobalPoseReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalPoseReportType *instance, 
                const GlobalPoseReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalPoseReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalPoseReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalPoseReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalPoseStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalPoseReportTypePlugin_1111239035_h */

