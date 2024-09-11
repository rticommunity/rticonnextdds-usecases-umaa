

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClearDataCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ClearDataCommandTypePlugin_766258901_h
#define ClearDataCommandTypePlugin_766258901_h

#include "ClearDataCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ClearDataControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ClearDataCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ClearDataCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ClearDataCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ClearDataCommandType.
            */
            typedef class ClearDataCommandType ClearDataCommandTypeKeyHolder;

            #define ClearDataCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ClearDataCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ClearDataCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ClearDataCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ClearDataCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ClearDataCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ClearDataCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ClearDataCommandType*
            ClearDataCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ClearDataCommandType*
            ClearDataCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClearDataCommandType*
            ClearDataCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePluginSupport_copy_data(
                ClearDataCommandType *out,
                const ClearDataCommandType *in);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_destroy_data_w_params(
                ClearDataCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_destroy_data_ex(
                ClearDataCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_destroy_data(
                ClearDataCommandType *sample);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_print_data(
                const ClearDataCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ClearDataCommandType*
            ClearDataCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClearDataCommandType*
            ClearDataCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_destroy_key_ex(
                ClearDataCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePluginSupport_destroy_key(
                ClearDataCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ClearDataCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ClearDataCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ClearDataCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ClearDataCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandType *out,
                const ClearDataCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ClearDataCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ClearDataCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ClearDataCommandTypePlugin_deserialize_from_cdr_buffer(
                ClearDataCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ClearDataCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandTypeKeyHolder *key, 
                const ClearDataCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandType *instance, 
                const ClearDataCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ClearDataCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ClearDataCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ClearDataControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ClearDataCommandTypePlugin_766258901_h */

