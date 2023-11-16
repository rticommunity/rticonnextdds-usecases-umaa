

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundingBoxType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BoundingBoxTypePlugin_139266429_h
#define BoundingBoxTypePlugin_139266429_h

#include "BoundingBoxType.hpp"

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
    namespace SA {
        namespace BoundingBox {

            #define BoundingBoxTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BoundingBoxTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BoundingBoxTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BoundingBoxTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BoundingBoxTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BoundingBoxType*
            BoundingBoxTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BoundingBoxType*
            BoundingBoxTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BoundingBoxType*
            BoundingBoxTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BoundingBoxTypePluginSupport_copy_data(
                BoundingBoxType *out,
                const BoundingBoxType *in);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePluginSupport_destroy_data_w_params(
                BoundingBoxType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePluginSupport_destroy_data_ex(
                BoundingBoxType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePluginSupport_destroy_data(
                BoundingBoxType *sample);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePluginSupport_print_data(
                const BoundingBoxType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BoundingBoxTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BoundingBoxTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BoundingBoxTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BoundingBoxTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BoundingBoxType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BoundingBoxTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BoundingBoxType *out,
                const BoundingBoxType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BoundingBoxTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BoundingBoxType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BoundingBoxTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BoundingBoxType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BoundingBoxTypePlugin_deserialize_from_cdr_buffer(
                BoundingBoxType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BoundingBoxTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BoundingBoxTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BoundingBoxTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BoundingBoxTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BoundingBoxTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BoundingBoxType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BoundingBoxTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BoundingBoxTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BoundingBox  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BoundingBoxTypePlugin_139266429_h */

