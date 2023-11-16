

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionRotationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionRotationType_1045182234_h
#define PropulsionRotationType_1045182234_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Propulsion/PropulsiveRotationAngleType.h"
#include "UMAA/Common/Propulsion/PropulsiveRotationEffortType.h"

typedef enum UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors
{
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_PROPULSIVEROTATIONEFFORTTYPE_SELECT , 
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_PROPULSIVEROTATIONANGLETYPE_SELECT 
} UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_SelectorsSeq, UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_initialize(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_initialize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_finalize(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_finalize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors_copy(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* dst,
    const UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionTYPENAME;

}

struct UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionTypeSupport;
class UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionDataWriter;
class UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionDataReader;
#endif

typedef struct UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union
{
    typedef struct UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Selectors _d;
    struct UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_u 
    {

        UMAA_Common_Propulsion_PropulsiveRotationEffortType   PropulsiveRotationEffortType_data ;
        UMAA_Common_Propulsion_PropulsiveRotationAngleType   PropulsiveRotationAngleType_data ;
    }_u;

} UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_UnionSeq, UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_initialize(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_initialize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_finalize(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_finalize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_copy(
    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* dst,
    const UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Propulsion_PropulsionRotationTypeTYPENAME;

}

struct UMAA_Common_Propulsion_PropulsionRotationTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Propulsion_PropulsionRotationTypeTypeSupport;
class UMAA_Common_Propulsion_PropulsionRotationTypeDataWriter;
class UMAA_Common_Propulsion_PropulsionRotationTypeDataReader;
#endif
class UMAA_Common_Propulsion_PropulsionRotationType 
{
  public:
    typedef struct UMAA_Common_Propulsion_PropulsionRotationTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Propulsion_PropulsionRotationTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Propulsion_PropulsionRotationTypeDataWriter DataWriter;
    typedef UMAA_Common_Propulsion_PropulsionRotationTypeDataReader DataReader;
    #endif

    UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union   PropulsionRotationType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Propulsion_PropulsionRotationType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Propulsion_PropulsionRotationType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Propulsion_PropulsionRotationType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Propulsion_PropulsionRotationTypeSeq, UMAA_Common_Propulsion_PropulsionRotationType);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_initialize(
    UMAA_Common_Propulsion_PropulsionRotationType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_initialize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_initialize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_finalize_w_return(
    UMAA_Common_Propulsion_PropulsionRotationType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_finalize(
    UMAA_Common_Propulsion_PropulsionRotationType* self);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_finalize_ex(
    UMAA_Common_Propulsion_PropulsionRotationType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_finalize_w_params(
    UMAA_Common_Propulsion_PropulsionRotationType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Propulsion_PropulsionRotationType_finalize_optional_members(
    UMAA_Common_Propulsion_PropulsionRotationType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Propulsion_PropulsionRotationType_copy(
    UMAA_Common_Propulsion_PropulsionRotationType* dst,
    const UMAA_Common_Propulsion_PropulsionRotationType* src);

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
        struct type_code< UMAA_Common_Propulsion_PropulsionRotationType_Specializations_PropulsionRotationType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Propulsion_PropulsionRotationType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PropulsionRotationType */

