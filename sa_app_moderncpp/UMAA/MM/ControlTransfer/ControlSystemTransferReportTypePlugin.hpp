

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemTransferReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemTransferReportTypePlugin_1351700109_h
#define ControlSystemTransferReportTypePlugin_1351700109_h

#include "ControlSystemTransferReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ControlTransfer {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ControlSystemTransferReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ControlSystemTransferReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ControlSystemTransferReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ControlSystemTransferReportType.
            */
            typedef  class ControlSystemTransferReportType ControlSystemTransferReportTypeKeyHolder;

            #define ControlSystemTransferReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ControlSystemTransferReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ControlSystemTransferReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ControlSystemTransferReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ControlSystemTransferReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ControlSystemTransferReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ControlSystemTransferReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ControlSystemTransferReportType*
            ControlSystemTransferReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ControlSystemTransferReportType*
            ControlSystemTransferReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemTransferReportType*
            ControlSystemTransferReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePluginSupport_copy_data(
                ControlSystemTransferReportType *out,
                const ControlSystemTransferReportType *in);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_destroy_data_w_params(
                ControlSystemTransferReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_destroy_data_ex(
                ControlSystemTransferReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_destroy_data(
                ControlSystemTransferReportType *sample);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_print_data(
                const ControlSystemTransferReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ControlSystemTransferReportType*
            ControlSystemTransferReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemTransferReportType*
            ControlSystemTransferReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_destroy_key_ex(
                ControlSystemTransferReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePluginSupport_destroy_key(
                ControlSystemTransferReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ControlSystemTransferReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ControlSystemTransferReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ControlSystemTransferReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ControlSystemTransferReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportType *out,
                const ControlSystemTransferReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ControlSystemTransferReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ControlSystemTransferReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ControlSystemTransferReportTypePlugin_deserialize_from_cdr_buffer(
                ControlSystemTransferReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ControlSystemTransferReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ControlSystemTransferReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemTransferReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemTransferReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportTypeKeyHolder *key, 
                const ControlSystemTransferReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemTransferReportType *instance, 
                const ControlSystemTransferReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemTransferReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ControlSystemTransferReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ControlSystemTransferReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ControlTransfer  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlSystemTransferReportTypePlugin_1351700109_h */

