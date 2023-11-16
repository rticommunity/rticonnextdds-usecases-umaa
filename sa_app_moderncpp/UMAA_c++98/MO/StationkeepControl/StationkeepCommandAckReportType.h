

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepCommandAckReportType_179902339_h
#define StationkeepCommandAckReportType_179902339_h

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
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_StationkeepControl_StationkeepCommandAckReport_TOPIC= "UMAA::MO::StationkeepControl::StationkeepCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeTypeSupport;
class UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeDataWriter;
class UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeDataReader;
#endif
class UMAA_MO_StationkeepControl_StationkeepCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumType   angleType ;
    DDS_Double   bearing ;
    DDS_Double   bearingTolerance ;
    DDS_Double   closingSpeed ;
    UMAA_Common_Measurement_NumericGUID   contactTrackID ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    DDS_Double   range ;
    DDS_Double   rangeTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   transitSpeed ;
    DDS_Double   transitSpeedTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepControl_StationkeepCommandAckReportTypeSeq, UMAA_MO_StationkeepControl_StationkeepCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_initialize(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_initialize_ex(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_initialize_w_params(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_finalize_w_return(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_finalize(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_finalize_ex(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_finalize_w_params(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_finalize_optional_members(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepControl_StationkeepCommandAckReportType_copy(
    UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* dst,
    const UMAA_MO_StationkeepControl_StationkeepCommandAckReportType* src);

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
        struct type_code< UMAA_MO_StationkeepControl_StationkeepCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StationkeepCommandAckReportType */

