

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BilgePumpCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BilgePumpCommandAckReportTypePlugin_332314027_h
#define BilgePumpCommandAckReportTypePlugin_332314027_h

#include "BilgePumpCommandAckReportType.hpp"

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
    namespace EO {
        namespace BilgePumpControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BilgePumpCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BilgePumpCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BilgePumpCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BilgePumpCommandAckReportType.
            */
            typedef class BilgePumpCommandAckReportType BilgePumpCommandAckReportTypeKeyHolder;

            #define BilgePumpCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BilgePumpCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BilgePumpCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BilgePumpCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BilgePumpCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BilgePumpCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BilgePumpCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BilgePumpCommandAckReportType*
            BilgePumpCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BilgePumpCommandAckReportType*
            BilgePumpCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpCommandAckReportType*
            BilgePumpCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePluginSupport_copy_data(
                BilgePumpCommandAckReportType *out,
                const BilgePumpCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_destroy_data_w_params(
                BilgePumpCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_destroy_data_ex(
                BilgePumpCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_destroy_data(
                BilgePumpCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_print_data(
                const BilgePumpCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BilgePumpCommandAckReportType*
            BilgePumpCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpCommandAckReportType*
            BilgePumpCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_destroy_key_ex(
                BilgePumpCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePluginSupport_destroy_key(
                BilgePumpCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BilgePumpCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BilgePumpCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BilgePumpCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BilgePumpCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportType *out,
                const BilgePumpCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BilgePumpCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BilgePumpCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BilgePumpCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                BilgePumpCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BilgePumpCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportTypeKeyHolder *key, 
                const BilgePumpCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpCommandAckReportType *instance, 
                const BilgePumpCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BilgePumpCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BilgePumpCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BilgePumpControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BilgePumpCommandAckReportTypePlugin_332314027_h */

