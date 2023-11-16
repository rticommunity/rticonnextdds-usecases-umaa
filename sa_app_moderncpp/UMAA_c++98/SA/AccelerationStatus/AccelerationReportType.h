

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelerationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AccelerationReportType_494470366_h
#define AccelerationReportType_494470366_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Acceleration3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/CovarianceNEDAccelerationAccelerationType.h"
#include "UMAA/Common/Measurement/CovarianceOrientationAccelerationAccelerationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/OrientationAcceleration3D.h"

static const DDS_Char * const UMAA_SA_AccelerationStatus_AccelerationReport_TOPIC= "UMAA::SA::AccelerationStatus::AccelerationReport";

extern "C" {

    extern const char *UMAA_SA_AccelerationStatus_AccelerationReportTypeTYPENAME;

}

struct UMAA_SA_AccelerationStatus_AccelerationReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_AccelerationStatus_AccelerationReportTypeTypeSupport;
class UMAA_SA_AccelerationStatus_AccelerationReportTypeDataWriter;
class UMAA_SA_AccelerationStatus_AccelerationReportTypeDataReader;
#endif
class UMAA_SA_AccelerationStatus_AccelerationReportType 
{
  public:
    typedef struct UMAA_SA_AccelerationStatus_AccelerationReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_AccelerationStatus_AccelerationReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_AccelerationStatus_AccelerationReportTypeDataWriter DataWriter;
    typedef UMAA_SA_AccelerationStatus_AccelerationReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Acceleration3D_PlatformXYZ   acceleration ;
    UMAA_Common_Measurement_CovarianceNEDAccelerationAccelerationType   accelerationCovariance ;
    UMAA_Common_Measurement_OrientationAcceleration3D   attitudeAcceleration ;
    UMAA_Common_Measurement_CovarianceOrientationAccelerationAccelerationType   rotationalAccelerationCovariance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_AccelerationStatus_AccelerationReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_AccelerationStatus_AccelerationReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_AccelerationStatus_AccelerationReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_AccelerationStatus_AccelerationReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_AccelerationStatus_AccelerationReportTypeSeq, UMAA_SA_AccelerationStatus_AccelerationReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_AccelerationStatus_AccelerationReportType_initialize(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_AccelerationStatus_AccelerationReportType_initialize_ex(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_AccelerationStatus_AccelerationReportType_initialize_w_params(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_AccelerationStatus_AccelerationReportType_finalize_w_return(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self);

NDDSUSERDllExport
void UMAA_SA_AccelerationStatus_AccelerationReportType_finalize(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self);

NDDSUSERDllExport
void UMAA_SA_AccelerationStatus_AccelerationReportType_finalize_ex(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_AccelerationStatus_AccelerationReportType_finalize_w_params(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_AccelerationStatus_AccelerationReportType_finalize_optional_members(
    UMAA_SA_AccelerationStatus_AccelerationReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_AccelerationStatus_AccelerationReportType_copy(
    UMAA_SA_AccelerationStatus_AccelerationReportType* dst,
    const UMAA_SA_AccelerationStatus_AccelerationReportType* src);

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
        struct type_code< UMAA_SA_AccelerationStatus_AccelerationReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AccelerationReportType */

