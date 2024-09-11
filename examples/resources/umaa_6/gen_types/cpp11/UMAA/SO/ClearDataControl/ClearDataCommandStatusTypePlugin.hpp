

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClearDataCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ClearDataCommandStatusTypePlugin_1173804095_h
#define ClearDataCommandStatusTypePlugin_1173804095_h

#include "ClearDataCommandStatusType.hpp"

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
    namespace SO {
        namespace ClearDataControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ClearDataCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ClearDataCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ClearDataCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ClearDataCommandStatusType.
            */
            typedef class ClearDataCommandStatusType ClearDataCommandStatusTypeKeyHolder;

            #define ClearDataCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ClearDataCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ClearDataCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ClearDataCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ClearDataCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ClearDataCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ClearDataCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ClearDataCommandStatusType*
            ClearDataCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ClearDataCommandStatusType*
            ClearDataCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClearDataCommandStatusType*
            ClearDataCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePluginSupport_copy_data(
                ClearDataCommandStatusType *out,
                const ClearDataCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_destroy_data_w_params(
                ClearDataCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_destroy_data_ex(
                ClearDataCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_destroy_data(
                ClearDataCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_print_data(
                const ClearDataCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ClearDataCommandStatusType*
            ClearDataCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClearDataCommandStatusType*
            ClearDataCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_destroy_key_ex(
                ClearDataCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePluginSupport_destroy_key(
                ClearDataCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ClearDataCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ClearDataCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ClearDataCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ClearDataCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusType *out,
                const ClearDataCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ClearDataCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ClearDataCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ClearDataCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ClearDataCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ClearDataCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ClearDataCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusTypeKeyHolder *key, 
                const ClearDataCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ClearDataCommandStatusType *instance, 
                const ClearDataCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ClearDataCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ClearDataCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ClearDataCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ClearDataControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ClearDataCommandStatusTypePlugin_1173804095_h */

