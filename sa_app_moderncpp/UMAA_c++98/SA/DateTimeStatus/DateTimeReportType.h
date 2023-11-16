

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTimeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTimeReportType_502473012_h
#define DateTimeReportType_502473012_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SA_DateTimeStatus_DateTimeReport_TOPIC= "UMAA::SA::DateTimeStatus::DateTimeReport";

extern "C" {

    extern const char *UMAA_SA_DateTimeStatus_DateTimeReportTypeTYPENAME;

}

struct UMAA_SA_DateTimeStatus_DateTimeReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_DateTimeStatus_DateTimeReportTypeTypeSupport;
class UMAA_SA_DateTimeStatus_DateTimeReportTypeDataWriter;
class UMAA_SA_DateTimeStatus_DateTimeReportTypeDataReader;
#endif
class UMAA_SA_DateTimeStatus_DateTimeReportType 
{
  public:
    typedef struct UMAA_SA_DateTimeStatus_DateTimeReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_DateTimeStatus_DateTimeReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_DateTimeStatus_DateTimeReportTypeDataWriter DataWriter;
    typedef UMAA_SA_DateTimeStatus_DateTimeReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_DateTime   time ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_DateTimeStatus_DateTimeReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_DateTimeStatus_DateTimeReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_DateTimeStatus_DateTimeReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_DateTimeStatus_DateTimeReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_DateTimeStatus_DateTimeReportTypeSeq, UMAA_SA_DateTimeStatus_DateTimeReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_DateTimeStatus_DateTimeReportType_initialize(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_DateTimeStatus_DateTimeReportType_initialize_ex(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_DateTimeStatus_DateTimeReportType_initialize_w_params(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_DateTimeStatus_DateTimeReportType_finalize_w_return(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self);

NDDSUSERDllExport
void UMAA_SA_DateTimeStatus_DateTimeReportType_finalize(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self);

NDDSUSERDllExport
void UMAA_SA_DateTimeStatus_DateTimeReportType_finalize_ex(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_DateTimeStatus_DateTimeReportType_finalize_w_params(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_DateTimeStatus_DateTimeReportType_finalize_optional_members(
    UMAA_SA_DateTimeStatus_DateTimeReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_DateTimeStatus_DateTimeReportType_copy(
    UMAA_SA_DateTimeStatus_DateTimeReportType* dst,
    const UMAA_SA_DateTimeStatus_DateTimeReportType* src);

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
        struct type_code< UMAA_SA_DateTimeStatus_DateTimeReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* DateTimeReportType */

