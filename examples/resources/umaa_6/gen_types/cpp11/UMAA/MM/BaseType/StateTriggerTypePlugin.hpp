

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StateTriggerType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StateTriggerTypePlugin_2036514229_h
#define StateTriggerTypePlugin_2036514229_h

#include "StateTriggerType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define StateTriggerTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StateTriggerTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StateTriggerTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StateTriggerTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StateTriggerTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StateTriggerType*
            StateTriggerTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StateTriggerType*
            StateTriggerTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StateTriggerType*
            StateTriggerTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StateTriggerTypePluginSupport_copy_data(
                StateTriggerType *out,
                const StateTriggerType *in);

            NDDSUSERDllExport extern void 
            StateTriggerTypePluginSupport_destroy_data_w_params(
                StateTriggerType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StateTriggerTypePluginSupport_destroy_data_ex(
                StateTriggerType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StateTriggerTypePluginSupport_destroy_data(
                StateTriggerType *sample);

            NDDSUSERDllExport extern void 
            StateTriggerTypePluginSupport_print_data(
                const StateTriggerType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StateTriggerTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StateTriggerType *out,
                const StateTriggerType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StateTriggerTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StateTriggerType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StateTriggerTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StateTriggerType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StateTriggerTypePlugin_deserialize_from_cdr_buffer(
                StateTriggerType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StateTriggerTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StateTriggerTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StateTriggerTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StateTriggerTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StateTriggerTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StateTriggerType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StateTriggerTypePlugin_2036514229_h */
