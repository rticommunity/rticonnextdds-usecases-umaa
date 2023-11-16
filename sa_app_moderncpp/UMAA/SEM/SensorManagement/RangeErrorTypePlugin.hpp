

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeErrorType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeErrorTypePlugin_1986270889_h
#define RangeErrorTypePlugin_1986270889_h

#include "RangeErrorType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace SensorManagement {

            #define RangeErrorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RangeErrorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RangeErrorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RangeErrorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RangeErrorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RangeErrorType*
            RangeErrorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RangeErrorType*
            RangeErrorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeErrorType*
            RangeErrorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RangeErrorTypePluginSupport_copy_data(
                RangeErrorType *out,
                const RangeErrorType *in);

            NDDSUSERDllExport extern void 
            RangeErrorTypePluginSupport_destroy_data_w_params(
                RangeErrorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RangeErrorTypePluginSupport_destroy_data_ex(
                RangeErrorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeErrorTypePluginSupport_destroy_data(
                RangeErrorType *sample);

            NDDSUSERDllExport extern void 
            RangeErrorTypePluginSupport_print_data(
                const RangeErrorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RangeErrorTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RangeErrorTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RangeErrorTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RangeErrorTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RangeErrorTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeErrorType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RangeErrorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeErrorType *out,
                const RangeErrorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RangeErrorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RangeErrorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RangeErrorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RangeErrorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RangeErrorTypePlugin_deserialize_from_cdr_buffer(
                RangeErrorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RangeErrorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RangeErrorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RangeErrorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RangeErrorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RangeErrorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeErrorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RangeErrorTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RangeErrorTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SensorManagement  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RangeErrorTypePlugin_1986270889_h */

