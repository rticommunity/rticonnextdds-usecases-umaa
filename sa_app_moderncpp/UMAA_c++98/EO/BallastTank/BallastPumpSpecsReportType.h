

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpSpecsReportType_1957364353_h
#define BallastPumpSpecsReportType_1957364353_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_BallastTank_BallastPumpSpecsReport_TOPIC= "UMAA::EO::BallastTank::BallastPumpSpecsReport";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastPumpSpecsReportTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastPumpSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastPumpSpecsReportTypeTypeSupport;
class UMAA_EO_BallastTank_BallastPumpSpecsReportTypeDataWriter;
class UMAA_EO_BallastTank_BallastPumpSpecsReportTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastPumpSpecsReportType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastPumpSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastPumpSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastPumpSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastPumpSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Double   maxMassEmptyRate ;
    DDS_Double   maxMassFillRate ;
    DDS_Double   maxVolumeEmptyRate ;
    DDS_Double   maxVolumeFillRate ;
    DDS_Double   minMassEmptyRate ;
    DDS_Double   minMassFillRate ;
    DDS_Double   minVolumeEmptyRate ;
    DDS_Double   minVolumeFillRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpSpecsReportTypeSeq, UMAA_EO_BallastTank_BallastPumpSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpSpecsReportType_initialize(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpSpecsReportType_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpSpecsReportType_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpSpecsReportType_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpSpecsReportType_finalize(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpSpecsReportType_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpSpecsReportType_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpSpecsReportType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpSpecsReportType_copy(
    UMAA_EO_BallastTank_BallastPumpSpecsReportType* dst,
    const UMAA_EO_BallastTank_BallastPumpSpecsReportType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastPumpSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastPumpSpecsReportType */

