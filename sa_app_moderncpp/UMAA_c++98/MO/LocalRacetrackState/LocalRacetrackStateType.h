

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackStateType_856341078_h
#define LocalRacetrackStateType_856341078_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/LocalRacetrackState/LocalRacetrackPatternType.h"
#include "UMAA/MO/LocalRacetrackState/LocalRacetrackTransitType.h"

typedef enum UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors
{
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_LOCALRACETRACKTRANSITTYPE_SELECT , 
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_LOCALRACETRACKPATTERNTYPE_SELECT 
} UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_SelectorsSeq, UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_initialize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_initialize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_initialize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_finalize_w_return(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_finalize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_finalize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_finalize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_finalize_optional_members(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors_copy(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* dst,
    const UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionTYPENAME;

}

struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionTypeSupport;
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionDataWriter;
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union
{
    typedef struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Selectors _d;
    struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_u 
    {

        UMAA_MO_LocalRacetrackState_LocalRacetrackTransitType   LocalRacetrackTransitType_data ;
        UMAA_MO_LocalRacetrackState_LocalRacetrackPatternType   LocalRacetrackPatternType_data ;
    }_u;

} UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_UnionSeq, UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_initialize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_initialize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_initialize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_finalize_w_return(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_finalize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_finalize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_finalize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_finalize_optional_members(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_copy(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* dst,
    const UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeTYPENAME;

}

struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeTypeSupport;
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeDataWriter;
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeDataReader;
#endif
class UMAA_MO_LocalRacetrackState_LocalRacetrackStateType 
{
  public:
    typedef struct UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union   LocalRacetrackStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRacetrackState_LocalRacetrackStateTypeSeq, UMAA_MO_LocalRacetrackState_LocalRacetrackStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_initialize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_initialize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_initialize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_finalize_w_return(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_finalize(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_finalize_ex(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_finalize_w_params(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_finalize_optional_members(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_copy(
    UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* dst,
    const UMAA_MO_LocalRacetrackState_LocalRacetrackStateType* src);

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
        struct type_code< UMAA_MO_LocalRacetrackState_LocalRacetrackStateType_Specializations_LocalRacetrackStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_LocalRacetrackState_LocalRacetrackStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRacetrackStateType */

