

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalPoseReportType_607343734_h
#define LocalPoseReportType_607343734_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Altitude_AGL.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/CovarianceOrientationType.h"
#include "UMAA/Common/Measurement/CovariancePositionVelocityType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D.h"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.h"

static const DDS_Char * const UMAA_SA_LocalPoseStatus_LocalPoseReport_TOPIC= "UMAA::SA::LocalPoseStatus::LocalPoseReport";

extern "C" {

    extern const char *UMAA_SA_LocalPoseStatus_LocalPoseReportTypeTYPENAME;

}

struct UMAA_SA_LocalPoseStatus_LocalPoseReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_LocalPoseStatus_LocalPoseReportTypeTypeSupport;
class UMAA_SA_LocalPoseStatus_LocalPoseReportTypeDataWriter;
class UMAA_SA_LocalPoseStatus_LocalPoseReportTypeDataReader;
#endif
class UMAA_SA_LocalPoseStatus_LocalPoseReportType 
{
  public:
    typedef struct UMAA_SA_LocalPoseStatus_LocalPoseReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_LocalPoseStatus_LocalPoseReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_LocalPoseStatus_LocalPoseReportTypeDataWriter DataWriter;
    typedef UMAA_SA_LocalPoseStatus_LocalPoseReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   * altitude ;
    UMAA_Common_Measurement_Altitude_AGL   * altitudeAGL ;
    DDS_Double   * altitudeASF ;
    UMAA_Common_Measurement_Orientation3D   attitude ;
    UMAA_Common_Measurement_CovarianceOrientationType   attitudeRMS ;
    DDS_Double   * depth ;
    UMAA_Common_Measurement_Position3D_PlatformXYZ   * position ;
    UMAA_Common_Measurement_CovariancePositionVelocityType   xyPositionCovariance ;
    UMAA_Common_Measurement_CovariancePositionVelocityType   zPositionCovariance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_LocalPoseStatus_LocalPoseReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_LocalPoseStatus_LocalPoseReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_LocalPoseStatus_LocalPoseReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_LocalPoseStatus_LocalPoseReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_LocalPoseStatus_LocalPoseReportTypeSeq, UMAA_SA_LocalPoseStatus_LocalPoseReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalPoseStatus_LocalPoseReportType_initialize(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalPoseStatus_LocalPoseReportType_initialize_ex(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_LocalPoseStatus_LocalPoseReportType_initialize_w_params(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_LocalPoseStatus_LocalPoseReportType_finalize_w_return(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_LocalPoseStatus_LocalPoseReportType_finalize(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_LocalPoseStatus_LocalPoseReportType_finalize_ex(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_LocalPoseStatus_LocalPoseReportType_finalize_w_params(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_LocalPoseStatus_LocalPoseReportType_finalize_optional_members(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_LocalPoseStatus_LocalPoseReportType_copy(
    UMAA_SA_LocalPoseStatus_LocalPoseReportType* dst,
    const UMAA_SA_LocalPoseStatus_LocalPoseReportType* src);

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
        struct type_code< UMAA_SA_LocalPoseStatus_LocalPoseReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalPoseReportType */

