

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HoverObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HoverObjectiveDetailedStatusTypePlugin_1592589801_h
#define HoverObjectiveDetailedStatusTypePlugin_1592589801_h

#include "HoverObjectiveDetailedStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/DirectionVariantTypePlugin.hpp"
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
            * By default, this type is struct HoverObjectiveDetailedStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HoverObjectiveDetailedStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HoverObjectiveDetailedStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HoverObjectiveDetailedStatusType.
            */
            typedef class HoverObjectiveDetailedStatusType HoverObjectiveDetailedStatusTypeKeyHolder;

            #define HoverObjectiveDetailedStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HoverObjectiveDetailedStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HoverObjectiveDetailedStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HoverObjectiveDetailedStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HoverObjectiveDetailedStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HoverObjectiveDetailedStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HoverObjectiveDetailedStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HoverObjectiveDetailedStatusType*
            HoverObjectiveDetailedStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HoverObjectiveDetailedStatusType*
            HoverObjectiveDetailedStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HoverObjectiveDetailedStatusType*
            HoverObjectiveDetailedStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePluginSupport_copy_data(
                HoverObjectiveDetailedStatusType *out,
                const HoverObjectiveDetailedStatusType *in);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_destroy_data_w_params(
                HoverObjectiveDetailedStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_destroy_data_ex(
                HoverObjectiveDetailedStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_destroy_data(
                HoverObjectiveDetailedStatusType *sample);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_print_data(
                const HoverObjectiveDetailedStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HoverObjectiveDetailedStatusType*
            HoverObjectiveDetailedStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HoverObjectiveDetailedStatusType*
            HoverObjectiveDetailedStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_destroy_key_ex(
                HoverObjectiveDetailedStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePluginSupport_destroy_key(
                HoverObjectiveDetailedStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HoverObjectiveDetailedStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HoverObjectiveDetailedStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HoverObjectiveDetailedStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HoverObjectiveDetailedStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusType *out,
                const HoverObjectiveDetailedStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HoverObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HoverObjectiveDetailedStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HoverObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                HoverObjectiveDetailedStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveDetailedStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HoverObjectiveDetailedStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HoverObjectiveDetailedStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusTypeKeyHolder *key, 
                const HoverObjectiveDetailedStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HoverObjectiveDetailedStatusType *instance, 
                const HoverObjectiveDetailedStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HoverObjectiveDetailedStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HoverObjectiveDetailedStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HoverObjectiveDetailedStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HoverObjectiveDetailedStatusTypePlugin_1592589801_h */

