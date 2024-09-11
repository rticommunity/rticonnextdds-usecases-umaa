

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RegularPolygonObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RegularPolygonObjectiveDetailedStatusTypePlugin_966849943_h
#define RegularPolygonObjectiveDetailedStatusTypePlugin_966849943_h

#include "RegularPolygonObjectiveDetailedStatusType.hpp"

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
            * By default, this type is struct RegularPolygonObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RegularPolygonObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RegularPolygonObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RegularPolygonObjectiveDetailedStatusType.
            */
            typedef class RegularPolygonObjectiveDetailedStatusType RegularPolygonObjectiveDetailedStatusTypeKeyHolder;

            #define RegularPolygonObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RegularPolygonObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RegularPolygonObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RegularPolygonObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RegularPolygonObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RegularPolygonObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RegularPolygonObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RegularPolygonObjectiveDetailedStatusType*
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RegularPolygonObjectiveDetailedStatusType*
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RegularPolygonObjectiveDetailedStatusType*
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_copy_data(
                RegularPolygonObjectiveDetailedStatusType *out,
                const RegularPolygonObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                RegularPolygonObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                RegularPolygonObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_destroy_data(
                RegularPolygonObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_print_data(
                const RegularPolygonObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RegularPolygonObjectiveDetailedStatusType*
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RegularPolygonObjectiveDetailedStatusType*
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                RegularPolygonObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePluginSupport_destroy_key(
                RegularPolygonObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RegularPolygonObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RegularPolygonObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RegularPolygonObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusType *out,
                const RegularPolygonObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RegularPolygonObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RegularPolygonObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RegularPolygonObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                RegularPolygonObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RegularPolygonObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusTypeKeyHolder *key, 
                const RegularPolygonObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveDetailedStatusType *instance, 
                const RegularPolygonObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RegularPolygonObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RegularPolygonObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RegularPolygonObjectiveDetailedStatusTypePlugin_966849943_h */

