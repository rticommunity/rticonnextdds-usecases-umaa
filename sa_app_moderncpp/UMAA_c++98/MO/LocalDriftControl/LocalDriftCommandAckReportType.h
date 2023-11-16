

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftCommandAckReportType_423792506_h
#define LocalDriftCommandAckReportType_423792506_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZ.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_LocalDriftControl_LocalDriftCommandAckReport_TOPIC= "UMAA::MO::LocalDriftControl::LocalDriftCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeTypeSupport;
class UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeDataWriter;
class UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeDataReader;
#endif
class UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   driftTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_Position2D_PlatformXYZ   * position ;
    DDS_Double   positionTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   speedTolerance ;
    UMAA_Common_Measurement_ElevationType   transitElevation ;
    DDS_Double   transitElevationTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportTypeSeq, UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_initialize(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_initialize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_initialize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_finalize_w_return(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_finalize(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_finalize_ex(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_finalize_w_params(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_finalize_optional_members(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType_copy(
    UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* dst,
    const UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType* src);

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
        struct type_code< UMAA_MO_LocalDriftControl_LocalDriftCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalDriftCommandAckReportType */

