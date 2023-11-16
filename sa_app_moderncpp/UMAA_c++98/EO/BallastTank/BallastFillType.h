

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastFillType_331398662_h
#define BallastFillType_331398662_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/BallastMassType.h"
#include "UMAA/Common/Measurement/LevelType.h"

typedef enum UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors
{
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_LEVELTYPE_SELECT , 
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_BALLASTMASSTYPE_SELECT 
} UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_SelectorsSeq, UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors_copy(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* dst,
    const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionTYPENAME;

}

struct UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionTypeSupport;
class UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionDataWriter;
class UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionDataReader;
#endif

typedef struct UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union
{
    typedef struct UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Selectors _d;
    struct UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_u 
    {

        UMAA_Common_Measurement_LevelType   LevelType_data ;
        UMAA_Common_Measurement_BallastMassType   BallastMassType_data ;
    }_u;

} UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_UnionSeq, UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_copy(
    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* dst,
    const UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastFillTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastFillTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastFillTypeTypeSupport;
class UMAA_EO_BallastTank_BallastFillTypeDataWriter;
class UMAA_EO_BallastTank_BallastFillTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastFillType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastFillTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastFillTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastFillTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastFillTypeDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union   BallastFillType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastFillType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastFillType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastFillType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastFillTypeSeq, UMAA_EO_BallastTank_BallastFillType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_initialize(
    UMAA_EO_BallastTank_BallastFillType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_initialize_ex(
    UMAA_EO_BallastTank_BallastFillType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_initialize_w_params(
    UMAA_EO_BallastTank_BallastFillType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_finalize_w_return(
    UMAA_EO_BallastTank_BallastFillType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_finalize(
    UMAA_EO_BallastTank_BallastFillType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_finalize_ex(
    UMAA_EO_BallastTank_BallastFillType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_finalize_w_params(
    UMAA_EO_BallastTank_BallastFillType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastFillType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastFillType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastFillType_copy(
    UMAA_EO_BallastTank_BallastFillType* dst,
    const UMAA_EO_BallastTank_BallastFillType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastFillType_Specializations_BallastFillType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_EO_BallastTank_BallastFillType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastFillType */

