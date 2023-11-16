

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandReportType_530883023_h
#define GlobalDeadReckoningCommandReportType_530883023_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationType.h"
#include "UMAA/Common/Measurement/CovariancePositionPositionType.h"
#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/Position2D.h"

static const DDS_Char * const UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReport_TOPIC= "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReport";

extern "C" {

    extern const char *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeTYPENAME;

}

struct UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeTypeSupport;
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeDataWriter;
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeDataReader;
#endif
class UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType 
{
  public:
    typedef struct UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeDataWriter DataWriter;
    typedef UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Orientation3D_PlatformXYZ   attitude ;
    UMAA_Common_Measurement_CovarianceOrientationType   attitudeCovariance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportTypeSeq, UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_initialize(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_initialize_ex(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_initialize_w_params(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_finalize_w_return(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_finalize(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_finalize_ex(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_finalize_w_params(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_finalize_optional_members(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType_copy(
    UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* dst,
    const UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType* src);

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
        struct type_code< UMAA_SA_GlobalDeadReckoning_GlobalDeadReckoningCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDeadReckoningCommandReportType */

