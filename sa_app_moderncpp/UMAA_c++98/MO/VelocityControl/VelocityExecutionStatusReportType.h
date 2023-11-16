

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityExecutionStatusReportType_953279669_h
#define VelocityExecutionStatusReportType_953279669_h

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

static const DDS_Char * const UMAA_MO_VelocityControl_VelocityExecutionStatusReport_TOPIC= "UMAA::MO::VelocityControl::VelocityExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeTypeSupport;
class UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeDataWriter;
class UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_VelocityControl_VelocityExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   downSpeedAchieved ;
    DDS_Boolean   forwardSpeedAchieved ;
    DDS_Boolean   pitchRateAchieved ;
    DDS_Boolean   rightSpeedAchieved ;
    DDS_Boolean   rollRateAchieved ;
    DDS_Boolean   yawRateAchieved ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_VelocityControl_VelocityExecutionStatusReportTypeSeq, UMAA_MO_VelocityControl_VelocityExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_initialize(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_initialize_ex(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_initialize_w_params(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_finalize_w_return(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_finalize(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_finalize_ex(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_finalize_w_params(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_VelocityControl_VelocityExecutionStatusReportType_copy(
    UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* dst,
    const UMAA_MO_VelocityControl_VelocityExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_VelocityControl_VelocityExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* VelocityExecutionStatusReportType */

