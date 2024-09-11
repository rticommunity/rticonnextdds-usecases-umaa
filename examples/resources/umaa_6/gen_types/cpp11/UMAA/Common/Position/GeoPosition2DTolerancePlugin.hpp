

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition2DTolerance.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeoPosition2DTolerancePlugin_159407299_h
#define GeoPosition2DTolerancePlugin_159407299_h

#include "GeoPosition2DTolerance.hpp"

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
        namespace Position {

            #define GeoPosition2DTolerancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeoPosition2DTolerancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeoPosition2DTolerancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeoPosition2DTolerancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeoPosition2DTolerancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeoPosition2DTolerance*
            GeoPosition2DTolerancePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeoPosition2DTolerance*
            GeoPosition2DTolerancePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeoPosition2DTolerance*
            GeoPosition2DTolerancePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DTolerancePluginSupport_copy_data(
                GeoPosition2DTolerance *out,
                const GeoPosition2DTolerance *in);

            NDDSUSERDllExport extern void 
            GeoPosition2DTolerancePluginSupport_destroy_data_w_params(
                GeoPosition2DTolerance *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeoPosition2DTolerancePluginSupport_destroy_data_ex(
                GeoPosition2DTolerance *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeoPosition2DTolerancePluginSupport_destroy_data(
                GeoPosition2DTolerance *sample);

            NDDSUSERDllExport extern void 
            GeoPosition2DTolerancePluginSupport_print_data(
                const GeoPosition2DTolerance *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DTolerancePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DTolerance *out,
                const GeoPosition2DTolerance *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeoPosition2DTolerancePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeoPosition2DTolerance *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DTolerancePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DTolerance **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPosition2DTolerancePlugin_deserialize_from_cdr_buffer(
                GeoPosition2DTolerance *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DTolerancePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeoPosition2DTolerancePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DTolerancePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DTolerancePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DTolerancePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DTolerance ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Position  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeoPosition2DTolerancePlugin_159407299_h */

