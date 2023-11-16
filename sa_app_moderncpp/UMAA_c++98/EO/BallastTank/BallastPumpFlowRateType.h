

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpFlowRateType_2133444999_h
#define BallastPumpFlowRateType_2133444999_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/EO/BallastTank/MassBallastFlowRateType.h"
#include "UMAA/EO/BallastTank/VolumeBallastFlowRateType.h"

typedef enum UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors
{
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_MASSBALLASTFLOWRATETYPE_SELECT , 
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_VOLUMEBALLASTFLOWRATETYPE_SELECT 
} UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_SelectorsSeq, UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_initialize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_finalize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors_copy(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* dst,
    const UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionTYPENAME;

}

struct UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionTypeSupport;
class UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionDataWriter;
class UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionDataReader;
#endif

typedef struct UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union
{
    typedef struct UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Selectors _d;
    struct UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_u 
    {

        UMAA_EO_BallastTank_MassBallastFlowRateType   MassBallastFlowRateType_data ;
        UMAA_EO_BallastTank_VolumeBallastFlowRateType   VolumeBallastFlowRateType_data ;
    }_u;

} UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_UnionSeq, UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_initialize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_finalize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_copy(
    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* dst,
    const UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastPumpFlowRateTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastPumpFlowRateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastPumpFlowRateTypeTypeSupport;
class UMAA_EO_BallastTank_BallastPumpFlowRateTypeDataWriter;
class UMAA_EO_BallastTank_BallastPumpFlowRateTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastPumpFlowRateType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastPumpFlowRateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastPumpFlowRateTypeDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union   BallastPumpFlowRateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpFlowRateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpFlowRateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpFlowRateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpFlowRateTypeSeq, UMAA_EO_BallastTank_BallastPumpFlowRateType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_initialize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_finalize(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpFlowRateType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpFlowRateType_copy(
    UMAA_EO_BallastTank_BallastPumpFlowRateType* dst,
    const UMAA_EO_BallastTank_BallastPumpFlowRateType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastPumpFlowRateType_Specializations_BallastPumpFlowRateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_EO_BallastTank_BallastPumpFlowRateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastPumpFlowRateType */

