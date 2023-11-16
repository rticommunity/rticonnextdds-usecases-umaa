

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionType_1416675266_h
#define PropulsionType_1416675266_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Propulsion/PropulsiveEffortType.h"
#include "UMAA/Common/Propulsion/PropulsiveRPMType.h"

typedef enum UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors
{
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_PROPULSIVEEFFORTTYPE_SELECT , 
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_PROPULSIVERPMTYPE_SELECT 
} UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_SelectorsSeq, UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_initialize(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_initialize_ex(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_finalize(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_finalize_ex(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors_copy(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* dst,
    const UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionTYPENAME;

}

struct UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionTypeSupport;
class UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionDataWriter;
class UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionDataReader;
#endif

typedef struct UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union
{
    typedef struct UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Selectors _d;
    struct UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_u 
    {

        UMAA_Common_Propulsion_PropulsiveEffortType   PropulsiveEffortType_data ;
        UMAA_Common_Propulsion_PropulsiveRPMType   PropulsiveRPMType_data ;
    }_u;

} UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_UnionSeq, UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_initialize(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_initialize_ex(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_finalize(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_finalize_ex(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_copy(
    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* dst,
    const UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Propulsion_PropulsionTypeTYPENAME;

}

struct UMAA_Common_Propulsion_PropulsionTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_PropulsionTypeTypeSupport;
class UMAA_Common_Propulsion_PropulsionTypeDataWriter;
class UMAA_Common_Propulsion_PropulsionTypeDataReader;
#endif
class UMAA_Common_Propulsion_PropulsionType 
{
  public:
    typedef struct UMAA_Common_Propulsion_PropulsionTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_PropulsionTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_PropulsionTypeDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_PropulsionTypeDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union   PropulsionType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionTypeSeq, UMAA_Common_Propulsion_PropulsionType);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_initialize(
    UMAA_Common_Propulsion_PropulsionType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_initialize_ex(
    UMAA_Common_Propulsion_PropulsionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_finalize(
    UMAA_Common_Propulsion_PropulsionType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_finalize_ex(
    UMAA_Common_Propulsion_PropulsionType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionType_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionType_copy(
    UMAA_Common_Propulsion_PropulsionType* dst,
    const UMAA_Common_Propulsion_PropulsionType* src);

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
        struct type_code< UMAA_Common_Propulsion_PropulsionType_Specializations_PropulsionType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Propulsion_PropulsionType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsionType */

