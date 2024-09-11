

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OperationalModeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OperationalModeReportTypePlugin_1661065857_h
#define OperationalModeReportTypePlugin_1661065857_h

#include "OperationalModeReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace OperationalModeStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct OperationalModeReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct OperationalModeReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * OperationalModeReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct OperationalModeReportType.
            */
            typedef class OperationalModeReportType OperationalModeReportTypeKeyHolder;

            #define OperationalModeReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OperationalModeReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OperationalModeReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OperationalModeReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define OperationalModeReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define OperationalModeReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OperationalModeReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OperationalModeReportType*
            OperationalModeReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OperationalModeReportType*
            OperationalModeReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeReportType*
            OperationalModeReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePluginSupport_copy_data(
                OperationalModeReportType *out,
                const OperationalModeReportType *in);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_destroy_data_w_params(
                OperationalModeReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_destroy_data_ex(
                OperationalModeReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_destroy_data(
                OperationalModeReportType *sample);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_print_data(
                const OperationalModeReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern OperationalModeReportType*
            OperationalModeReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeReportType*
            OperationalModeReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_destroy_key_ex(
                OperationalModeReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePluginSupport_destroy_key(
                OperationalModeReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OperationalModeReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OperationalModeReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OperationalModeReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OperationalModeReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportType *out,
                const OperationalModeReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OperationalModeReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OperationalModeReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OperationalModeReportTypePlugin_deserialize_from_cdr_buffer(
                OperationalModeReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OperationalModeReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OperationalModeReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportTypeKeyHolder *key, 
                const OperationalModeReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeReportType *instance, 
                const OperationalModeReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OperationalModeReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            OperationalModeReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace OperationalModeStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OperationalModeReportTypePlugin_1661065857_h */

