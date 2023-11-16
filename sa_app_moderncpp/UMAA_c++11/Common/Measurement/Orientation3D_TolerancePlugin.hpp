

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3D_Tolerance.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3D_TolerancePlugin_771281215_h
#define Orientation3D_TolerancePlugin_771281215_h

#include "Orientation3D_Tolerance.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/Orientation3DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Orientation3D_TolerancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Orientation3D_TolerancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Orientation3D_TolerancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Orientation3D_TolerancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Orientation3D_TolerancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Orientation3D_Tolerance*
            Orientation3D_TolerancePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Orientation3D_Tolerance*
            Orientation3D_TolerancePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Orientation3D_Tolerance*
            Orientation3D_TolerancePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_TolerancePluginSupport_copy_data(
                Orientation3D_Tolerance *out,
                const Orientation3D_Tolerance *in);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePluginSupport_destroy_data_w_params(
                Orientation3D_Tolerance *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePluginSupport_destroy_data_ex(
                Orientation3D_Tolerance *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePluginSupport_destroy_data(
                Orientation3D_Tolerance *sample);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePluginSupport_print_data(
                const Orientation3D_Tolerance *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Orientation3D_TolerancePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Orientation3D_TolerancePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Orientation3D_TolerancePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Orientation3D_TolerancePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_Tolerance *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_TolerancePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_Tolerance *out,
                const Orientation3D_Tolerance *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Orientation3D_TolerancePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Orientation3D_Tolerance *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_TolerancePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_Tolerance **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Orientation3D_TolerancePlugin_deserialize_from_cdr_buffer(
                Orientation3D_Tolerance *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_TolerancePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Orientation3D_TolerancePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_TolerancePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Orientation3D_TolerancePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Orientation3D_TolerancePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3D_Tolerance ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Orientation3D_TolerancePlugin_new(void);

            NDDSUSERDllExport extern void
            Orientation3D_TolerancePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Orientation3D_TolerancePlugin_771281215_h */

