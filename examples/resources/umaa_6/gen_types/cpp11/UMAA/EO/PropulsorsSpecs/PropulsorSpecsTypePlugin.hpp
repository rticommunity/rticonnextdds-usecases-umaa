

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorSpecsTypePlugin_745393766_h
#define PropulsorSpecsTypePlugin_745393766_h

#include "PropulsorSpecsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Angle/GammaAnglePropulsorToleranceTypePlugin.hpp"
#include "UMAA/Common/Angle/PropellerPitchAnglePropulsorToleranceTypePlugin.hpp"
#include "UMAA/Common/Angle/RhoAnglePropulsorToleranceTypePlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
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
        namespace PropulsorsSpecs {

            #define PropulsorSpecsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorSpecsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorSpecsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorSpecsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorSpecsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorSpecsType*
            PropulsorSpecsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorSpecsType*
            PropulsorSpecsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorSpecsType*
            PropulsorSpecsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsTypePluginSupport_copy_data(
                PropulsorSpecsType *out,
                const PropulsorSpecsType *in);

            NDDSUSERDllExport extern void 
            PropulsorSpecsTypePluginSupport_destroy_data_w_params(
                PropulsorSpecsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorSpecsTypePluginSupport_destroy_data_ex(
                PropulsorSpecsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorSpecsTypePluginSupport_destroy_data(
                PropulsorSpecsType *sample);

            NDDSUSERDllExport extern void 
            PropulsorSpecsTypePluginSupport_print_data(
                const PropulsorSpecsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsType *out,
                const PropulsorSpecsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorSpecsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorSpecsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorSpecsTypePlugin_deserialize_from_cdr_buffer(
                PropulsorSpecsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorSpecsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorSpecsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorSpecsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorSpecsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace PropulsorsSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorSpecsTypePlugin_745393766_h */

