

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonCommandAckReportType_1479613028_h
#define GlobalRegularPolygonCommandAckReportType_1479613028_h

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
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/Orientation/HeadingType.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReport_TOPIC= "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeTypeSupport;
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeDataWriter;
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   crossTrackTolerance ;
    DDS_Double   diameter ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    DDS_Long   numberSides ;
    UMAA_Common_Orientation_HeadingType   orientation ;
    UMAA_Common_Measurement_Position2D   * position ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   speedTolerance ;
    UMAA_Common_Measurement_ElevationType   transitElevation ;
    DDS_Double   transitElevationTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   transitSpeed ;
    DDS_Double   transitSpeedTolerance ;
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType   turnDirection ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportTypeSeq, UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_initialize(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_initialize_ex(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_initialize_w_params(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_finalize_w_return(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_finalize(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_finalize_ex(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_finalize_w_params(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_finalize_optional_members(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType_copy(
    UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* dst,
    const UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GlobalRegularPolygonControl_GlobalRegularPolygonCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalRegularPolygonCommandAckReportType */

