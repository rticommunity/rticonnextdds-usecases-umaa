

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Figure8ObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Figure8ObjectiveDetailedStatusTypePlugin_1196933017_h
#define Figure8ObjectiveDetailedStatusTypePlugin_1196933017_h

#include "Figure8ObjectiveDetailedStatusType.hpp"

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
            * By default, this type is struct Figure8ObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct Figure8ObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * Figure8ObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct Figure8ObjectiveDetailedStatusType.
            */
            typedef class Figure8ObjectiveDetailedStatusType Figure8ObjectiveDetailedStatusTypeKeyHolder;

            #define Figure8ObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Figure8ObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Figure8ObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Figure8ObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define Figure8ObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define Figure8ObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Figure8ObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Figure8ObjectiveDetailedStatusType*
            Figure8ObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Figure8ObjectiveDetailedStatusType*
            Figure8ObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Figure8ObjectiveDetailedStatusType*
            Figure8ObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePluginSupport_copy_data(
                Figure8ObjectiveDetailedStatusType *out,
                const Figure8ObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                Figure8ObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                Figure8ObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_destroy_data(
                Figure8ObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_print_data(
                const Figure8ObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern Figure8ObjectiveDetailedStatusType*
            Figure8ObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Figure8ObjectiveDetailedStatusType*
            Figure8ObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                Figure8ObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePluginSupport_destroy_key(
                Figure8ObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Figure8ObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Figure8ObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Figure8ObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Figure8ObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusType *out,
                const Figure8ObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Figure8ObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Figure8ObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Figure8ObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                Figure8ObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Figure8ObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Figure8ObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusTypeKeyHolder *key, 
                const Figure8ObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                Figure8ObjectiveDetailedStatusType *instance, 
                const Figure8ObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            Figure8ObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Figure8ObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            Figure8ObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Figure8ObjectiveDetailedStatusTypePlugin_1196933017_h */

