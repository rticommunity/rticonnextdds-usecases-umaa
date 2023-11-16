

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TamperDetectionReportTypePlugin_1847949767_h
#define TamperDetectionReportTypePlugin_1847949767_h

#include "TamperDetectionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace TamperDetectionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TamperDetectionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TamperDetectionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TamperDetectionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TamperDetectionReportType.
            */
            typedef  class TamperDetectionReportType TamperDetectionReportTypeKeyHolder;

            #define TamperDetectionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TamperDetectionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TamperDetectionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TamperDetectionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TamperDetectionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TamperDetectionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TamperDetectionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TamperDetectionReportType*
            TamperDetectionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TamperDetectionReportType*
            TamperDetectionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TamperDetectionReportType*
            TamperDetectionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePluginSupport_copy_data(
                TamperDetectionReportType *out,
                const TamperDetectionReportType *in);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_destroy_data_w_params(
                TamperDetectionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_destroy_data_ex(
                TamperDetectionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_destroy_data(
                TamperDetectionReportType *sample);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_print_data(
                const TamperDetectionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TamperDetectionReportType*
            TamperDetectionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TamperDetectionReportType*
            TamperDetectionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_destroy_key_ex(
                TamperDetectionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePluginSupport_destroy_key(
                TamperDetectionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TamperDetectionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TamperDetectionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TamperDetectionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TamperDetectionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportType *out,
                const TamperDetectionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TamperDetectionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TamperDetectionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TamperDetectionReportTypePlugin_deserialize_from_cdr_buffer(
                TamperDetectionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TamperDetectionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TamperDetectionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TamperDetectionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TamperDetectionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportTypeKeyHolder *key, 
                const TamperDetectionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TamperDetectionReportType *instance, 
                const TamperDetectionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TamperDetectionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TamperDetectionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TamperDetectionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TamperDetectionStatus  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TamperDetectionReportTypePlugin_1847949767_h */

