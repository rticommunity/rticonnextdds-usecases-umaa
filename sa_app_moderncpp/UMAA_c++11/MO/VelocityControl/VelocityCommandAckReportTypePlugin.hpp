

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityCommandAckReportTypePlugin_1333374482_h
#define VelocityCommandAckReportTypePlugin_1333374482_h

#include "VelocityCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationVelocity3DPlugin.hpp"
#include "UMAA/Common/Measurement/Velocity3D_PlatformXYZPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace VelocityControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VelocityCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VelocityCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VelocityCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VelocityCommandAckReportType.
            */
            typedef class VelocityCommandAckReportType VelocityCommandAckReportTypeKeyHolder;

            #define VelocityCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VelocityCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VelocityCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VelocityCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VelocityCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VelocityCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VelocityCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VelocityCommandAckReportType*
            VelocityCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VelocityCommandAckReportType*
            VelocityCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityCommandAckReportType*
            VelocityCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePluginSupport_copy_data(
                VelocityCommandAckReportType *out,
                const VelocityCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_destroy_data_w_params(
                VelocityCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_destroy_data_ex(
                VelocityCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_destroy_data(
                VelocityCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_print_data(
                const VelocityCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VelocityCommandAckReportType*
            VelocityCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityCommandAckReportType*
            VelocityCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_destroy_key_ex(
                VelocityCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePluginSupport_destroy_key(
                VelocityCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VelocityCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VelocityCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VelocityCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VelocityCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportType *out,
                const VelocityCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VelocityCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VelocityCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VelocityCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                VelocityCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VelocityCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportTypeKeyHolder *key, 
                const VelocityCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandAckReportType *instance, 
                const VelocityCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VelocityCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VelocityCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VelocityControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VelocityCommandAckReportTypePlugin_1333374482_h */

