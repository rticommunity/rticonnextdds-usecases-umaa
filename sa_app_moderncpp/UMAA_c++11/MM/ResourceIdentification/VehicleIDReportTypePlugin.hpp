

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleIDReportTypePlugin_871172610_h
#define VehicleIDReportTypePlugin_871172610_h

#include "VehicleIDReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ResourceIdentification {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VehicleIDReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VehicleIDReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VehicleIDReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VehicleIDReportType.
            */
            typedef class VehicleIDReportType VehicleIDReportTypeKeyHolder;

            #define VehicleIDReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VehicleIDReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VehicleIDReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VehicleIDReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VehicleIDReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VehicleIDReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VehicleIDReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VehicleIDReportType*
            VehicleIDReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VehicleIDReportType*
            VehicleIDReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleIDReportType*
            VehicleIDReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePluginSupport_copy_data(
                VehicleIDReportType *out,
                const VehicleIDReportType *in);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_destroy_data_w_params(
                VehicleIDReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_destroy_data_ex(
                VehicleIDReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_destroy_data(
                VehicleIDReportType *sample);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_print_data(
                const VehicleIDReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VehicleIDReportType*
            VehicleIDReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleIDReportType*
            VehicleIDReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_destroy_key_ex(
                VehicleIDReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePluginSupport_destroy_key(
                VehicleIDReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VehicleIDReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VehicleIDReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VehicleIDReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VehicleIDReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportType *out,
                const VehicleIDReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VehicleIDReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VehicleIDReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VehicleIDReportTypePlugin_deserialize_from_cdr_buffer(
                VehicleIDReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VehicleIDReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VehicleIDReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VehicleIDReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VehicleIDReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportTypeKeyHolder *key, 
                const VehicleIDReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VehicleIDReportType *instance, 
                const VehicleIDReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VehicleIDReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VehicleIDReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VehicleIDReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceIdentification  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VehicleIDReportTypePlugin_871172610_h */

