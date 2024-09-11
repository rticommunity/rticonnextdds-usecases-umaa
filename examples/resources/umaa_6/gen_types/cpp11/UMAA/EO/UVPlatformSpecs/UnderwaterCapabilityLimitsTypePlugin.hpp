

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnderwaterCapabilityLimitsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UnderwaterCapabilityLimitsTypePlugin_298840935_h
#define UnderwaterCapabilityLimitsTypePlugin_298840935_h

#include "UnderwaterCapabilityLimitsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationAcceleration3DPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            #define UnderwaterCapabilityLimitsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define UnderwaterCapabilityLimitsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define UnderwaterCapabilityLimitsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define UnderwaterCapabilityLimitsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define UnderwaterCapabilityLimitsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern UnderwaterCapabilityLimitsType*
            UnderwaterCapabilityLimitsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern UnderwaterCapabilityLimitsType*
            UnderwaterCapabilityLimitsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UnderwaterCapabilityLimitsType*
            UnderwaterCapabilityLimitsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            UnderwaterCapabilityLimitsTypePluginSupport_copy_data(
                UnderwaterCapabilityLimitsType *out,
                const UnderwaterCapabilityLimitsType *in);

            NDDSUSERDllExport extern void 
            UnderwaterCapabilityLimitsTypePluginSupport_destroy_data_w_params(
                UnderwaterCapabilityLimitsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            UnderwaterCapabilityLimitsTypePluginSupport_destroy_data_ex(
                UnderwaterCapabilityLimitsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UnderwaterCapabilityLimitsTypePluginSupport_destroy_data(
                UnderwaterCapabilityLimitsType *sample);

            NDDSUSERDllExport extern void 
            UnderwaterCapabilityLimitsTypePluginSupport_print_data(
                const UnderwaterCapabilityLimitsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            UnderwaterCapabilityLimitsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                UnderwaterCapabilityLimitsType *out,
                const UnderwaterCapabilityLimitsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            UnderwaterCapabilityLimitsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const UnderwaterCapabilityLimitsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            UnderwaterCapabilityLimitsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                UnderwaterCapabilityLimitsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            UnderwaterCapabilityLimitsTypePlugin_deserialize_from_cdr_buffer(
                UnderwaterCapabilityLimitsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            UnderwaterCapabilityLimitsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            UnderwaterCapabilityLimitsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            UnderwaterCapabilityLimitsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            UnderwaterCapabilityLimitsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            UnderwaterCapabilityLimitsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                UnderwaterCapabilityLimitsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace UVPlatformSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UnderwaterCapabilityLimitsTypePlugin_298840935_h */

