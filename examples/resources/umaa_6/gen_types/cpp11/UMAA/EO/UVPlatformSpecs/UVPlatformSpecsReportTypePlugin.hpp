

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformSpecsReportTypePlugin_40299323_h
#define UVPlatformSpecsReportTypePlugin_40299323_h

#include "UVPlatformSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position3DBodyXYZPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct UVPlatformSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct UVPlatformSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * UVPlatformSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct UVPlatformSpecsReportType.
            */
            typedef class UVPlatformSpecsReportType UVPlatformSpecsReportTypeKeyHolder;

            #define UVPlatformSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define UVPlatformSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define UVPlatformSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define UVPlatformSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define UVPlatformSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define UVPlatformSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define UVPlatformSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern UVPlatformSpecsReportType*
            UVPlatformSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern UVPlatformSpecsReportType*
            UVPlatformSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UVPlatformSpecsReportType*
            UVPlatformSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePluginSupport_copy_data(
                UVPlatformSpecsReportType *out,
                const UVPlatformSpecsReportType *in);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_destroy_data_w_params(
                UVPlatformSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_destroy_data_ex(
                UVPlatformSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_destroy_data(
                UVPlatformSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_print_data(
                const UVPlatformSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern UVPlatformSpecsReportType*
            UVPlatformSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UVPlatformSpecsReportType*
            UVPlatformSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_destroy_key_ex(
                UVPlatformSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePluginSupport_destroy_key(
                UVPlatformSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            UVPlatformSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            UVPlatformSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            UVPlatformSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            UVPlatformSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportType *out,
                const UVPlatformSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            UVPlatformSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const UVPlatformSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            UVPlatformSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                UVPlatformSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            UVPlatformSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            UVPlatformSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportTypeKeyHolder *key, 
                const UVPlatformSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformSpecsReportType *instance, 
                const UVPlatformSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            UVPlatformSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            UVPlatformSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace UVPlatformSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UVPlatformSpecsReportTypePlugin_40299323_h */

