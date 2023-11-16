

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltOperationalParamsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltOperationalParamsReportType_256581037_h
#define PanTiltOperationalParamsReportType_256581037_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/SEM/ExtendedPayloadStatus/OperationalParamsType.h"

static const DDS_Char * const UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReport_TOPIC= "UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReport";

extern "C" {

    extern const char *UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeTYPENAME;

}

struct UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeTypeSupport;
class UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeDataWriter;
class UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeDataReader;
#endif
class UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType 
{
  public:
    typedef struct UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeDataWriter DataWriter;
    typedef UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeDataReader DataReader;
    #endif

    UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType   panParams ;
    UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType   tiltParams ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportTypeSeq, UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_initialize(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_initialize_ex(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_initialize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_finalize_w_return(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_finalize(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_finalize_ex(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_finalize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_finalize_optional_members(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType_copy(
    UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* dst,
    const UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType* src);

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
        struct type_code< UMAA_SEM_ExtendedPayloadStatus_PanTiltOperationalParamsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltOperationalParamsReportType */

