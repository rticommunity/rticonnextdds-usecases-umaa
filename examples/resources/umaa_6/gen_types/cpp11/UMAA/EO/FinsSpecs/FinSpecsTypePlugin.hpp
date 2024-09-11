

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinSpecsTypePlugin_180767099_h
#define FinSpecsTypePlugin_180767099_h

#include "FinSpecsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position3DBodyXYZPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DPlatformTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace FinsSpecs {

            #define FinSpecsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinSpecsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinSpecsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinSpecsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinSpecsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinSpecsType*
            FinSpecsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinSpecsType*
            FinSpecsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinSpecsType*
            FinSpecsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsTypePluginSupport_copy_data(
                FinSpecsType *out,
                const FinSpecsType *in);

            NDDSUSERDllExport extern void 
            FinSpecsTypePluginSupport_destroy_data_w_params(
                FinSpecsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinSpecsTypePluginSupport_destroy_data_ex(
                FinSpecsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinSpecsTypePluginSupport_destroy_data(
                FinSpecsType *sample);

            NDDSUSERDllExport extern void 
            FinSpecsTypePluginSupport_print_data(
                const FinSpecsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FinSpecsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsType *out,
                const FinSpecsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinSpecsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinSpecsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinSpecsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinSpecsTypePlugin_deserialize_from_cdr_buffer(
                FinSpecsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinSpecsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinSpecsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinSpecsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinSpecsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinSpecsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinSpecsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace FinsSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinSpecsTypePlugin_180767099_h */

