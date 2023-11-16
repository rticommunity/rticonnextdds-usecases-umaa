

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemControlReportType_226879613_h
#define ControlSystemControlReportType_226879613_h

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

static const DDS_Char * const UMAA_MM_ControlTransfer_ControlSystemControlReport_TOPIC= "UMAA::MM::ControlTransfer::ControlSystemControlReport";

extern "C" {

    extern const char *UMAA_MM_ControlTransfer_ControlSystemControlReportTypeTYPENAME;

}

struct UMAA_MM_ControlTransfer_ControlSystemControlReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ControlTransfer_ControlSystemControlReportTypeTypeSupport;
class UMAA_MM_ControlTransfer_ControlSystemControlReportTypeDataWriter;
class UMAA_MM_ControlTransfer_ControlSystemControlReportTypeDataReader;
#endif
class UMAA_MM_ControlTransfer_ControlSystemControlReportType 
{
  public:
    typedef struct UMAA_MM_ControlTransfer_ControlSystemControlReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ControlTransfer_ControlSystemControlReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ControlTransfer_ControlSystemControlReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ControlTransfer_ControlSystemControlReportTypeDataReader DataReader;
    #endif

    DDS_Long   authorityLevel ;
    UMAA_Common_Measurement_NumericGUID   controlSystemID ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ControlTransfer_ControlSystemControlReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ControlTransfer_ControlSystemControlReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ControlSystemControlReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ControlTransfer_ControlSystemControlReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ControlTransfer_ControlSystemControlReportTypeSeq, UMAA_MM_ControlTransfer_ControlSystemControlReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemControlReportType_initialize(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemControlReportType_initialize_ex(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemControlReportType_initialize_w_params(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemControlReportType_finalize_w_return(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemControlReportType_finalize(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemControlReportType_finalize_ex(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemControlReportType_finalize_w_params(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ControlTransfer_ControlSystemControlReportType_finalize_optional_members(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ControlTransfer_ControlSystemControlReportType_copy(
    UMAA_MM_ControlTransfer_ControlSystemControlReportType* dst,
    const UMAA_MM_ControlTransfer_ControlSystemControlReportType* src);

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
        struct type_code< UMAA_MM_ControlTransfer_ControlSystemControlReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ControlSystemControlReportType */

