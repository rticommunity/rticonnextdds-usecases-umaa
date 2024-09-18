

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticVariationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MagneticVariationReportTypePlugin_104578497_h
#define MagneticVariationReportTypePlugin_104578497_h

#include "MagneticVariationReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace MagneticVariationStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MagneticVariationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MagneticVariationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MagneticVariationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MagneticVariationReportType.
            */
            typedef class MagneticVariationReportType MagneticVariationReportTypeKeyHolder;

            #define MagneticVariationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MagneticVariationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MagneticVariationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MagneticVariationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MagneticVariationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MagneticVariationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MagneticVariationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MagneticVariationReportType*
            MagneticVariationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MagneticVariationReportType*
            MagneticVariationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MagneticVariationReportType*
            MagneticVariationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePluginSupport_copy_data(
                MagneticVariationReportType *out,
                const MagneticVariationReportType *in);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_destroy_data_w_params(
                MagneticVariationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_destroy_data_ex(
                MagneticVariationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_destroy_data(
                MagneticVariationReportType *sample);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_print_data(
                const MagneticVariationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MagneticVariationReportType*
            MagneticVariationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MagneticVariationReportType*
            MagneticVariationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_destroy_key_ex(
                MagneticVariationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePluginSupport_destroy_key(
                MagneticVariationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MagneticVariationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MagneticVariationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MagneticVariationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MagneticVariationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportType *out,
                const MagneticVariationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MagneticVariationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MagneticVariationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MagneticVariationReportTypePlugin_deserialize_from_cdr_buffer(
                MagneticVariationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MagneticVariationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportTypeKeyHolder *key, 
                const MagneticVariationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariationReportType *instance, 
                const MagneticVariationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MagneticVariationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MagneticVariationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MagneticVariationStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MagneticVariationReportTypePlugin_104578497_h */
