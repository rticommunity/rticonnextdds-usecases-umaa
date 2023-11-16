

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftStateType_190883952_h
#define GlobalDriftStateType_190883952_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/GlobalDriftState/GlobalRegionDriftType.h"
#include "UMAA/MO/GlobalDriftState/GlobalTransitDriftType.h"

typedef enum UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors
{
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_GLOBALTRANSITDRIFTTYPE_SELECT , 
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_GLOBALREGIONDRIFTTYPE_SELECT 
} UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_SelectorsSeq, UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_initialize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_initialize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_initialize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_finalize_w_return(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_finalize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_finalize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_finalize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_finalize_optional_members(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors_copy(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* dst,
    const UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionTYPENAME;

}

struct UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionTypeSupport;
class UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionDataWriter;
class UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union
{
    typedef struct UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Selectors _d;
    struct UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_u 
    {

        UMAA_MO_GlobalDriftState_GlobalTransitDriftType   GlobalTransitDriftType_data ;
        UMAA_MO_GlobalDriftState_GlobalRegionDriftType   GlobalRegionDriftType_data ;
    }_u;

} UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_UnionSeq, UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_initialize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_initialize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_initialize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_finalize_w_return(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_finalize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_finalize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_finalize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_finalize_optional_members(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_copy(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* dst,
    const UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalDriftState_GlobalDriftStateTypeTYPENAME;

}

struct UMAA_MO_GlobalDriftState_GlobalDriftStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalDriftState_GlobalDriftStateTypeTypeSupport;
class UMAA_MO_GlobalDriftState_GlobalDriftStateTypeDataWriter;
class UMAA_MO_GlobalDriftState_GlobalDriftStateTypeDataReader;
#endif
class UMAA_MO_GlobalDriftState_GlobalDriftStateType 
{
  public:
    typedef struct UMAA_MO_GlobalDriftState_GlobalDriftStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalDriftState_GlobalDriftStateTypeDataReader DataReader;
    #endif

    UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union   GlobalDriftStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftState_GlobalDriftStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftState_GlobalDriftStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftState_GlobalDriftStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftState_GlobalDriftStateTypeSeq, UMAA_MO_GlobalDriftState_GlobalDriftStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_initialize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_initialize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_initialize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_finalize_w_return(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_finalize(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_finalize_ex(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_finalize_w_params(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftState_GlobalDriftStateType_finalize_optional_members(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftState_GlobalDriftStateType_copy(
    UMAA_MO_GlobalDriftState_GlobalDriftStateType* dst,
    const UMAA_MO_GlobalDriftState_GlobalDriftStateType* src);

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
        struct type_code< UMAA_MO_GlobalDriftState_GlobalDriftStateType_Specializations_GlobalDriftStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_GlobalDriftState_GlobalDriftStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDriftStateType */

