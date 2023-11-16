

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeReportTypePlugin_1827048721_h
#define RangeReportTypePlugin_1827048721_h

#include "RangeReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SA/RangeStatus/RangeDataPointTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace RangeStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RangeReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RangeReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RangeReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RangeReportType.
            */
            typedef  class RangeReportType RangeReportTypeKeyHolder;

            #define RangeReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RangeReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RangeReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RangeReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RangeReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RangeReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RangeReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RangeReportType*
            RangeReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RangeReportType*
            RangeReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeReportType*
            RangeReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePluginSupport_copy_data(
                RangeReportType *out,
                const RangeReportType *in);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_destroy_data_w_params(
                RangeReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_destroy_data_ex(
                RangeReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_destroy_data(
                RangeReportType *sample);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_print_data(
                const RangeReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RangeReportType*
            RangeReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeReportType*
            RangeReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_destroy_key_ex(
                RangeReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeReportTypePluginSupport_destroy_key(
                RangeReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RangeReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RangeReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RangeReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RangeReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RangeReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportType *out,
                const RangeReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RangeReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RangeReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RangeReportTypePlugin_deserialize_from_cdr_buffer(
                RangeReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RangeReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RangeReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RangeReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RangeReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportTypeKeyHolder *key, 
                const RangeReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RangeReportType *instance, 
                const RangeReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RangeReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RangeReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RangeReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RangeStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RangeReportTypePlugin_1827048721_h */

