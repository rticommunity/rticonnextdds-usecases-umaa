

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonCommandStatusTypePlugin_1447421576_h
#define LocalRegularPolygonCommandStatusTypePlugin_1447421576_h

#include "LocalRegularPolygonCommandStatusType.hpp"

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
    namespace MO {
        namespace LocalRegularPolygonControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalRegularPolygonCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalRegularPolygonCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalRegularPolygonCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalRegularPolygonCommandStatusType.
            */
            typedef class LocalRegularPolygonCommandStatusType LocalRegularPolygonCommandStatusTypeKeyHolder;

            #define LocalRegularPolygonCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRegularPolygonCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRegularPolygonCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRegularPolygonCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalRegularPolygonCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalRegularPolygonCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRegularPolygonCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRegularPolygonCommandStatusType*
            LocalRegularPolygonCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRegularPolygonCommandStatusType*
            LocalRegularPolygonCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegularPolygonCommandStatusType*
            LocalRegularPolygonCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePluginSupport_copy_data(
                LocalRegularPolygonCommandStatusType *out,
                const LocalRegularPolygonCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_destroy_data_w_params(
                LocalRegularPolygonCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_destroy_data_ex(
                LocalRegularPolygonCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_destroy_data(
                LocalRegularPolygonCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_print_data(
                const LocalRegularPolygonCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalRegularPolygonCommandStatusType*
            LocalRegularPolygonCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegularPolygonCommandStatusType*
            LocalRegularPolygonCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_destroy_key_ex(
                LocalRegularPolygonCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePluginSupport_destroy_key(
                LocalRegularPolygonCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRegularPolygonCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRegularPolygonCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRegularPolygonCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusType *out,
                const LocalRegularPolygonCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRegularPolygonCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LocalRegularPolygonCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRegularPolygonCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusTypeKeyHolder *key, 
                const LocalRegularPolygonCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonCommandStatusType *instance, 
                const LocalRegularPolygonCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRegularPolygonCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRegularPolygonCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRegularPolygonControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRegularPolygonCommandStatusTypePlugin_1447421576_h */

