

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactTypePlugin_1508709596_h
#define ContactTypePlugin_1508709596_h

#include "ContactType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_MSLPlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionPositionTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/PolygonPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"
#include "UMAA/Common/Measurement/RMSDistanceErrorTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace ContactStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ContactType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ContactType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ContactType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ContactType.
            */
            typedef class ContactType ContactTypeKeyHolder;

            #define ContactTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ContactTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ContactTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactType*
            ContactTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactType*
            ContactTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactType*
            ContactTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactTypePluginSupport_copy_data(
                ContactType *out,
                const ContactType *in);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_destroy_data_w_params(
                ContactType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_destroy_data_ex(
                ContactType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_destroy_data(
                ContactType *sample);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_print_data(
                const ContactType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ContactType*
            ContactTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactType*
            ContactTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_destroy_key_ex(
                ContactTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactTypePluginSupport_destroy_key(
                ContactTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ContactTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ContactTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ContactTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ContactTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ContactTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactType *out,
                const ContactType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactTypePlugin_deserialize_from_cdr_buffer(
                ContactType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactTypeKeyHolder *key, 
                const ContactType *instance);

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ContactType *instance, 
                const ContactTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ContactTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ContactTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ContactTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ContactStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactTypePlugin_1508709596_h */

