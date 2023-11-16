

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WindStatusReportType_955608806_h
#define WindStatusReportType_955608806_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SA_WindStatus_WindStatusReport_TOPIC= "UMAA::SA::WindStatus::WindStatusReport";

extern "C" {

    extern const char *UMAA_SA_WindStatus_WindStatusReportTypeTYPENAME;

}

struct UMAA_SA_WindStatus_WindStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SA_WindStatus_WindStatusReportTypeTypeSupport;
class UMAA_SA_WindStatus_WindStatusReportTypeDataWriter;
class UMAA_SA_WindStatus_WindStatusReportTypeDataReader;
#endif
class UMAA_SA_WindStatus_WindStatusReportType 
{
  public:
    typedef struct UMAA_SA_WindStatus_WindStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SA_WindStatus_WindStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_SA_WindStatus_WindStatusReportTypeDataWriter DataWriter;
    typedef UMAA_SA_WindStatus_WindStatusReportTypeDataReader DataReader;
    #endif

    DDS_Double   * relativeAverageDirection ;
    DDS_Double   * relativeAverageSpeed ;
    DDS_Double   * relativeInstantaneousDirection ;
    DDS_Double   * relativeInstantaneousSpeed ;
    DDS_Double   * relativeMaximumDirection ;
    DDS_Double   * relativeMaximumSpeed ;
    DDS_Double   * relativeMinimumDirection ;
    DDS_Double   * relativeMinimumSpeed ;
    DDS_Double   * straightDeckCrossSpeed ;
    DDS_Double   * straightDeckHeadSpeed ;
    DDS_Double   * trueAverageDirection ;
    DDS_Double   * trueAverageSpeed ;
    DDS_Double   * trueInstantaneousDirection ;
    DDS_Double   * trueInstantaneousSpeed ;
    DDS_Double   * trueMaximumDirection ;
    DDS_Double   * trueMaximumSpeed ;
    DDS_Double   * trueMinimumDirection ;
    DDS_Double   * trueMinimumSpeed ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SA_WindStatus_WindStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SA_WindStatus_WindStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WindStatus_WindStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SA_WindStatus_WindStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SA_WindStatus_WindStatusReportTypeSeq, UMAA_SA_WindStatus_WindStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize(
    UMAA_SA_WindStatus_WindStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize_ex(
    UMAA_SA_WindStatus_WindStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SA_WindStatus_WindStatusReportType_initialize_w_params(
    UMAA_SA_WindStatus_WindStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SA_WindStatus_WindStatusReportType_finalize_w_return(
    UMAA_SA_WindStatus_WindStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_WindStatus_WindStatusReportType_finalize(
    UMAA_SA_WindStatus_WindStatusReportType* self);

NDDSUSERDllExport
void UMAA_SA_WindStatus_WindStatusReportType_finalize_ex(
    UMAA_SA_WindStatus_WindStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SA_WindStatus_WindStatusReportType_finalize_w_params(
    UMAA_SA_WindStatus_WindStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SA_WindStatus_WindStatusReportType_finalize_optional_members(
    UMAA_SA_WindStatus_WindStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SA_WindStatus_WindStatusReportType_copy(
    UMAA_SA_WindStatus_WindStatusReportType* dst,
    const UMAA_SA_WindStatus_WindStatusReportType* src);

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
        struct type_code< UMAA_SA_WindStatus_WindStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* WindStatusReportType */

