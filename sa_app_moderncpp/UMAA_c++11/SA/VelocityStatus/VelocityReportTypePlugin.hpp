

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityReportTypePlugin_169778901_h
#define VelocityReportTypePlugin_169778901_h

#include "VelocityReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovarianceVelocityVelocityTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationVelocity3DPlugin.hpp"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNEDPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace VelocityStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VelocityReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VelocityReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VelocityReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VelocityReportType.
            */
            typedef class VelocityReportType VelocityReportTypeKeyHolder;

            #define VelocityReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VelocityReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VelocityReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VelocityReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VelocityReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VelocityReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VelocityReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VelocityReportType*
            VelocityReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VelocityReportType*
            VelocityReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityReportType*
            VelocityReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePluginSupport_copy_data(
                VelocityReportType *out,
                const VelocityReportType *in);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_destroy_data_w_params(
                VelocityReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_destroy_data_ex(
                VelocityReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_destroy_data(
                VelocityReportType *sample);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_print_data(
                const VelocityReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VelocityReportType*
            VelocityReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityReportType*
            VelocityReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_destroy_key_ex(
                VelocityReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityReportTypePluginSupport_destroy_key(
                VelocityReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VelocityReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VelocityReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VelocityReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VelocityReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VelocityReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportType *out,
                const VelocityReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VelocityReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VelocityReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VelocityReportTypePlugin_deserialize_from_cdr_buffer(
                VelocityReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VelocityReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VelocityReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VelocityReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VelocityReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportTypeKeyHolder *key, 
                const VelocityReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VelocityReportType *instance, 
                const VelocityReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VelocityReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VelocityReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VelocityReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VelocityStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VelocityReportTypePlugin_169778901_h */

