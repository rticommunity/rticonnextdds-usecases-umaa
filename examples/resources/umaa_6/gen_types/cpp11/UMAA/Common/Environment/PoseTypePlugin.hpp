

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PoseTypePlugin_237247582_h
#define PoseTypePlugin_237247582_h

#include "PoseType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionNEDTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DNEDTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Environment {

            #define PoseTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PoseTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PoseTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PoseTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PoseTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PoseType*
            PoseTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PoseType*
            PoseTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PoseType*
            PoseTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PoseTypePluginSupport_copy_data(
                PoseType *out,
                const PoseType *in);

            NDDSUSERDllExport extern void 
            PoseTypePluginSupport_destroy_data_w_params(
                PoseType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PoseTypePluginSupport_destroy_data_ex(
                PoseType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PoseTypePluginSupport_destroy_data(
                PoseType *sample);

            NDDSUSERDllExport extern void 
            PoseTypePluginSupport_print_data(
                const PoseType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PoseTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PoseType *out,
                const PoseType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PoseTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PoseType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PoseTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PoseType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PoseTypePlugin_deserialize_from_cdr_buffer(
                PoseType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PoseTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PoseTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PoseTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PoseTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PoseTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PoseType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Environment  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PoseTypePlugin_237247582_h */

