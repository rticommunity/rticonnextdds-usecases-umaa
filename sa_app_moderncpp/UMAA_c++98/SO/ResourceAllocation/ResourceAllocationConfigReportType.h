

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationConfigReportType_497199367_h
#define ResourceAllocationConfigReportType_497199367_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationDefinitionType.h"

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationConfigReport_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReport";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType 
{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;
    UMAA_Common_Measurement_NumericGUID   resourcesSetID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeSeq, UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

static const DDS_Char * const UMAA_SO_ResourceAllocation_ResourceAllocationConfigReport_ResourcesSet_TOPIC= "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReport_ResourcesSet";

extern "C" {

    extern const char *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetTYPENAME;

}

struct UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetTypeSupport;
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetDataWriter;
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetDataReader;
#endif
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet 
: public UMAA_SO_ResourceAllocation_ResourceAllocationDefinitionType{
  public:
    typedef struct UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetTypeSupport TypeSupport;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetDataWriter DataWriter;
    typedef UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   resourcesSetID ;
    UMAA_Common_Measurement_DateTime   resourcesTimestamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSetSeq, UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_initialize(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_initialize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_initialize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_finalize_w_return(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_finalize(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_finalize_ex(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_finalize_w_params(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_finalize_optional_members(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet_copy(
    UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* dst,
    const UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet* src);

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
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType_ResourcesSet> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ResourceAllocationConfigReportType */

