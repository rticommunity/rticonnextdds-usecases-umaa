

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8CommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8CommandTypePlugin_35291217_h
#define LocalFigure8CommandTypePlugin_35291217_h

#include "LocalFigure8CommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTypePlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalFigure8Control {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalFigure8CommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalFigure8CommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalFigure8CommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalFigure8CommandType.
            */
            typedef  class LocalFigure8CommandType LocalFigure8CommandTypeKeyHolder;

            #define LocalFigure8CommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalFigure8CommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalFigure8CommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalFigure8CommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalFigure8CommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalFigure8CommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalFigure8CommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalFigure8CommandType*
            LocalFigure8CommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalFigure8CommandType*
            LocalFigure8CommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalFigure8CommandType*
            LocalFigure8CommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePluginSupport_copy_data(
                LocalFigure8CommandType *out,
                const LocalFigure8CommandType *in);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_destroy_data_w_params(
                LocalFigure8CommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_destroy_data_ex(
                LocalFigure8CommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_destroy_data(
                LocalFigure8CommandType *sample);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_print_data(
                const LocalFigure8CommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalFigure8CommandType*
            LocalFigure8CommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalFigure8CommandType*
            LocalFigure8CommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_destroy_key_ex(
                LocalFigure8CommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePluginSupport_destroy_key(
                LocalFigure8CommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalFigure8CommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalFigure8CommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalFigure8CommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalFigure8CommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandType *out,
                const LocalFigure8CommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalFigure8CommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalFigure8CommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalFigure8CommandTypePlugin_deserialize_from_cdr_buffer(
                LocalFigure8CommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8CommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalFigure8CommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8CommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8CommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandTypeKeyHolder *key, 
                const LocalFigure8CommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8CommandType *instance, 
                const LocalFigure8CommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8CommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalFigure8CommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalFigure8CommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalFigure8Control  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalFigure8CommandTypePlugin_35291217_h */

