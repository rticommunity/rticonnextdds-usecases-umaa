

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterType_1057600525_h
#define PathReporterType_1057600525_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_SA_PathReporterSpecs_PathReporterTypeTYPENAME;

}

struct UMAA_SA_PathReporterSpecs_PathReporterTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_PathReporterSpecs_PathReporterTypeTypeSupport;
class UMAA_SA_PathReporterSpecs_PathReporterTypeDataWriter;
class UMAA_SA_PathReporterSpecs_PathReporterTypeDataReader;
#endif
class UMAA_SA_PathReporterSpecs_PathReporterType 
{
  public:
    typedef struct UMAA_SA_PathReporterSpecs_PathReporterTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_PathReporterSpecs_PathReporterTypeTypeSupport TypeSupport;
    typedef UMAA_SA_PathReporterSpecs_PathReporterTypeDataWriter DataWriter;
    typedef UMAA_SA_PathReporterSpecs_PathReporterTypeDataReader DataReader;
    #endif

    DDS_Double   maxDistance ;
    DDS_Long   maxPoints ;
    DDS_Double   maxTgtResolution ;
    DDS_Double   maxTime ;
    DDS_Double   minTgtResolution ;
    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType   pathType ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_PathReporterSpecs_PathReporterType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_PathReporterSpecs_PathReporterType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_PathReporterSpecs_PathReporterType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_PathReporterSpecs_PathReporterTypeSeq, UMAA_SA_PathReporterSpecs_PathReporterType);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize(
    UMAA_SA_PathReporterSpecs_PathReporterType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_initialize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_return(
    UMAA_SA_PathReporterSpecs_PathReporterType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterType_finalize(
    UMAA_SA_PathReporterSpecs_PathReporterType* self);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_ex(
    UMAA_SA_PathReporterSpecs_PathReporterType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_w_params(
    UMAA_SA_PathReporterSpecs_PathReporterType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_PathReporterSpecs_PathReporterType_finalize_optional_members(
    UMAA_SA_PathReporterSpecs_PathReporterType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_PathReporterSpecs_PathReporterType_copy(
    UMAA_SA_PathReporterSpecs_PathReporterType* dst,
    const UMAA_SA_PathReporterSpecs_PathReporterType* src);

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
        struct type_code< UMAA_SA_PathReporterSpecs_PathReporterType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PathReporterType */

