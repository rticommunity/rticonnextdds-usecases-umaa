

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpCommandReportType_1243770163_h
#define BallastPumpCommandReportType_1243770163_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/EO/BallastTank/BallastPumpFlowRateType.h"

static const DDS_Char * const UMAA_EO_BallastTank_BallastPumpCommandReport_TOPIC= "UMAA::EO::BallastTank::BallastPumpCommandReport";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastPumpCommandReportTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastPumpCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastPumpCommandReportTypeTypeSupport;
class UMAA_EO_BallastTank_BallastPumpCommandReportTypeDataWriter;
class UMAA_EO_BallastTank_BallastPumpCommandReportTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastPumpCommandReportType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastPumpCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastPumpCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastPumpCommandReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastPumpCommandReportTypeDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastPumpFlowRateType   ballastPumpFlowRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastPumpCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastPumpCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastPumpCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastPumpCommandReportTypeSeq, UMAA_EO_BallastTank_BallastPumpCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandReportType_initialize(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandReportType_initialize_ex(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandReportType_initialize_w_params(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandReportType_finalize_w_return(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandReportType_finalize(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandReportType_finalize_ex(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandReportType_finalize_w_params(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastPumpCommandReportType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastPumpCommandReportType_copy(
    UMAA_EO_BallastTank_BallastPumpCommandReportType* dst,
    const UMAA_EO_BallastTank_BallastPumpCommandReportType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastPumpCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastPumpCommandReportType */

