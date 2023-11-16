

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalPoseReportType_1111238580_h
#define GlobalPoseReportType_1111238580_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Altitude_AGL.h"
#include "UMAA/Common/Measurement/Altitude_MSL.h"
#include "UMAA/Common/Measurement/CovarianceOrientationType.h"
#include "UMAA/Common/Measurement/CovariancePositionPositionType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D.h"
#include "UMAA/Common/Measurement/Position2D.h"

static const DDS_Char * const UMAA_SA_GlobalPoseStatus_GlobalPoseReport_TOPIC= "UMAA::SA::GlobalPoseStatus::GlobalPoseReport";

extern "C" {

    extern const char *UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTYPENAME;

}

struct UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTypeSupport;
class UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeDataWriter;
class UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeDataReader;
#endif
class UMAA_SA_GlobalPoseStatus_GlobalPoseReportType 
{
  public:
    typedef struct UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeDataWriter DataWriter;
    typedef UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Altitude_MSL   * altitude ;
    UMAA_Common_Measurement_Altitude_AGL   * altitudeAGL ;
    DDS_Double   * altitudeASF ;
    UMAA_Common_Measurement_Orientation3D   attitude ;
    UMAA_Common_Measurement_CovarianceOrientationType   attitudeCovariance ;
    DDS_Double   course ;
    DDS_Double   * depth ;
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType   navigationSolution ;
    UMAA_Common_Measurement_Position2D   position ;
    UMAA_Common_Measurement_CovariancePositionPositionType   positionCovariance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_GlobalPoseStatus_GlobalPoseReportTypeSeq, UMAA_SA_GlobalPoseStatus_GlobalPoseReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_ex(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_initialize_w_params(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_return(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_ex(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_w_params(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_finalize_optional_members(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalPoseStatus_GlobalPoseReportType_copy(
    UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* dst,
    const UMAA_SA_GlobalPoseStatus_GlobalPoseReportType* src);

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
        struct type_code< UMAA_SA_GlobalPoseStatus_GlobalPoseReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalPoseReportType */

