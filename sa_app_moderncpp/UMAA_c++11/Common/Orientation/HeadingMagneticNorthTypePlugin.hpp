

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingMagneticNorthType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingMagneticNorthTypePlugin_629601557_h
#define HeadingMagneticNorthTypePlugin_629601557_h

#include "HeadingMagneticNorthType.hpp"

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

            #define HeadingMagneticNorthTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingMagneticNorthTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingMagneticNorthTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingMagneticNorthTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingMagneticNorthTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingMagneticNorthType*
            HeadingMagneticNorthTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingMagneticNorthType*
            HeadingMagneticNorthTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingMagneticNorthType*
            HeadingMagneticNorthTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthTypePluginSupport_copy_data(
                HeadingMagneticNorthType *out,
                const HeadingMagneticNorthType *in);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePluginSupport_destroy_data_w_params(
                HeadingMagneticNorthType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePluginSupport_destroy_data_ex(
                HeadingMagneticNorthType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePluginSupport_destroy_data(
                HeadingMagneticNorthType *sample);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePluginSupport_print_data(
                const HeadingMagneticNorthType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeadingMagneticNorthTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeadingMagneticNorthTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeadingMagneticNorthTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingMagneticNorthType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingMagneticNorthType *out,
                const HeadingMagneticNorthType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingMagneticNorthTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingMagneticNorthType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingMagneticNorthType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingMagneticNorthTypePlugin_deserialize_from_cdr_buffer(
                HeadingMagneticNorthType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingMagneticNorthTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingMagneticNorthType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeadingMagneticNorthTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeadingMagneticNorthTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingMagneticNorthTypePlugin_629601557_h */

