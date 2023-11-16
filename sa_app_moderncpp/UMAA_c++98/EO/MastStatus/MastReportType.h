

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MastReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MastReportType_285286338_h
#define MastReportType_285286338_h

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

static const DDS_Char * const UMAA_EO_MastStatus_MastReport_TOPIC= "UMAA::EO::MastStatus::MastReport";

extern "C" {

    extern const char *UMAA_EO_MastStatus_MastReportTypeTYPENAME;

}

struct UMAA_EO_MastStatus_MastReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_MastStatus_MastReportTypeTypeSupport;
class UMAA_EO_MastStatus_MastReportTypeDataWriter;
class UMAA_EO_MastStatus_MastReportTypeDataReader;
#endif
class UMAA_EO_MastStatus_MastReportType 
{
  public:
    typedef struct UMAA_EO_MastStatus_MastReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_MastStatus_MastReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_MastStatus_MastReportTypeDataWriter DataWriter;
    typedef UMAA_EO_MastStatus_MastReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumType   state ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_MastStatus_MastReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_MastStatus_MastReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_MastStatus_MastReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_MastStatus_MastReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_MastStatus_MastReportTypeSeq, UMAA_EO_MastStatus_MastReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_MastStatus_MastReportType_initialize(
    UMAA_EO_MastStatus_MastReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_MastStatus_MastReportType_initialize_ex(
    UMAA_EO_MastStatus_MastReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_MastStatus_MastReportType_initialize_w_params(
    UMAA_EO_MastStatus_MastReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_MastStatus_MastReportType_finalize_w_return(
    UMAA_EO_MastStatus_MastReportType* self);

NDDSUSERDllExport
void UMAA_EO_MastStatus_MastReportType_finalize(
    UMAA_EO_MastStatus_MastReportType* self);

NDDSUSERDllExport
void UMAA_EO_MastStatus_MastReportType_finalize_ex(
    UMAA_EO_MastStatus_MastReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_MastStatus_MastReportType_finalize_w_params(
    UMAA_EO_MastStatus_MastReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_MastStatus_MastReportType_finalize_optional_members(
    UMAA_EO_MastStatus_MastReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_MastStatus_MastReportType_copy(
    UMAA_EO_MastStatus_MastReportType* dst,
    const UMAA_EO_MastStatus_MastReportType* src);

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
        struct type_code< UMAA_EO_MastStatus_MastReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MastReportType */

