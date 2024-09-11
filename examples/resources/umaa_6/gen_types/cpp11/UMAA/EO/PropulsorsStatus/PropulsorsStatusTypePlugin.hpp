

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorsStatusTypePlugin_638034796_h
#define PropulsorsStatusTypePlugin_638034796_h

#include "PropulsorsStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/PropulsorsStatus/PropulsorStatusTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorsStatus {

            #define PropulsorsStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorsStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorsStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorsStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorsStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorsStatusType*
            PropulsorsStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorsStatusType*
            PropulsorsStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsStatusType*
            PropulsorsStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsStatusTypePluginSupport_copy_data(
                PropulsorsStatusType *out,
                const PropulsorsStatusType *in);

            NDDSUSERDllExport extern void 
            PropulsorsStatusTypePluginSupport_destroy_data_w_params(
                PropulsorsStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorsStatusTypePluginSupport_destroy_data_ex(
                PropulsorsStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsStatusTypePluginSupport_destroy_data(
                PropulsorsStatusType *sample);

            NDDSUSERDllExport extern void 
            PropulsorsStatusTypePluginSupport_print_data(
                const PropulsorsStatusType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropulsorsStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsStatusType *out,
                const PropulsorsStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorsStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorsStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorsStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorsStatusTypePlugin_deserialize_from_cdr_buffer(
                PropulsorsStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorsStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorsStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace PropulsorsStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorsStatusTypePlugin_638034796_h */

