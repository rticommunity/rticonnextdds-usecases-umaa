

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverCommandAckReportType_890053681_h
#define LocalHoverCommandAckReportType_890053681_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZ.h"
#include "UMAA/Common/Orientation/HeadingType.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_LocalHoverControl_LocalHoverCommandAckReport_TOPIC= "UMAA::MO::LocalHoverControl::LocalHoverCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeTypeSupport;
class UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeDataWriter;
class UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeDataReader;
#endif
class UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType   controlPriority ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Orientation_HeadingType   * heading ;
    DDS_Double   headingTolerance ;
    UMAA_Common_Measurement_Position2D_PlatformXYZ   * position ;
    DDS_Double   positionTolerance ;
    UMAA_Common_Measurement_ElevationType   transitElevation ;
    DDS_Double   transitElevationTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   transitSpeed ;
    DDS_Double   transitSpeedTolerance ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportTypeSeq, UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_initialize(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_initialize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_initialize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_finalize_w_return(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_finalize(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_finalize_ex(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_finalize_w_params(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_finalize_optional_members(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType_copy(
    UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* dst,
    const UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType* src);

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
        struct type_code< UMAA_MO_LocalHoverControl_LocalHoverCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalHoverCommandAckReportType */

