

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalTransitDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalTransitDriftTypePlugin_1187296072_h
#define GlobalTransitDriftTypePlugin_1187296072_h

#include "GlobalTransitDriftType.hpp"

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
        namespace GlobalDriftState {

            #define GlobalTransitDriftTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalTransitDriftTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalTransitDriftTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalTransitDriftTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalTransitDriftTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalTransitDriftType*
            GlobalTransitDriftTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalTransitDriftType*
            GlobalTransitDriftTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalTransitDriftType*
            GlobalTransitDriftTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitDriftTypePluginSupport_copy_data(
                GlobalTransitDriftType *out,
                const GlobalTransitDriftType *in);

            NDDSUSERDllExport extern void 
            GlobalTransitDriftTypePluginSupport_destroy_data_w_params(
                GlobalTransitDriftType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalTransitDriftTypePluginSupport_destroy_data_ex(
                GlobalTransitDriftType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalTransitDriftTypePluginSupport_destroy_data(
                GlobalTransitDriftType *sample);

            NDDSUSERDllExport extern void 
            GlobalTransitDriftTypePluginSupport_print_data(
                const GlobalTransitDriftType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitDriftTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitDriftType *out,
                const GlobalTransitDriftType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalTransitDriftTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalTransitDriftType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitDriftTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitDriftType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalTransitDriftTypePlugin_deserialize_from_cdr_buffer(
                GlobalTransitDriftType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitDriftTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalTransitDriftTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitDriftTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalTransitDriftTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalTransitDriftTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalTransitDriftType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace GlobalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalTransitDriftTypePlugin_1187296072_h */

