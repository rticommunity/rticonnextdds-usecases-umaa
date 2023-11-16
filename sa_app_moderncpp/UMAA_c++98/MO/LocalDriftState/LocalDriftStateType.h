

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftStateType_694778570_h
#define LocalDriftStateType_694778570_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/LocalDriftState/LocalRegionDriftType.h"
#include "UMAA/MO/LocalDriftState/LocalTransitDriftType.h"

typedef enum UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors
{
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_LOCALTRANSITDRIFTTYPE_SELECT , 
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_LOCALREGIONDRIFTTYPE_SELECT 
} UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_SelectorsSeq, UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_initialize(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_initialize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_initialize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_finalize_w_return(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_finalize(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_finalize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_finalize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_finalize_optional_members(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors_copy(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* dst,
    const UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTYPENAME;

}

struct UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTypeSupport;
class UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataWriter;
class UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union
{
    typedef struct UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Selectors _d;
    struct UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_u 
    {

        UMAA_MO_LocalDriftState_LocalTransitDriftType   LocalTransitDriftType_data ;
        UMAA_MO_LocalDriftState_LocalRegionDriftType   LocalRegionDriftType_data ;
    }_u;

} UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_UnionSeq, UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_initialize(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_initialize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_initialize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_finalize_w_return(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_finalize(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_finalize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_finalize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_finalize_optional_members(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_copy(
    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* dst,
    const UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalDriftState_LocalDriftStateTypeTYPENAME;

}

struct UMAA_MO_LocalDriftState_LocalDriftStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftState_LocalDriftStateTypeTypeSupport;
class UMAA_MO_LocalDriftState_LocalDriftStateTypeDataWriter;
class UMAA_MO_LocalDriftState_LocalDriftStateTypeDataReader;
#endif
class UMAA_MO_LocalDriftState_LocalDriftStateType 
{
  public:
    typedef struct UMAA_MO_LocalDriftState_LocalDriftStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftState_LocalDriftStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftState_LocalDriftStateTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftState_LocalDriftStateTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union   LocalDriftStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftState_LocalDriftStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftState_LocalDriftStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftState_LocalDriftStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftState_LocalDriftStateTypeSeq, UMAA_MO_LocalDriftState_LocalDriftStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_initialize(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_initialize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_initialize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_w_return(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_finalize(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_ex(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_w_params(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftState_LocalDriftStateType_finalize_optional_members(
    UMAA_MO_LocalDriftState_LocalDriftStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftState_LocalDriftStateType_copy(
    UMAA_MO_LocalDriftState_LocalDriftStateType* dst,
    const UMAA_MO_LocalDriftState_LocalDriftStateType* src);

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
        struct type_code< UMAA_MO_LocalDriftState_LocalDriftStateType_Specializations_LocalDriftStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_LocalDriftState_LocalDriftStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalDriftStateType */

