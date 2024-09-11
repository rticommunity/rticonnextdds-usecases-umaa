

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoveringHoverTypePlugin_463028914_h
#define GlobalHoveringHoverTypePlugin_463028914_h

#include "GlobalHoveringHoverType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {

            #define GlobalHoveringHoverTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoveringHoverTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoveringHoverTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoveringHoverTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoveringHoverTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoveringHoverType*
            GlobalHoveringHoverTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoveringHoverType*
            GlobalHoveringHoverTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoveringHoverType*
            GlobalHoveringHoverTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoveringHoverTypePluginSupport_copy_data(
                GlobalHoveringHoverType *out,
                const GlobalHoveringHoverType *in);

            NDDSUSERDllExport extern void 
            GlobalHoveringHoverTypePluginSupport_destroy_data_w_params(
                GlobalHoveringHoverType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoveringHoverTypePluginSupport_destroy_data_ex(
                GlobalHoveringHoverType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoveringHoverTypePluginSupport_destroy_data(
                GlobalHoveringHoverType *sample);

            NDDSUSERDllExport extern void 
            GlobalHoveringHoverTypePluginSupport_print_data(
                const GlobalHoveringHoverType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalHoveringHoverTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoveringHoverType *out,
                const GlobalHoveringHoverType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoveringHoverTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoveringHoverType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoveringHoverTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoveringHoverType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoveringHoverTypePlugin_deserialize_from_cdr_buffer(
                GlobalHoveringHoverType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoveringHoverTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoveringHoverTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoveringHoverTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoveringHoverTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoveringHoverTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoveringHoverType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace GlobalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoveringHoverTypePlugin_463028914_h */

