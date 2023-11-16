

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDeadReckoningCommandReportTypePlugin_371217476_h
#define LocalDeadReckoningCommandReportTypePlugin_371217476_h

#include "LocalDeadReckoningCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionVelocityTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace LocalDeadReckoning {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalDeadReckoningCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalDeadReckoningCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalDeadReckoningCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalDeadReckoningCommandReportType.
            */
            typedef  class LocalDeadReckoningCommandReportType LocalDeadReckoningCommandReportTypeKeyHolder;

            #define LocalDeadReckoningCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalDeadReckoningCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalDeadReckoningCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalDeadReckoningCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalDeadReckoningCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalDeadReckoningCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalDeadReckoningCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalDeadReckoningCommandReportType*
            LocalDeadReckoningCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalDeadReckoningCommandReportType*
            LocalDeadReckoningCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandReportType*
            LocalDeadReckoningCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePluginSupport_copy_data(
                LocalDeadReckoningCommandReportType *out,
                const LocalDeadReckoningCommandReportType *in);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_destroy_data_w_params(
                LocalDeadReckoningCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_destroy_data_ex(
                LocalDeadReckoningCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_destroy_data(
                LocalDeadReckoningCommandReportType *sample);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_print_data(
                const LocalDeadReckoningCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalDeadReckoningCommandReportType*
            LocalDeadReckoningCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandReportType*
            LocalDeadReckoningCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_destroy_key_ex(
                LocalDeadReckoningCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePluginSupport_destroy_key(
                LocalDeadReckoningCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalDeadReckoningCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalDeadReckoningCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalDeadReckoningCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportType *out,
                const LocalDeadReckoningCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalDeadReckoningCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandReportTypePlugin_deserialize_from_cdr_buffer(
                LocalDeadReckoningCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalDeadReckoningCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportTypeKeyHolder *key, 
                const LocalDeadReckoningCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandReportType *instance, 
                const LocalDeadReckoningCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalDeadReckoningCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalDeadReckoningCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalDeadReckoningCommandReportTypePlugin_371217476_h */

