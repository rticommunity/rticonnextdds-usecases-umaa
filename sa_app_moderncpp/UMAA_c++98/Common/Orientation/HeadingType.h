

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingType_1335779745_h
#define HeadingType_1335779745_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Orientation/HeadingCurrentDirectionType.h"
#include "UMAA/Common/Orientation/HeadingMagneticNorthType.h"
#include "UMAA/Common/Orientation/HeadingTrueNorthType.h"
#include "UMAA/Common/Orientation/HeadingWindDirectionType.h"

typedef enum UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors
{
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_HEADINGTRUENORTHTYPE_SELECT , 
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_HEADINGCURRENTDIRECTIONTYPE_SELECT , 
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_HEADINGMAGNETICNORTHTYPE_SELECT , 
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_HEADINGWINDDIRECTIONTYPE_SELECT 
} UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_SelectorsSeq, UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_initialize(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_initialize_ex(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_initialize_w_params(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_finalize_w_return(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_finalize(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_finalize_ex(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_finalize_w_params(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_finalize_optional_members(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors_copy(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* dst,
    const UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionTYPENAME;

}

struct UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionTypeSupport;
class UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionDataWriter;
class UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionDataReader;
#endif

typedef struct UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union
{
    typedef struct UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Selectors _d;
    struct UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_u 
    {

        UMAA_Common_Orientation_HeadingTrueNorthType   HeadingTrueNorthType_data ;
        UMAA_Common_Orientation_HeadingCurrentDirectionType   HeadingCurrentDirectionType_data ;
        UMAA_Common_Orientation_HeadingMagneticNorthType   HeadingMagneticNorthType_data ;
        UMAA_Common_Orientation_HeadingWindDirectionType   HeadingWindDirectionType_data ;
    }_u;

} UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_UnionSeq, UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_initialize(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_initialize_ex(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_initialize_w_params(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_finalize_w_return(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_finalize(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_finalize_ex(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_finalize_w_params(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_finalize_optional_members(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_copy(
    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* dst,
    const UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_HeadingTypeTYPENAME;

}

struct UMAA_Common_Orientation_HeadingTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_HeadingTypeTypeSupport;
class UMAA_Common_Orientation_HeadingTypeDataWriter;
class UMAA_Common_Orientation_HeadingTypeDataReader;
#endif
class UMAA_Common_Orientation_HeadingType 
{
  public:
    typedef struct UMAA_Common_Orientation_HeadingTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_HeadingTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_HeadingTypeDataWriter DataWriter;
    typedef UMAA_Common_Orientation_HeadingTypeDataReader DataReader;
    #endif

    UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union   HeadingType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_HeadingType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_HeadingType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_HeadingType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_HeadingTypeSeq, UMAA_Common_Orientation_HeadingType);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_initialize(
    UMAA_Common_Orientation_HeadingType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_initialize_ex(
    UMAA_Common_Orientation_HeadingType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_initialize_w_params(
    UMAA_Common_Orientation_HeadingType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_finalize_w_return(
    UMAA_Common_Orientation_HeadingType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_finalize(
    UMAA_Common_Orientation_HeadingType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_finalize_ex(
    UMAA_Common_Orientation_HeadingType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_finalize_w_params(
    UMAA_Common_Orientation_HeadingType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_HeadingType_finalize_optional_members(
    UMAA_Common_Orientation_HeadingType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_HeadingType_copy(
    UMAA_Common_Orientation_HeadingType* dst,
    const UMAA_Common_Orientation_HeadingType* src);

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
        struct type_code< UMAA_Common_Orientation_HeadingType_Specializations_HeadingType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Orientation_HeadingType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HeadingType */

