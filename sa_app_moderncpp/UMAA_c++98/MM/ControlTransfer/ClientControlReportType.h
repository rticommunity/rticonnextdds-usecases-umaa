

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClientControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ClientControlReportType_1141070549_h
#define ClientControlReportType_1141070549_h

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

static const DDS_Char * const UMAA_MM_ControlTransfer_ClientControlReport_TOPIC= "UMAA::MM::ControlTransfer::ClientControlReport";

extern "C" {

    extern const char *UMAA_MM_ControlTransfer_ClientControlReportTypeTYPENAME;

}

struct UMAA_MM_ControlTransfer_ClientControlReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlTransfer_ClientControlReportTypeTypeSupport;
class UMAA_MM_ControlTransfer_ClientControlReportTypeDataWriter;
class UMAA_MM_ControlTransfer_ClientControlReportTypeDataReader;
#endif
class UMAA_MM_ControlTransfer_ClientControlReportType 
{
  public:
    typedef struct UMAA_MM_ControlTransfer_ClientControlReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlTransfer_ClientControlReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlTransfer_ClientControlReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlTransfer_ClientControlReportTypeDataReader DataReader;
    #endif

    DDS_Long   authorityLevel ;
    UMAA_Common_Measurement_NumericGUID   clientID ;
    UMAA_Common_Enumeration_ResourceAllocationStatusEnumType_ResourceAllocationStatusEnumType   status ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlTransfer_ClientControlReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlTransfer_ClientControlReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ClientControlReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ClientControlReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlTransfer_ClientControlReportTypeSeq, UMAA_MM_ControlTransfer_ClientControlReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ClientControlReportType_initialize(
    UMAA_MM_ControlTransfer_ClientControlReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ClientControlReportType_initialize_ex(
    UMAA_MM_ControlTransfer_ClientControlReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ClientControlReportType_initialize_w_params(
    UMAA_MM_ControlTransfer_ClientControlReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ClientControlReportType_finalize_w_return(
    UMAA_MM_ControlTransfer_ClientControlReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ClientControlReportType_finalize(
    UMAA_MM_ControlTransfer_ClientControlReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ClientControlReportType_finalize_ex(
    UMAA_MM_ControlTransfer_ClientControlReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ClientControlReportType_finalize_w_params(
    UMAA_MM_ControlTransfer_ClientControlReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ClientControlReportType_finalize_optional_members(
    UMAA_MM_ControlTransfer_ClientControlReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ClientControlReportType_copy(
    UMAA_MM_ControlTransfer_ClientControlReportType* dst,
    const UMAA_MM_ControlTransfer_ClientControlReportType* src);

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
        struct type_code< UMAA_MM_ControlTransfer_ClientControlReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ClientControlReportType */

