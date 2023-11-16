

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSpecsReportType_1818787699_h
#define CameraSpecsReportType_1818787699_h

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.h"

static const DDS_Char * const UMAA_SEM_CameraSpecs_CameraSpecsReport_TOPIC= "UMAA::SEM::CameraSpecs::CameraSpecsReport";

extern "C" {

    extern const char *UMAA_SEM_CameraSpecs_CameraSpecsReportTypeTYPENAME;

}

struct UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraSpecs_CameraSpecsReportTypeTypeSupport;
class UMAA_SEM_CameraSpecs_CameraSpecsReportTypeDataWriter;
class UMAA_SEM_CameraSpecs_CameraSpecsReportTypeDataReader;
#endif
class UMAA_SEM_CameraSpecs_CameraSpecsReportType 
{
  public:
    typedef struct UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraSpecs_CameraSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraSpecs_CameraSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraSpecs_CameraSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   exposureModeAperture ;
    DDS_Boolean   exposureModeAuto ;
    DDS_Boolean   exposureModeManual ;
    DDS_Boolean   exposureModeShutter ;
    DDS_Boolean   focusModeAuto ;
    DDS_Boolean   focusModeManual ;
    DDS_Boolean   imageStabilization ;
    DDS_Boolean   imagingModeColor ;
    DDS_Boolean   imagingModeGreyscale ;
    DDS_Boolean   imagingModeInfrared ;
    DDS_Boolean   imagingModeLowlight ;
    DDS_Boolean   lightSensitivity_ISO100 ;
    DDS_Boolean   lightSensitivity_ISO1600 ;
    DDS_Boolean   lightSensitivity_ISO200 ;
    DDS_Boolean   lightSensitivity_ISO3200 ;
    DDS_Boolean   lightSensitivity_ISO400 ;
    DDS_Boolean   lightSensitivity_ISO800 ;
    DDS_Boolean   lightSensitivityAuto ;
    DDS_Double   maxAperture ;
    DDS_Double   maxFocalLength ;
    DDS_Double   maxShutterSpeed ;
    DDS_Boolean   meteringModeAuto ;
    DDS_Boolean   meteringModeCenterWeighted ;
    DDS_Boolean   meteringModeSpot ;
    DDS_Double   minAperture ;
    DDS_Double   minFocalLength ;
    DDS_Double   minShutterSpeed ;
    DDS_Char *   name ;
    DDS_Boolean   stateActive ;
    DDS_Boolean   stateOff ;
    DDS_Boolean   stateStandby ;
    DDS_Boolean   whiteBalanceAuto ;
    DDS_Boolean   whiteBalanceCloudy ;
    DDS_Boolean   whiteBalanceDaylight ;
    DDS_Boolean   whiteBalanceFlash ;
    DDS_Boolean   whiteBalanceFluorescent ;
    DDS_Boolean   whiteBalanceShade ;
    DDS_Boolean   whiteBalanceTungsten ;
    DDS_Boolean   zoomModeAnalog ;
    DDS_Boolean   zoomModeDigital ;
    DDS_Boolean   zoomModeMixed ;
    DDS_Boolean   zoomModeOff ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraSpecs_CameraSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraSpecs_CameraSpecsReportTypeSeq, UMAA_SEM_CameraSpecs_CameraSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_ex(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_initialize_w_params(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_return(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_ex(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_w_params(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraSpecs_CameraSpecsReportType_finalize_optional_members(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraSpecs_CameraSpecsReportType_copy(
    UMAA_SEM_CameraSpecs_CameraSpecsReportType* dst,
    const UMAA_SEM_CameraSpecs_CameraSpecsReportType* src);

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
        struct type_code< UMAA_SEM_CameraSpecs_CameraSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraSpecsReportType */

