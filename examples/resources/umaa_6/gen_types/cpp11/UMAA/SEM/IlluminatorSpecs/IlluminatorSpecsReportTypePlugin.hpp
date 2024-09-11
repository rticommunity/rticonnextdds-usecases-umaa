

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorSpecsReportTypePlugin_1378571436_h
#define IlluminatorSpecsReportTypePlugin_1378571436_h

#include "IlluminatorSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SEM/IlluminatorSpecs/BeamWidthSpecsTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace IlluminatorSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct IlluminatorSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct IlluminatorSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * IlluminatorSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct IlluminatorSpecsReportType.
            */
            typedef class IlluminatorSpecsReportType IlluminatorSpecsReportTypeKeyHolder;

            #define IlluminatorSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define IlluminatorSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define IlluminatorSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorSpecsReportType*
            IlluminatorSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorSpecsReportType*
            IlluminatorSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorSpecsReportType*
            IlluminatorSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePluginSupport_copy_data(
                IlluminatorSpecsReportType *out,
                const IlluminatorSpecsReportType *in);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_destroy_data_w_params(
                IlluminatorSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_destroy_data_ex(
                IlluminatorSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_destroy_data(
                IlluminatorSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_print_data(
                const IlluminatorSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern IlluminatorSpecsReportType*
            IlluminatorSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorSpecsReportType*
            IlluminatorSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_destroy_key_ex(
                IlluminatorSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePluginSupport_destroy_key(
                IlluminatorSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            IlluminatorSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            IlluminatorSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            IlluminatorSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            IlluminatorSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportType *out,
                const IlluminatorSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            IlluminatorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const IlluminatorSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            IlluminatorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                IlluminatorSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            IlluminatorSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportTypeKeyHolder *key, 
                const IlluminatorSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorSpecsReportType *instance, 
                const IlluminatorSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            IlluminatorSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            IlluminatorSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace IlluminatorSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* IlluminatorSpecsReportTypePlugin_1378571436_h */

