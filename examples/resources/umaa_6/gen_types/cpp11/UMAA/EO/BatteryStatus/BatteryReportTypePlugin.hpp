

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatteryReportTypePlugin_948757988_h
#define BatteryReportTypePlugin_948757988_h

#include "BatteryReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeListMetadataPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/BatteryStatus/BatteryCellDataTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BatteryStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BatteryReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BatteryReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BatteryReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BatteryReportType.
            */
            typedef class BatteryReportType BatteryReportTypeKeyHolder;

            #define BatteryReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatteryReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatteryReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatteryReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BatteryReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BatteryReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatteryReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatteryReportType*
            BatteryReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatteryReportType*
            BatteryReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryReportType*
            BatteryReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePluginSupport_copy_data(
                BatteryReportType *out,
                const BatteryReportType *in);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_destroy_data_w_params(
                BatteryReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_destroy_data_ex(
                BatteryReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_destroy_data(
                BatteryReportType *sample);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_print_data(
                const BatteryReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BatteryReportType*
            BatteryReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryReportType*
            BatteryReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_destroy_key_ex(
                BatteryReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryReportTypePluginSupport_destroy_key(
                BatteryReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BatteryReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BatteryReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BatteryReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BatteryReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BatteryReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportType *out,
                const BatteryReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BatteryReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BatteryReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BatteryReportTypePlugin_deserialize_from_cdr_buffer(
                BatteryReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatteryReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeKeyHolder *key, 
                const BatteryReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportType *instance, 
                const BatteryReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BatteryReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BatteryReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BatteryReportTypeCellsListElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BatteryReportTypeCellsListElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BatteryReportTypeCellsListElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BatteryReportTypeCellsListElement.
            */
            typedef class BatteryReportTypeCellsListElement BatteryReportTypeCellsListElementKeyHolder;

            #define BatteryReportTypeCellsListElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatteryReportTypeCellsListElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatteryReportTypeCellsListElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatteryReportTypeCellsListElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BatteryReportTypeCellsListElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BatteryReportTypeCellsListElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatteryReportTypeCellsListElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatteryReportTypeCellsListElement*
            BatteryReportTypeCellsListElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatteryReportTypeCellsListElement*
            BatteryReportTypeCellsListElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryReportTypeCellsListElement*
            BatteryReportTypeCellsListElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPluginSupport_copy_data(
                BatteryReportTypeCellsListElement *out,
                const BatteryReportTypeCellsListElement *in);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_destroy_data_w_params(
                BatteryReportTypeCellsListElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_destroy_data_ex(
                BatteryReportTypeCellsListElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_destroy_data(
                BatteryReportTypeCellsListElement *sample);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_print_data(
                const BatteryReportTypeCellsListElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BatteryReportTypeCellsListElement*
            BatteryReportTypeCellsListElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryReportTypeCellsListElement*
            BatteryReportTypeCellsListElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_destroy_key_ex(
                BatteryReportTypeCellsListElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPluginSupport_destroy_key(
                BatteryReportTypeCellsListElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BatteryReportTypeCellsListElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BatteryReportTypeCellsListElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BatteryReportTypeCellsListElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BatteryReportTypeCellsListElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElement *out,
                const BatteryReportTypeCellsListElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BatteryReportTypeCellsListElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BatteryReportTypeCellsListElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BatteryReportTypeCellsListElementPlugin_deserialize_from_cdr_buffer(
                BatteryReportTypeCellsListElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypeCellsListElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatteryReportTypeCellsListElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypeCellsListElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatteryReportTypeCellsListElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElementKeyHolder *key, 
                const BatteryReportTypeCellsListElement *instance);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BatteryReportTypeCellsListElement *instance, 
                const BatteryReportTypeCellsListElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BatteryReportTypeCellsListElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BatteryReportTypeCellsListElementPlugin_new(void);

            NDDSUSERDllExport extern void
            BatteryReportTypeCellsListElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace BatteryStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BatteryReportTypePlugin_948757988_h */

