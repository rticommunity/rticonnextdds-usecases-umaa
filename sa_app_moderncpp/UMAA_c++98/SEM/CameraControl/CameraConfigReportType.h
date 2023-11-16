

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraConfigReportType_393099409_h
#define CameraConfigReportType_393099409_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_CameraControl_CameraConfigReport_TOPIC= "UMAA::SEM::CameraControl::CameraConfigReport";

extern "C" {

    extern const char *UMAA_SEM_CameraControl_CameraConfigReportTypeTYPENAME;

}

struct UMAA_SEM_CameraControl_CameraConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_CameraControl_CameraConfigReportTypeTypeSupport;
class UMAA_SEM_CameraControl_CameraConfigReportTypeDataWriter;
class UMAA_SEM_CameraControl_CameraConfigReportTypeDataReader;
#endif
class UMAA_SEM_CameraControl_CameraConfigReportType 
{
  public:
    typedef struct UMAA_SEM_CameraControl_CameraConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_CameraControl_CameraConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_CameraControl_CameraConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_CameraControl_CameraConfigReportTypeDataReader DataReader;
    #endif

    DDS_Double   aperture ;
    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType   exposureMode ;
    DDS_Double   focalLength ;
    UMAA_Common_Enumeration_AutomationEnumType_AutomationEnumType   focusMode ;
    DDS_Double   focusValue ;
    DDS_Double   horizontalFOV ;
    DDS_Boolean   imageStabilization ;
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType   imagingMode ;
    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType   lightSensitivity ;
    DDS_Double   maxZoomLevel ;
    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType   meteringMode ;
    DDS_Double   minZoomLevel ;
    DDS_Double   shutterSpeed ;
    UMAA_Common_Enumeration_PowerStatusEnumType_PowerStatusEnumType   status ;
    DDS_Double   verticalFOV ;
    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType   whiteBalance ;
    DDS_Double   zoomLevel ;
    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType   zoomMode ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_CameraControl_CameraConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_CameraControl_CameraConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_CameraControl_CameraConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_CameraControl_CameraConfigReportTypeSeq, UMAA_SEM_CameraControl_CameraConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize(
    UMAA_SEM_CameraControl_CameraConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize_ex(
    UMAA_SEM_CameraControl_CameraConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_initialize_w_params(
    UMAA_SEM_CameraControl_CameraConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_return(
    UMAA_SEM_CameraControl_CameraConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraConfigReportType_finalize(
    UMAA_SEM_CameraControl_CameraConfigReportType* self);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_ex(
    UMAA_SEM_CameraControl_CameraConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_w_params(
    UMAA_SEM_CameraControl_CameraConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_CameraControl_CameraConfigReportType_finalize_optional_members(
    UMAA_SEM_CameraControl_CameraConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_CameraControl_CameraConfigReportType_copy(
    UMAA_SEM_CameraControl_CameraConfigReportType* dst,
    const UMAA_SEM_CameraControl_CameraConfigReportType* src);

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
        struct type_code< UMAA_SEM_CameraControl_CameraConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CameraConfigReportType */

