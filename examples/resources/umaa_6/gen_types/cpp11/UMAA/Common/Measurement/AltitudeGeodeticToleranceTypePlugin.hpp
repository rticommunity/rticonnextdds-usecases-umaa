

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeGeodeticToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeGeodeticToleranceTypePlugin_1646873550_h
#define AltitudeGeodeticToleranceTypePlugin_1646873550_h

#include "AltitudeGeodeticToleranceType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define AltitudeGeodeticToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AltitudeGeodeticToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AltitudeGeodeticToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AltitudeGeodeticToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AltitudeGeodeticToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AltitudeGeodeticToleranceType*
            AltitudeGeodeticToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AltitudeGeodeticToleranceType*
            AltitudeGeodeticToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AltitudeGeodeticToleranceType*
            AltitudeGeodeticToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticToleranceTypePluginSupport_copy_data(
                AltitudeGeodeticToleranceType *out,
                const AltitudeGeodeticToleranceType *in);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticToleranceTypePluginSupport_destroy_data_w_params(
                AltitudeGeodeticToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticToleranceTypePluginSupport_destroy_data_ex(
                AltitudeGeodeticToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticToleranceTypePluginSupport_destroy_data(
                AltitudeGeodeticToleranceType *sample);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticToleranceTypePluginSupport_print_data(
                const AltitudeGeodeticToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticToleranceType *out,
                const AltitudeGeodeticToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AltitudeGeodeticToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AltitudeGeodeticToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AltitudeGeodeticToleranceTypePlugin_deserialize_from_cdr_buffer(
                AltitudeGeodeticToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AltitudeGeodeticToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticToleranceType ** sample,
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

#endif /* AltitudeGeodeticToleranceTypePlugin_1646873550_h */

