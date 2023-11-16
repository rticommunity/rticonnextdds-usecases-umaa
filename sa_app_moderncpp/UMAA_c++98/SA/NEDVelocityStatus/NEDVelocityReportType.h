

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NEDVelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NEDVelocityReportType_227656961_h
#define NEDVelocityReportType_227656961_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationType.h"
#include "UMAA/Common/Measurement/CovarianceVelocityVelocityType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/OrientationVelocity3D.h"
#include "UMAA/Common/Measurement/Velocity3D_PlatformNED.h"

static const DDS_Char * const UMAA_SA_NEDVelocityStatus_NEDVelocityReport_TOPIC= "UMAA::SA::NEDVelocityStatus::NEDVelocityReport";

extern "C" {

    extern const char *UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeTYPENAME;

}

struct UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeTypeSupport;
class UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeDataWriter;
class UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeDataReader;
#endif
class UMAA_SA_NEDVelocityStatus_NEDVelocityReportType 
{
  public:
    typedef struct UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeDataWriter DataWriter;
    typedef UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_OrientationVelocity3D   * attitudeRate ;
    UMAA_Common_Measurement_CovarianceOrientationType   * attitudeRateRMS ;
    UMAA_Common_Measurement_Velocity3D_PlatformNED   velocity ;
    UMAA_Common_Measurement_CovarianceVelocityVelocityType   * velocityRMS ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_NEDVelocityStatus_NEDVelocityReportTypeSeq, UMAA_SA_NEDVelocityStatus_NEDVelocityReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_initialize(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_initialize_ex(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_initialize_w_params(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_finalize_w_return(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self);

NDDSUSERDllExport
void UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_finalize(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self);

NDDSUSERDllExport
void UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_finalize_ex(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_finalize_w_params(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_finalize_optional_members(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_NEDVelocityStatus_NEDVelocityReportType_copy(
    UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* dst,
    const UMAA_SA_NEDVelocityStatus_NEDVelocityReportType* src);

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
        struct type_code< UMAA_SA_NEDVelocityStatus_NEDVelocityReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* NEDVelocityReportType */

