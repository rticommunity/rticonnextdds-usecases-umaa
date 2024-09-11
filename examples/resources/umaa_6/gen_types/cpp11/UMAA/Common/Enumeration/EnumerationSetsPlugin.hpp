

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSetsPlugin_1089229688_h
#define EnumerationSetsPlugin_1089229688_h

#include "EnumerationSets.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#undef ERROR
#undef VARIABLE_PITCH
#undef DELETE
#undef PLATFORM
namespace UMAA {
    namespace Common {
        namespace Enumeration {

            #define BooleanEnumTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BooleanEnumTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BooleanEnumTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BooleanEnumTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BooleanEnumTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BooleanEnumType*
            BooleanEnumTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BooleanEnumType*
            BooleanEnumTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BooleanEnumType*
            BooleanEnumTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BooleanEnumTypePluginSupport_copy_data(
                BooleanEnumType *out,
                const BooleanEnumType *in);

            NDDSUSERDllExport extern void 
            BooleanEnumTypePluginSupport_destroy_data_w_params(
                BooleanEnumType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BooleanEnumTypePluginSupport_destroy_data_ex(
                BooleanEnumType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BooleanEnumTypePluginSupport_destroy_data(
                BooleanEnumType *sample);

            NDDSUSERDllExport extern void 
            BooleanEnumTypePluginSupport_print_data(
                const BooleanEnumType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BooleanEnumTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BooleanEnumType *out,
                const BooleanEnumType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BooleanEnumTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BooleanEnumTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BooleanEnumTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BooleanEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            namespace LineSegmentEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LineSegmentEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LineSegmentEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LineSegmentEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LineSegmentEnumTypePluginSupport_print_data(
                    const LineSegmentEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace LineSegmentEnumModule  */
            namespace OnOffStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OnOffStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OnOffStatusEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                OnOffStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                OnOffStatusEnumTypePluginSupport_print_data(
                    const OnOffStatusEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace OnOffStatusEnumModule  */
            namespace PrecipitationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PrecipitationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PrecipitationEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PrecipitationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PrecipitationEnumTypePluginSupport_print_data(
                    const PrecipitationEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PrecipitationEnumModule  */
            namespace ResourceAllocationStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ResourceAllocationStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ResourceAllocationStatusEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ResourceAllocationStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ResourceAllocationStatusEnumTypePluginSupport_print_data(
                    const ResourceAllocationStatusEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ResourceAllocationStatusEnumModule  */
            namespace SpecificLOIEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpecificLOIEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpecificLOIEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                SpecificLOIEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                SpecificLOIEnumTypePluginSupport_print_data(
                    const SpecificLOIEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace SpecificLOIEnumModule  */
        } /* namespace Enumeration  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EnumerationSetsPlugin_1089229688_h */

