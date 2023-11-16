

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationReportType_1351313255_h
#define ResourceAllocationReportType_1351313255_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlInfo.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationReport_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationReport";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationReportType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   controlInfoSetID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationReportTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationReport_ControlinfoSet_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationReport_ControlinfoSet";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet 
: public UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   controlInfoSetID ;
    UMAA_Common_Measurement_DateTime   controlInfoTimestamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSetSeq, UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationReportType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationReportType_ControlinfoSet> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationReportType */

