

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8PatternType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8PatternTypePlugin_487366425_h
#define LocalFigure8PatternTypePlugin_487366425_h

#include "LocalFigure8PatternType.hpp"

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
        namespace LocalFigure8State {

            #define LocalFigure8PatternTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalFigure8PatternTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalFigure8PatternTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalFigure8PatternTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalFigure8PatternTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalFigure8PatternType*
            LocalFigure8PatternTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalFigure8PatternType*
            LocalFigure8PatternTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalFigure8PatternType*
            LocalFigure8PatternTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8PatternTypePluginSupport_copy_data(
                LocalFigure8PatternType *out,
                const LocalFigure8PatternType *in);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePluginSupport_destroy_data_w_params(
                LocalFigure8PatternType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePluginSupport_destroy_data_ex(
                LocalFigure8PatternType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePluginSupport_destroy_data(
                LocalFigure8PatternType *sample);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePluginSupport_print_data(
                const LocalFigure8PatternType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalFigure8PatternTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalFigure8PatternTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalFigure8PatternTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalFigure8PatternTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8PatternType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8PatternTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8PatternType *out,
                const LocalFigure8PatternType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalFigure8PatternTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalFigure8PatternType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8PatternTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8PatternType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalFigure8PatternTypePlugin_deserialize_from_cdr_buffer(
                LocalFigure8PatternType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8PatternTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalFigure8PatternTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8PatternTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8PatternTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8PatternTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8PatternType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalFigure8PatternTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalFigure8PatternTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalFigure8State  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalFigure8PatternTypePlugin_487366425_h */

