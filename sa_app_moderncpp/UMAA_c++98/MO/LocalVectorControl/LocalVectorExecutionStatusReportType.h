

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalVectorExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalVectorExecutionStatusReportType_1487928098_h
#define LocalVectorExecutionStatusReportType_1487928098_h

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

static const DDS_Char * const UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReport_TOPIC= "UMAA::MO::LocalVectorControl::LocalVectorExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeTypeSupport;
class UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeDataWriter;
class UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   attitudeAchieved ;
    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   speedAchieved ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportTypeSeq, UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_initialize(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_initialize_ex(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_initialize_w_params(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_finalize_w_return(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_finalize(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_finalize_ex(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_finalize_w_params(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType_copy(
    UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* dst,
    const UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_LocalVectorControl_LocalVectorExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalVectorExecutionStatusReportType */

