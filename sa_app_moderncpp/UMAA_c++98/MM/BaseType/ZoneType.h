

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ZoneType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ZoneType_1784329639_h
#define ZoneType_1784329639_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Polygon_Volume.h"
#include "UMAA/MM/BaseType/PlanningZoneType.h"
#include "UMAA/Common/Measurement/Measurements.h"

typedef enum UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors
{
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_PLANNINGZONETYPE_SELECT 
} UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_SelectorsSeq, UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_initialize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_return(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors_copy(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* dst,
    const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionTYPENAME;

}

struct UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionTypeSupport;
class UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionDataWriter;
class UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionDataReader;
#endif

typedef struct UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union
{
    typedef struct UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionDataReader DataReader;
    #endif

    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Selectors _d;
    struct UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_u 
    {

        UMAA_MM_BaseType_PlanningZoneType   PlanningZoneType_data ;
    }_u;

} UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_UnionSeq, UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_initialize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_return(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_ex(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_w_params(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_copy(
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* dst,
    const UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MM_BaseType_ZoneTypeTYPENAME;

}

struct UMAA_MM_BaseType_ZoneTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_BaseType_ZoneTypeTypeSupport;
class UMAA_MM_BaseType_ZoneTypeDataWriter;
class UMAA_MM_BaseType_ZoneTypeDataReader;
#endif
class UMAA_MM_BaseType_ZoneType 
{
  public:
    typedef struct UMAA_MM_BaseType_ZoneTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_BaseType_ZoneTypeTypeSupport TypeSupport;
    typedef UMAA_MM_BaseType_ZoneTypeDataWriter DataWriter;
    typedef UMAA_MM_BaseType_ZoneTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Polygon_Volume   zone ;
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType   zoneKind ;
    UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union   ZoneType_subtypes ;
    UMAA_Common_Measurement_NumericGUID   zoneID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_BaseType_ZoneType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_BaseType_ZoneType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ZoneType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_BaseType_ZoneTypeSeq, UMAA_MM_BaseType_ZoneType);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_initialize(
    UMAA_MM_BaseType_ZoneType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_initialize_ex(
    UMAA_MM_BaseType_ZoneType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_initialize_w_params(
    UMAA_MM_BaseType_ZoneType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_finalize_w_return(
    UMAA_MM_BaseType_ZoneType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_finalize(
    UMAA_MM_BaseType_ZoneType* self);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_finalize_ex(
    UMAA_MM_BaseType_ZoneType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_finalize_w_params(
    UMAA_MM_BaseType_ZoneType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_BaseType_ZoneType_finalize_optional_members(
    UMAA_MM_BaseType_ZoneType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_BaseType_ZoneType_copy(
    UMAA_MM_BaseType_ZoneType* dst,
    const UMAA_MM_BaseType_ZoneType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code< UMAA_MM_BaseType_ZoneType_Specializations_ZoneType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MM_BaseType_ZoneType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ZoneType */

