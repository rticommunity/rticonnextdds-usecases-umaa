

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorReportTypePlugin_42171573_h
#define AnchorReportTypePlugin_42171573_h

#include "AnchorReportType.hpp"

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
        namespace AnchorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AnchorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AnchorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AnchorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AnchorReportType.
            */
            typedef  class AnchorReportType AnchorReportTypeKeyHolder;

            #define AnchorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnchorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnchorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnchorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AnchorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AnchorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnchorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnchorReportType*
            AnchorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnchorReportType*
            AnchorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorReportType*
            AnchorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePluginSupport_copy_data(
                AnchorReportType *out,
                const AnchorReportType *in);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_destroy_data_w_params(
                AnchorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_destroy_data_ex(
                AnchorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_destroy_data(
                AnchorReportType *sample);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_print_data(
                const AnchorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AnchorReportType*
            AnchorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorReportType*
            AnchorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_destroy_key_ex(
                AnchorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorReportTypePluginSupport_destroy_key(
                AnchorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnchorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnchorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnchorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnchorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnchorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportType *out,
                const AnchorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnchorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnchorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnchorReportTypePlugin_deserialize_from_cdr_buffer(
                AnchorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnchorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnchorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnchorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnchorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportTypeKeyHolder *key, 
                const AnchorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AnchorReportType *instance, 
                const AnchorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AnchorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnchorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnchorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AnchorStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnchorReportTypePlugin_42171573_h */

