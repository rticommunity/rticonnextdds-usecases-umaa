

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingCurrentDirectionType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingCurrentDirectionTypePlugin_363425104_h
#define HeadingCurrentDirectionTypePlugin_363425104_h

#include "HeadingCurrentDirectionType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define HeadingCurrentDirectionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingCurrentDirectionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingCurrentDirectionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingCurrentDirectionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingCurrentDirectionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingCurrentDirectionType*
            HeadingCurrentDirectionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingCurrentDirectionType*
            HeadingCurrentDirectionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingCurrentDirectionType*
            HeadingCurrentDirectionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionTypePluginSupport_copy_data(
                HeadingCurrentDirectionType *out,
                const HeadingCurrentDirectionType *in);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePluginSupport_destroy_data_w_params(
                HeadingCurrentDirectionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePluginSupport_destroy_data_ex(
                HeadingCurrentDirectionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePluginSupport_destroy_data(
                HeadingCurrentDirectionType *sample);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePluginSupport_print_data(
                const HeadingCurrentDirectionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeadingCurrentDirectionTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeadingCurrentDirectionTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeadingCurrentDirectionTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingCurrentDirectionType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingCurrentDirectionType *out,
                const HeadingCurrentDirectionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingCurrentDirectionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingCurrentDirectionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingCurrentDirectionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingCurrentDirectionTypePlugin_deserialize_from_cdr_buffer(
                HeadingCurrentDirectionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingCurrentDirectionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingCurrentDirectionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeadingCurrentDirectionTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeadingCurrentDirectionTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingCurrentDirectionTypePlugin_363425104_h */

