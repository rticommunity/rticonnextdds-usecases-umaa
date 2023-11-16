

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixStatusReportTypePlugin_537848047_h
#define GPSFixStatusReportTypePlugin_537848047_h

#include "GPSFixStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_WGS84Plugin.hpp"

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
            * By default, this type is struct GPSFixStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GPSFixStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GPSFixStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GPSFixStatusReportType.
            */
            typedef class GPSFixStatusReportType GPSFixStatusReportTypeKeyHolder;

            #define GPSFixStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSFixStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSFixStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSFixStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GPSFixStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GPSFixStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSFixStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSFixStatusReportType*
            GPSFixStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSFixStatusReportType*
            GPSFixStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixStatusReportType*
            GPSFixStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePluginSupport_copy_data(
                GPSFixStatusReportType *out,
                const GPSFixStatusReportType *in);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_destroy_data_w_params(
                GPSFixStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_destroy_data_ex(
                GPSFixStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_destroy_data(
                GPSFixStatusReportType *sample);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_print_data(
                const GPSFixStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GPSFixStatusReportType*
            GPSFixStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixStatusReportType*
            GPSFixStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_destroy_key_ex(
                GPSFixStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePluginSupport_destroy_key(
                GPSFixStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSFixStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSFixStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSFixStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSFixStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportType *out,
                const GPSFixStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSFixStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSFixStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSFixStatusReportTypePlugin_deserialize_from_cdr_buffer(
                GPSFixStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSFixStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSFixStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSFixStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSFixStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportTypeKeyHolder *key, 
                const GPSFixStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixStatusReportType *instance, 
                const GPSFixStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GPSFixStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSFixStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSFixStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSFixStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSFixStatusReportTypePlugin_537848047_h */

