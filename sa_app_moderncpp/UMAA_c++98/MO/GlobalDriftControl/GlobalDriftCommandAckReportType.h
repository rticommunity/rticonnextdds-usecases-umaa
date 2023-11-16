

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftCommandAckReportType_1155013093_h
#define GlobalDriftCommandAckReportType_1155013093_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReport_TOPIC= "UMAA::MO::GlobalDriftControl::GlobalDriftCommandAckReport";

extern "C" {

    extern const char *UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeTYPENAME;

}

struct UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeTypeSupport;
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeDataWriter;
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeDataReader;
#endif
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType 
{
  public:
    typedef struct UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   driftTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_Position2D   * position ;
    DDS_Double   positionTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   speedTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportTypeSeq, UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_initialize(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_initialize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_initialize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_finalize_w_return(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_finalize(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_finalize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_finalize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_finalize_optional_members(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType_copy(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* dst,
    const UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType* src);

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
        struct type_code< UMAA_MO_GlobalDriftControl_GlobalDriftCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDriftCommandAckReportType */

