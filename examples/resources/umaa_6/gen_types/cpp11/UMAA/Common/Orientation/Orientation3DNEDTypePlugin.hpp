

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DNEDTypePlugin_1064310342_h
#define Orientation3DNEDTypePlugin_1064310342_h

#include "Orientation3DNEDType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/PitchYNEDTypePlugin.hpp"
#include "UMAA/Common/Orientation/RollXNEDTypePlugin.hpp"
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

            #define Orientation3DNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Orientation3DNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Orientation3DNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Orientation3DNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Orientation3DNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Orientation3DNEDType*
            Orientation3DNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Orientation3DNEDType*
            Orientation3DNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Orientation3DNEDType*
            Orientation3DNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDTypePluginSupport_copy_data(
                Orientation3DNEDType *out,
                const Orientation3DNEDType *in);

            NDDSUSERDllExport extern void 
            Orientation3DNEDTypePluginSupport_destroy_data_w_params(
                Orientation3DNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Orientation3DNEDTypePluginSupport_destroy_data_ex(
                Orientation3DNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Orientation3DNEDTypePluginSupport_destroy_data(
                Orientation3DNEDType *sample);

            NDDSUSERDllExport extern void 
            Orientation3DNEDTypePluginSupport_print_data(
                const Orientation3DNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDType *out,
                const Orientation3DNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Orientation3DNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Orientation3DNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Orientation3DNEDTypePlugin_deserialize_from_cdr_buffer(
                Orientation3DNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Orientation3DNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDType ** sample,
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

#endif /* Orientation3DNEDTypePlugin_1064310342_h */

