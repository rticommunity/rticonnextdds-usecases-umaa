

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CTDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CTDReportType_828906307_h
#define CTDReportType_828906307_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SA_CTDStatus_CTDReport_TOPIC= "UMAA::SA::CTDStatus::CTDReport";

extern "C" {

    extern const char *UMAA_SA_CTDStatus_CTDReportTypeTYPENAME;

}

struct UMAA_SA_CTDStatus_CTDReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_CTDStatus_CTDReportTypeTypeSupport;
class UMAA_SA_CTDStatus_CTDReportTypeDataWriter;
class UMAA_SA_CTDStatus_CTDReportTypeDataReader;
#endif
class UMAA_SA_CTDStatus_CTDReportType 
{
  public:
    typedef struct UMAA_SA_CTDStatus_CTDReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_CTDStatus_CTDReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_CTDStatus_CTDReportTypeDataWriter DataWriter;
    typedef UMAA_SA_CTDStatus_CTDReportTypeDataReader DataReader;
    #endif

    DDS_Double   conductivity ;
    DDS_Double   * density ;
    DDS_Double   depth ;
    DDS_Double   * salinity ;
    DDS_Double   * soundVelocity ;
    DDS_Double   temperature ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_CTDStatus_CTDReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_CTDStatus_CTDReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_CTDStatus_CTDReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_CTDStatus_CTDReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_CTDStatus_CTDReportTypeSeq, UMAA_SA_CTDStatus_CTDReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_CTDStatus_CTDReportType_initialize(
    UMAA_SA_CTDStatus_CTDReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_CTDStatus_CTDReportType_initialize_ex(
    UMAA_SA_CTDStatus_CTDReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_CTDStatus_CTDReportType_initialize_w_params(
    UMAA_SA_CTDStatus_CTDReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_CTDStatus_CTDReportType_finalize_w_return(
    UMAA_SA_CTDStatus_CTDReportType* self);

NDDSUSERDllExport
void UMAA_SA_CTDStatus_CTDReportType_finalize(
    UMAA_SA_CTDStatus_CTDReportType* self);

NDDSUSERDllExport
void UMAA_SA_CTDStatus_CTDReportType_finalize_ex(
    UMAA_SA_CTDStatus_CTDReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_CTDStatus_CTDReportType_finalize_w_params(
    UMAA_SA_CTDStatus_CTDReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_CTDStatus_CTDReportType_finalize_optional_members(
    UMAA_SA_CTDStatus_CTDReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_CTDStatus_CTDReportType_copy(
    UMAA_SA_CTDStatus_CTDReportType* dst,
    const UMAA_SA_CTDStatus_CTDReportType* src);

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
        struct type_code< UMAA_SA_CTDStatus_CTDReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CTDReportType */

