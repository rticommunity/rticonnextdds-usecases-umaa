

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraConfigReportTypePlugin_393099409_h
#define CameraConfigReportTypePlugin_393099409_h

#include "CameraConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraConfigReportType.
            */
            typedef class CameraConfigReportType CameraConfigReportTypeKeyHolder;

            #define CameraConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraConfigReportType*
            CameraConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraConfigReportType*
            CameraConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraConfigReportType*
            CameraConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePluginSupport_copy_data(
                CameraConfigReportType *out,
                const CameraConfigReportType *in);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_destroy_data_w_params(
                CameraConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_destroy_data_ex(
                CameraConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_destroy_data(
                CameraConfigReportType *sample);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_print_data(
                const CameraConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraConfigReportType*
            CameraConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraConfigReportType*
            CameraConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_destroy_key_ex(
                CameraConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePluginSupport_destroy_key(
                CameraConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportType *out,
                const CameraConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraConfigReportTypePlugin_deserialize_from_cdr_buffer(
                CameraConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportTypeKeyHolder *key, 
                const CameraConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraConfigReportType *instance, 
                const CameraConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraConfigReportTypePlugin_393099409_h */

