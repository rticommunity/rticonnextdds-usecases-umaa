

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityReportType_1546273215_h
#define ResourceAllocationPriorityReportType_1546273215_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationPriorityInfo.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReport_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReport";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   prioritiesSetID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReport_PrioritiesSet_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReport_PrioritiesSet";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet 
: public UMAA_SO_ResourceAllocation_ResourceAllocationPriorityInfo{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   prioritiesSetID ;
    UMAA_Common_Measurement_DateTime   prioritiesTimestamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSetSeq, UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType_PrioritiesSet> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationPriorityReportType */

