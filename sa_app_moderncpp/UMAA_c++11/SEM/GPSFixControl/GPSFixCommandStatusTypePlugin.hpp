

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixCommandStatusTypePlugin_471852354_h
#define GPSFixCommandStatusTypePlugin_471852354_h

#include "GPSFixCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace GPSFixControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GPSFixCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GPSFixCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GPSFixCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GPSFixCommandStatusType.
            */
            typedef class GPSFixCommandStatusType GPSFixCommandStatusTypeKeyHolder;

            #define GPSFixCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSFixCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSFixCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSFixCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GPSFixCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GPSFixCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSFixCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSFixCommandStatusType*
            GPSFixCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSFixCommandStatusType*
            GPSFixCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandStatusType*
            GPSFixCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePluginSupport_copy_data(
                GPSFixCommandStatusType *out,
                const GPSFixCommandStatusType *in);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_destroy_data_w_params(
                GPSFixCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_destroy_data_ex(
                GPSFixCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_destroy_data(
                GPSFixCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_print_data(
                const GPSFixCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GPSFixCommandStatusType*
            GPSFixCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandStatusType*
            GPSFixCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_destroy_key_ex(
                GPSFixCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePluginSupport_destroy_key(
                GPSFixCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSFixCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSFixCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSFixCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSFixCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusType *out,
                const GPSFixCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSFixCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                GPSFixCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSFixCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusTypeKeyHolder *key, 
                const GPSFixCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandStatusType *instance, 
                const GPSFixCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSFixCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSFixCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSFixControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSFixCommandStatusTypePlugin_471852354_h */

