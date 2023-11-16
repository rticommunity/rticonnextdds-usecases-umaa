

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingWindDirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingWindDirectionTypePlugin_685369515_h
#define HeadingWindDirectionTypePlugin_685369515_h

#include "HeadingWindDirectionType.hpp"

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

            #define HeadingWindDirectionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingWindDirectionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingWindDirectionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingWindDirectionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingWindDirectionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingWindDirectionType*
            HeadingWindDirectionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingWindDirectionType*
            HeadingWindDirectionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingWindDirectionType*
            HeadingWindDirectionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionTypePluginSupport_copy_data(
                HeadingWindDirectionType *out,
                const HeadingWindDirectionType *in);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePluginSupport_destroy_data_w_params(
                HeadingWindDirectionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePluginSupport_destroy_data_ex(
                HeadingWindDirectionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePluginSupport_destroy_data(
                HeadingWindDirectionType *sample);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePluginSupport_print_data(
                const HeadingWindDirectionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeadingWindDirectionTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeadingWindDirectionTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeadingWindDirectionTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingWindDirectionType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingWindDirectionType *out,
                const HeadingWindDirectionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingWindDirectionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingWindDirectionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingWindDirectionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingWindDirectionTypePlugin_deserialize_from_cdr_buffer(
                HeadingWindDirectionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingWindDirectionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingWindDirectionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeadingWindDirectionTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeadingWindDirectionTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingWindDirectionTypePlugin_685369515_h */

