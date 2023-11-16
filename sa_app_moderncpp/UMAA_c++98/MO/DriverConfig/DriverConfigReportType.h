

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DriverConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DriverConfigReportType_551596296_h
#define DriverConfigReportType_551596296_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Capabilities/Speed_BSL_Capability.h"
#include "UMAA/Common/Measurement/Acceleration3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/OrientationAcceleration3D.h"
#include "UMAA/Common/Speed/SpeedControlType.h"

static const DDS_Char * const UMAA_MO_DriverConfig_DriverConfigReport_TOPIC= "UMAA::MO::DriverConfig::DriverConfigReport";

extern "C" {

    extern const char *UMAA_MO_DriverConfig_DriverConfigReportTypeTYPENAME;

}

struct UMAA_MO_DriverConfig_DriverConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_DriverConfig_DriverConfigReportTypeTypeSupport;
class UMAA_MO_DriverConfig_DriverConfigReportTypeDataWriter;
class UMAA_MO_DriverConfig_DriverConfigReportTypeDataReader;
#endif
class UMAA_MO_DriverConfig_DriverConfigReportType 
{
  public:
    typedef struct UMAA_MO_DriverConfig_DriverConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_DriverConfig_DriverConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_DriverConfig_DriverConfigReportTypeDataWriter DataWriter;
    typedef UMAA_MO_DriverConfig_DriverConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Acceleration3D_PlatformXYZ   * maxAllowableAcceleration ;
    UMAA_Common_Measurement_OrientationAcceleration3D   * maxAllowableAttitudeAcceleration ;
    UMAA_Common_Measurement_ElevationType   * maxAllowableElevation ;
    UMAA_Common_Speed_SpeedControlType   * maxAllowableSpeed ;
    DDS_Double   * maxAllowableTurnRate ;
    UMAA_Common_Capabilities_Speed_BSL_Capability   * maxElevationChangeRate ;
    UMAA_Common_Measurement_Acceleration3D_PlatformXYZ   * minAllowableAcceleration ;
    UMAA_Common_Measurement_OrientationAcceleration3D   * minAllowableAttitudeAcceleration ;
    UMAA_Common_Measurement_ElevationType   * minAllowableElevation ;
    UMAA_Common_Speed_SpeedControlType   * minAllowableSpeed ;
    UMAA_Common_Measurement_Acceleration3D_PlatformXYZ   * recommendedAcceleration ;
    UMAA_Common_Measurement_OrientationAcceleration3D   * recommendedAttitudeAcceleration ;
    UMAA_Common_Measurement_ElevationType   * recommendedElevation ;
    UMAA_Common_Capabilities_Speed_BSL_Capability   * recommendedElevationChangeRate ;
    UMAA_Common_Speed_SpeedControlType   * recommendedSpeed ;
    DDS_Double   * recommendedTurnRate ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_DriverConfig_DriverConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_DriverConfig_DriverConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_DriverConfig_DriverConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_DriverConfig_DriverConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_DriverConfig_DriverConfigReportTypeSeq, UMAA_MO_DriverConfig_DriverConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize(
    UMAA_MO_DriverConfig_DriverConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize_ex(
    UMAA_MO_DriverConfig_DriverConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_initialize_w_params(
    UMAA_MO_DriverConfig_DriverConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_return(
    UMAA_MO_DriverConfig_DriverConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_DriverConfig_DriverConfigReportType_finalize(
    UMAA_MO_DriverConfig_DriverConfigReportType* self);

NDDSUSERDllExport
void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_ex(
    UMAA_MO_DriverConfig_DriverConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_w_params(
    UMAA_MO_DriverConfig_DriverConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_DriverConfig_DriverConfigReportType_finalize_optional_members(
    UMAA_MO_DriverConfig_DriverConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_DriverConfig_DriverConfigReportType_copy(
    UMAA_MO_DriverConfig_DriverConfigReportType* dst,
    const UMAA_MO_DriverConfig_DriverConfigReportType* src);

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
        struct type_code< UMAA_MO_DriverConfig_DriverConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DriverConfigReportType */

