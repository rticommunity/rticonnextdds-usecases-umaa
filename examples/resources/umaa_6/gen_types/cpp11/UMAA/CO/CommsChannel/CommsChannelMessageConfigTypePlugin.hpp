

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelMessageConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelMessageConfigTypePlugin_1548369107_h
#define CommsChannelMessageConfigTypePlugin_1548369107_h

#include "CommsChannelMessageConfigType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace CommsChannel {

            #define CommsChannelMessageConfigTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelMessageConfigTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelMessageConfigTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelMessageConfigTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelMessageConfigTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelMessageConfigType*
            CommsChannelMessageConfigTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelMessageConfigType*
            CommsChannelMessageConfigTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelMessageConfigType*
            CommsChannelMessageConfigTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelMessageConfigTypePluginSupport_copy_data(
                CommsChannelMessageConfigType *out,
                const CommsChannelMessageConfigType *in);

            NDDSUSERDllExport extern void 
            CommsChannelMessageConfigTypePluginSupport_destroy_data_w_params(
                CommsChannelMessageConfigType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelMessageConfigTypePluginSupport_destroy_data_ex(
                CommsChannelMessageConfigType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelMessageConfigTypePluginSupport_destroy_data(
                CommsChannelMessageConfigType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelMessageConfigTypePluginSupport_print_data(
                const CommsChannelMessageConfigType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CommsChannelMessageConfigTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelMessageConfigType *out,
                const CommsChannelMessageConfigType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelMessageConfigTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelMessageConfigType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelMessageConfigTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelMessageConfigType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelMessageConfigTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelMessageConfigType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelMessageConfigTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelMessageConfigTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelMessageConfigTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelMessageConfigTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelMessageConfigTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelMessageConfigType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace CommsChannel  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelMessageConfigTypePlugin_1548369107_h */

