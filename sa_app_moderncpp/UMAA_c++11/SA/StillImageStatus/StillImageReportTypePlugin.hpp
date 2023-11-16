

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageReportTypePlugin_658394102_h
#define StillImageReportTypePlugin_658394102_h

#include "StillImageReportType.hpp"

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
    namespace SA {
        namespace StillImageStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct StillImageReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct StillImageReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * StillImageReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct StillImageReportType.
            */
            typedef class StillImageReportType StillImageReportTypeKeyHolder;

            #define StillImageReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StillImageReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StillImageReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StillImageReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define StillImageReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define StillImageReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StillImageReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StillImageReportType*
            StillImageReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StillImageReportType*
            StillImageReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StillImageReportType*
            StillImageReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePluginSupport_copy_data(
                StillImageReportType *out,
                const StillImageReportType *in);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_destroy_data_w_params(
                StillImageReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_destroy_data_ex(
                StillImageReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_destroy_data(
                StillImageReportType *sample);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_print_data(
                const StillImageReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern StillImageReportType*
            StillImageReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StillImageReportType*
            StillImageReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_destroy_key_ex(
                StillImageReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StillImageReportTypePluginSupport_destroy_key(
                StillImageReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StillImageReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StillImageReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StillImageReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StillImageReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StillImageReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportType *out,
                const StillImageReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StillImageReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StillImageReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StillImageReportTypePlugin_deserialize_from_cdr_buffer(
                StillImageReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StillImageReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StillImageReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StillImageReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StillImageReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportTypeKeyHolder *key, 
                const StillImageReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                StillImageReportType *instance, 
                const StillImageReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            StillImageReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StillImageReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StillImageReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StillImageStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StillImageReportTypePlugin_658394102_h */

