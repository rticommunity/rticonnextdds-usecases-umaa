

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BITCommandStatusTypePlugin_1509319597_h
#define BITCommandStatusTypePlugin_1509319597_h

#include "BITCommandStatusType.hpp"

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
        namespace BITControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BITCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BITCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BITCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BITCommandStatusType.
            */
            typedef class BITCommandStatusType BITCommandStatusTypeKeyHolder;

            #define BITCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BITCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BITCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BITCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BITCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BITCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BITCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BITCommandStatusType*
            BITCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BITCommandStatusType*
            BITCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITCommandStatusType*
            BITCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePluginSupport_copy_data(
                BITCommandStatusType *out,
                const BITCommandStatusType *in);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_destroy_data_w_params(
                BITCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_destroy_data_ex(
                BITCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_destroy_data(
                BITCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_print_data(
                const BITCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BITCommandStatusType*
            BITCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITCommandStatusType*
            BITCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_destroy_key_ex(
                BITCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePluginSupport_destroy_key(
                BITCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BITCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BITCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BITCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BITCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusType *out,
                const BITCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BITCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BITCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BITCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                BITCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BITCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BITCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BITCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BITCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusTypeKeyHolder *key, 
                const BITCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BITCommandStatusType *instance, 
                const BITCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BITCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BITCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BITCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BITControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BITCommandStatusTypePlugin_1509319597_h */

