

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointTypePlugin_2035351708_h
#define GlobalWaypointTypePlugin_2035351708_h

#include "GlobalWaypointType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Distance/DistanceRequirementTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/Orientation3DNEDRequirementPlugin.hpp"
#include "UMAA/Common/Position/GeoPosition2DRequirementPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Speed/VariableSpeedVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalWaypointControl {

            #define GlobalWaypointTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalWaypointTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalWaypointTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalWaypointTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalWaypointTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalWaypointType*
            GlobalWaypointTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalWaypointType*
            GlobalWaypointTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointType*
            GlobalWaypointTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointTypePluginSupport_copy_data(
                GlobalWaypointType *out,
                const GlobalWaypointType *in);

            NDDSUSERDllExport extern void 
            GlobalWaypointTypePluginSupport_destroy_data_w_params(
                GlobalWaypointType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalWaypointTypePluginSupport_destroy_data_ex(
                GlobalWaypointType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointTypePluginSupport_destroy_data(
                GlobalWaypointType *sample);

            NDDSUSERDllExport extern void 
            GlobalWaypointTypePluginSupport_print_data(
                const GlobalWaypointType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointType *out,
                const GlobalWaypointType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalWaypointType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointTypePlugin_deserialize_from_cdr_buffer(
                GlobalWaypointType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalWaypointTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace GlobalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalWaypointTypePlugin_2035351708_h */

