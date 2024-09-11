

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorReportTypePlugin_1791862712_h
#define IlluminatorReportTypePlugin_1791862712_h

#include "IlluminatorReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SEM/BaseType/RGBTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace IlluminatorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct IlluminatorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct IlluminatorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * IlluminatorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct IlluminatorReportType.
            */
            typedef class IlluminatorReportType IlluminatorReportTypeKeyHolder;

            #define IlluminatorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define IlluminatorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define IlluminatorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorReportType*
            IlluminatorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorReportType*
            IlluminatorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorReportType*
            IlluminatorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePluginSupport_copy_data(
                IlluminatorReportType *out,
                const IlluminatorReportType *in);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_destroy_data_w_params(
                IlluminatorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_destroy_data_ex(
                IlluminatorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_destroy_data(
                IlluminatorReportType *sample);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_print_data(
                const IlluminatorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern IlluminatorReportType*
            IlluminatorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorReportType*
            IlluminatorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_destroy_key_ex(
                IlluminatorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePluginSupport_destroy_key(
                IlluminatorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            IlluminatorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            IlluminatorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            IlluminatorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            IlluminatorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportType *out,
                const IlluminatorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            IlluminatorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const IlluminatorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            IlluminatorReportTypePlugin_deserialize_from_cdr_buffer(
                IlluminatorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            IlluminatorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportTypeKeyHolder *key, 
                const IlluminatorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorReportType *instance, 
                const IlluminatorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            IlluminatorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            IlluminatorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace IlluminatorStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* IlluminatorReportTypePlugin_1791862712_h */

