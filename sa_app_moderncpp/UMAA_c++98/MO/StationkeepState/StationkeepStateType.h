

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepStateType_412239531_h
#define StationkeepStateType_412239531_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/StationkeepState/StationkeepingStationkeepType.h"
#include "UMAA/MO/StationkeepState/TransitStationkeepType.h"

typedef enum UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors
{
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_TRANSITSTATIONKEEPTYPE_SELECT , 
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_STATIONKEEPINGSTATIONKEEPTYPE_SELECT 
} UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_SelectorsSeq, UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_initialize(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_initialize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_initialize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_finalize_w_return(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_finalize(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_finalize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_finalize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_finalize_optional_members(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors_copy(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* dst,
    const UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionTYPENAME;

}

struct UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionTypeSupport;
class UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionDataWriter;
class UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union
{
    typedef struct UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Selectors _d;
    struct UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_u 
    {

        UMAA_MO_StationkeepState_TransitStationkeepType   TransitStationkeepType_data ;
        UMAA_MO_StationkeepState_StationkeepingStationkeepType   StationkeepingStationkeepType_data ;
    }_u;

} UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_UnionSeq, UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_initialize(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_initialize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_initialize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_finalize_w_return(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_finalize(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_finalize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_finalize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_finalize_optional_members(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_copy(
    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* dst,
    const UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_StationkeepState_StationkeepStateTypeTYPENAME;

}

struct UMAA_MO_StationkeepState_StationkeepStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_StationkeepState_StationkeepStateTypeTypeSupport;
class UMAA_MO_StationkeepState_StationkeepStateTypeDataWriter;
class UMAA_MO_StationkeepState_StationkeepStateTypeDataReader;
#endif
class UMAA_MO_StationkeepState_StationkeepStateType 
{
  public:
    typedef struct UMAA_MO_StationkeepState_StationkeepStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_StationkeepState_StationkeepStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_StationkeepState_StationkeepStateTypeDataWriter DataWriter;
    typedef UMAA_MO_StationkeepState_StationkeepStateTypeDataReader DataReader;
    #endif

    UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union   StationkeepStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepState_StationkeepStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepState_StationkeepStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepState_StationkeepStateTypeSeq, UMAA_MO_StationkeepState_StationkeepStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_initialize(
    UMAA_MO_StationkeepState_StationkeepStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_initialize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_initialize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_finalize_w_return(
    UMAA_MO_StationkeepState_StationkeepStateType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_finalize(
    UMAA_MO_StationkeepState_StationkeepStateType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_finalize_ex(
    UMAA_MO_StationkeepState_StationkeepStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_finalize_w_params(
    UMAA_MO_StationkeepState_StationkeepStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepStateType_finalize_optional_members(
    UMAA_MO_StationkeepState_StationkeepStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepStateType_copy(
    UMAA_MO_StationkeepState_StationkeepStateType* dst,
    const UMAA_MO_StationkeepState_StationkeepStateType* src);

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
        struct type_code< UMAA_MO_StationkeepState_StationkeepStateType_Specializations_StationkeepStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_StationkeepState_StationkeepStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StationkeepStateType */

