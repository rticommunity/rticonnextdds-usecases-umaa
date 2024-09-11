

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandStatusTypePlugin_1813934335_h
#define PrimitiveDriverCommandStatusTypePlugin_1813934335_h

#include "PrimitiveDriverCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace PrimitiveDriverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PrimitiveDriverCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PrimitiveDriverCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PrimitiveDriverCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PrimitiveDriverCommandStatusType.
            */
            typedef class PrimitiveDriverCommandStatusType PrimitiveDriverCommandStatusTypeKeyHolder;

            #define PrimitiveDriverCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PrimitiveDriverCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PrimitiveDriverCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PrimitiveDriverCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PrimitiveDriverCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PrimitiveDriverCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PrimitiveDriverCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PrimitiveDriverCommandStatusType*
            PrimitiveDriverCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PrimitiveDriverCommandStatusType*
            PrimitiveDriverCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandStatusType*
            PrimitiveDriverCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePluginSupport_copy_data(
                PrimitiveDriverCommandStatusType *out,
                const PrimitiveDriverCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_destroy_data_w_params(
                PrimitiveDriverCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_destroy_data_ex(
                PrimitiveDriverCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_destroy_data(
                PrimitiveDriverCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_print_data(
                const PrimitiveDriverCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PrimitiveDriverCommandStatusType*
            PrimitiveDriverCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandStatusType*
            PrimitiveDriverCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_destroy_key_ex(
                PrimitiveDriverCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePluginSupport_destroy_key(
                PrimitiveDriverCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PrimitiveDriverCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PrimitiveDriverCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PrimitiveDriverCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusType *out,
                const PrimitiveDriverCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PrimitiveDriverCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PrimitiveDriverCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PrimitiveDriverCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusTypeKeyHolder *key, 
                const PrimitiveDriverCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandStatusType *instance, 
                const PrimitiveDriverCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PrimitiveDriverCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PrimitiveDriverCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PrimitiveDriverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PrimitiveDriverCommandStatusTypePlugin_1813934335_h */

