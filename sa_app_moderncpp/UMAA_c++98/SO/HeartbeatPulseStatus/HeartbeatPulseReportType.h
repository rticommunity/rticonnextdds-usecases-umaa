

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeartbeatPulseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeartbeatPulseReportType_1826145922_h
#define HeartbeatPulseReportType_1826145922_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReport_TOPIC= "UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReport";

extern "C" {

    extern const char *UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeTYPENAME;

}

struct UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeTypeSupport;
class UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeDataWriter;
class UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeDataReader;
#endif
class UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType 
{
  public:
    typedef struct UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeDataWriter DataWriter;
    typedef UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeDataReader DataReader;
    #endif

    DDS_Long   heartBeat ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportTypeSeq, UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_initialize(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_initialize_ex(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_initialize_w_params(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_finalize_w_return(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self);

NDDSUSERDllExport
void UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_finalize(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self);

NDDSUSERDllExport
void UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_finalize_ex(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_finalize_w_params(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_finalize_optional_members(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType_copy(
    UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* dst,
    const UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType* src);

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
        struct type_code< UMAA_SO_HeartbeatPulseStatus_HeartbeatPulseReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* HeartbeatPulseReportType */

