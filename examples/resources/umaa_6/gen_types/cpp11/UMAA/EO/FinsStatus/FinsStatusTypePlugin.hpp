

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinsStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinsStatusTypePlugin_338837756_h
#define FinsStatusTypePlugin_338837756_h

#include "FinsStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/FinsStatus/FinStatusTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinsStatus {

            #define FinsStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinsStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinsStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinsStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinsStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinsStatusType*
            FinsStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinsStatusType*
            FinsStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinsStatusType*
            FinsStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinsStatusTypePluginSupport_copy_data(
                FinsStatusType *out,
                const FinsStatusType *in);

            NDDSUSERDllExport extern void 
            FinsStatusTypePluginSupport_destroy_data_w_params(
                FinsStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinsStatusTypePluginSupport_destroy_data_ex(
                FinsStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinsStatusTypePluginSupport_destroy_data(
                FinsStatusType *sample);

            NDDSUSERDllExport extern void 
            FinsStatusTypePluginSupport_print_data(
                const FinsStatusType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FinsStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinsStatusType *out,
                const FinsStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinsStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinsStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinsStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinsStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinsStatusTypePlugin_deserialize_from_cdr_buffer(
                FinsStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinsStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinsStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinsStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinsStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinsStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinsStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace FinsStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinsStatusTypePlugin_338837756_h */

