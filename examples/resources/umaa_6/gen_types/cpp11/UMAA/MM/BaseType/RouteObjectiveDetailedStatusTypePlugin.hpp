

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RouteObjectiveDetailedStatusTypePlugin_561395317_h
#define RouteObjectiveDetailedStatusTypePlugin_561395317_h

#include "RouteObjectiveDetailedStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Speed/SpeedVariantTypePlugin.hpp"
#include "UMAA/MM/BaseType/WaypointDetailedStatusTypePlugin.hpp"

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
            * By default, this type is struct RouteObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RouteObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RouteObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RouteObjectiveDetailedStatusType.
            */
            typedef class RouteObjectiveDetailedStatusType RouteObjectiveDetailedStatusTypeKeyHolder;

            #define RouteObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RouteObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RouteObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RouteObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RouteObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RouteObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RouteObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusType*
            RouteObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusType*
            RouteObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusType*
            RouteObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePluginSupport_copy_data(
                RouteObjectiveDetailedStatusType *out,
                const RouteObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                RouteObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                RouteObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_destroy_data(
                RouteObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_print_data(
                const RouteObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusType*
            RouteObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusType*
            RouteObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                RouteObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePluginSupport_destroy_key(
                RouteObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RouteObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RouteObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RouteObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusType *out,
                const RouteObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RouteObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                RouteObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RouteObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeKeyHolder *key, 
                const RouteObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusType *instance, 
                const RouteObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RouteObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RouteObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement.
            */
            typedef class RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementKeyHolder;

            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_copy_data(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *out,
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *in);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_destroy_data_w_params(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_destroy_data_ex(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_destroy_data(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_print_data(
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_destroy_key_ex(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPluginSupport_destroy_key(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *out,
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_deserialize_from_cdr_buffer(
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementKeyHolder *key, 
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElement *instance, 
                const RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            RouteObjectiveDetailedStatusTypeWaypointDetailedStatusSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RouteObjectiveDetailedStatusTypePlugin_561395317_h */

