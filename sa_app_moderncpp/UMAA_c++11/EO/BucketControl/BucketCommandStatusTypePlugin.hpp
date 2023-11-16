

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BucketCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BucketCommandStatusTypePlugin_1370182486_h
#define BucketCommandStatusTypePlugin_1370182486_h

#include "BucketCommandStatusType.hpp"

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
    namespace EO {
        namespace BucketControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BucketCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BucketCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BucketCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BucketCommandStatusType.
            */
            typedef class BucketCommandStatusType BucketCommandStatusTypeKeyHolder;

            #define BucketCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BucketCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BucketCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BucketCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BucketCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BucketCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BucketCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BucketCommandStatusType*
            BucketCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BucketCommandStatusType*
            BucketCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BucketCommandStatusType*
            BucketCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePluginSupport_copy_data(
                BucketCommandStatusType *out,
                const BucketCommandStatusType *in);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_destroy_data_w_params(
                BucketCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_destroy_data_ex(
                BucketCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_destroy_data(
                BucketCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_print_data(
                const BucketCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BucketCommandStatusType*
            BucketCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BucketCommandStatusType*
            BucketCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_destroy_key_ex(
                BucketCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePluginSupport_destroy_key(
                BucketCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BucketCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BucketCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BucketCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BucketCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusType *out,
                const BucketCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BucketCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BucketCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BucketCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                BucketCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BucketCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BucketCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BucketCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BucketCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusTypeKeyHolder *key, 
                const BucketCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BucketCommandStatusType *instance, 
                const BucketCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BucketCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BucketCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BucketCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BucketControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BucketCommandStatusTypePlugin_1370182486_h */

