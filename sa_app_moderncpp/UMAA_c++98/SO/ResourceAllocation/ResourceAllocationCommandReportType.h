

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandReportType_196787941_h
#define ResourceAllocationCommandReportType_196787941_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationCommandReport_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationCommandReport";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeDataReader DataReader;
    #endif

    DDS_Double   * duration ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   resourceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationCommandReportType */

