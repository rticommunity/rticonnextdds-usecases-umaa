

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from YawZNEDTolerance.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef YawZNEDTolerancePlugin_1197354966_h
#define YawZNEDTolerancePlugin_1197354966_h

#include "YawZNEDTolerance.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/YawZNEDTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define YawZNEDTolerancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YawZNEDTolerancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YawZNEDTolerancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YawZNEDTolerancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YawZNEDTolerancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YawZNEDTolerance*
            YawZNEDTolerancePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YawZNEDTolerance*
            YawZNEDTolerancePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawZNEDTolerance*
            YawZNEDTolerancePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YawZNEDTolerancePluginSupport_copy_data(
                YawZNEDTolerance *out,
                const YawZNEDTolerance *in);

            NDDSUSERDllExport extern void 
            YawZNEDTolerancePluginSupport_destroy_data_w_params(
                YawZNEDTolerance *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YawZNEDTolerancePluginSupport_destroy_data_ex(
                YawZNEDTolerance *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawZNEDTolerancePluginSupport_destroy_data(
                YawZNEDTolerance *sample);

            NDDSUSERDllExport extern void 
            YawZNEDTolerancePluginSupport_print_data(
                const YawZNEDTolerance *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            YawZNEDTolerancePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawZNEDTolerance *out,
                const YawZNEDTolerance *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            YawZNEDTolerancePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const YawZNEDTolerance *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            YawZNEDTolerancePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                YawZNEDTolerance **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            YawZNEDTolerancePlugin_deserialize_from_cdr_buffer(
                YawZNEDTolerance *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            YawZNEDTolerancePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YawZNEDTolerancePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YawZNEDTolerancePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YawZNEDTolerancePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            YawZNEDTolerancePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                YawZNEDTolerance ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* YawZNEDTolerancePlugin_1197354966_h */

