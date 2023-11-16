

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverCommandAckReportTypePlugin_890053681_h
#define LocalHoverCommandAckReportTypePlugin_890053681_h

#include "LocalHoverCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTypePlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalHoverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalHoverCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalHoverCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalHoverCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalHoverCommandAckReportType.
            */
            typedef class LocalHoverCommandAckReportType LocalHoverCommandAckReportTypeKeyHolder;

            #define LocalHoverCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalHoverCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalHoverCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalHoverCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalHoverCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalHoverCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalHoverCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalHoverCommandAckReportType*
            LocalHoverCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalHoverCommandAckReportType*
            LocalHoverCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalHoverCommandAckReportType*
            LocalHoverCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePluginSupport_copy_data(
                LocalHoverCommandAckReportType *out,
                const LocalHoverCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_destroy_data_w_params(
                LocalHoverCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_destroy_data_ex(
                LocalHoverCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_destroy_data(
                LocalHoverCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_print_data(
                const LocalHoverCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalHoverCommandAckReportType*
            LocalHoverCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalHoverCommandAckReportType*
            LocalHoverCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_destroy_key_ex(
                LocalHoverCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePluginSupport_destroy_key(
                LocalHoverCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalHoverCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalHoverCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalHoverCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalHoverCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportType *out,
                const LocalHoverCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalHoverCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalHoverCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalHoverCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                LocalHoverCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalHoverCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalHoverCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportTypeKeyHolder *key, 
                const LocalHoverCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverCommandAckReportType *instance, 
                const LocalHoverCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalHoverCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalHoverCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalHoverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalHoverCommandAckReportTypePlugin_890053681_h */

