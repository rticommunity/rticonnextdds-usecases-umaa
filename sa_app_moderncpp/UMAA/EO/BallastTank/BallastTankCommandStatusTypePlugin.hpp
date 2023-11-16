

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankCommandStatusTypePlugin_309642512_h
#define BallastTankCommandStatusTypePlugin_309642512_h

#include "BallastTankCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BallastTankCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BallastTankCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BallastTankCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BallastTankCommandStatusType.
            */
            typedef  class BallastTankCommandStatusType BallastTankCommandStatusTypeKeyHolder;

            #define BallastTankCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastTankCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastTankCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastTankCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BallastTankCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BallastTankCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastTankCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastTankCommandStatusType*
            BallastTankCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastTankCommandStatusType*
            BallastTankCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandStatusType*
            BallastTankCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePluginSupport_copy_data(
                BallastTankCommandStatusType *out,
                const BallastTankCommandStatusType *in);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_destroy_data_w_params(
                BallastTankCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_destroy_data_ex(
                BallastTankCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_destroy_data(
                BallastTankCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_print_data(
                const BallastTankCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BallastTankCommandStatusType*
            BallastTankCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandStatusType*
            BallastTankCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_destroy_key_ex(
                BallastTankCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePluginSupport_destroy_key(
                BallastTankCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastTankCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastTankCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastTankCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastTankCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusType *out,
                const BallastTankCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastTankCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                BallastTankCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastTankCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusTypeKeyHolder *key, 
                const BallastTankCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandStatusType *instance, 
                const BallastTankCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastTankCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastTankCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastTankCommandStatusTypePlugin_309642512_h */

