

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationType_1949645477_h
#define OrientationType_1949645477_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Orientation/AttitudeType.h"
#include "UMAA/Common/Orientation/CourseType.h"
#include "UMAA/Common/Orientation/DirectionType.h"
#include "UMAA/Common/Orientation/HeadingCurrentDirectionType.h"
#include "UMAA/Common/Orientation/HeadingMagneticNorthType.h"
#include "UMAA/Common/Orientation/HeadingTrueNorthType.h"
#include "UMAA/Common/Orientation/HeadingType.h"
#include "UMAA/Common/Orientation/HeadingWindDirectionType.h"

typedef enum UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors
{
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_DIRECTIONTYPE_SELECT , 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_ATTITUDETYPE_SELECT 
} UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_SelectorsSeq, UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_initialize(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_initialize_ex(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_initialize_w_params(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_finalize_w_return(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_finalize(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_finalize_ex(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_finalize_w_params(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_finalize_optional_members(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors_copy(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* dst,
    const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTYPENAME;

}

struct UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTypeSupport;
class UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataWriter;
class UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataReader;
#endif

typedef struct UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union
{
    typedef struct UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors _d;
    struct UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_u 
    {

        UMAA_Common_Orientation_DirectionType   DirectionType_data ;
        UMAA_Common_Orientation_AttitudeType   AttitudeType_data ;
    }_u;

} UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionSeq, UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_initialize(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_initialize_ex(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_initialize_w_params(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_finalize_w_return(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_finalize(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_finalize_ex(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_finalize_w_params(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_finalize_optional_members(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_copy(
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* dst,
    const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Orientation_OrientationTypeTYPENAME;

}

struct UMAA_Common_Orientation_OrientationTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Orientation_OrientationTypeTypeSupport;
class UMAA_Common_Orientation_OrientationTypeDataWriter;
class UMAA_Common_Orientation_OrientationTypeDataReader;
#endif
class UMAA_Common_Orientation_OrientationType 
{
  public:
    typedef struct UMAA_Common_Orientation_OrientationTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Orientation_OrientationTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Orientation_OrientationTypeDataWriter DataWriter;
    typedef UMAA_Common_Orientation_OrientationTypeDataReader DataReader;
    #endif

    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union   OrientationType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Orientation_OrientationType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Orientation_OrientationType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Orientation_OrientationType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Orientation_OrientationTypeSeq, UMAA_Common_Orientation_OrientationType);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_initialize(
    UMAA_Common_Orientation_OrientationType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_initialize_ex(
    UMAA_Common_Orientation_OrientationType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_initialize_w_params(
    UMAA_Common_Orientation_OrientationType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_finalize_w_return(
    UMAA_Common_Orientation_OrientationType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_finalize(
    UMAA_Common_Orientation_OrientationType* self);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_finalize_ex(
    UMAA_Common_Orientation_OrientationType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_finalize_w_params(
    UMAA_Common_Orientation_OrientationType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Orientation_OrientationType_finalize_optional_members(
    UMAA_Common_Orientation_OrientationType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Orientation_OrientationType_copy(
    UMAA_Common_Orientation_OrientationType* dst,
    const UMAA_Common_Orientation_OrientationType* src);

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
        struct type_code< UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Orientation_OrientationType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* OrientationType */

