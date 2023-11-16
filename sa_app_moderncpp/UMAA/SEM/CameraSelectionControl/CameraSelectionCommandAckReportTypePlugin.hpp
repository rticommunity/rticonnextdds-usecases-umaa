

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandAckReportTypePlugin_1472724794_h
#define CameraSelectionCommandAckReportTypePlugin_1472724794_h

#include "CameraSelectionCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraSelectionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraSelectionCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraSelectionCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraSelectionCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraSelectionCommandAckReportType.
            */
            typedef  class CameraSelectionCommandAckReportType CameraSelectionCommandAckReportTypeKeyHolder;

            #define CameraSelectionCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraSelectionCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraSelectionCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraSelectionCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraSelectionCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraSelectionCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraSelectionCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraSelectionCommandAckReportType*
            CameraSelectionCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraSelectionCommandAckReportType*
            CameraSelectionCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandAckReportType*
            CameraSelectionCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePluginSupport_copy_data(
                CameraSelectionCommandAckReportType *out,
                const CameraSelectionCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_destroy_data_w_params(
                CameraSelectionCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_destroy_data_ex(
                CameraSelectionCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_destroy_data(
                CameraSelectionCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_print_data(
                const CameraSelectionCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraSelectionCommandAckReportType*
            CameraSelectionCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandAckReportType*
            CameraSelectionCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_destroy_key_ex(
                CameraSelectionCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePluginSupport_destroy_key(
                CameraSelectionCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraSelectionCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraSelectionCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraSelectionCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportType *out,
                const CameraSelectionCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraSelectionCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                CameraSelectionCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraSelectionCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportTypeKeyHolder *key, 
                const CameraSelectionCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandAckReportType *instance, 
                const CameraSelectionCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraSelectionCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraSelectionCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraSelectionControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraSelectionCommandAckReportTypePlugin_1472724794_h */

