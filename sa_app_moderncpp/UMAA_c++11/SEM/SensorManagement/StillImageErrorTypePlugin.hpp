

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageErrorType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageErrorTypePlugin_1650804393_h
#define StillImageErrorTypePlugin_1650804393_h

#include "StillImageErrorType.hpp"

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

            #define StillImageErrorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StillImageErrorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StillImageErrorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StillImageErrorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StillImageErrorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StillImageErrorType*
            StillImageErrorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StillImageErrorType*
            StillImageErrorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StillImageErrorType*
            StillImageErrorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StillImageErrorTypePluginSupport_copy_data(
                StillImageErrorType *out,
                const StillImageErrorType *in);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePluginSupport_destroy_data_w_params(
                StillImageErrorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePluginSupport_destroy_data_ex(
                StillImageErrorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePluginSupport_destroy_data(
                StillImageErrorType *sample);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePluginSupport_print_data(
                const StillImageErrorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StillImageErrorTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StillImageErrorTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StillImageErrorTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StillImageErrorTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageErrorType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StillImageErrorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StillImageErrorType *out,
                const StillImageErrorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StillImageErrorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StillImageErrorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StillImageErrorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StillImageErrorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StillImageErrorTypePlugin_deserialize_from_cdr_buffer(
                StillImageErrorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StillImageErrorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StillImageErrorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StillImageErrorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StillImageErrorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StillImageErrorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StillImageErrorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StillImageErrorTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StillImageErrorTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SensorManagement  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StillImageErrorTypePlugin_1650804393_h */

