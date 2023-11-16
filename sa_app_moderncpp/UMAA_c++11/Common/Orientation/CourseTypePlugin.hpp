

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CourseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CourseTypePlugin_1901767255_h
#define CourseTypePlugin_1901767255_h

#include "CourseType.hpp"

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

            #define CourseTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CourseTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CourseTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CourseTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CourseTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CourseType*
            CourseTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CourseType*
            CourseTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CourseType*
            CourseTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CourseTypePluginSupport_copy_data(
                CourseType *out,
                const CourseType *in);

            NDDSUSERDllExport extern void 
            CourseTypePluginSupport_destroy_data_w_params(
                CourseType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CourseTypePluginSupport_destroy_data_ex(
                CourseType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CourseTypePluginSupport_destroy_data(
                CourseType *sample);

            NDDSUSERDllExport extern void 
            CourseTypePluginSupport_print_data(
                const CourseType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CourseTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CourseTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CourseTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CourseTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CourseTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CourseType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CourseTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CourseType *out,
                const CourseType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CourseTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CourseType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CourseTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CourseType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CourseTypePlugin_deserialize_from_cdr_buffer(
                CourseType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CourseTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CourseTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CourseTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CourseTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CourseTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CourseType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CourseTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CourseTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CourseTypePlugin_1901767255_h */

