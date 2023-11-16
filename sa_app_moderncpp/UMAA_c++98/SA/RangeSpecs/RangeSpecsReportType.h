

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeSpecsReportType_1677860349_h
#define RangeSpecsReportType_1677860349_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SA_RangeSpecs_RangeSpecsReport_TOPIC= "UMAA::SA::RangeSpecs::RangeSpecsReport";

extern "C" {

    extern const char *UMAA_SA_RangeSpecs_RangeSpecsReportTypeTYPENAME;

}

struct UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_RangeSpecs_RangeSpecsReportTypeTypeSupport;
class UMAA_SA_RangeSpecs_RangeSpecsReportTypeDataWriter;
class UMAA_SA_RangeSpecs_RangeSpecsReportTypeDataReader;
#endif
class UMAA_SA_RangeSpecs_RangeSpecsReportType 
{
  public:
    typedef struct UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_RangeSpecs_RangeSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_RangeSpecs_RangeSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SA_RangeSpecs_RangeSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   coordinateTransformation ;
    DDS_Double   maxHorizontalFOVStopAngle ;
    DDS_Double   maxRange ;
    DDS_Double   maxUpdateRate ;
    DDS_Double   maxVerticalFOVStopAngle ;
    DDS_Double   minHorizontalFOVStartAngle ;
    DDS_Double   minRange ;
    DDS_Double   minUpdateRate ;
    DDS_Double   minVerticalFOVStartAngle ;
    DDS_Char *   name ;
    DDS_Boolean   stateActive ;
    DDS_Boolean   stateOff ;
    DDS_Boolean   stateStandby ;
    DDS_Boolean   supportedBzip2 ;
    DDS_Boolean   supportedDeflated ;
    DDS_Boolean   supportedLZMA ;
    DDS_Boolean   supportedNoCompression ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_RangeSpecs_RangeSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_RangeSpecs_RangeSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_RangeSpecs_RangeSpecsReportTypeSeq, UMAA_SA_RangeSpecs_RangeSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_ex(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_initialize_w_params(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_return(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_ex(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_w_params(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_RangeSpecs_RangeSpecsReportType_finalize_optional_members(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_RangeSpecs_RangeSpecsReportType_copy(
    UMAA_SA_RangeSpecs_RangeSpecsReportType* dst,
    const UMAA_SA_RangeSpecs_RangeSpecsReportType* src);

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
        struct type_code< UMAA_SA_RangeSpecs_RangeSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RangeSpecsReportType */

