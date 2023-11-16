

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepExecutionStatusReportType_1627794735_h
#define StationkeepExecutionStatusReportType_1627794735_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/MO/StationkeepState/StationkeepStateType.h"

static const DDS_Char * const UMAA_MO_StationkeepControl_StationkeepExecutionStatusReport_TOPIC= "UMAA::MO::StationkeepControl::StationkeepExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeTypeSupport;
class UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeDataWriter;
class UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumType   angleType ;
    DDS_Double   bearing ;
    DDS_Double   bearingTolerance ;
    DDS_Double   closingSpeed ;
    DDS_Boolean   contactLost ;
    UMAA_Common_Measurement_NumericGUID   contactTrackID ;
    DDS_Double   range ;
    DDS_Double   rangeTolerance ;
    UMAA_MO_StationkeepState_StationkeepStateType   stationkeepState ;
    UMAA_Common_Measurement_DateTime   * timeStationkeepCompleted ;
    UMAA_Common_Measurement_DateTime   timeStationskeepAchieved ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportTypeSeq, UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_initialize(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_initialize_ex(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_initialize_w_params(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_finalize_w_return(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_finalize(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_finalize_ex(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_finalize_w_params(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType_copy(
    UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* dst,
    const UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_StationkeepControl_StationkeepExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StationkeepExecutionStatusReportType */

