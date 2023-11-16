

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemTransferReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemTransferReportType_1351700109_h
#define ControlSystemTransferReportType_1351700109_h

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

static const DDS_Char * const UMAA_MM_ControlTransfer_ControlSystemTransferReport_TOPIC= "UMAA::MM::ControlTransfer::ControlSystemTransferReport";

extern "C" {

    extern const char *UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeTYPENAME;

}

struct UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeTypeSupport;
class UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeDataWriter;
class UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeDataReader;
#endif
class UMAA_MM_ControlTransfer_ControlSystemTransferReportType 
{
  public:
    typedef struct UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeDataReader DataReader;
    #endif

    DDS_Long   authorityLevel ;
    UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumType   result ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlTransfer_ControlSystemTransferReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlTransfer_ControlSystemTransferReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ControlSystemTransferReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ControlSystemTransferReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlTransfer_ControlSystemTransferReportTypeSeq, UMAA_MM_ControlTransfer_ControlSystemTransferReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemTransferReportType_initialize(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemTransferReportType_initialize_ex(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemTransferReportType_initialize_w_params(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemTransferReportType_finalize_w_return(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemTransferReportType_finalize(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemTransferReportType_finalize_ex(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemTransferReportType_finalize_w_params(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemTransferReportType_finalize_optional_members(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemTransferReportType_copy(
    UMAA_MM_ControlTransfer_ControlSystemTransferReportType* dst,
    const UMAA_MM_ControlTransfer_ControlSystemTransferReportType* src);

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
        struct type_code< UMAA_MM_ControlTransfer_ControlSystemTransferReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlSystemTransferReportType */

