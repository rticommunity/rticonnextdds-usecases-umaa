

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProductDisseminateFileObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ProductDisseminateFileObjectiveTypePlugin_1767497409_h
#define ProductDisseminateFileObjectiveTypePlugin_1767497409_h

#include "ProductDisseminateFileObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/DateTime_TolerancePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define ProductDisseminateFileObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ProductDisseminateFileObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ProductDisseminateFileObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ProductDisseminateFileObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ProductDisseminateFileObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ProductDisseminateFileObjectiveType*
            ProductDisseminateFileObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ProductDisseminateFileObjectiveType*
            ProductDisseminateFileObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ProductDisseminateFileObjectiveType*
            ProductDisseminateFileObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ProductDisseminateFileObjectiveTypePluginSupport_copy_data(
                ProductDisseminateFileObjectiveType *out,
                const ProductDisseminateFileObjectiveType *in);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePluginSupport_destroy_data_w_params(
                ProductDisseminateFileObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePluginSupport_destroy_data_ex(
                ProductDisseminateFileObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePluginSupport_destroy_data(
                ProductDisseminateFileObjectiveType *sample);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePluginSupport_print_data(
                const ProductDisseminateFileObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ProductDisseminateFileObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ProductDisseminateFileObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ProductDisseminateFileObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ProductDisseminateFileObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProductDisseminateFileObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ProductDisseminateFileObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProductDisseminateFileObjectiveType *out,
                const ProductDisseminateFileObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ProductDisseminateFileObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ProductDisseminateFileObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ProductDisseminateFileObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ProductDisseminateFileObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProductDisseminateFileObjectiveTypePlugin_deserialize_from_cdr_buffer(
                ProductDisseminateFileObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ProductDisseminateFileObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ProductDisseminateFileObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ProductDisseminateFileObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ProductDisseminateFileObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ProductDisseminateFileObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ProductDisseminateFileObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ProductDisseminateFileObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ProductDisseminateFileObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ProductDisseminateFileObjectiveTypePlugin_1767497409_h */

