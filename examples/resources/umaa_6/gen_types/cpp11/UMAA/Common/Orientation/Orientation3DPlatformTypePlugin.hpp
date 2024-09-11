

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DPlatformType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DPlatformTypePlugin_1269984291_h
#define Orientation3DPlatformTypePlugin_1269984291_h

#include "Orientation3DPlatformType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/AlphaXPlatformTypePlugin.hpp"
#include "UMAA/Common/Orientation/BetaYPlatformTypePlugin.hpp"
#include "UMAA/Common/Orientation/GammaZPlatformTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define Orientation3DPlatformTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Orientation3DPlatformTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Orientation3DPlatformTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Orientation3DPlatformTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Orientation3DPlatformTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Orientation3DPlatformType*
            Orientation3DPlatformTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Orientation3DPlatformType*
            Orientation3DPlatformTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Orientation3DPlatformType*
            Orientation3DPlatformTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DPlatformTypePluginSupport_copy_data(
                Orientation3DPlatformType *out,
                const Orientation3DPlatformType *in);

            NDDSUSERDllExport extern void 
            Orientation3DPlatformTypePluginSupport_destroy_data_w_params(
                Orientation3DPlatformType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Orientation3DPlatformTypePluginSupport_destroy_data_ex(
                Orientation3DPlatformType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Orientation3DPlatformTypePluginSupport_destroy_data(
                Orientation3DPlatformType *sample);

            NDDSUSERDllExport extern void 
            Orientation3DPlatformTypePluginSupport_print_data(
                const Orientation3DPlatformType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Orientation3DPlatformTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DPlatformType *out,
                const Orientation3DPlatformType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Orientation3DPlatformTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Orientation3DPlatformType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Orientation3DPlatformTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DPlatformType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Orientation3DPlatformTypePlugin_deserialize_from_cdr_buffer(
                Orientation3DPlatformType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Orientation3DPlatformTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Orientation3DPlatformTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DPlatformTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DPlatformTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DPlatformTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DPlatformType ** sample,
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

#endif /* Orientation3DPlatformTypePlugin_1269984291_h */

