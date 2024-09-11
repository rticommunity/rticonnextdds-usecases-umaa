

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Velocity3DPlatformNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Velocity3DPlatformNEDTypePlugin_1025904494_h
#define Velocity3DPlatformNEDTypePlugin_1025904494_h

#include "Velocity3DPlatformNEDType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/EngineeringCoordinateAxesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Velocity3DPlatformNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Velocity3DPlatformNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Velocity3DPlatformNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Velocity3DPlatformNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Velocity3DPlatformNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Velocity3DPlatformNEDType*
            Velocity3DPlatformNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Velocity3DPlatformNEDType*
            Velocity3DPlatformNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Velocity3DPlatformNEDType*
            Velocity3DPlatformNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Velocity3DPlatformNEDTypePluginSupport_copy_data(
                Velocity3DPlatformNEDType *out,
                const Velocity3DPlatformNEDType *in);

            NDDSUSERDllExport extern void 
            Velocity3DPlatformNEDTypePluginSupport_destroy_data_w_params(
                Velocity3DPlatformNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Velocity3DPlatformNEDTypePluginSupport_destroy_data_ex(
                Velocity3DPlatformNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Velocity3DPlatformNEDTypePluginSupport_destroy_data(
                Velocity3DPlatformNEDType *sample);

            NDDSUSERDllExport extern void 
            Velocity3DPlatformNEDTypePluginSupport_print_data(
                const Velocity3DPlatformNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Velocity3DPlatformNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3DPlatformNEDType *out,
                const Velocity3DPlatformNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Velocity3DPlatformNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Velocity3DPlatformNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Velocity3DPlatformNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3DPlatformNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Velocity3DPlatformNEDTypePlugin_deserialize_from_cdr_buffer(
                Velocity3DPlatformNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Velocity3DPlatformNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Velocity3DPlatformNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Velocity3DPlatformNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Velocity3DPlatformNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Velocity3DPlatformNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Velocity3DPlatformNEDType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Velocity3DPlatformNEDTypePlugin_1025904494_h */

