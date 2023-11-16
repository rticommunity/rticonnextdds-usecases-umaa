

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionType_1507435713_h
#define DirectionType_1507435713_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Orientation/CourseType.h"
#include "UMAA/Common/Orientation/HeadingCurrentDirectionType.h"
#include "UMAA/Common/Orientation/HeadingMagneticNorthType.h"
#include "UMAA/Common/Orientation/HeadingTrueNorthType.h"
#include "UMAA/Common/Orientation/HeadingType.h"
#include "UMAA/Common/Orientation/HeadingWindDirectionType.h"

typedef enum UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors
{
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_COURSETYPE_SELECT , 
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_HEADINGTYPE_SELECT 
} UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_SelectorsSeq, UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_initialize(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_initialize_ex(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_initialize_w_params(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_finalize_w_return(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_finalize(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_finalize_ex(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_finalize_w_params(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_finalize_optional_members(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors_copy(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* dst,
    const UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTYPENAME;

}

struct UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTypeSupport;
class UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataWriter;
class UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataReader;
#endif

typedef struct UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union
{
    typedef struct UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Selectors _d;
    struct UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_u 
    {

        UMAA_Common_Orientation_CourseType   CourseType_data ;
        UMAA_Common_Orientation_HeadingType   HeadingType_data ;
    }_u;

} UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_UnionSeq, UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_initialize(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_initialize_ex(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_initialize_w_params(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_finalize_w_return(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_finalize(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_finalize_ex(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_finalize_w_params(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_finalize_optional_members(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_copy(
    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* dst,
    const UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_DirectionTypeTYPENAME;

}

struct UMAA_Common_Orientation_DirectionTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_DirectionTypeTypeSupport;
class UMAA_Common_Orientation_DirectionTypeDataWriter;
class UMAA_Common_Orientation_DirectionTypeDataReader;
#endif
class UMAA_Common_Orientation_DirectionType 
{
  public:
    typedef struct UMAA_Common_Orientation_DirectionTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_DirectionTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_DirectionTypeDataWriter DataWriter;
    typedef UMAA_Common_Orientation_DirectionTypeDataReader DataReader;
    #endif

    UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union   DirectionType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_DirectionType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_DirectionType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_DirectionType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_DirectionTypeSeq, UMAA_Common_Orientation_DirectionType);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_initialize(
    UMAA_Common_Orientation_DirectionType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_initialize_ex(
    UMAA_Common_Orientation_DirectionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_initialize_w_params(
    UMAA_Common_Orientation_DirectionType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_finalize_w_return(
    UMAA_Common_Orientation_DirectionType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_finalize(
    UMAA_Common_Orientation_DirectionType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_finalize_ex(
    UMAA_Common_Orientation_DirectionType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_finalize_w_params(
    UMAA_Common_Orientation_DirectionType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_DirectionType_finalize_optional_members(
    UMAA_Common_Orientation_DirectionType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_DirectionType_copy(
    UMAA_Common_Orientation_DirectionType* dst,
    const UMAA_Common_Orientation_DirectionType* src);

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
        struct type_code< UMAA_Common_Orientation_DirectionType_Specializations_DirectionType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Orientation_DirectionType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DirectionType */

