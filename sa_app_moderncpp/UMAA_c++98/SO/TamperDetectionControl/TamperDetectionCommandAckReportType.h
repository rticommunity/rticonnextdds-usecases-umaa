

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TamperDetectionCommandAckReportType_498887748_h
#define TamperDetectionCommandAckReportType_498887748_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReport_TOPIC= "UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReport";

extern "C" {

    extern const char *UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeTYPENAME;

}

struct UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeTypeSupport;
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeDataWriter;
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeDataReader;
#endif
class UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType 
{
  public:
    typedef struct UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportTypeSeq, UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_initialize(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_initialize_ex(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_initialize_w_params(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_finalize_w_return(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_finalize(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_finalize_ex(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_finalize_w_params(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_finalize_optional_members(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType_copy(
    UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* dst,
    const UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType* src);

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
        struct type_code< UMAA_SO_TamperDetectionControl_TamperDetectionCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TamperDetectionCommandAckReportType */

