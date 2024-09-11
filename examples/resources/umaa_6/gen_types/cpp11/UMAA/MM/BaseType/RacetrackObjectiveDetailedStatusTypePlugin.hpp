

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RacetrackObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RacetrackObjectiveDetailedStatusTypePlugin_1255569901_h
#define RacetrackObjectiveDetailedStatusTypePlugin_1255569901_h

#include "RacetrackObjectiveDetailedStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
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
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RacetrackObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RacetrackObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RacetrackObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RacetrackObjectiveDetailedStatusType.
            */
            typedef class RacetrackObjectiveDetailedStatusType RacetrackObjectiveDetailedStatusTypeKeyHolder;

            #define RacetrackObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RacetrackObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RacetrackObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RacetrackObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RacetrackObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RacetrackObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RacetrackObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RacetrackObjectiveDetailedStatusType*
            RacetrackObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RacetrackObjectiveDetailedStatusType*
            RacetrackObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RacetrackObjectiveDetailedStatusType*
            RacetrackObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePluginSupport_copy_data(
                RacetrackObjectiveDetailedStatusType *out,
                const RacetrackObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                RacetrackObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                RacetrackObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_destroy_data(
                RacetrackObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_print_data(
                const RacetrackObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RacetrackObjectiveDetailedStatusType*
            RacetrackObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RacetrackObjectiveDetailedStatusType*
            RacetrackObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                RacetrackObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePluginSupport_destroy_key(
                RacetrackObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RacetrackObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RacetrackObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RacetrackObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RacetrackObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusType *out,
                const RacetrackObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RacetrackObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RacetrackObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RacetrackObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                RacetrackObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RacetrackObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RacetrackObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusTypeKeyHolder *key, 
                const RacetrackObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RacetrackObjectiveDetailedStatusType *instance, 
                const RacetrackObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RacetrackObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RacetrackObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RacetrackObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RacetrackObjectiveDetailedStatusTypePlugin_1255569901_h */

