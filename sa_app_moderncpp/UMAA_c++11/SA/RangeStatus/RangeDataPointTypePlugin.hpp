

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeDataPointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeDataPointTypePlugin_702923335_h
#define RangeDataPointTypePlugin_702923335_h

#include "RangeDataPointType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePolarTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace RangeStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RangeDataPointType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RangeDataPointType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RangeDataPointType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RangeDataPointType.
            */
            typedef class RangeDataPointType RangeDataPointTypeKeyHolder;

            #define RangeDataPointTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RangeDataPointTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RangeDataPointTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RangeDataPointTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RangeDataPointTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RangeDataPointTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RangeDataPointTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RangeDataPointType*
            RangeDataPointTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RangeDataPointType*
            RangeDataPointTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeDataPointType*
            RangeDataPointTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePluginSupport_copy_data(
                RangeDataPointType *out,
                const RangeDataPointType *in);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_destroy_data_w_params(
                RangeDataPointType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_destroy_data_ex(
                RangeDataPointType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_destroy_data(
                RangeDataPointType *sample);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_print_data(
                const RangeDataPointType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RangeDataPointType*
            RangeDataPointTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeDataPointType*
            RangeDataPointTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_destroy_key_ex(
                RangeDataPointTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePluginSupport_destroy_key(
                RangeDataPointTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RangeDataPointTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RangeDataPointTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RangeDataPointTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RangeDataPointTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointType *out,
                const RangeDataPointType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RangeDataPointTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RangeDataPointType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RangeDataPointTypePlugin_deserialize_from_cdr_buffer(
                RangeDataPointType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RangeDataPointTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RangeDataPointTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RangeDataPointTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RangeDataPointTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointTypeKeyHolder *key, 
                const RangeDataPointType *instance);

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RangeDataPointType *instance, 
                const RangeDataPointTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RangeDataPointTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RangeDataPointTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RangeDataPointTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RangeStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RangeDataPointTypePlugin_702923335_h */

