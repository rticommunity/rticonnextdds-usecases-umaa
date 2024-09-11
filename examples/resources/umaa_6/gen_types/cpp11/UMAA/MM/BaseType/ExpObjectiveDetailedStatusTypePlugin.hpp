

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpObjectiveDetailedStatusTypePlugin_1464348034_h
#define ExpObjectiveDetailedStatusTypePlugin_1464348034_h

#include "ExpObjectiveDetailedStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/BaseType/KeyValueTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ExpObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ExpObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ExpObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ExpObjectiveDetailedStatusType.
            */
            typedef class ExpObjectiveDetailedStatusType ExpObjectiveDetailedStatusTypeKeyHolder;

            #define ExpObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ExpObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ExpObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpObjectiveDetailedStatusType*
            ExpObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpObjectiveDetailedStatusType*
            ExpObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpObjectiveDetailedStatusType*
            ExpObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePluginSupport_copy_data(
                ExpObjectiveDetailedStatusType *out,
                const ExpObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                ExpObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                ExpObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_destroy_data(
                ExpObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_print_data(
                const ExpObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ExpObjectiveDetailedStatusType*
            ExpObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpObjectiveDetailedStatusType*
            ExpObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                ExpObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePluginSupport_destroy_key(
                ExpObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ExpObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ExpObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ExpObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ExpObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusType *out,
                const ExpObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                ExpObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusTypeKeyHolder *key, 
                const ExpObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ExpObjectiveDetailedStatusType *instance, 
                const ExpObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ExpObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ExpObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ExpObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ExpObjectiveDetailedStatusTypePlugin_1464348034_h */

