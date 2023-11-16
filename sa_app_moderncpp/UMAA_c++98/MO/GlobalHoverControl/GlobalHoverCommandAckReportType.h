

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverCommandAckReportType_1826122434_h
#define GlobalHoverCommandAckReportType_1826122434_h

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

static const DDS_Char * const UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReport_TOPIC= "UMAA::MO::GlobalHoverControl::GlobalHoverCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeTypeSupport;
class UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeDataWriter;
class UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType   controlPriority ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Orientation_HeadingType   * heading ;
    DDS_Double   headingTolerance ;
    UMAA_Common_Measurement_Position2D   * position ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportTypeSeq, UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_initialize(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_initialize_ex(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_initialize_w_params(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_finalize_w_return(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_finalize(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_finalize_ex(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_finalize_w_params(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_finalize_optional_members(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType_copy(
    UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* dst,
    const UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GlobalHoverControl_GlobalHoverCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalHoverCommandAckReportType */

