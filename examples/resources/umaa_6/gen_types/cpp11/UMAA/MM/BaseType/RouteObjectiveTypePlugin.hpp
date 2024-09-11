

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RouteObjectiveTypePlugin_2009711407_h
#define RouteObjectiveTypePlugin_2009711407_h

#include "RouteObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeListMetadataPlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/StateTriggerTypePlugin.hpp"
#include "UMAA/MM/BaseType/WaypointTypePlugin.hpp"

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
            * By default, this type is struct RouteObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RouteObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RouteObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RouteObjectiveType.
            */
            typedef class RouteObjectiveType RouteObjectiveTypeKeyHolder;

            #define RouteObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RouteObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RouteObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RouteObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RouteObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RouteObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RouteObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RouteObjectiveType*
            RouteObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RouteObjectiveType*
            RouteObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveType*
            RouteObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePluginSupport_copy_data(
                RouteObjectiveType *out,
                const RouteObjectiveType *in);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_destroy_data_w_params(
                RouteObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_destroy_data_ex(
                RouteObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_destroy_data(
                RouteObjectiveType *sample);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_print_data(
                const RouteObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RouteObjectiveType*
            RouteObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveType*
            RouteObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_destroy_key_ex(
                RouteObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePluginSupport_destroy_key(
                RouteObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RouteObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RouteObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RouteObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveType *out,
                const RouteObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RouteObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveTypePlugin_deserialize_from_cdr_buffer(
                RouteObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RouteObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeKeyHolder *key, 
                const RouteObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveType *instance, 
                const RouteObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RouteObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RouteObjectiveTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RouteObjectiveTypeWaypointsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RouteObjectiveTypeWaypointsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RouteObjectiveTypeWaypointsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RouteObjectiveTypeWaypointsListElement.
            */
            typedef class RouteObjectiveTypeWaypointsListElement RouteObjectiveTypeWaypointsListElementKeyHolder;

            #define RouteObjectiveTypeWaypointsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RouteObjectiveTypeWaypointsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RouteObjectiveTypeWaypointsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RouteObjectiveTypeWaypointsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RouteObjectiveTypeWaypointsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RouteObjectiveTypeWaypointsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RouteObjectiveTypeWaypointsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RouteObjectiveTypeWaypointsListElement*
            RouteObjectiveTypeWaypointsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RouteObjectiveTypeWaypointsListElement*
            RouteObjectiveTypeWaypointsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveTypeWaypointsListElement*
            RouteObjectiveTypeWaypointsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPluginSupport_copy_data(
                RouteObjectiveTypeWaypointsListElement *out,
                const RouteObjectiveTypeWaypointsListElement *in);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_destroy_data_w_params(
                RouteObjectiveTypeWaypointsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_destroy_data_ex(
                RouteObjectiveTypeWaypointsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_destroy_data(
                RouteObjectiveTypeWaypointsListElement *sample);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_print_data(
                const RouteObjectiveTypeWaypointsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RouteObjectiveTypeWaypointsListElement*
            RouteObjectiveTypeWaypointsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveTypeWaypointsListElement*
            RouteObjectiveTypeWaypointsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_destroy_key_ex(
                RouteObjectiveTypeWaypointsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPluginSupport_destroy_key(
                RouteObjectiveTypeWaypointsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RouteObjectiveTypeWaypointsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RouteObjectiveTypeWaypointsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RouteObjectiveTypeWaypointsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RouteObjectiveTypeWaypointsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElement *out,
                const RouteObjectiveTypeWaypointsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveTypeWaypointsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RouteObjectiveTypeWaypointsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveTypeWaypointsListElementPlugin_deserialize_from_cdr_buffer(
                RouteObjectiveTypeWaypointsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypeWaypointsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RouteObjectiveTypeWaypointsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypeWaypointsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveTypeWaypointsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElementKeyHolder *key, 
                const RouteObjectiveTypeWaypointsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveTypeWaypointsListElement *instance, 
                const RouteObjectiveTypeWaypointsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveTypeWaypointsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RouteObjectiveTypeWaypointsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            RouteObjectiveTypeWaypointsListElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RouteObjectiveTypePlugin_2009711407_h */

