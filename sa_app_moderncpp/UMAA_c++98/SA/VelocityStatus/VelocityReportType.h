

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityReportType_169778901_h
#define VelocityReportType_169778901_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/CovarianceOrientationType.h"
#include "UMAA/Common/Measurement/CovarianceVelocityVelocityType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/OrientationVelocity3D.h"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNED.h"

static const DDS_Char * const UMAA_SA_VelocityStatus_VelocityReport_TOPIC= "UMAA::SA::VelocityStatus::VelocityReport";

extern "C" {

    extern const char *UMAA_SA_VelocityStatus_VelocityReportTypeTYPENAME;

}

struct UMAA_SA_VelocityStatus_VelocityReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_VelocityStatus_VelocityReportTypeTypeSupport;
class UMAA_SA_VelocityStatus_VelocityReportTypeDataWriter;
class UMAA_SA_VelocityStatus_VelocityReportTypeDataReader;
#endif
class UMAA_SA_VelocityStatus_VelocityReportType 
{
  public:
    typedef struct UMAA_SA_VelocityStatus_VelocityReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_VelocityStatus_VelocityReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_VelocityStatus_VelocityReportTypeDataWriter DataWriter;
    typedef UMAA_SA_VelocityStatus_VelocityReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_OrientationVelocity3D   attitudeRate ;
    UMAA_Common_Measurement_CovarianceOrientationType   * attitudeRateCovariance ;
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType   * mode ;
    UMAA_Common_Measurement_Velocity3D_PlatformNED   velocity ;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType   * velocityCovariance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_VelocityStatus_VelocityReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_VelocityStatus_VelocityReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_VelocityStatus_VelocityReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_VelocityStatus_VelocityReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_VelocityStatus_VelocityReportTypeSeq, UMAA_SA_VelocityStatus_VelocityReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize(
    UMAA_SA_VelocityStatus_VelocityReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize_ex(
    UMAA_SA_VelocityStatus_VelocityReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_initialize_w_params(
    UMAA_SA_VelocityStatus_VelocityReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_return(
    UMAA_SA_VelocityStatus_VelocityReportType* self);

NDDSUSERDllExport
void UMAA_SA_VelocityStatus_VelocityReportType_finalize(
    UMAA_SA_VelocityStatus_VelocityReportType* self);

NDDSUSERDllExport
void UMAA_SA_VelocityStatus_VelocityReportType_finalize_ex(
    UMAA_SA_VelocityStatus_VelocityReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_VelocityStatus_VelocityReportType_finalize_w_params(
    UMAA_SA_VelocityStatus_VelocityReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_VelocityStatus_VelocityReportType_finalize_optional_members(
    UMAA_SA_VelocityStatus_VelocityReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_VelocityStatus_VelocityReportType_copy(
    UMAA_SA_VelocityStatus_VelocityReportType* dst,
    const UMAA_SA_VelocityStatus_VelocityReportType* src);

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
        struct type_code< UMAA_SA_VelocityStatus_VelocityReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VelocityReportType */

