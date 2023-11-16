

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorSpecsReportTypePlugin_985591458_h
#define PropulsorSpecsReportTypePlugin_985591458_h

#include "PropulsorSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorSpecsReportType.
            */
            typedef  class PropulsorSpecsReportType PropulsorSpecsReportTypeKeyHolder;

            #define PropulsorSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorSpecsReportType*
            PropulsorSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorSpecsReportType*
            PropulsorSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorSpecsReportType*
            PropulsorSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePluginSupport_copy_data(
                PropulsorSpecsReportType *out,
                const PropulsorSpecsReportType *in);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_destroy_data_w_params(
                PropulsorSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_destroy_data_ex(
                PropulsorSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_destroy_data(
                PropulsorSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_print_data(
                const PropulsorSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorSpecsReportType*
            PropulsorSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorSpecsReportType*
            PropulsorSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_destroy_key_ex(
                PropulsorSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePluginSupport_destroy_key(
                PropulsorSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportType *out,
                const PropulsorSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                PropulsorSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportTypeKeyHolder *key, 
                const PropulsorSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsReportType *instance, 
                const PropulsorSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorSpecsReportTypePlugin_985591458_h */

