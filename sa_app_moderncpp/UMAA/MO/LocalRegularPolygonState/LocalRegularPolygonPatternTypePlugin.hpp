

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonPatternType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonPatternTypePlugin_1024083241_h
#define LocalRegularPolygonPatternTypePlugin_1024083241_h

#include "LocalRegularPolygonPatternType.hpp"

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
        namespace LocalRegularPolygonState {

            #define LocalRegularPolygonPatternTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRegularPolygonPatternTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRegularPolygonPatternTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRegularPolygonPatternTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRegularPolygonPatternTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRegularPolygonPatternType*
            LocalRegularPolygonPatternTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRegularPolygonPatternType*
            LocalRegularPolygonPatternTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegularPolygonPatternType*
            LocalRegularPolygonPatternTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonPatternTypePluginSupport_copy_data(
                LocalRegularPolygonPatternType *out,
                const LocalRegularPolygonPatternType *in);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePluginSupport_destroy_data_w_params(
                LocalRegularPolygonPatternType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePluginSupport_destroy_data_ex(
                LocalRegularPolygonPatternType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePluginSupport_destroy_data(
                LocalRegularPolygonPatternType *sample);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePluginSupport_print_data(
                const LocalRegularPolygonPatternType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRegularPolygonPatternTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRegularPolygonPatternTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonPatternTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRegularPolygonPatternTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonPatternType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonPatternTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonPatternType *out,
                const LocalRegularPolygonPatternType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonPatternTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRegularPolygonPatternType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonPatternTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonPatternType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonPatternTypePlugin_deserialize_from_cdr_buffer(
                LocalRegularPolygonPatternType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonPatternTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRegularPolygonPatternTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonPatternTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonPatternTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonPatternTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonPatternType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRegularPolygonPatternTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRegularPolygonPatternTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRegularPolygonPatternTypePlugin_1024083241_h */

