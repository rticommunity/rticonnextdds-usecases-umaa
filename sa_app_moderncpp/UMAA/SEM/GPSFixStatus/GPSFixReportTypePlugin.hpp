

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixReportTypePlugin_593219773_h
#define GPSFixReportTypePlugin_593219773_h

#include "GPSFixReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_MSLPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DTimePlugin.hpp"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNEDPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace GPSFixStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GPSFixReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GPSFixReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GPSFixReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GPSFixReportType.
            */
            typedef  class GPSFixReportType GPSFixReportTypeKeyHolder;

            #define GPSFixReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSFixReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSFixReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSFixReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GPSFixReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GPSFixReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSFixReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSFixReportType*
            GPSFixReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSFixReportType*
            GPSFixReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixReportType*
            GPSFixReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePluginSupport_copy_data(
                GPSFixReportType *out,
                const GPSFixReportType *in);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_destroy_data_w_params(
                GPSFixReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_destroy_data_ex(
                GPSFixReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_destroy_data(
                GPSFixReportType *sample);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_print_data(
                const GPSFixReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GPSFixReportType*
            GPSFixReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixReportType*
            GPSFixReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_destroy_key_ex(
                GPSFixReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePluginSupport_destroy_key(
                GPSFixReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSFixReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSFixReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSFixReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSFixReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportType *out,
                const GPSFixReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSFixReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSFixReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSFixReportTypePlugin_deserialize_from_cdr_buffer(
                GPSFixReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSFixReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSFixReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSFixReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSFixReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportTypeKeyHolder *key, 
                const GPSFixReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixReportType *instance, 
                const GPSFixReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GPSFixReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSFixReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSFixReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSFixStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSFixReportTypePlugin_593219773_h */

