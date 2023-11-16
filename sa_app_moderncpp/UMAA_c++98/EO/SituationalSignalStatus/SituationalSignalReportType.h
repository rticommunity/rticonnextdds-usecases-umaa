

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SituationalSignalReportType_756700998_h
#define SituationalSignalReportType_756700998_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_SituationalSignalStatus_SituationalSignalReport_TOPIC= "UMAA::EO::SituationalSignalStatus::SituationalSignalReport";

extern "C" {

    extern const char *UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeTYPENAME;

}

struct UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeTypeSupport;
class UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeDataWriter;
class UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeDataReader;
#endif
class UMAA_EO_SituationalSignalStatus_SituationalSignalReportType 
{
  public:
    typedef struct UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeDataWriter DataWriter;
    typedef UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   agreeToBeOvertaken ;
    DDS_Boolean   alteringCourseToPort ;
    DDS_Boolean   alteringCourseToStarboard ;
    DDS_Boolean   engagedInMineClearanceOperations ;
    DDS_Boolean   inDistressNeedAssistance ;
    DDS_Boolean   inSightCollisionWarning ;
    DDS_Boolean   maneuverabilityRestricted ;
    DDS_Boolean   operatingAsternPropulsion ;
    DDS_Boolean   outOfSightCollisionWarning ;
    DDS_Boolean   toOvertakeOnPortSide ;
    DDS_Boolean   toOvertakeOnstarboardSide ;
    DDS_Boolean   towingAndPushingAlongsideOrAhead ;
    DDS_Boolean   towingAndPushingBehind ;
    DDS_Boolean   vesselAground ;
    DDS_Boolean   vesselAnchored ;
    DDS_Boolean   vesselBeingPushed ;
    DDS_Boolean   vesselBeingTowedAlongside ;
    DDS_Boolean   vesselBeingTowedBehind ;
    DDS_Boolean   vesselConstrainedByHerDraft ;
    DDS_Boolean   vesselLeavingDock ;
    DDS_Boolean   vesselNotUnderControl ;
    DDS_Boolean   vesselStopped ;
    DDS_Boolean   vesselUnderWay ;
    DDS_Boolean   visibilityRestricted ;
    DDS_Boolean   visibilityRestrictedStopped ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_SituationalSignalStatus_SituationalSignalReportTypeSeq, UMAA_EO_SituationalSignalStatus_SituationalSignalReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_initialize(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_initialize_ex(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_initialize_w_params(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_finalize_w_return(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self);

NDDSUSERDllExport
void UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_finalize(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self);

NDDSUSERDllExport
void UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_finalize_ex(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_finalize_w_params(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_finalize_optional_members(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_SituationalSignalStatus_SituationalSignalReportType_copy(
    UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* dst,
    const UMAA_EO_SituationalSignalStatus_SituationalSignalReportType* src);

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
        struct type_code< UMAA_EO_SituationalSignalStatus_SituationalSignalReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SituationalSignalReportType */

