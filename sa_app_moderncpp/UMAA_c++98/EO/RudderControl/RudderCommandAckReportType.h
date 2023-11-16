

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RudderCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RudderCommandAckReportType_1324407792_h
#define RudderCommandAckReportType_1324407792_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_EO_RudderControl_RudderCommandAckReport_TOPIC= "UMAA::EO::RudderControl::RudderCommandAckReport";

extern "C" {

    extern const char *UMAA_EO_RudderControl_RudderCommandAckReportTypeTYPENAME;

}

struct UMAA_EO_RudderControl_RudderCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_RudderControl_RudderCommandAckReportTypeTypeSupport;
class UMAA_EO_RudderControl_RudderCommandAckReportTypeDataWriter;
class UMAA_EO_RudderControl_RudderCommandAckReportTypeDataReader;
#endif
class UMAA_EO_RudderControl_RudderCommandAckReportType 
{
  public:
    typedef struct UMAA_EO_RudderControl_RudderCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_RudderControl_RudderCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_RudderControl_RudderCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_EO_RudderControl_RudderCommandAckReportTypeDataReader DataReader;
    #endif

    DDS_Double   angle ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_RudderControl_RudderCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_RudderControl_RudderCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_RudderControl_RudderCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_RudderControl_RudderCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_RudderControl_RudderCommandAckReportTypeSeq, UMAA_EO_RudderControl_RudderCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderControl_RudderCommandAckReportType_initialize(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderControl_RudderCommandAckReportType_initialize_ex(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_RudderControl_RudderCommandAckReportType_initialize_w_params(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_RudderControl_RudderCommandAckReportType_finalize_w_return(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_RudderControl_RudderCommandAckReportType_finalize(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_EO_RudderControl_RudderCommandAckReportType_finalize_ex(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_RudderControl_RudderCommandAckReportType_finalize_w_params(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_RudderControl_RudderCommandAckReportType_finalize_optional_members(
    UMAA_EO_RudderControl_RudderCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_RudderControl_RudderCommandAckReportType_copy(
    UMAA_EO_RudderControl_RudderCommandAckReportType* dst,
    const UMAA_EO_RudderControl_RudderCommandAckReportType* src);

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
        struct type_code< UMAA_EO_RudderControl_RudderCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* RudderCommandAckReportType */

