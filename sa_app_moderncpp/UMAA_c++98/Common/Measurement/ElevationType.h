

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationType_506920845_h
#define ElevationType_506920845_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/AltitudeAGLType.h"
#include "UMAA/Common/Measurement/AltitudeASFType.h"
#include "UMAA/Common/Measurement/AltitudeMSLType.h"
#include "UMAA/Common/Measurement/DepthType.h"

typedef enum UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors
{
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_ALTITUDEAGLTYPE_SELECT , 
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_ALTITUDEMSLTYPE_SELECT , 
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_ALTITUDEASFTYPE_SELECT , 
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_DEPTHTYPE_SELECT 
} UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_SelectorsSeq, UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_initialize(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_initialize_ex(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_initialize_w_params(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_finalize_w_return(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_finalize(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_finalize_ex(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_finalize_w_params(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_finalize_optional_members(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors_copy(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* dst,
    const UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionTYPENAME;

}

struct UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionTypeSupport;
class UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionDataWriter;
class UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionDataReader;
#endif

typedef struct UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union
{
    typedef struct UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionDataWriter DataWriter;
    typedef UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionDataReader DataReader;
    #endif

    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Selectors _d;
    struct UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_u 
    {

        UMAA_Common_Measurement_AltitudeAGLType   AltitudeAGLType_data ;
        UMAA_Common_Measurement_AltitudeMSLType   AltitudeMSLType_data ;
        UMAA_Common_Measurement_AltitudeASFType   AltitudeASFType_data ;
        UMAA_Common_Measurement_DepthType   DepthType_data ;
    }_u;

} UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_UnionSeq, UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_initialize(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_initialize_ex(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_initialize_w_params(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_finalize_w_return(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_finalize(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_finalize_ex(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_finalize_w_params(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_finalize_optional_members(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_copy(
    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* dst,
    const UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_Common_Measurement_ElevationTypeTYPENAME;

}

struct UMAA_Common_Measurement_ElevationTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_ElevationTypeTypeSupport;
class UMAA_Common_Measurement_ElevationTypeDataWriter;
class UMAA_Common_Measurement_ElevationTypeDataReader;
#endif
class UMAA_Common_Measurement_ElevationType 
{
  public:
    typedef struct UMAA_Common_Measurement_ElevationTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_ElevationTypeTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_ElevationTypeDataWriter DataWriter;
    typedef UMAA_Common_Measurement_ElevationTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union   ElevationType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_ElevationType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_ElevationType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_ElevationType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_ElevationTypeSeq, UMAA_Common_Measurement_ElevationType);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_initialize(
    UMAA_Common_Measurement_ElevationType* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_initialize_ex(
    UMAA_Common_Measurement_ElevationType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_initialize_w_params(
    UMAA_Common_Measurement_ElevationType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_finalize_w_return(
    UMAA_Common_Measurement_ElevationType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_finalize(
    UMAA_Common_Measurement_ElevationType* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_finalize_ex(
    UMAA_Common_Measurement_ElevationType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_finalize_w_params(
    UMAA_Common_Measurement_ElevationType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_ElevationType_finalize_optional_members(
    UMAA_Common_Measurement_ElevationType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_ElevationType_copy(
    UMAA_Common_Measurement_ElevationType* dst,
    const UMAA_Common_Measurement_ElevationType* src);

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
        struct type_code< UMAA_Common_Measurement_ElevationType_Specializations_ElevationType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_Common_Measurement_ElevationType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ElevationType */

