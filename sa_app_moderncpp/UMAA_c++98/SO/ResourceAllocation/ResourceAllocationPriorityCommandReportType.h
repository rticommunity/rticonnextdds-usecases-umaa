

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityCommandReportType_1012679203_h
#define ResourceAllocationPriorityCommandReportType_1012679203_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReport_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommandReport";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUIDSeq  priorities ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationPriorityCommandReportType */

