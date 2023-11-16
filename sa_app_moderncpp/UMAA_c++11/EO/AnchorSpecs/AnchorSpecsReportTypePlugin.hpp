

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorSpecsReportTypePlugin_431074103_h
#define AnchorSpecsReportTypePlugin_431074103_h

#include "AnchorSpecsReportType.hpp"

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
        namespace AnchorSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AnchorSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AnchorSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AnchorSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AnchorSpecsReportType.
            */
            typedef class AnchorSpecsReportType AnchorSpecsReportTypeKeyHolder;

            #define AnchorSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnchorSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnchorSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnchorSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AnchorSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AnchorSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnchorSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnchorSpecsReportType*
            AnchorSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnchorSpecsReportType*
            AnchorSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorSpecsReportType*
            AnchorSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePluginSupport_copy_data(
                AnchorSpecsReportType *out,
                const AnchorSpecsReportType *in);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_destroy_data_w_params(
                AnchorSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_destroy_data_ex(
                AnchorSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_destroy_data(
                AnchorSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_print_data(
                const AnchorSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AnchorSpecsReportType*
            AnchorSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorSpecsReportType*
            AnchorSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_destroy_key_ex(
                AnchorSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePluginSupport_destroy_key(
                AnchorSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnchorSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnchorSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnchorSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnchorSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportType *out,
                const AnchorSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnchorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnchorSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnchorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                AnchorSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnchorSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnchorSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnchorSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnchorSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportTypeKeyHolder *key, 
                const AnchorSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AnchorSpecsReportType *instance, 
                const AnchorSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AnchorSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnchorSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnchorSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AnchorSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnchorSpecsReportTypePlugin_431074103_h */

